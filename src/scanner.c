#include "tree_sitter/parser.h"
#include <stdio.h>
#include <wctype.h>

enum TokenType {
  COMMENT,
  LABEL,
};

static void advance(TSLexer * lexer)
{
    lexer->advance(lexer, false);
}

static void skip(TSLexer * lexer)
{
    lexer->advance(lexer, true);
}

static void scan_line(TSLexer * lexer)
{
    while ((lexer->lookahead != '\n') && (lexer->eof(lexer) == false)) {
      advance(lexer);
    }
}

static void scan_non_whitespace(TSLexer * lexer)
{
    while ((iswspace(lexer->lookahead) == 0) && (lexer->eof(lexer) == false)) {
      advance(lexer);
    }
}

static void scan_label_text(TSLexer * lexer)
{
    // If we arrive at a '(' character, then this label is for a function definition, and we should stop parsing so that 
    // we don't advance through its parameters.
    while ((iswspace(lexer->lookahead) == 0) && (lexer->eof(lexer) == false) && (lexer->lookahead != '(')) {
      advance(lexer);
    }
}

void *tree_sitter_mumps_external_scanner_create() { return NULL; }
void tree_sitter_mumps_external_scanner_destroy(void *p) {}
void tree_sitter_mumps_external_scanner_reset(void *p) {}
unsigned tree_sitter_mumps_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_mumps_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_mumps_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  // NAMEs and COMMENTs together, since they both check column 0
  if (valid_symbols[LABEL] || valid_symbols[COMMENT]) {
    // If we're not at the 0th column, then this can't be a label or a comment
    // printf("%d: %d\n", lexer->get_column(lexer), lexer->lookahead);
    if ((lexer->get_column(lexer) == 0) && (lexer->eof(lexer) == false)){
      if (lexer->lookahead == ';') {
        lexer->result_symbol = COMMENT;
        // This entire line is a comment, advance until we hit \n
        scan_line(lexer);
        // printf("RETURNING COMMENT!\n");
        return true;
      }
      else if ((isspace(lexer->lookahead) == 0)) {
        lexer->result_symbol = LABEL;
        // Advance through the entire label
        scan_label_text(lexer);
        // printf("RETURNING LABEL!\n");
        return true;
      }
    }
  }
  return false;
}
