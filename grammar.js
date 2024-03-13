module.exports = grammar({
  name: "mumps",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  // externals: $ => [
  //   $.comment, // scanner.c checks for a ; in column 0
  // ],

  // extras: $ => [
  //   // $.comment,
  //   /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
  //   $.newline,
  // ],

  rules: {
    program: $ => repeat1($._statement),

    _statement: $ => choice(
      $._simple_statement,
      $._compound_statement,
      // $._blank_line, // NOTE: Causes odd behavior related to whitespace included in other tokens!
    ),

    comment: _ => token(seq(';', /.*/)),

    postconditional: $ => seq(
      ":",
      $.conditional
    ),

    conditional: $ => choice(
      seq(
        $._expression,
        "=",
        $._expression,
      ),
      $._expression,
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

    for_statement: $ => seq(
      "for",
    ),

    if_statement: $ => seq(
      "if",
      $.conditional,
      $._statement,
    ),

    _expression: $ => choice(
      prec(2, // This prec could be dicey, since we really just go right to left! 
        $.binary_expression,
      ),
      $.unary_expression,
      $._identifier,
      $.literal,
    ),

    _identifier: $ => choice(
      $._variable,
      //$._array,
      //$.function_name,
    ),

    _variable: $ => choice(
      $.local_array,
      $.global_array,
      $.local_variable,
      $.global_variable,
    ),

    _variable: $ => choice(
      $.local_variable,
      $.global_variable,
    ),

    // A Mumps variable name must begin with a letter or percent sign (%) and may be followed by letters, percent signs, or numbers.
    // TODO: The underscore (_) and dollar sign ($) characters are not legal in variable names.
    // https://stackoverflow.com/questions/32967395/exclude-characters-from-group-regex-while-still-looking-for-characters
    local_variable: $ => /[a-zA-Z%][a-zA-Z0-9%]*/,

    // Global variable names are always preceded by a circumflex (^), local variables are not.
    // NOTE: Reverted to this duplicated version because token.immediate only takes a literal, local_variable won't go
    global_variable: $ => /[\^][a-zA-Z%][a-zA-Z0-9%]*/,

    unary_expression: $ => prec(2,
      choice(
        seq('-', $._expression),
        seq('!', $._expression),
      ),
    ),

    binary_expression: $ => prec(2, 
      choice(
        // No "order of operations" besides left associativity, so both prec is 1
        prec.left(1, seq($._expression, '*', $._expression)),  // Multiplication
        prec.left(1, seq($._expression, '+', $._expression)),  // Addition
        prec.left(1, seq($._expression, '/', $._expression)),  // Division
        prec.left(1, seq($._expression, '-', $._expression)),  // Subtraction
        prec.left(1, seq($._expression, '_', $._expression)),  // String concatenation
      ),
    ),

    arguments: $ => seq(
      $._expression,
      repeat(
        seq(
          ",",
          $._expression,
        ),
      ),
    ),

    _write_outro: $ => ",\!",

    function: $ => $._alphanum,

    // For calls to functions with slightly different syntax
    call: $ => choice(
      $._typical_call,
      $._write_call,
    ),

    // Calls to write end in ,!
    _write_call: $ => seq(
      $._typical_call,
      $._write_outro,
    ),

    _typical_call: $ => seq(
      $.function,
      $.arguments,
    ),

    _set: $ => /set|s/,

    assignment: $ => seq(
      $._set,
      $._variable,
      "=",
      $._expression,
    ),

    // Boy this feels pretty hacky
    local_array: $ => seq(
      /[a-zA-Z%][a-zA-Z0-9%]+/,
      "(",
      /[a-zA-Z0-9]/,
      repeat(
        seq(
          ",",
          /[a-zA-Z0-9]/,
        ),
      ),
      ")",
    ),

    _alphanum: $ => /[A-Za-z0-9]+/,

    // The values in a string are, at a minimum, any ASCII character code between 32 to 127 (decimal) inclusive
    // TODO: x20 is space!
    // literal: $ => /(("[^"]*")|([\x20-\x7F^\,]+))+/
    literal: $ => /(("[^"]*")|([^\x00-\x20\x2c\x22\x2b\x2a\x2d]+))+/,

    newline: $ => /[\s]*\n/,
  }
});
