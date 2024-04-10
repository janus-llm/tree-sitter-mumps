module.exports = grammar({
  name: "mumps",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $._line_comment, // scanner.c checks for ; in column 0
    $._label, // scanner.c checks for non-; non-ws in column 0
  ],

  rules: {
    program: $ => repeat1($._statement),

    _statement: $ => seq(
      optional(
        $.label,
      ),
      choice(
        $._simple_statement,
        $._compound_statement,
      ),
    ),

    // Individual statements
    _simple_statement: $ => seq(
      // TODO: A simple statement can have a conditional!
      // optional(
      //   $.conditional
      // ),
      choice(
        $.command,
        $.comment,
        $.assignment,
        // $.call,  // TODO: my understanding is that function calls are only used in expressions, never as an entire statement
      ),
    ),

    // Multi-part statements
    _compound_statement: $ => choice(
      $.for_statement,
      $.if_statement,
      $.function_definition,
    ),

    command: $ => prec.left(
      choice(
        $._write_read_command,
        $._typical_command,
      ),
    ),

    comment: $ => choice(
      $._line_comment,
      $._eol_comment,
    ),

    assignment: $ => prec(2, 
      seq(
        $._set,
        $._variable,
        choice(
          "=",
          "=+",
        ),
        $._expression,
      ),
    ),

    _typical_command:$ => seq(
      $.keyword,
      prec(2,
        optional(
          $.arguments,
        ),
      ),
    ),

    keyword: $ => choice(
      // TODO: Not comprehensive!
      "b", "break",
      "c", "close",
      // "d", "do",
      // "e", "else",  // special case (if_statement)
      // "f", "for",  // special case (for_statement)
      "g", "goto",
      "h", "halt",
      "h", "hang",
      // "i", "if",  // special case (if_statement)
      "j", "job",
      "l", "lock",
      "k", "kill",
      "m", "merge",
      "n", "new",
      "o", "open",
      "q", "quit",
      // "r", "read",  // special case (_write_read_command)
      // "s", "set",  // special case (assignment) 
      "tc", "tcommit",
      "tre", "trestart", 
      "tro", "trollback",
      "ts", "tstart",
      "u", "use",
      "v", "view",
      // "w", "write", // special case (_write_read_command)
      "x", "xecute",
      "z",
    ),

    for_statement: $ => prec(2, seq(
        "for",
        $._identifier,
        "=",
        $._loop_range,
        "do",
        choice(
          $._statement,
        ),
      ),
    ),

    if_statement: $ => prec.left(3,
      seq(
        /if|i/,
        $.conditional,
        $._statement,
      ),
    ),

    function_definition: $ => prec(2,
      seq(
        $._label,
        $.parameters,
        // $.body
      ),
    ),

    arguments: $ => prec.left(
      seq(
        $._expression,
        repeat(
          seq(
            ",",
            $._expression,
          ),
        ),
      ),
    ),

    label: $ => prec(3,
      $._label, // This just allows for cases like function declarations where we want to parse a label and not name it
    ),

    parameters: $ => seq(
      // In the no params case functions still look like: <function_name()>
      "(",
      optional(
        $.parameter,
      ),
      repeat(
        seq(
          ",",
          $.parameter,
        ),
      ),
      ")",
    ),
        
    parameter: $ => $._expression,

    _eol_comment: $ => token(seq(';', /.*/)),

    postconditional: $ => seq(
      ":",
      $.conditional
    ),

    conditional: $ => prec(2,
      choice(
        $._expression,
      ),
    ), 

    _loop_range: $ => seq(  // TODO: What is this called?
      $._variable,
      repeat(   // Not using repeat1 here, since maybe you can do for i=1 do
        seq(
          ":",
          $._variable,
        ),
      ),
    ),

    _expression: $ => choice(
      prec(5, 
        $._literal,
      ),
      $._identifier,
      $.unary_expression,
      $.binary_expression,
      $.function_call,
    ),

    _identifier: $ => choice(
      $._variable,
      $._array,
    ),

    _array: $ => prec(2,
      choice(
        $.local_array,
        $.global_array,
      ),
    ),

    // Boy this feels pretty hacky
    local_array: $ => seq(
      $._variable_name,
      $.array_index,
    ),

    global_array: $ => seq(
      $.global_variable,
      $.array_index,
    ),

    array_index: $ => seq(
      "(",
      $._expression, // Probably this will just be an integer index, but could be more complicated
      repeat(  
        seq(
          ",",
          $._expression,
        ),
      ),
      ")",
    ),

    _variable: $ => choice(
      $.local_variable,
      $.global_variable,
      $._array,
    ),

    // A Mumps variable name must begin with a letter or percent sign (%) and may be followed by letters, percent signs, or numbers.
    // TODO: The underscore (_) and dollar sign ($) characters are not legal in variable names.
    // https://stackoverflow.com/questions/32967395/exclude-characters-from-group-regex-while-still-looking-for-characters
    _variable_name: $ => /[a-zA-Z%][a-zA-Z0-9%]*/,

    local_variable: $ => $._variable_name,

    // Global variable names are always preceded by a circumflex (^), local variables are not.
    // NOTE: Reverted to this duplicated version because token.immediate only takes a literal, local_variable won't go
    global_variable: $ => /[\^][a-zA-Z%][a-zA-Z0-9%]*/,

    unary_expression: $ => prec(2,
      choice(
        seq('-', $._expression),  // Negative
        // seq('!', $._expression), TODO!
        seq('\'', $._expression),  // Not
      ),
    ),

    binary_expression: $ => prec(2, 
      choice(
        // No "order of operations" besides left associativity, so both prec is 1
        // Arithmetic
        prec.left(1, seq($._expression, '*', $._expression)),  // Multiplication
        prec.left(1, seq($._expression, '+', $._expression)),  // Addition
        prec.left(1, seq($._expression, '/', $._expression)),  // Full division
        prec.left(1, seq($._expression, '\\', $._expression)),  // Integer division
        prec.left(1, seq($._expression, '-', $._expression)),  // Subtraction
        prec.left(1, seq($._expression, '#', $._expression)),  // Modulo
        prec.left(1, seq($._expression, '**', $._expression)),  // Exponentiation
        // Relational
        prec.left(1, seq($._expression, '=', $._expression)),  // Equality
        prec.left(1, seq($._expression, '>', $._expression)),  // Greater than
        prec.left(1, seq($._expression, '<', $._expression)),  // Less than
        prec.left(1, seq($._expression, '\'>', $._expression)),  // Less than or equal 
        prec.left(1, seq($._expression, '\'<', $._expression)),  // Greater than or equal
        prec.left(1, seq($._expression, '[', $._expression)),  // Contains
        prec.left(1, seq($._expression, ']', $._expression)),  // Follows
        prec.left(1, seq($._expression, '?', $._expression)),  // Pattern
        prec.left(1, seq($._expression, ']]', $._expression)),  // Sorts after
        prec.left(1, seq($._expression, '\'=', $._expression)),  // Does not equal
        prec.left(1, seq($._expression, '\'[', $._expression)),  // Does not contain
        prec.left(1, seq($._expression, '\']', $._expression)),  // Does not follow 
        prec.left(1, seq($._expression, '\'?', $._expression)),  // Not pattern 
        prec.left(1, seq($._expression, '\']]', $._expression)),  // Not sorts after 
        prec.left(1, seq($._expression, '_', $._expression)),  // String concatenation
        // String operators
        prec.left(1, seq($._expression, '_', $._expression)),  // String concatenation
        // Logical operators
        prec.left(1, seq($._expression, '&', $._expression)),  // And
        prec.left(1, seq($._expression, '!', $._expression)),  // Or
      ),
    ),

    // binary_operator: $ => {
    //   const table = [
    //     [prec.left, '+', PREC.plus],
    //     [prec.left, '-', PREC.plus],
    //     [prec.left, '*', PREC.times],
    //     [prec.left, '@', PREC.times],
    //     [prec.left, '/', PREC.times],
    //     [prec.left, '%', PREC.times],
    //     [prec.left, '//', PREC.times],
    //     [prec.right, '**', PREC.power],
    //     [prec.left, '|', PREC.bitwise_or],
    //     [prec.left, '&', PREC.bitwise_and],
    //     [prec.left, '^', PREC.xor],
    //     [prec.left, '<<', PREC.shift],
    //     [prec.left, '>>', PREC.shift],
    //   ];

    //   // @ts-ignore
    //   return choice(...table.map(([fn, operator, precedence]) => fn(precedence, seq(
    //     field('left', $.primary_expression), // TODO!
    //     // @ts-ignore
    //     field('operator', operator),
    //     field('right', $.primary_expression),
    //   ))));
    // },

    _write_read_outro: $ => ",\!",

    // Calls to write end in ,!
    _write_read_command: $ => prec(2,
      seq(
        /write|w|read|r/,
        $.arguments,
        $._write_read_outro,
      ),
    ),

    function_call: $ => seq(
      choice(
        $._builtin_function_name,
        $._external_function_name,
        // $._user_defined_function_name,
      ),
      $.parameters,
    ),

    // AKA "intrinsic" functions
    _builtin_function_name: $ => /\$[A-Za-z0-9]+/,

    // Functions defined in other libraries
    _external_function_name: $ => /\$&[A-Za-z0-9]+/,
    
    // Functions defined in this file
    // _user_defined_function_name: $ => $._alphanum,

    _set: $ => /set|s|S/,

    _numeric: $ => /[0-9]+/,
    // _alphanum: $ => /[A-Za-z0-9]+/,

    /*
    Mumps variables are not typed. The basic data type is string although integer, floating point and
    logical (true/false) operations can be performed on string variables if their contents are appropriate.
    */
    _literal: $ => choice(
      $.string,
      $.integer,
      $.float,
      $.boolean,
    ),

    // TODO: I don't know if this is real
    boolean: $ => choice(
      "true",
      "false",
    ),

    integer: $ => token(choice(
      seq(
        repeat1(/[0-9]+_?/),
      ),
    )),

    // Taken from the python tree-sitter TODO: How much of this does mumps support?
    float: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(seq(
        choice(
          seq(digits, '.', optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent),
        ),
        optional(/[jJ]/),
      ));
    },

    // Anything in quotes is OK, I assume
    string: $ => /("[^"]*")+/,

    // Per docs: "the values in a string are, at a minimum, any ASCII character code between 32 to 127 (decimal) inclusive"
    // TODO: Currently excluding:
    // 2c: ,
    // 22: "
    // 2b: +
    // 2a: *
    // 2d: -
    // 3d: =
    // 28: (
    // 29: )
    // NOTE: Just keeping this regex around for now!
    // _literal: $ => /(("[^"]*")|([^\x00-\x20\x2c\x22\x2b\x2a\x2d\x3d\x28\x29]+))+/,

    newline: $ => /[\s]*\n/,
  }
});
