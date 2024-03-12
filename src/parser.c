#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  sym__set = 2,
  anon_sym_EQ = 3,
  sym__alphanum = 4,
  sym_literal = 5,
  sym_comment = 6,
  sym_program = 7,
  sym_arguments = 8,
  sym_function = 9,
  sym_call = 10,
  sym_identifier = 11,
  sym_assignment = 12,
  aux_sym_program_repeat1 = 13,
  aux_sym_arguments_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [sym__set] = "_set",
  [anon_sym_EQ] = "=",
  [sym__alphanum] = "_alphanum",
  [sym_literal] = "literal",
  [sym_comment] = "comment",
  [sym_program] = "program",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__set] = sym__set,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__alphanum] = sym__alphanum,
  [sym_literal] = sym_literal,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__set] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > 25 &&
          lookahead != ',') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym_function] = STATE(11),
    [sym_call] = STATE(2),
    [sym_assignment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [sym__set] = ACTIONS(3),
    [sym__alphanum] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_function] = STATE(11),
    [sym_call] = STATE(3),
    [sym_assignment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__set] = ACTIONS(3),
    [sym__alphanum] = ACTIONS(5),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym_function] = STATE(11),
    [sym_call] = STATE(3),
    [sym_assignment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__set] = ACTIONS(15),
    [sym__alphanum] = ACTIONS(18),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(24), 2,
      sym_comment,
      ts_builtin_sym_end,
    ACTIONS(28), 2,
      sym__set,
      sym__alphanum,
  [15] = 4,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(30), 2,
      sym_comment,
      ts_builtin_sym_end,
    ACTIONS(32), 2,
      sym__set,
      sym__alphanum,
  [30] = 4,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(34), 2,
      sym_comment,
      ts_builtin_sym_end,
    ACTIONS(39), 2,
      sym__set,
      sym__alphanum,
  [45] = 2,
    ACTIONS(39), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(34), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [55] = 2,
    ACTIONS(41), 2,
      sym_comment,
      ts_builtin_sym_end,
    ACTIONS(43), 2,
      sym__set,
      sym__alphanum,
  [64] = 2,
    ACTIONS(45), 2,
      sym_comment,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      sym__set,
      sym__alphanum,
  [73] = 2,
    ACTIONS(49), 1,
      sym__alphanum,
    STATE(15), 1,
      sym_identifier,
  [80] = 2,
    ACTIONS(51), 1,
      sym_literal,
    STATE(8), 1,
      sym_arguments,
  [87] = 1,
    ACTIONS(53), 1,
      sym_literal,
  [91] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [95] = 1,
    ACTIONS(57), 1,
      anon_sym_EQ,
  [99] = 1,
    ACTIONS(59), 1,
      anon_sym_EQ,
  [103] = 1,
    ACTIONS(61), 1,
      sym_literal,
  [107] = 1,
    ACTIONS(63), 1,
      sym_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 87,
  [SMALL_STATE(13)] = 91,
  [SMALL_STATE(14)] = 95,
  [SMALL_STATE(15)] = 99,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
