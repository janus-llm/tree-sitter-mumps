module.exports = grammar({
  name: "mumps",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $.comment, // scanner.c checks for a ; in column 0
  ],

  rules: {
    program: $ => repeat1(
      choice(
        $.call,
        $.assignment,
        $.comment,
      ),
    ),

    arguments: $ => seq(
      $.literal,
      repeat(
        seq(
          ",",
          $.literal,
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
    
    assignment: $ => seq(
      $._set,
      $.identifier,
      "=",
      $.literal,
    ),

    _alphanum: $ => /[A-Za-z0-9]+/,

    // The values in a string are, at a minimum, any ASCII character code between 32 to 127 (decimal) inclusive
    // TODO: x20 is space!
    // literal: $ => /(("[^"]*")|([\x20-\x7F^\,]+))+/
    literal: $ => /(("[^"]*")|([^\x00-\x19\x2c\x22]+))+/
  }
});
