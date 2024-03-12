#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
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
  anon_sym_SLASH = 6,
  anon_sym__ = 7,
  anon_sym_COMMA = 8,
  sym__write_outro = 9,
  sym_set = 10,
  aux_sym_local_variable_token1 = 11,
  sym_global_variable = 12,
  anon_sym_EQ = 13,
  anon_sym_LPAREN = 14,
  aux_sym_local_array_token1 = 15,
  anon_sym_RPAREN = 16,
  sym__alphanum = 17,
  sym_literal = 18,
  sym_program = 19,
  sym__statement = 20,
  sym__simple_statement = 21,
  sym__compound_statement = 22,
  sym__expression = 23,
  sym_unary_expression = 24,
  sym_binary_expression = 25,
  sym_arguments = 26,
  sym__write_call = 27,
  sym_function = 28,
  sym_call = 29,
  sym_local_variable = 30,
  sym_assignment = 31,
  sym_local_array = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_arguments_repeat1 = 34,
  aux_sym_local_array_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym__] = "_",
  [anon_sym_COMMA] = ",",
  [sym__write_outro] = "_write_outro",
  [sym_set] = "set",
  [aux_sym_local_variable_token1] = "local_variable_token1",
  [sym_global_variable] = "global_variable",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [aux_sym_local_array_token1] = "local_array_token1",
  [anon_sym_RPAREN] = ")",
  [sym__alphanum] = "_alphanum",
  [sym_literal] = "literal",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym__write_call] = "_write_call",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__write_outro] = sym__write_outro,
  [sym_set] = sym_set,
  [aux_sym_local_variable_token1] = aux_sym_local_variable_token1,
  [sym_global_variable] = sym_global_variable,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_local_array_token1] = aux_sym_local_array_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__alphanum] = sym__alphanum,
  [sym_literal] = sym_literal,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym__write_call] = sym__write_call,
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
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 's') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '^') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '*' || ',' < lookahead)) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '^') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 's') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(37);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__write_outro);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_set);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_local_variable_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(37);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_local_array_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_local_array_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
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
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__write_outro] = ACTIONS(1),
    [sym_set] = ACTIONS(1),
    [sym_global_variable] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_local_array_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(32),
    [sym__statement] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym__write_call] = STATE(3),
    [sym_function] = STATE(9),
    [sym_call] = STATE(20),
    [sym_assignment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [sym_set] = ACTIONS(5),
    [sym__alphanum] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(15), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(11), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [23] = 7,
    ACTIONS(5), 1,
      sym_set,
    ACTIONS(7), 1,
      sym__alphanum,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    STATE(9), 1,
      sym_function,
    STATE(20), 1,
      sym_call,
    STATE(4), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym__write_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [50] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(26), 1,
      sym_set,
    ACTIONS(29), 1,
      sym__alphanum,
    STATE(9), 1,
      sym_function,
    STATE(20), 1,
      sym_call,
    STATE(4), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym__write_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [77] = 3,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(32), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [96] = 2,
    ACTIONS(40), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(38), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [112] = 2,
    ACTIONS(44), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(42), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [128] = 3,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(48), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(11), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [146] = 6,
    ACTIONS(50), 1,
      anon_sym_DASH,
    ACTIONS(52), 1,
      anon_sym_BANG,
    ACTIONS(54), 1,
      aux_sym_local_variable_token1,
    STATE(19), 1,
      sym_arguments,
    ACTIONS(56), 2,
      sym_global_variable,
      sym_literal,
    STATE(2), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [170] = 2,
    ACTIONS(60), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [186] = 2,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [202] = 5,
    ACTIONS(50), 1,
      anon_sym_DASH,
    ACTIONS(52), 1,
      anon_sym_BANG,
    ACTIONS(54), 1,
      aux_sym_local_variable_token1,
    ACTIONS(66), 2,
      sym_global_variable,
      sym_literal,
    STATE(16), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [223] = 5,
    ACTIONS(50), 1,
      anon_sym_DASH,
    ACTIONS(52), 1,
      anon_sym_BANG,
    ACTIONS(54), 1,
      aux_sym_local_variable_token1,
    ACTIONS(68), 2,
      sym_global_variable,
      sym_literal,
    STATE(11), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [244] = 5,
    ACTIONS(50), 1,
      anon_sym_DASH,
    ACTIONS(52), 1,
      anon_sym_BANG,
    ACTIONS(54), 1,
      aux_sym_local_variable_token1,
    ACTIONS(70), 2,
      sym_global_variable,
      sym_literal,
    STATE(10), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [265] = 5,
    ACTIONS(50), 1,
      anon_sym_DASH,
    ACTIONS(52), 1,
      anon_sym_BANG,
    ACTIONS(54), 1,
      aux_sym_local_variable_token1,
    ACTIONS(72), 2,
      sym_global_variable,
      sym_literal,
    STATE(8), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_variable,
      sym_local_array,
  [286] = 3,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(76), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(11), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [302] = 4,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(80), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
  [318] = 4,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(48), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
  [334] = 2,
    ACTIONS(87), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
  [344] = 3,
    ACTIONS(91), 1,
      sym__write_outro,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(93), 2,
      sym_set,
      sym__alphanum,
  [356] = 2,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(97), 4,
      anon_sym_BANG,
      aux_sym_local_variable_token1,
      sym_global_variable,
      sym_literal,
  [366] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(101), 2,
      sym_set,
      sym__alphanum,
  [375] = 3,
    ACTIONS(103), 1,
      aux_sym_local_variable_token1,
    ACTIONS(105), 1,
      sym_global_variable,
    STATE(28), 1,
      sym_local_variable,
  [385] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_local_array_repeat1,
  [395] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_local_array_repeat1,
  [405] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_local_array_repeat1,
  [415] = 1,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [420] = 1,
    ACTIONS(118), 1,
      anon_sym_EQ,
  [424] = 1,
    ACTIONS(120), 1,
      aux_sym_local_array_token1,
  [428] = 1,
    ACTIONS(32), 1,
      anon_sym_EQ,
  [432] = 1,
    ACTIONS(122), 1,
      aux_sym_local_array_token1,
  [436] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 244,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 286,
  [SMALL_STATE(17)] = 302,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 344,
  [SMALL_STATE(21)] = 356,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 385,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 415,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 5),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_call, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_call, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2), SHIFT_REPEAT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
