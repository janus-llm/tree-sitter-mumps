module.exports = grammar({
  name: "mumps",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $._line_comment, // scanner.c checks for ; in column 0
    $._label, // scanner.c checks for non-; non-ws in column 0
  ],

  // extras: $ => [
  //   // $.comment,
  //   /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
  //   $.newline,
  // ],

  rules: {
    program: $ => repeat1($._statement),

    _statement: $ => seq(
      optional(
        $.label,
      ),
      choice(
        $._simple_statement,
        $._compound_statement,
        $.function_declaration  // TODO: Does this belong here?
        // $._blank_line, // NOTE: Causes odd behavior related to whitespace included in other tokens!
      ),
    ),

    label: $ => prec(3,
      $._label, // For ex. function declarations, we want to parse a label but not name it, here we want to name it
    ),

    function_declaration: $ => prec(2,
      seq(
        $.label,
        $.parameters,
      ),
    ),

    parameters: $ => seq(
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
        
    parameter: $ => $._alphanum,  // TODO!

    comment: $ => choice(
      $._line_comment,
      $._eol_comment,
    ),

    _eol_comment: $ => token(seq(';', /.*/)),

    postconditional: $ => seq(
      ":",
      $.conditional
    ),

    conditional: $ => prec(2,
      choice(
        // prec(2,
        //   seq(
        //     $._expression,
        //     "=",
        //     $._expression,
        //   ),
        // ),
        $._expression,
      ),
    ), 

    // Individual statements
    _simple_statement: $ => seq(
      // TODO: A simple statement can have a conditional!
      // optional(
      //   $.conditional
      // ),
      choice(
        $.assignment,
        $.call,
        $.comment,
      ),
    ),

    // Multi-part statements
    _compound_statement: $ => choice(
      $.for_statement,
      $.if_statement,
    ),

    for_statement: $ => prec(2, seq(
        "for",
        $._identifier,
        "=",
        $._loop_range,
        "do",
        choice(
          $._statement,
        // repeat1(
        ),
      ),
    ),

    _loop_range: $ => seq(  // TODO: What is this called?
      $._variable,
      repeat(   // Not using repeat 1 here, since maybe you can do for i=1 do
        seq(
          ":",
          $._variable,
        ),
      ),
    ),

    if_statement: $ => prec(2,
      seq(
        "if",
        $.conditional,
        $._statement,
      ),
    ),

    _expression: $ => choice(
      prec(2, // This prec could be dicey, since we really just go right to left! 
        $.binary_expression,
      ),
      $.unary_expression,
      $._identifier,
      $._literal,
      $.call,
    ),

    _identifier: $ => choice(
      $._variable,
      $._array, // TODO!
      //$.function_name,
    ),

    _array: $ => prec(2,
      choice(
        $.local_array,
        // $.global_array,
      ),
    ),

    // Boy this feels pretty hacky
    local_array: $ => seq(
      $._variable_name,
      $.array_index,
    ),

    array_index: $ => seq(
      "(",
      $._expression, // Probably this will just be an integer index, but could be more complicated
      // repeat1( // >= 1 Because my impression is you have to provide an index
      //   seq(
      //     ",",
      //     $._expression,
      //   ),
      // ),
      ")",
    ),

    _variable: $ => choice(
      $.local_variable,
      $.global_variable,
      $.local_array,
      // $.global_array,
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

    _write_read_outro: $ => ",\!",

    function: $ => seq(
      "$",
      $._alphanum,
    ),

    // For calls to functions with slightly different syntax
    call: $ => choice(
      $._typical_call,
      $._write_read_call,
      $.command,
    ),

    command: $ => prec.left(
      seq(
        choice(
          // TODO: Not comprehensive!
          "b", "break", "b",
          "c", "close", "c",
          "d", "do",
          "e", "else",
          "f", "for",
          "g", "goto",
          "h", "halt",
          "h", "hang",
          "i", "if",
          "j", "job",
          "l", "lock",
          "k", "kill",
          "m", "merge",
          "n", "new",
          "o", "open",
          "q", "quit",
          "r", "read",
          // "s", "set",  // Excluding, since this is "assignment"
          "tc", "tcommit",
          "tre", "trestart", 
          "tro", "trollback",
          "ts", "tstart",
          "u", "use",
          "v", "view",
          "w", "write",
          "x", "xecute",
          "z",
        ),
        optional(
          $.arguments,
        ),
      ),
    ),

    // Calls to write end in ,!
    _write_read_call: $ => prec(2,
      seq(
        $.command,
        $.arguments,
        $._write_read_outro,
      ),
    ),

    _typical_call: $ => seq(
      $.function,
      "(",
      $.arguments,
      ")",
    ),

    _set: $ => /set|s/,

    assignment: $ => prec(2, 
      seq(
        $._set,
        $._variable,
        "=",
        $._expression,
      ),
    ),

    _numeric: $ => /[0-9]+/,
    _alphanum: $ => /[A-Za-z0-9]+/,

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

    // Taken from the python tree-sitter
    integer: _ => token(choice(
      // seq(
      //   choice('0x', '0X'),
      //   repeat1(/_?[A-Fa-f0-9]+/),
      //   optional(/[Ll]/),
      // ),
      // seq(
      //   choice('0o', '0O'),
      //   repeat1(/_?[0-7]+/),
      //   optional(/[Ll]/),
      // ),
      // seq(
      //   choice('0b', '0B'),
      //   repeat1(/_?[0-1]+/),
      //   optional(/[Ll]/),
      // ),
      seq(
        repeat1(/[0-9]+_?/),
        // choice(
        //   optional(/[Ll]/), // long numbers
        //   optional(/[jJ]/), // complex numbers
        // ),
      ),
    )),

    // Taken from the python tree-sitter
    float: _ => {
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
