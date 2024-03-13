#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_for = 4,
  anon_sym_if = 5,
  anon_sym_DASH = 6,
  anon_sym_BANG = 7,
  anon_sym_STAR = 8,
  anon_sym_PLUS = 9,
  anon_sym_SLASH = 10,
  anon_sym__ = 11,
  anon_sym_COMMA = 12,
  sym__write_outro = 13,
  sym__set = 14,
  sym_local_variable = 15,
  sym_global_variable = 16,
  aux_sym_local_array_token1 = 17,
  anon_sym_LPAREN = 18,
  aux_sym_local_array_token2 = 19,
  anon_sym_RPAREN = 20,
  sym__alphanum = 21,
  sym_literal = 22,
  sym_program = 23,
  sym__statement = 24,
  sym_conditional = 25,
  sym__simple_statement = 26,
  sym__compound_statement = 27,
  sym_for_statement = 28,
  sym_if_statement = 29,
  sym__expression = 30,
  sym_unary_expression = 31,
  sym_binary_expression = 32,
  sym_arguments = 33,
  sym__write_call = 34,
  sym_function = 35,
  sym_call = 36,
  sym__variable = 37,
  sym_assignment = 38,
  sym_local_array = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_arguments_repeat1 = 41,
  aux_sym_local_array_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_if] = "if",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym__] = "_",
  [anon_sym_COMMA] = ",",
  [sym__write_outro] = "_write_outro",
  [sym__set] = "_set",
  [sym_local_variable] = "local_variable",
  [sym_global_variable] = "global_variable",
  [aux_sym_local_array_token1] = "local_array_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_local_array_token2] = "local_array_token2",
  [anon_sym_RPAREN] = ")",
  [sym__alphanum] = "_alphanum",
  [sym_literal] = "literal",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_conditional] = "conditional",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_for_statement] = "for_statement",
  [sym_if_statement] = "if_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym__write_call] = "_write_call",
  [sym_function] = "function",
  [sym_call] = "call",
  [sym__variable] = "_variable",
  [sym_assignment] = "assignment",
  [sym_local_array] = "local_array",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_local_array_repeat1] = "local_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__write_outro] = sym__write_outro,
  [sym__set] = sym__set,
  [sym_local_variable] = sym_local_variable,
  [sym_global_variable] = sym_global_variable,
  [aux_sym_local_array_token1] = aux_sym_local_array_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_local_array_token2] = aux_sym_local_array_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__alphanum] = sym__alphanum,
  [sym_literal] = sym_literal,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_conditional] = sym_conditional,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym__write_call] = sym__write_call,
  [sym_function] = sym_function,
  [sym_call] = sym_call,
  [sym__variable] = sym__variable,
  [sym_assignment] = sym_assignment,
  [sym_local_array] = sym_local_array,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_local_array_repeat1] = aux_sym_local_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__write_outro] = {
    .visible = false,
    .named = true,
  },
  [sym__set] = {
    .visible = false,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_global_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_local_array_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_local_array_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__alphanum] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__write_call] = {
    .visible = false,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_local_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 's') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '^') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '*' || ',' < lookahead)) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '^') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 's') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(41);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__write_outro);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (lookahead == 'f') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'f') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'r') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__write_outro] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym_global_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_local_array_token2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(38),
    [sym__statement] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym__write_call] = STATE(3),
    [sym_function] = STATE(14),
    [sym_call] = STATE(24),
    [sym_assignment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [sym__set] = ACTIONS(9),
    [sym__alphanum] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(24), 1,
      sym__set,
    ACTIONS(27), 1,
      sym__alphanum,
    STATE(14), 1,
      sym_function,
    STATE(24), 1,
      sym_call,
    STATE(2), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym__write_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [35] = 9,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_comment,
    STATE(14), 1,
      sym_function,
    STATE(24), 1,
      sym_call,
    STATE(2), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym__write_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [70] = 2,
    ACTIONS(36), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(34), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [89] = 2,
    ACTIONS(40), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(38), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [108] = 2,
    ACTIONS(44), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(42), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [127] = 2,
    ACTIONS(48), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(46), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [146] = 8,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(50), 1,
      sym_comment,
    STATE(14), 1,
      sym_function,
    STATE(24), 1,
      sym_call,
    STATE(26), 7,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym__write_call,
      sym_assignment,
  [177] = 5,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(54), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(56), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [202] = 3,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(56), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(62), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
  [222] = 3,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(66), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(56), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [240] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_EQ,
    ACTIONS(72), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(56), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [260] = 6,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    STATE(8), 1,
      sym_conditional,
    ACTIONS(78), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(12), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [284] = 6,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    STATE(23), 1,
      sym_arguments,
    ACTIONS(82), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(9), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [308] = 5,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    ACTIONS(84), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(10), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [329] = 5,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    ACTIONS(86), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(4), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [350] = 5,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    ACTIONS(88), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(18), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [371] = 3,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(92), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(56), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [388] = 5,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    ACTIONS(94), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(7), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [409] = 5,
    ACTIONS(74), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    ACTIONS(96), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(11), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [430] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(62), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [448] = 4,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(103), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [466] = 2,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(107), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [478] = 3,
    ACTIONS(113), 1,
      sym__write_outro,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [492] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [503] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [514] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(125), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [525] = 2,
    ACTIONS(127), 1,
      anon_sym_DASH,
    ACTIONS(129), 5,
      anon_sym_BANG,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym_literal,
  [536] = 3,
    ACTIONS(80), 1,
      aux_sym_local_array_token1,
    ACTIONS(131), 2,
      sym_local_variable,
      sym_global_variable,
    STATE(36), 2,
      sym__variable,
      sym_local_array,
  [548] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_local_array_repeat1,
  [558] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_local_array_repeat1,
  [568] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_local_array_repeat1,
  [578] = 1,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [583] = 1,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
  [587] = 1,
    ACTIONS(146), 1,
      aux_sym_local_array_token2,
  [591] = 1,
    ACTIONS(148), 1,
      anon_sym_EQ,
  [595] = 1,
    ACTIONS(150), 1,
      aux_sym_local_array_token2,
  [599] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 202,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 240,
  [SMALL_STATE(13)] = 260,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 371,
  [SMALL_STATE(19)] = 388,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 430,
  [SMALL_STATE(22)] = 448,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 478,
  [SMALL_STATE(25)] = 492,
  [SMALL_STATE(26)] = 503,
  [SMALL_STATE(27)] = 514,
  [SMALL_STATE(28)] = 525,
  [SMALL_STATE(29)] = 536,
  [SMALL_STATE(30)] = 548,
  [SMALL_STATE(31)] = 558,
  [SMALL_STATE(32)] = 568,
  [SMALL_STATE(33)] = 578,
  [SMALL_STATE(34)] = 583,
  [SMALL_STATE(35)] = 587,
  [SMALL_STATE(36)] = 591,
  [SMALL_STATE(37)] = 595,
  [SMALL_STATE(38)] = 599,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 5),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_call, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_call, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2), SHIFT_REPEAT(37),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mumps(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
