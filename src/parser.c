#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DASH = 1,
  anon_sym_BANG = 2,
  anon_sym_STAR = 3,
  anon_sym_PLUS = 4,
  anon_sym_COMMA = 5,
  sym__set = 6,
  sym__blank_line = 7,
  anon_sym_EQ = 8,
  sym__alphanum = 9,
  sym_literal = 10,
  sym_comment = 11,
  sym_program = 12,
  sym__statement = 13,
  sym__simple_statement = 14,
  sym__compound_statement = 15,
  sym__expression = 16,
  sym_unary_expression = 17,
  sym_binary_expression = 18,
  sym_arguments = 19,
  sym_function = 20,
  sym_call = 21,
  sym_identifier = 22,
  sym_assignment = 23,
  aux_sym_program_repeat1 = 24,
  aux_sym_arguments_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [sym__set] = "_set",
  [sym__blank_line] = "_blank_line",
  [anon_sym_EQ] = "=",
  [sym__alphanum] = "_alphanum",
  [sym_literal] = "literal",
  [sym_comment] = "comment",
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
  [sym_identifier] = "identifier",
  [sym_assignment] = "assignment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__set] = sym__set,
  [sym__blank_line] = sym__blank_line,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__alphanum] = sym__alphanum,
  [sym_literal] = sym_literal,
  [sym_comment] = sym_comment,
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
  [sym_identifier] = sym_identifier,
  [sym_assignment] = sym_assignment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__set] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [sym_comment] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
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
  [21] = 13,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == 's') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 's') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == 's') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(22);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__blank_line);
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == '"') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5, .external_lex_state = 1},
  [2] = {.lex_state = 5, .external_lex_state = 1},
  [3] = {.lex_state = 5, .external_lex_state = 1},
  [4] = {.lex_state = 5, .external_lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 5, .external_lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 1},
  [12] = {.lex_state = 5, .external_lex_state = 1},
  [13] = {.lex_state = 5, .external_lex_state = 1},
  [14] = {.lex_state = 5, .external_lex_state = 1},
  [15] = {.lex_state = 5, .external_lex_state = 1},
  [16] = {.lex_state = 5, .external_lex_state = 1},
  [17] = {.lex_state = 5, .external_lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(20),
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_function] = STATE(5),
    [sym_call] = STATE(2),
    [sym_assignment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [sym__set] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(5),
    [sym__alphanum] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym__set,
    ACTIONS(7), 1,
      sym__alphanum,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_function,
    ACTIONS(11), 2,
      sym_comment,
      sym__blank_line,
    STATE(3), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [25] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(21), 1,
      sym__alphanum,
    STATE(5), 1,
      sym_function,
    ACTIONS(18), 2,
      sym_comment,
      sym__blank_line,
    STATE(3), 6,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [50] = 5,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(26), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(30), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(24), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
  [70] = 5,
    ACTIONS(34), 1,
      sym__alphanum,
    ACTIONS(36), 1,
      sym_literal,
    STATE(17), 1,
      sym_arguments,
    ACTIONS(32), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(4), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [90] = 4,
    ACTIONS(34), 1,
      sym__alphanum,
    ACTIONS(38), 1,
      sym_literal,
    ACTIONS(32), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [107] = 4,
    ACTIONS(34), 1,
      sym__alphanum,
    ACTIONS(40), 1,
      sym_literal,
    ACTIONS(32), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [124] = 2,
    ACTIONS(42), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
    ACTIONS(44), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
  [137] = 4,
    ACTIONS(34), 1,
      sym__alphanum,
    ACTIONS(46), 1,
      sym_literal,
    ACTIONS(32), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(11), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [154] = 4,
    ACTIONS(34), 1,
      sym__alphanum,
    ACTIONS(48), 1,
      sym_literal,
    ACTIONS(32), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(12), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [171] = 2,
    ACTIONS(50), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
    ACTIONS(52), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
  [184] = 3,
    ACTIONS(26), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(54), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
    ACTIONS(56), 3,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
  [199] = 2,
    ACTIONS(58), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
    ACTIONS(60), 5,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
  [212] = 4,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(64), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(62), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
  [228] = 3,
    ACTIONS(26), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(68), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(66), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
  [242] = 4,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(56), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(54), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
  [258] = 2,
    ACTIONS(75), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(73), 3,
      sym_comment,
      ts_builtin_sym_end,
      sym__blank_line,
  [268] = 1,
    ACTIONS(77), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      sym__alphanum,
      sym_literal,
  [275] = 2,
    ACTIONS(79), 1,
      sym__alphanum,
    STATE(22), 1,
      sym_identifier,
  [282] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [286] = 1,
    ACTIONS(58), 1,
      anon_sym_EQ,
  [290] = 1,
    ACTIONS(83), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_mumps_external_scanner_create(void);
void tree_sitter_mumps_external_scanner_destroy(void *);
bool tree_sitter_mumps_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_mumps_external_scanner_serialize(void *, char *);
void tree_sitter_mumps_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_mumps_external_scanner_create,
      tree_sitter_mumps_external_scanner_destroy,
      tree_sitter_mumps_external_scanner_scan,
      tree_sitter_mumps_external_scanner_serialize,
      tree_sitter_mumps_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
