#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym_local_variable = 11,
  sym_global_variable = 12,
  anon_sym_EQ = 13,
  aux_sym_local_array_token1 = 14,
  anon_sym_LPAREN = 15,
  aux_sym_local_array_token2 = 16,
  anon_sym_RPAREN = 17,
  sym__alphanum = 18,
  sym_literal = 19,
  sym_program = 20,
  sym__statement = 21,
  sym__simple_statement = 22,
  sym__compound_statement = 23,
  sym__expression = 24,
  sym_unary_expression = 25,
  sym_binary_expression = 26,
  sym_arguments = 27,
  sym__write_call = 28,
  sym_function = 29,
  sym_call = 30,
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
  [sym_local_variable] = "local_variable",
  [sym_global_variable] = "global_variable",
  [anon_sym_EQ] = "=",
  [aux_sym_local_array_token1] = "local_array_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_local_array_token2] = "local_array_token2",
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
  [sym_local_variable] = sym_local_variable,
  [sym_global_variable] = sym_global_variable,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_local_array_token1] = aux_sym_local_array_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_local_array_token2] = aux_sym_local_array_token2,
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
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_global_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 's') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '^') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '*' || ',' < lookahead)) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '^') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 's') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(33);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__write_outro);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_set);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(33);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [aux_sym_local_array_token2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym__write_call] = STATE(2),
    [sym_function] = STATE(6),
    [sym_call] = STATE(19),
    [sym_assignment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_set] = ACTIONS(5),
    [sym__alphanum] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      sym_set,
    ACTIONS(7), 1,
      sym__alphanum,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(6), 1,
      sym_function,
    STATE(19), 1,
      sym_call,
    STATE(3), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym__write_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [27] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym_set,
    ACTIONS(21), 1,
      sym__alphanum,
    STATE(6), 1,
      sym_function,
    STATE(19), 1,
      sym_call,
    STATE(3), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym__write_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [54] = 5,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(30), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(26), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [77] = 3,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(34), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(26), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [95] = 6,
    ACTIONS(36), 1,
      anon_sym_DASH,
    ACTIONS(38), 1,
      anon_sym_BANG,
    ACTIONS(42), 1,
      aux_sym_local_array_token1,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(40), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(4), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [119] = 2,
    ACTIONS(46), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(44), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [135] = 2,
    ACTIONS(50), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(48), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [151] = 2,
    ACTIONS(54), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(52), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [167] = 2,
    ACTIONS(58), 3,
      anon_sym_COMMA,
      sym_set,
      sym__alphanum,
    ACTIONS(56), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [183] = 5,
    ACTIONS(36), 1,
      anon_sym_DASH,
    ACTIONS(38), 1,
      anon_sym_BANG,
    ACTIONS(42), 1,
      aux_sym_local_array_token1,
    ACTIONS(60), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(9), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [204] = 5,
    ACTIONS(36), 1,
      anon_sym_DASH,
    ACTIONS(38), 1,
      anon_sym_BANG,
    ACTIONS(42), 1,
      aux_sym_local_array_token1,
    ACTIONS(62), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(10), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [225] = 5,
    ACTIONS(36), 1,
      anon_sym_DASH,
    ACTIONS(38), 1,
      anon_sym_BANG,
    ACTIONS(42), 1,
      aux_sym_local_array_token1,
    ACTIONS(64), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(15), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [246] = 5,
    ACTIONS(36), 1,
      anon_sym_DASH,
    ACTIONS(38), 1,
      anon_sym_BANG,
    ACTIONS(42), 1,
      aux_sym_local_array_token1,
    ACTIONS(66), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(5), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [267] = 3,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(70), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(26), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [283] = 4,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(34), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
  [299] = 4,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(77), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
  [315] = 2,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 5,
      anon_sym_BANG,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym_literal,
  [326] = 3,
    ACTIONS(85), 1,
      sym__write_outro,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(87), 2,
      sym_set,
      sym__alphanum,
  [338] = 2,
    ACTIONS(91), 2,
      sym_set,
      sym__alphanum,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
  [348] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(95), 2,
      sym_set,
      sym__alphanum,
  [357] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_local_array_repeat1,
  [367] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_local_array_repeat1,
  [377] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_local_array_repeat1,
  [387] = 1,
    ACTIONS(108), 2,
      sym_local_variable,
      sym_global_variable,
  [392] = 1,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [397] = 1,
    ACTIONS(110), 1,
      aux_sym_local_array_token2,
  [401] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [405] = 1,
    ACTIONS(114), 1,
      aux_sym_local_array_token2,
  [409] = 1,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
  [413] = 1,
    ACTIONS(118), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 326,
  [SMALL_STATE(20)] = 338,
  [SMALL_STATE(21)] = 348,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 367,
  [SMALL_STATE(24)] = 377,
  [SMALL_STATE(25)] = 387,
  [SMALL_STATE(26)] = 392,
  [SMALL_STATE(27)] = 397,
  [SMALL_STATE(28)] = 401,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 409,
  [SMALL_STATE(31)] = 413,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 5),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_call, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_call, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2), SHIFT_REPEAT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
