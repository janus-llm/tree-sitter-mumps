#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_DASH = 2,
  anon_sym_BANG = 3,
  anon_sym_STAR = 4,
  anon_sym_PLUS = 5,
  anon_sym__ = 6,
  anon_sym_COMMA = 7,
  anon_sym_COMMA_DQUOTE = 8,
  sym_set = 9,
  aux_sym_local_variable_token1 = 10,
  sym_global_variable = 11,
  anon_sym_EQ = 12,
  anon_sym_LPAREN = 13,
  aux_sym_local_array_token1 = 14,
  anon_sym_RPAREN = 15,
  sym__alphanum = 16,
  sym_literal = 17,
  sym_newline = 18,
  sym_program = 19,
  sym__statement = 20,
  sym__simple_statement = 21,
  sym__compound_statement = 22,
  sym__expression = 23,
  sym_unary_expression = 24,
  sym_binary_expression = 25,
  sym_arguments = 26,
  sym_function = 27,
  sym_call = 28,
  sym_local_variable = 29,
  sym_assignment = 30,
  sym_local_array = 31,
  aux_sym_program_repeat1 = 32,
  aux_sym_arguments_repeat1 = 33,
  aux_sym_local_array_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym__] = "_",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_DQUOTE] = ",\"",
  [sym_set] = "set",
  [aux_sym_local_variable_token1] = "local_variable_token1",
  [sym_global_variable] = "global_variable",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [aux_sym_local_array_token1] = "local_array_token1",
  [anon_sym_RPAREN] = ")",
  [sym__alphanum] = "_alphanum",
  [sym_literal] = "literal",
  [sym_newline] = "newline",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_function] = "function",
  [sym_call] = "call",
  [sym_local_variable] = "local_variable",
  [sym_assignment] = "assignment",
  [sym_local_array] = "local_array",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_local_array_repeat1] = "local_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym__] = anon_sym__,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_DQUOTE] = anon_sym_COMMA_DQUOTE,
  [sym_set] = sym_set,
  [aux_sym_local_variable_token1] = aux_sym_local_variable_token1,
  [sym_global_variable] = sym_global_variable,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_local_array_token1] = aux_sym_local_array_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__alphanum] = sym__alphanum,
  [sym_literal] = sym_literal,
  [sym_newline] = sym_newline,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_function] = sym_function,
  [sym_call] = sym_call,
  [sym_local_variable] = sym_local_variable,
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_local_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_global_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_local_array_token1] = {
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
  [sym_newline] = {
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
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
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
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '^') ADVANCE(6);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 's') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '_') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '^') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '*' || ',' < lookahead)) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '^') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 's') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '^') ADVANCE(6);
      if (lookahead == '_') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '"') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_set);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_local_array_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_local_array_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_DQUOTE] = ACTIONS(1),
    [sym_set] = ACTIONS(1),
    [sym_global_variable] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_local_array_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(30),
    [sym__statement] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym_function] = STATE(6),
    [sym_call] = STATE(3),
    [sym_assignment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [sym_set] = ACTIONS(5),
    [sym__alphanum] = ACTIONS(7),
    [sym_newline] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(16), 1,
      sym_set,
    ACTIONS(19), 1,
      sym__alphanum,
    ACTIONS(22), 1,
      sym_newline,
    STATE(6), 1,
      sym_function,
    STATE(2), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [27] = 7,
    ACTIONS(5), 1,
      sym_set,
    ACTIONS(7), 1,
      sym__alphanum,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_newline,
    STATE(6), 1,
      sym_function,
    STATE(2), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [54] = 6,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_COMMA_DQUOTE,
    STATE(16), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(33), 3,
      sym_comment,
      sym_set,
      sym__alphanum,
    ACTIONS(35), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
  [78] = 3,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(43), 8,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
      anon_sym_COMMA,
      anon_sym_COMMA_DQUOTE,
      sym_set,
      sym__alphanum,
  [96] = 6,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      aux_sym_local_variable_token1,
    STATE(19), 1,
      sym_arguments,
    ACTIONS(53), 2,
      sym_global_variable,
      sym_literal,
    STATE(4), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [120] = 5,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      aux_sym_local_variable_token1,
    ACTIONS(55), 2,
      sym_global_variable,
      sym_literal,
    STATE(17), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [141] = 5,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      aux_sym_local_variable_token1,
    ACTIONS(57), 2,
      sym_global_variable,
      sym_literal,
    STATE(10), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [162] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(61), 8,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
      anon_sym_COMMA,
      anon_sym_COMMA_DQUOTE,
      sym_set,
      sym__alphanum,
  [177] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(65), 8,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
      anon_sym_COMMA,
      anon_sym_COMMA_DQUOTE,
      sym_set,
      sym__alphanum,
  [192] = 5,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      aux_sym_local_variable_token1,
    ACTIONS(67), 2,
      sym_global_variable,
      sym_literal,
    STATE(13), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [213] = 5,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      aux_sym_local_variable_token1,
    ACTIONS(69), 2,
      sym_global_variable,
      sym_literal,
    STATE(14), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [234] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(73), 8,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
      anon_sym_COMMA,
      anon_sym_COMMA_DQUOTE,
      sym_set,
      sym__alphanum,
  [249] = 3,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(35), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(77), 5,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_COMMA_DQUOTE,
      sym_set,
      sym__alphanum,
  [266] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(81), 8,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
      anon_sym_COMMA,
      anon_sym_COMMA_DQUOTE,
      sym_set,
      sym__alphanum,
  [281] = 5,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_COMMA_DQUOTE,
    STATE(18), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(85), 3,
      sym_comment,
      sym_set,
      sym__alphanum,
  [300] = 3,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(35), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(91), 3,
      sym_comment,
      sym_set,
      sym__alphanum,
  [315] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(77), 4,
      sym_comment,
      anon_sym_COMMA_DQUOTE,
      sym_set,
      sym__alphanum,
  [332] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(98), 3,
      sym_comment,
      sym_set,
      sym__alphanum,
  [342] = 2,
    ACTIONS(100), 1,
      anon_sym_DASH,
    ACTIONS(102), 4,
      anon_sym_BANG,
      aux_sym_local_variable_token1,
      sym_global_variable,
      sym_literal,
  [352] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(85), 3,
      sym_comment,
      sym_set,
      sym__alphanum,
  [362] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(106), 3,
      sym_comment,
      sym_set,
      sym__alphanum,
  [372] = 3,
    ACTIONS(108), 1,
      aux_sym_local_variable_token1,
    ACTIONS(110), 1,
      sym_global_variable,
    STATE(28), 1,
      sym_local_variable,
  [382] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_local_array_repeat1,
  [392] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_local_array_repeat1,
  [402] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_local_array_repeat1,
  [412] = 1,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [417] = 1,
    ACTIONS(123), 1,
      anon_sym_EQ,
  [421] = 1,
    ACTIONS(125), 1,
      aux_sym_local_array_token1,
  [425] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [429] = 1,
    ACTIONS(129), 1,
      aux_sym_local_array_token1,
  [433] = 1,
    ACTIONS(41), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 300,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 352,
  [SMALL_STATE(22)] = 362,
  [SMALL_STATE(23)] = 372,
  [SMALL_STATE(24)] = 382,
  [SMALL_STATE(25)] = 392,
  [SMALL_STATE(26)] = 402,
  [SMALL_STATE(27)] = 412,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 421,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 433,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2), SHIFT_REPEAT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
