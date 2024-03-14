#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_COLON = 2,
  anon_sym_for = 3,
  anon_sym_EQ = 4,
  anon_sym_do = 5,
  anon_sym_if = 6,
  sym_local_variable = 7,
  sym_global_variable = 8,
  anon_sym_DASH = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_STAR = 11,
  anon_sym_PLUS = 12,
  anon_sym_SLASH = 13,
  anon_sym_BSLASH = 14,
  anon_sym_POUND = 15,
  anon_sym_STAR_STAR = 16,
  anon_sym_GT = 17,
  anon_sym_LT = 18,
  anon_sym_SQUOTE_GT = 19,
  anon_sym_SQUOTE_LT = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_QMARK = 23,
  anon_sym_RBRACK_RBRACK = 24,
  anon_sym_SQUOTE_EQ = 25,
  anon_sym_SQUOTE_LBRACK = 26,
  anon_sym_SQUOTE_RBRACK = 27,
  anon_sym_SQUOTE_QMARK = 28,
  anon_sym_SQUOTE_RBRACK_RBRACK = 29,
  anon_sym__ = 30,
  anon_sym_AMP = 31,
  anon_sym_BANG = 32,
  anon_sym_COMMA = 33,
  sym__write_outro = 34,
  sym__set = 35,
  sym__numeric = 36,
  sym__alphanum = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  sym_integer = 40,
  sym_float = 41,
  sym_string = 42,
  sym_program = 43,
  sym__statement = 44,
  sym_conditional = 45,
  sym__simple_statement = 46,
  sym__compound_statement = 47,
  sym_for_statement = 48,
  sym__loop_range = 49,
  sym_if_statement = 50,
  sym__expression = 51,
  sym__identifier = 52,
  sym__variable = 53,
  sym_unary_expression = 54,
  sym_binary_expression = 55,
  sym_arguments = 56,
  sym_function = 57,
  sym_call = 58,
  sym__write_call = 59,
  sym__typical_call = 60,
  sym_assignment = 61,
  sym_literal = 62,
  sym_boolean = 63,
  aux_sym_program_repeat1 = 64,
  aux_sym__loop_range_repeat1 = 65,
  aux_sym_arguments_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_for] = "for",
  [anon_sym_EQ] = "=",
  [anon_sym_do] = "do",
  [anon_sym_if] = "if",
  [sym_local_variable] = "local_variable",
  [sym_global_variable] = "global_variable",
  [anon_sym_DASH] = "-",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND] = "#",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_SQUOTE_GT] = "'>",
  [anon_sym_SQUOTE_LT] = "'<",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_QMARK] = "\?",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_SQUOTE_EQ] = "'=",
  [anon_sym_SQUOTE_LBRACK] = "'[",
  [anon_sym_SQUOTE_RBRACK] = "']",
  [anon_sym_SQUOTE_QMARK] = "'\?",
  [anon_sym_SQUOTE_RBRACK_RBRACK] = "']]",
  [anon_sym__] = "_",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG] = "!",
  [anon_sym_COMMA] = ",",
  [sym__write_outro] = "_write_outro",
  [sym__set] = "_set",
  [sym__numeric] = "_numeric",
  [sym__alphanum] = "_alphanum",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_conditional] = "conditional",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_for_statement] = "for_statement",
  [sym__loop_range] = "_loop_range",
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
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__loop_range_repeat1] = "_loop_range_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_if] = anon_sym_if,
  [sym_local_variable] = sym_local_variable,
  [sym_global_variable] = sym_global_variable,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SQUOTE_GT] = anon_sym_SQUOTE_GT,
  [anon_sym_SQUOTE_LT] = anon_sym_SQUOTE_LT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_SQUOTE_EQ] = anon_sym_SQUOTE_EQ,
  [anon_sym_SQUOTE_LBRACK] = anon_sym_SQUOTE_LBRACK,
  [anon_sym_SQUOTE_RBRACK] = anon_sym_SQUOTE_RBRACK,
  [anon_sym_SQUOTE_QMARK] = anon_sym_SQUOTE_QMARK,
  [anon_sym_SQUOTE_RBRACK_RBRACK] = anon_sym_SQUOTE_RBRACK_RBRACK,
  [anon_sym__] = anon_sym__,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__write_outro] = sym__write_outro,
  [sym__set] = sym__set,
  [sym__numeric] = sym__numeric,
  [sym__alphanum] = sym__alphanum,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_conditional] = sym_conditional,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_for_statement] = sym_for_statement,
  [sym__loop_range] = sym__loop_range,
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
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__loop_range_repeat1] = aux_sym__loop_range_repeat1,
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
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
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
  [anon_sym_SQUOTE] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym__numeric] = {
    .visible = false,
    .named = true,
  },
  [sym__alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [sym__loop_range] = {
    .visible = false,
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__loop_range_repeat1] = {
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(59);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '^') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 's') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(59);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__write_outro);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'f') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'r') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_global_variable] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SQUOTE_GT] = ACTIONS(1),
    [anon_sym_SQUOTE_LT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(1),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__write_outro] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym__numeric] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(40),
    [sym__statement] = STATE(11),
    [sym__simple_statement] = STATE(11),
    [sym__compound_statement] = STATE(11),
    [sym_for_statement] = STATE(11),
    [sym_if_statement] = STATE(11),
    [sym_function] = STATE(10),
    [sym_call] = STATE(11),
    [sym__write_call] = STATE(27),
    [sym__typical_call] = STATE(23),
    [sym_assignment] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [sym__set] = ACTIONS(9),
    [sym__alphanum] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(15), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(17), 21,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
  [46] = 4,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(25), 5,
      anon_sym_for,
      anon_sym_if,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(17), 21,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
  [87] = 2,
    ACTIONS(29), 8,
      anon_sym_for,
      anon_sym_if,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(27), 24,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
      sym__write_outro,
  [124] = 2,
    ACTIONS(33), 8,
      anon_sym_for,
      anon_sym_if,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(31), 24,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
      sym__write_outro,
  [161] = 2,
    ACTIONS(37), 8,
      anon_sym_for,
      anon_sym_if,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(35), 24,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
      sym__write_outro,
  [198] = 2,
    ACTIONS(41), 8,
      anon_sym_for,
      anon_sym_if,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
      sym__set,
      sym__alphanum,
    ACTIONS(39), 24,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
      sym__write_outro,
  [235] = 4,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(45), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(17), 21,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
  [274] = 4,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(49), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
    ACTIONS(17), 21,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      anon_sym_BANG,
  [312] = 9,
    ACTIONS(51), 1,
      sym_local_variable,
    ACTIONS(53), 1,
      sym_global_variable,
    ACTIONS(59), 1,
      sym_integer,
    STATE(6), 1,
      sym_boolean,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      sym_float,
      sym_string,
    STATE(2), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [348] = 10,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_comment,
    STATE(10), 1,
      sym_function,
    STATE(23), 1,
      sym__typical_call,
    STATE(27), 1,
      sym__write_call,
    STATE(13), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [386] = 9,
    ACTIONS(59), 1,
      sym_integer,
    ACTIONS(67), 1,
      sym_local_variable,
    ACTIONS(69), 1,
      sym_global_variable,
    STATE(6), 1,
      sym_boolean,
    STATE(18), 1,
      sym_conditional,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      sym_float,
      sym_string,
    STATE(9), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [422] = 10,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym__set,
    ACTIONS(85), 1,
      sym__alphanum,
    STATE(10), 1,
      sym_function,
    STATE(23), 1,
      sym__typical_call,
    STATE(27), 1,
      sym__write_call,
    STATE(13), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [460] = 8,
    ACTIONS(59), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_local_variable,
    ACTIONS(90), 1,
      sym_global_variable,
    STATE(6), 1,
      sym_boolean,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      sym_float,
      sym_string,
    STATE(4), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [493] = 8,
    ACTIONS(59), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_local_variable,
    ACTIONS(94), 1,
      sym_global_variable,
    STATE(6), 1,
      sym_boolean,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      sym_float,
      sym_string,
    STATE(3), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [526] = 8,
    ACTIONS(59), 1,
      sym_integer,
    ACTIONS(96), 1,
      sym_local_variable,
    ACTIONS(98), 1,
      sym_global_variable,
    STATE(6), 1,
      sym_boolean,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      sym_float,
      sym_string,
    STATE(7), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [559] = 8,
    ACTIONS(59), 1,
      sym_integer,
    ACTIONS(100), 1,
      sym_local_variable,
    ACTIONS(102), 1,
      sym_global_variable,
    STATE(6), 1,
      sym_boolean,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      sym_float,
      sym_string,
    STATE(8), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [592] = 9,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(104), 1,
      sym_comment,
    STATE(10), 1,
      sym_function,
    STATE(23), 1,
      sym__typical_call,
    STATE(27), 1,
      sym__write_call,
    STATE(26), 7,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
  [626] = 9,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(106), 1,
      sym_comment,
    STATE(10), 1,
      sym_function,
    STATE(23), 1,
      sym__typical_call,
    STATE(27), 1,
      sym__write_call,
    STATE(28), 7,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
  [660] = 2,
    ACTIONS(108), 4,
      sym_local_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
    ACTIONS(110), 5,
      sym_global_variable,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      sym_string,
  [674] = 4,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(25), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [692] = 4,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(117), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [710] = 3,
    ACTIONS(123), 1,
      sym__write_outro,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [724] = 2,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(127), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [736] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(131), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [747] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(135), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [758] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [769] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(139), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [780] = 3,
    STATE(31), 1,
      sym__variable,
    STATE(37), 1,
      sym__loop_range,
    ACTIONS(141), 2,
      sym_local_variable,
      sym_global_variable,
  [791] = 2,
    ACTIONS(143), 2,
      sym_local_variable,
      sym_global_variable,
    STATE(39), 2,
      sym__identifier,
      sym__variable,
  [800] = 3,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(147), 1,
      anon_sym_do,
    STATE(34), 1,
      aux_sym__loop_range_repeat1,
  [810] = 2,
    STATE(38), 1,
      sym__variable,
    ACTIONS(149), 2,
      sym_local_variable,
      sym_global_variable,
  [818] = 2,
    STATE(36), 1,
      sym__variable,
    ACTIONS(151), 2,
      sym_local_variable,
      sym_global_variable,
  [826] = 3,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_do,
    STATE(35), 1,
      aux_sym__loop_range_repeat1,
  [836] = 3,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(158), 1,
      anon_sym_do,
    STATE(35), 1,
      aux_sym__loop_range_repeat1,
  [846] = 1,
    ACTIONS(158), 2,
      anon_sym_COLON,
      anon_sym_do,
  [851] = 1,
    ACTIONS(160), 1,
      anon_sym_do,
  [855] = 1,
    ACTIONS(162), 1,
      anon_sym_EQ,
  [859] = 1,
    ACTIONS(164), 1,
      anon_sym_EQ,
  [863] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 235,
  [SMALL_STATE(9)] = 274,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 348,
  [SMALL_STATE(12)] = 386,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 493,
  [SMALL_STATE(16)] = 526,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 592,
  [SMALL_STATE(19)] = 626,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 674,
  [SMALL_STATE(22)] = 692,
  [SMALL_STATE(23)] = 710,
  [SMALL_STATE(24)] = 724,
  [SMALL_STATE(25)] = 736,
  [SMALL_STATE(26)] = 747,
  [SMALL_STATE(27)] = 758,
  [SMALL_STATE(28)] = 769,
  [SMALL_STATE(29)] = 780,
  [SMALL_STATE(30)] = 791,
  [SMALL_STATE(31)] = 800,
  [SMALL_STATE(32)] = 810,
  [SMALL_STATE(33)] = 818,
  [SMALL_STATE(34)] = 826,
  [SMALL_STATE(35)] = 836,
  [SMALL_STATE(36)] = 846,
  [SMALL_STATE(37)] = 851,
  [SMALL_STATE(38)] = 855,
  [SMALL_STATE(39)] = 859,
  [SMALL_STATE(40)] = 863,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_call, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_call, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_call, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_call, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
