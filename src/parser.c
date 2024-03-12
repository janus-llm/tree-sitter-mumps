#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 5
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
  [11] = 6,
  [12] = 7,
  [13] = 8,
  [14] = 9,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 6,
  [19] = 19,
  [20] = 9,
  [21] = 21,
  [22] = 8,
  [23] = 7,
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
  [36] = 33,
  [37] = 33,
  [38] = 33,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 39,
  [43] = 39,
  [44] = 39,
  [45] = 7,
  [46] = 6,
  [47] = 9,
  [48] = 8,
  [49] = 15,
  [50] = 19,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 54,
  [59] = 57,
  [60] = 57,
  [61] = 54,
  [62] = 57,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 68,
  [71] = 68,
  [72] = 64,
  [73] = 64,
  [74] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '^') ADVANCE(7);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 's') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '^') ADVANCE(60);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 's') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ',') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '^') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '*' || ',' < lookahead)) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 's') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '^') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '^') ADVANCE(60);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 's') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > 31) ADVANCE(61);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '^') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 's') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '*' &&
          lookahead != '+') ADVANCE(61);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(11);
      if (!eof && (0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          ('*' <= lookahead && lookahead <= '-')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '%') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '%') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__write_outro);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == '%') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_local_array_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == '"') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '*' || '-' < lookahead)) ADVANCE(61);
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
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
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
    [sym_local_variable] = ACTIONS(1),
    [sym_global_variable] = ACTIONS(1),
    [aux_sym_local_array_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_local_array_token2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__alphanum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(65),
    [sym__statement] = STATE(2),
    [sym_conditional] = STATE(51),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym__expression] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym__write_call] = STATE(2),
    [sym_function] = STATE(31),
    [sym_call] = STATE(24),
    [sym_assignment] = STATE(2),
    [sym_local_array] = STATE(49),
    [aux_sym_program_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [sym__set] = ACTIONS(13),
    [sym_local_variable] = ACTIONS(15),
    [sym_global_variable] = ACTIONS(15),
    [aux_sym_local_array_token1] = ACTIONS(17),
    [sym__alphanum] = ACTIONS(19),
    [sym_literal] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_conditional] = STATE(51),
    [sym__simple_statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym__expression] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym__write_call] = STATE(3),
    [sym_function] = STATE(31),
    [sym_call] = STATE(24),
    [sym_assignment] = STATE(3),
    [sym_local_array] = STATE(49),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [sym__set] = ACTIONS(13),
    [sym_local_variable] = ACTIONS(15),
    [sym_global_variable] = ACTIONS(15),
    [aux_sym_local_array_token1] = ACTIONS(17),
    [sym__alphanum] = ACTIONS(19),
    [sym_literal] = ACTIONS(15),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_conditional] = STATE(51),
    [sym__simple_statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym__expression] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym__write_call] = STATE(3),
    [sym_function] = STATE(31),
    [sym_call] = STATE(24),
    [sym_assignment] = STATE(3),
    [sym_local_array] = STATE(49),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(30),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(36),
    [anon_sym_BANG] = ACTIONS(39),
    [sym__set] = ACTIONS(42),
    [sym_local_variable] = ACTIONS(45),
    [sym_global_variable] = ACTIONS(45),
    [aux_sym_local_array_token1] = ACTIONS(48),
    [sym__alphanum] = ACTIONS(51),
    [sym_literal] = ACTIONS(45),
  },
  [4] = {
    [sym__statement] = STATE(28),
    [sym_conditional] = STATE(51),
    [sym__simple_statement] = STATE(28),
    [sym__compound_statement] = STATE(28),
    [sym_for_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym__expression] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym__write_call] = STATE(28),
    [sym_function] = STATE(31),
    [sym_call] = STATE(24),
    [sym_assignment] = STATE(28),
    [sym_local_array] = STATE(49),
    [sym_comment] = ACTIONS(54),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [sym__set] = ACTIONS(13),
    [sym_local_variable] = ACTIONS(15),
    [sym_global_variable] = ACTIONS(15),
    [aux_sym_local_array_token1] = ACTIONS(17),
    [sym__alphanum] = ACTIONS(19),
    [sym_literal] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym__write_outro,
    ACTIONS(62), 2,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(60), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(58), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [32] = 2,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym__write_outro,
    ACTIONS(68), 13,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_COMMA,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [55] = 2,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym__write_outro,
    ACTIONS(72), 13,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_COMMA,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [78] = 2,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym__write_outro,
    ACTIONS(76), 13,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_COMMA,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [101] = 2,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym__write_outro,
    ACTIONS(80), 13,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_COMMA,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [124] = 4,
    ACTIONS(62), 2,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym__write_outro,
    ACTIONS(60), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(84), 11,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_COMMA,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [151] = 2,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(68), 13,
      sym_comment,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [172] = 2,
    ACTIONS(70), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(72), 13,
      sym_comment,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [193] = 2,
    ACTIONS(74), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(76), 13,
      sym_comment,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [214] = 2,
    ACTIONS(78), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(80), 13,
      sym_comment,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [235] = 4,
    ACTIONS(88), 1,
      anon_sym_EQ,
    ACTIONS(92), 2,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(90), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(86), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [260] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 2,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(60), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(96), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [285] = 4,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym__write_outro,
    ACTIONS(100), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [309] = 2,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(68), 12,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [329] = 3,
    ACTIONS(106), 2,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(104), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(102), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [351] = 2,
    ACTIONS(78), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(80), 12,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [371] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym__write_outro,
    ACTIONS(84), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [395] = 2,
    ACTIONS(74), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(76), 12,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [415] = 2,
    ACTIONS(70), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(72), 12,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym__,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [435] = 3,
    ACTIONS(115), 1,
      sym__write_outro,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    ACTIONS(113), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [455] = 3,
    ACTIONS(115), 1,
      sym__write_outro,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    ACTIONS(119), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [475] = 2,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym__write_outro,
    ACTIONS(123), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [493] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    ACTIONS(119), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [510] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    ACTIONS(127), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [527] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    ACTIONS(131), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [544] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    ACTIONS(135), 10,
      sym_comment,
      anon_sym_for,
      anon_sym_if,
      anon_sym_BANG,
      sym__set,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym__alphanum,
      sym_literal,
  [561] = 6,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_BANG,
    ACTIONS(143), 1,
      aux_sym_local_array_token1,
    STATE(26), 1,
      sym_arguments,
    ACTIONS(141), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(5), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [585] = 6,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_BANG,
    ACTIONS(151), 1,
      aux_sym_local_array_token1,
    STATE(4), 1,
      sym_conditional,
    ACTIONS(149), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(15), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [609] = 5,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      aux_sym_local_array_token1,
    ACTIONS(153), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(47), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [630] = 5,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_BANG,
    ACTIONS(143), 1,
      aux_sym_local_array_token1,
    ACTIONS(155), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(10), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [651] = 5,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_BANG,
    ACTIONS(143), 1,
      aux_sym_local_array_token1,
    ACTIONS(157), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(16), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [672] = 5,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(165), 1,
      aux_sym_local_array_token1,
    ACTIONS(163), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(20), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [693] = 5,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_BANG,
    ACTIONS(143), 1,
      aux_sym_local_array_token1,
    ACTIONS(167), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(9), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [714] = 5,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_BANG,
    ACTIONS(151), 1,
      aux_sym_local_array_token1,
    ACTIONS(169), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(14), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [735] = 5,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      aux_sym_local_array_token1,
    ACTIONS(171), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(48), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [756] = 5,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      aux_sym_local_array_token1,
    ACTIONS(173), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(50), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [777] = 5,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(165), 1,
      aux_sym_local_array_token1,
    ACTIONS(175), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(19), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [798] = 5,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_BANG,
    ACTIONS(151), 1,
      aux_sym_local_array_token1,
    ACTIONS(177), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(13), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [819] = 5,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(165), 1,
      aux_sym_local_array_token1,
    ACTIONS(179), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(22), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [840] = 5,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_BANG,
    ACTIONS(143), 1,
      aux_sym_local_array_token1,
    ACTIONS(181), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(8), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_local_array,
  [861] = 2,
    ACTIONS(72), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(70), 7,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [875] = 2,
    ACTIONS(68), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(66), 7,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [889] = 2,
    ACTIONS(80), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(78), 7,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [903] = 2,
    ACTIONS(76), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(74), 7,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [917] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(86), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(187), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [935] = 3,
    ACTIONS(189), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym__set,
      sym__alphanum,
    ACTIONS(187), 5,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym__,
  [950] = 6,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__alphanum,
    ACTIONS(191), 1,
      sym_comment,
    STATE(25), 1,
      sym_call,
    STATE(31), 1,
      sym_function,
    STATE(27), 2,
      sym__write_call,
      sym_assignment,
  [970] = 2,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 5,
      anon_sym_BANG,
      sym_local_variable,
      sym_global_variable,
      aux_sym_local_array_token1,
      sym_literal,
  [981] = 3,
    ACTIONS(17), 1,
      aux_sym_local_array_token1,
    ACTIONS(197), 2,
      sym_local_variable,
      sym_global_variable,
    STATE(67), 2,
      sym__variable,
      sym_local_array,
  [993] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_local_array_repeat1,
  [1003] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_local_array_repeat1,
  [1013] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_local_array_repeat1,
  [1023] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_local_array_repeat1,
  [1033] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_local_array_repeat1,
  [1043] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_local_array_repeat1,
  [1053] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_local_array_repeat1,
  [1063] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_local_array_repeat1,
  [1073] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_local_array_repeat1,
  [1083] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1088] = 1,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
  [1092] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [1096] = 1,
    ACTIONS(226), 1,
      aux_sym_local_array_token2,
  [1100] = 1,
    ACTIONS(228), 1,
      anon_sym_EQ,
  [1104] = 1,
    ACTIONS(230), 1,
      aux_sym_local_array_token2,
  [1108] = 1,
    ACTIONS(232), 1,
      aux_sym_local_array_token2,
  [1112] = 1,
    ACTIONS(234), 1,
      aux_sym_local_array_token2,
  [1116] = 1,
    ACTIONS(236), 1,
      aux_sym_local_array_token2,
  [1120] = 1,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
  [1124] = 1,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
  [1128] = 1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 309,
  [SMALL_STATE(19)] = 329,
  [SMALL_STATE(20)] = 351,
  [SMALL_STATE(21)] = 371,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 435,
  [SMALL_STATE(25)] = 455,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 493,
  [SMALL_STATE(28)] = 510,
  [SMALL_STATE(29)] = 527,
  [SMALL_STATE(30)] = 544,
  [SMALL_STATE(31)] = 561,
  [SMALL_STATE(32)] = 585,
  [SMALL_STATE(33)] = 609,
  [SMALL_STATE(34)] = 630,
  [SMALL_STATE(35)] = 651,
  [SMALL_STATE(36)] = 672,
  [SMALL_STATE(37)] = 693,
  [SMALL_STATE(38)] = 714,
  [SMALL_STATE(39)] = 735,
  [SMALL_STATE(40)] = 756,
  [SMALL_STATE(41)] = 777,
  [SMALL_STATE(42)] = 798,
  [SMALL_STATE(43)] = 819,
  [SMALL_STATE(44)] = 840,
  [SMALL_STATE(45)] = 861,
  [SMALL_STATE(46)] = 875,
  [SMALL_STATE(47)] = 889,
  [SMALL_STATE(48)] = 903,
  [SMALL_STATE(49)] = 917,
  [SMALL_STATE(50)] = 935,
  [SMALL_STATE(51)] = 950,
  [SMALL_STATE(52)] = 970,
  [SMALL_STATE(53)] = 981,
  [SMALL_STATE(54)] = 993,
  [SMALL_STATE(55)] = 1003,
  [SMALL_STATE(56)] = 1013,
  [SMALL_STATE(57)] = 1023,
  [SMALL_STATE(58)] = 1033,
  [SMALL_STATE(59)] = 1043,
  [SMALL_STATE(60)] = 1053,
  [SMALL_STATE(61)] = 1063,
  [SMALL_STATE(62)] = 1073,
  [SMALL_STATE(63)] = 1083,
  [SMALL_STATE(64)] = 1088,
  [SMALL_STATE(65)] = 1092,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1100,
  [SMALL_STATE(68)] = 1104,
  [SMALL_STATE(69)] = 1108,
  [SMALL_STATE(70)] = 1112,
  [SMALL_STATE(71)] = 1116,
  [SMALL_STATE(72)] = 1120,
  [SMALL_STATE(73)] = 1124,
  [SMALL_STATE(74)] = 1128,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_call, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_call, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2), SHIFT_REPEAT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_array_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
