module.exports = grammar({
  name: "mumps",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $._line_comment, // scanner.c checks for ; in column 0
    $.label, // scanner.c checks for non-; non-ws in column 0
    $._indent,
    $._dedent,
  ],

  extras: $ => [
    /[ \.]/,
  ],

  rules: {
    program: $ => repeat1($.routine_definition),

    routine_definition: $ => seq(
      seq(
        $.label,
        optional($._function_arguments),
        choice(
          repeat($._statement), // Single line routine case
          $.block, // Code block routine case
        ),
      ),
    ),

    _statement: $ => prec.left(5, 
      seq(
        seq(
          choice(
            $._simple_statement,
            $._compound_statement,
          ),
        ),
        optional(
          $._newline,
        ),
      ),
    ),

    // Individual statements
    _simple_statement: $ => seq(
      choice(
        prec(3,
          $.assignment,
        ),
        prec(3,
          $.command,
        ),
        $.comment,
      ),
    ),

    // Multi-part statements
    _compound_statement: $ => choice(
      // $.function_definition,
      $.for_statement,
      $.while_statement,
      $.if_statement,
      $.do_statement,
    ),

    block: $ => seq(
      $._indent,
      $._statement,
      repeat(
        choice(
          seq(
            $._statement,
          ),
          // $.block,
        ),
      ),
      $._dedent,
    ),

    command: $ => prec.left(3, 
      choice(
        prec(2,
          choice(
            $._new_command,
            $._req_arg_command,
            $._timeout_command,
            $._lock_command,
            $.goto_command,
          ),
        ),
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
        optional(
          $.postconditional,
        ),
        field('left',
          choice(
            $._identifier,
            $.lvalue_function_call,
            $._multiple_assignment_identifiers,
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
                $._identifier,
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
    
    _multiple_assignment_identifiers: $ => parenthesized(
      seq(
        field('left',
          choice(
            $._identifier,
            $.lvalue_function_call,
          ),
        ),
        repeat(
          seq(
            ",",
            field('left',
              choice(
                $._identifier,
                $.lvalue_function_call,
              ),
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
      prec(-9, 
        optional(
          $.arguments,
        ),
      ),
    ),

    goto_command: $ => seq(
      /goto|g|GOTO|G/,
      // TODO: Can you have this simple postconditional in addition to the others?
      optional($.postconditional,),
      // Optionally, jump a number of lines
      optional(
        seq(
          "+",
          $.integer,
        ),
      ),
      choice(
        // Simple jump to routine
        $.routine_call,
        // Conditional jumps
        seq(
          $._conditional_routine_call,
          repeat( // TODO: Would this ever not repeat?
            seq(
              ",",
              $._conditional_routine_call,
            ),
          ),
          optional( // The default label to jump to, if no conditions are met
            seq(
              ",",
              $.routine_call
            ),
          ),
        ),
      ),
    ),

    _conditional_routine_call: $ => seq(
      $.routine_call,
      ":",
      field('condition', $._expression),
    ),

    // NEW always takes arguments
    _new_command: $ => seq(
      /new|n|NEW|N/,
      optional(
        $.postconditional,
      ),
      $.arguments,
    ),

    // TODO: Else case if timeout fails?
    _timeout_command: $ => seq(
      $._timeout_keyword,
      optional(
        $.postconditional,
      ),
      $.arguments,
      optional($.timeout),
    ),

    _timeout_keyword: $ => /read|r|READ|R/,

    // TODO: Else case if timeout fails?
    // Making lock separate after all, since it has a special + - token too
    _lock_command: $ => seq(
      $._lock_keyword,
      optional(
        $.postconditional,
      ),
      $.arguments,
      optional($.timeout),
    ),

    _lock_keyword: $ => /lock|l|LOCK|L/,

    _lock_arguments: $ => prec.left(
      seq(
        optional(/\+-/),
        $.argument,
        repeat(
          seq(
            ",",
            optional(/\+-/),
            $.argument,
          ),
        ),
      ),
    ),

    _req_arg_command: $ => seq(
      field('keyword', $._req_arg_keyword),
      optional(
        $.postconditional,
      ),
      $.arguments,
    ),

    _req_arg_keyword: $ => /kill|k|KILL|K/,

    timeout: $ => seq(
      ":",
      $.integer,
    ),

    keyword: $ => choice(
      // TODO: Not comprehensive!
      // Commented out keywords are used elsewhere in the grammar
      /BREAK|B|break|b|CLOSE|C|close|c|HALT|H|halt|h|JOB|J|job|j|KILL|K|kill|k|MERGE|M|merge|m|OPEN|O|open|o|QUIT|Q|quit|q|TCOMMIT|T|tcommit|t|USE|U|use|u|VIEW|V|view|v|WRITE|W|write|w|XECUTE|X|xecute|x|ZALLOCATE|ZA|zallocate|za|ZDEALLOCATE|ZD|zdeallocate|zd|ZEDIT|ZE|zedit|ze|ZGOTO|ZG|zgoto|zg|ZHALT|ZH|zhalt|zh|ZHELP|ZH|zhelp|zh|ZININTERRUPT|ZI|zininterrupt|zi|ZJOB|ZJ|zjob|zj|ZKILL|ZK|zkill|zk|ZLINK|ZL|zlink|zl|ZMESSAGE|ZM|zmessage|zm|ZPRINT|ZP|zprint|zp|ZQUIT|ZQ|zquit|zq|ZSYSTEM|ZS|zsystem|zs|ZTCOMMIT|ZT|ztcommit|zt|ZTRAP|ZT|ztrap|zt|ZWRITE|ZW|zwrite|zw/,
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
      optional(
        prec(-1,
          $.loop_control
        ),
      ),
      prec(2,
        choice(
          // Indented 
          $.block,
          // Non-indented
          $._statement,
        ),
      ),
    ),

    // _loop_control: $ => /LOOP/,
    loop_control: $ => seq(
      // $._loop_initializer,
      $.loop_variable,
      choice(
        // C-style start step stop
        seq(
          $._expression,
          ":",
          $._expression,
          optional(
            seq(
              ":",
              $._expression,
            ),
          ),
        ),
        // Python-style loop over list
        seq(
          $._expression,
          repeat1(
            seq(
              ",",
              $._expression,
            ),
          ),
        ),
      ),
    ),

    // TODO: This is a bummer, but including the = here prevents us from grabbing a command as a loop variable
    loop_variable: $ => token(
      prec(3,
        /[A-Za-z0-9]+=/,
      ),
    ),

    // _loop_initializer: $ => seq(
    // ),
    //

    if_assign: $ => prec(4, 
      seq(
        /if|i|IF|I/,
        /set|s|SET|S/,
        $._expression,
      ),
    ),

    // Unlike python, I don't think we have 'conditional_expression's - my impression is that this is 
    // it's own command / line, not something that goes in to arguments, say
    if_statement: $ => prec.left(3,
      seq(
        /if|i|IF|I/,
        choice(
        // Without condition, checks previous command was successful
          $._statement,
          // If with condition
          seq(
            field('condition', $._expression),
            repeat(
              seq(
                ",",
                // "The infamous mumps comma": https://groups.google.com/g/hardhats/c/RwB8H2VEw_M
                field('condition', $._expression),
              ),
            ),
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
        prec(2,
          seq(
            // TODO: Optionally, you can have a statement before the block starts, on the line with the "DO"
            $.block,
          ),
        ),
        // Non-indented
        seq(
          $.routine_call,
          repeat(
            seq(
              ",",
              $.routine_call,
            ),
          ),
        ),
        $.command,
      ),
    ),

    // function_definition: $ => seq(
    //   $.label,
    //   $._function_arguments,
    //   optional($.comment),
    //   $.block,
    // ),

    routine_call: $ => choice(
      seq(
        optional("^"),
        field('label', $._routine_label),
        optional(
          seq(
            "^",
            field('routine', $._routine_label),
          ),
        ),
        optional($._function_arguments),
      ),
      prec(-1, 
        $.indirection,
      ),
    ),

    _routine_label: $ => /[A-Za-z0-9%]+/,

    arguments: $ => prec.left(
      seq(
        $.argument,
        repeat(
          seq(
            ",",
            $.argument,
          ),
        ),
      ),
    ),

    argument: $ => $._expression,

    // label: $ => prec(9,
    //   $._label, // This just allows for cases like function declarations where we want to parse a label and not name it
    // ),

    _function_arguments: $ => choice(
      "()",
      seq(
        "(",
        $.arguments,
        ")",
      ),
    ),

        
    parameter: $ => $._expression,

    _eol_comment: $ => token(seq(';', /.*/)),

    postconditional: $ => seq(
      ":",
      field('condition', $._expression),
    ),

    _expression: $ => prec(-2, 
      choice(
        $._literal,
        $.function_call,
        $.unary_expression,
        $.binary_expression,
        $._identifier,
        prec(-1, 
          parenthesized($._expression),
        ),
      ),
    ),

    _identifier: $ => choice(
      prec(2,
        $._array,
      ),
      $.local_variable,
      $.global_variable,
      $.special_variable,
    ),

    _array: $ => prec(2,
      choice(
        $.local_array,
        $.global_array,
      ),
    ),

    // Boy this feels pretty hacky
    // ),
    local_array: $ => prec(2,
      seq(
        $._variable_name,
        $.array_index,
      ),
    ),

    global_array: $ => prec(2,
      seq(
        choice(
          $.global_variable,
          // Global arrays can be abbreviated to "^", reffering to the array referenced earlier in the function
          "^",
        ),
        $.array_index,
      ),
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

    // A Mumps variable name must begin with a letter or percent sign (%) and may be followed by letters, percent signs, or numbers.
    // TODO: The underscore (_) and dollar sign ($) characters are not legal in variable names.
    // https://stackoverflow.com/questions/32967395/exclude-characters-from-group-regex-while-still-looking-for-characters
    _variable_name: $ => /[a-zA-Z%][a-zA-Z0-9%]*/,

    local_variable: $ => $._variable_name,

    // Global variable names are always preceded by a circumflex (^), local variables are not.
    // NOTE: Reverted to this duplicated version because token.immediate only takes a literal, local_variable won't go
    // TODO: Maybe global arrays can be shortened to "^", rather than including the name, to refer to the last used array in a routine
    global_variable: $ => /[\^][a-zA-Z%][a-zA-Z0-9%]*/,

    unary_expression: $ => prec(2,
      choice(
        seq('+', $._expression),  // TODO: What is this for? See pg 24.
        seq('-', $._expression),  // Negative
        // seq('!', $._expression), TODO!
        seq('\'', $._expression),  // Not
        seq('.', $._expression),  // Reference
        $.indirection,
      ),
    ),

    indirection: $ => seq(
      '@',
      $._expression,
    ),



    binary_expression: $ => prec(2, 
      choice(
        // Pattern matching
        prec.left(1, seq($._expression, '?', $.pattern)),  // Pattern
        prec.left(1, seq($._expression, '\'?', $.pattern)),  // Not pattern 
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
        prec.left(1, seq($._expression, ']]', $._expression)),  // Sorts after
        prec.left(1, seq($._expression, '\'=', $._expression)),  // Does not equal
        prec.left(1, seq($._expression, '\'[', $._expression)),  // Does not contain
        prec.left(1, seq($._expression, '\']', $._expression)),  // Does not follow 
        prec.left(1, seq($._expression, '\']]', $._expression)),  // Not sorts after 
        // String operators
        prec.left(1, seq($._expression, '_', $._expression)),  // String concatenation
        // Logical operators
        prec.left(1, seq($._expression, '&', $._expression)),  // And
        prec.left(1, seq($._expression, '!', $._expression)),  // Or
      ),
    ),

    pattern: $ => token(
      prec(-1,
        /TODO/,
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

    function_call: $ => prec(2,
        seq(
        // This handles cases where the function call should return a value - calls to functions purely for their
        // side-effects (without a $ prefix) are handled in the DO command syntax)
        $.function_name,
        $._function_arguments,
      ),
    ),

    lvalue_function_call: $ => seq(
      /\$PIECE|\$P|\$EXTRACT|\$E/,
      $._function_arguments,
    ),

    special_variable: $ => $._builtin_identifier,

    function_name: $ => prec(2,
      choice(
        $._builtin_identifier,
        $._external_identifier,
        $._user_defined_identifier,
      ),
    ),

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
      $.control_code,
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

    format_specifier: $ => token(prec(-1, /[0-9!?#/;]+/)),

    control_code: $ => token(prec(-1, /\*[0-9]+/)),

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

    _newline: $ => /\n/,
  }
});

function parenthesized(rule) {
  return seq('(', rule, ')');
}
