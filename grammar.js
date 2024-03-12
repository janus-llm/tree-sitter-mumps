module.exports = grammar({
  name: "mumps",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $.comment, // scanner.c checks for a ; in column 0
  ],

  rules: {
    program: $ => repeat1($._statement),

    _statement: $ => choice(
      $._simple_statement,
      $._compound_statement,
      $._blank_line, // TODO: Find a home for this
    ),

    // Generally on a single line
    _simple_statement: $ => choice(
      $.call,
      $.assignment,
      $.comment,
    ),

    // Generally on multiples lines
    _compound_statement: $ => choice(
    ),

    _expression: $ => choice(
      $.identifier,
      $.literal,
      $.unary_expression,
      $.binary_expression,
    ),

    unary_expression: $ => prec(2,
      choice(
        seq('-', $._expression),
        seq('!', $._expression),
      ),
    ),

    binary_expression: $ => choice(
      // No "order of operations" besides left associativity, so both prec is 1
      prec.left(1, seq($._expression, '*', $._expression)),
      prec.left(1, seq($._expression, '+', $._expression)),
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

    function: $ => $._alphanum,

    call: $ => seq(
      $.function,
      $.arguments,
    ),

    _set: $ => /set/,

    identifier: $ => $._alphanum,

    _blank_line: $ => /[\s]*\n/,
    
    assignment: $ => seq(
      $._set,
      $.identifier,
      "=",
      $._expression,
    ),

    _alphanum: $ => /[A-Za-z0-9]+/,

    // The values in a string are, at a minimum, any ASCII character code between 32 to 127 (decimal) inclusive
    // TODO: x20 is space!
    // literal: $ => /(("[^"]*")|([\x20-\x7F^\,]+))+/
    literal: $ => /(("[^"]*")|([^\x00-\x19\x2c\x22]+))+/
  }
});
