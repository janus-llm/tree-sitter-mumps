module.exports = grammar({
  name: "mumps",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $._line_comment, // scanner.c checks for ; in column 0
    $._label, // scanner.c checks for non-; non-ws in column 0
    $._indent,
    $._dedent,
    $._indentation_marker,
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
      choice(
        $.command,
        $.comment,
        $.assignment,
      ),
    ),

    // Multi-part statements
    _compound_statement: $ => choice(
      // $.for_statement,
      $.while_statement,
      $.if_statement,
      $.do_statement,
    ),

    block: $ => seq(
      $._indent,
      repeat1(
        choice(
          seq(
            optional(
              $._indentation_marker,
            ),
            $._statement,
          ),
        ),
      ),
      $._dedent,
    ),

    command: $ => prec.left(
      $._typical_command,
    ),

    comment: $ => choice(
      $._line_comment,
      $._eol_comment,
    ),

    assignment: $ => prec(2, 
      seq(
        $._set,
        optional(
          $.postconditional,
        ),
        field('left',
          choice(
            $._variable,
            $.lvalue_function_call,
          ),
        ),
        choice(
          "=",
          "=+",
        ),
        field(
          'right', $._expression,
        ),

        // Optional multiple assignment, separated by commas
        repeat(
          seq(
            ",",
            field('left',
              choice(
                $._variable,
                $.lvalue_function_call,
              ),
            ),
            choice(
              "=",
              "=+",
            ),
            field(
              'right', $._expression,
            ),
          ),
        ),
      ),
    ),

    _typical_command:$ => seq(
      $.keyword,
      optional(
        $.postconditional,
      ),
      optional(
        $.arguments,
      ),
    ),

    keyword: $ => choice(
      // TODO: Not comprehensive!
      // Commented out keywords are used elsewhere in the grammar
      /BREAK|B|break|b|CLOSE|C|close|c|GOTO|G|goto|g|HALT|H|halt|h|JOB|J|job|j|KILL|K|kill|k|LOCK|L|lock|l|MERGE|M|merge|m|NEW|N|new|n|OPEN|O|open|o|QUIT|Q|quit|q|READ|R|read|r|TCOMMIT|T|tcommit|t|USE|U|use|u|VIEW|V|view|v|WRITE|W|write|w|XECUTE|X|xecute|x|ZALLOCATE|ZA|zallocate|za|ZDEALLOCATE|ZD|zdeallocate|zd|ZEDIT|ZE|zedit|ze|ZGOTO|ZG|zgoto|zg|ZHALT|ZH|zhalt|zh|ZHELP|ZH|zhelp|zh|ZININTERRUPT|ZI|zininterrupt|zi|ZJOB|ZJ|zjob|zj|ZKILL|ZK|zkill|zk|ZLINK|ZL|zlink|zl|ZMESSAGE|ZM|zmessage|zm|ZPRINT|ZP|zprint|zp|ZQUIT|ZQ|zquit|zq|ZSYSTEM|ZS|zsystem|zs|ZTCOMMIT|ZT|ztcommit|zt|ZTRAP|ZT|ztrap|zt|ZWRITE|ZW|zwrite|zw/
    ),

    // for_statement: $ => prec(1, 
    //   /for|f|FOR|F/,
    //   choice(
    //     // Infinite loop, no control var e.g. `F <body> Q`
    //     // Infinite loop, with control var e.g. `F J <body> Q`
    //     // Finite loop, with control var but no initializer e.g. `S I = 5 ... F I::2:20 <body>`
    //     // Finite loop over a 'list' of literals e.g. `F VAR="STR1","STR2"` 
    //     // Finite loop with full loop control: `F I=1 1:1:10 <body>`
    //     field('control_variable', $._identifier),
    //     field('initializer', $._loop_initializer),
    //     field('step value', $._expression),
    //     field('stop value', $._expression),

    for_statement: $ => seq(
      /for|f|FOR|F/,
      optional($._loop_control),
      choice(
        // Indented 
        $.block,
        // Non-indented
        $._statement,
      ),
    ),

    _loop_control: $ => seq(
      field('initializer', $._loop_initializer),
      field('step value', $._expression),
      field('stop value', $._expression),
    ),
    _loop_initializer: $ => seq(
      field('control_variable', $._identifier),
      "=",
      $._identifier,
    ),

    // Unlike python, I don't think we have 'conditional_expression's - my impression is that this is 
    // it's own command / line, not something that goes in to arguments, say
    if_statement: $ => prec.left(3,
      seq(
        /if|i|IF|I/,
        field('condition', $._expression),
        field('consequence', 
          choice(
            $.block,
            $._statement,
          ),
        ),
        optional(
          seq(
            /else|e|ELSE|E/,
            field('alternative',
              choice(
                $.block,
                $._statement,
              ),
            ),
          ),
        ),
      ),
    ),

    while_statement: $ => seq(
      /while|w|WHILE|W/,
      field('condition', $._expression),
      choice(
        // Indented 
        $.block,
        // Non-indented
        $._statement,
      ),
    ),

    do_statement: $ => seq(
      /do|d|DO|D/,
      choice(
        // Indented 
        $.block,
        // Non-indented
        seq(
          $._routine_call,
          repeat(
            seq(
              ",",
              $._routine_call,
            ),
          ),
        ),
        $.command,
      ),
    ),

    _routine_call: $ => seq(
      optional("^"),
      field('label', $._routine_label),
      optional(
        seq(
          "^",
          field('routine', $._routine_label),
        ),
      ),
    ),

    _routine_label: $ => /[A-Za-z0-9%]+/,

    arguments: $ => prec.left(
      seq(
        field('argument', $._expression),
        repeat(
          seq(
            ",",
            field('argument', $._expression),
          ),
        ),
      ),
    ),

    label: $ => prec(3,
      $._label, // This just allows for cases like function declarations where we want to parse a label and not name it
    ),

    _function_arguments: $ => seq(
      "(",
      $.arguments,
      ")",
    ),
        
    parameter: $ => $._expression,

    _eol_comment: $ => token(seq(';', /.*/)),

    postconditional: $ => seq(
      ":",
      field('condition', $._expression),
    ),

    _expression: $ => choice(
      $._literal,
      $.function_call,
      $.unary_expression,
      $.binary_expression,
      $._identifier,
    ),

    _identifier: $ => choice(
      prec(2, 
        $._array,
      ),
      $._variable,
    ),

    _array: $ => prec(2,
      choice(
        $.local_array,
        $.global_array,
      ),
    ),

    // Boy this feels pretty hacky
    // ),
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
      field('subscript', $._expression), // Probably this will just be an integer index, but could be more complicated
      repeat(  
        seq(
          ",",
          field('subscript', $._expression),
        ),
      ),
      ")",
    ),

    _variable: $ => choice(
      $.local_variable,
      $.global_variable,
      $._array,
      $.special_variable,
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
        seq('+', $._expression),  // TODO: What is this for? See pg 24.
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

    function_call: $ => seq(
      // This handles cases where the function call should return a value - calls to functions purely for their
      // side-effects (without a $ prefix) are handled in the DO command syntax)
      choice(
        $._builtin_identifier,
        $._external_identifier,
        $._user_defined_identifier,
      ),
      $._function_arguments,
    ),

    lvalue_function_call: $ => seq(
      /\$PIECE|\$P|\$EXTRACT|\$E/,
      $._function_arguments,
    ),

    special_variable: $ => $._builtin_identifier,

    // AKA "intrinsic" functions
    _builtin_identifier: $ => /\$[A-Za-z0-9]+/,

    // Functions defined in other libraries
    _external_identifier: $ => /\$&[A-Za-z0-9]+/,
    
    // Custom functions defined in this file
    _user_defined_identifier: $ => seq(
      /\$\$[A-Za-z0-9]+/,
      optional(
        seq(
          "^",
          field('label', $._routine_label),
        ),
      ),
    ),

    _set: $ => /set|s|SET|S/,

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
      $.format_specifier,
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

    format_specifier: $ => /[0-9!?#/;]+/,

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
