#include "tree_sitter/parser.h"
#include <stdio.h>
#include <wctype.h>

enum TokenType {
  COMMENT,
};

static void advance(TSLexer * lexer)
{
    lexer->advance(lexer, false);
}

static void skip(TSLexer * lexer)
{
    lexer->advance(lexer, true);
}

void *tree_sitter_mumps_external_scanner_create() { return NULL; }
void tree_sitter_mumps_external_scanner_destroy(void *p) {}
void tree_sitter_mumps_external_scanner_reset(void *p) {}
unsigned tree_sitter_mumps_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_mumps_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_mumps_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  // printf("In scanner.c...!\n");                                            
  bool eof = lexer->eof(lexer);

  // NAME or COMMENT
  if (valid_symbols[COMMENT]) {
    if (lexer->lookahead == ';' && lexer->get_column(lexer) == 0) {
      lexer->result_symbol = COMMENT;
      // printf("Found a COMMENT!\n");
      while (lexer->lookahead != '\n') { // Should we try to find the actual end of the text?
        advance(lexer);
      }
      return true;
    }
    else {
      // printf("Nope, not a COMMENT.\n");
      return false;
    }
  }  
  else {
    return false;
  }
}
