#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_for = 4,
  anon_sym_if = 5,
  sym_local_variable = 6,
  sym_global_variable = 7,
  anon_sym_DASH = 8,
  anon_sym_BANG = 9,
  anon_sym_STAR = 10,
  anon_sym_PLUS = 11,
  anon_sym_SLASH = 12,
  anon_sym__ = 13,
  anon_sym_COMMA = 14,
  sym__write_outro = 15,
  sym__set = 16,
  anon_sym_LPAREN = 17,
  aux_sym_local_array_token2 = 18,
  anon_sym_RPAREN = 19,
  sym__alphanum = 20,
  sym_literal = 21,
  sym_program = 22,
  sym__statement = 23,
  sym_conditional = 24,
  sym__simple_statement = 25,
  sym__compound_statement = 26,
  sym_for_statement = 27,
  sym_if_statement = 28,
  sym__expression = 29,
  sym__identifier = 30,
  sym__variable = 31,
  sym_unary_expression = 32,
  sym_binary_expression = 33,
  sym_arguments = 34,
  sym_function = 35,
  sym_call = 36,
  sym__write_call = 37,
  sym__typical_call = 38,
  sym_assignment = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_arguments_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_if] = "if",
  [sym_local_variable] = "local_variable",
  [sym_global_variable] = "global_variable",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym__] = "_",
  [anon_sym_COMMA] = ",",
  [sym__write_outro] = "_write_outro",
  [sym__set] = "_set",
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
  [sym__identifier] = "_identifier",
  [sym__variable] = "_variable",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_function] = "function",
  [sym_call] = "call",
  [sym__write_call] = "_write_call",
  [sym__typical_call] = "_typical_call",
  [sym_assignment] = "assignment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_if] = anon_sym_if,
  [sym_local_variable] = sym_local_variable,
  [sym_global_variable] = sym_global_variable,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__write_outro] = sym__write_outro,
  [sym__set] = sym__set,
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
  [sym__identifier] = sym__identifier,
  [sym__variable] = sym__variable,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_function] = sym_function,
  [sym_call] = sym_call,
  [sym__write_call] = sym__write_call,
  [sym__typical_call] = sym__typical_call,
  [sym_assignment] = sym_assignment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_global_variable] = {
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
  [sym__set] = {
    .visible = false,
    .named = true,
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__variable] = {
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
  [sym__write_call] = {
    .visible = false,
    .named = true,
  },
  [sym__typical_call] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 's') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '^') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '*' || ',' < lookahead)) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '^') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 's') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__write_outro);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (lookahead == 'f') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (lookahead == 'o') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'f') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'o') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'r') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_global_variable] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__write_outro] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_local_array_token2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(30),
    [sym__statement] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_function] = STATE(12),
    [sym_call] = STATE(3),
    [sym__write_call] = STATE(26),
    [sym__typical_call] = STATE(22),
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
  [0] = 10,
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
    STATE(12), 1,
      sym_function,
    STATE(22), 1,
      sym__typical_call,
    STATE(26), 1,
      sym__write_call,
    STATE(2), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [38] = 10,
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
    STATE(12), 1,
      sym_function,
    STATE(22), 1,
      sym__typical_call,
    STATE(26), 1,
      sym__write_call,
    STATE(2), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [76] = 9,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(34), 1,
      sym_comment,
    STATE(12), 1,
      sym_function,
    STATE(22), 1,
      sym__typical_call,
    STATE(26), 1,
      sym__write_call,
    STATE(25), 7,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
  [110] = 2,
    ACTIONS(38), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(36), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [129] = 2,
    ACTIONS(42), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(40), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
      sym__write_outro,
  [148] = 5,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(46), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(48), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [173] = 3,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(48), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(54), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
  [193] = 4,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_EQ,
    ACTIONS(60), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(48), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [213] = 5,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_BANG,
    STATE(4), 1,
      sym_conditional,
    ACTIONS(62), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(9), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [235] = 3,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(70), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(48), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [253] = 5,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_BANG,
    STATE(21), 1,
      sym_arguments,
    ACTIONS(72), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(7), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [275] = 4,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_BANG,
    ACTIONS(74), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(18), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [294] = 4,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_BANG,
    ACTIONS(76), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(6), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [313] = 4,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_BANG,
    ACTIONS(78), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(5), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [332] = 4,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_BANG,
    ACTIONS(80), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(11), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [351] = 4,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_BANG,
    ACTIONS(82), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(8), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [370] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(86), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(48), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [387] = 4,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(90), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [405] = 4,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(20), 1,
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
  [423] = 2,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(97), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [435] = 3,
    ACTIONS(103), 1,
      sym__write_outro,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [449] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [460] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [471] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [482] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [493] = 2,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(117), 4,
      sym_local_variable,
      sym_global_variable,
      anon_sym_BANG,
      sym_literal,
  [503] = 2,
    STATE(29), 1,
      sym__variable,
    ACTIONS(121), 2,
      sym_local_variable,
      sym_global_variable,
  [511] = 1,
    ACTIONS(123), 1,
      anon_sym_EQ,
  [515] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 193,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 275,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 332,
  [SMALL_STATE(17)] = 351,
  [SMALL_STATE(18)] = 370,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 423,
  [SMALL_STATE(22)] = 435,
  [SMALL_STATE(23)] = 449,
  [SMALL_STATE(24)] = 460,
  [SMALL_STATE(25)] = 471,
  [SMALL_STATE(26)] = 482,
  [SMALL_STATE(27)] = 493,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 511,
  [SMALL_STATE(30)] = 515,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_call, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_call, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_call, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_call, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
