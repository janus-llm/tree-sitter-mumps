#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  sym_literal = 38,
  sym_program = 39,
  sym__statement = 40,
  sym_conditional = 41,
  sym__simple_statement = 42,
  sym__compound_statement = 43,
  sym_for_statement = 44,
  sym__loop_range = 45,
  sym_if_statement = 46,
  sym__expression = 47,
  sym__identifier = 48,
  sym__variable = 49,
  sym_unary_expression = 50,
  sym_binary_expression = 51,
  sym_arguments = 52,
  sym_function = 53,
  sym_call = 54,
  sym__write_call = 55,
  sym__typical_call = 56,
  sym_assignment = 57,
  aux_sym_program_repeat1 = 58,
  aux_sym__loop_range_repeat1 = 59,
  aux_sym_arguments_repeat1 = 60,
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
  [sym_literal] = "literal",
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
  [sym_literal] = sym_literal,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '^') ADVANCE(10);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 's') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '^') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '(' || ',' < lookahead) &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '^') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
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
          (lookahead < '(' || '-' < lookahead) &&
          lookahead != '=') ADVANCE(63);
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
          (lookahead < '(' || '-' < lookahead) &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '(' || '-' < lookahead) &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__write_outro);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'f') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 'r') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__alphanum);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '(' || '-' < lookahead) &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          (lookahead < '(' || '-' < lookahead) &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE_EQ] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__write_outro] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym__numeric] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(38),
    [sym__statement] = STATE(8),
    [sym__simple_statement] = STATE(8),
    [sym__compound_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_function] = STATE(12),
    [sym_call] = STATE(8),
    [sym__write_call] = STATE(24),
    [sym__typical_call] = STATE(20),
    [sym_assignment] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [sym__set] = ACTIONS(9),
    [sym__alphanum] = ACTIONS(11),
  },
  [2] = {
    [aux_sym_arguments_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_SQUOTE_GT] = ACTIONS(17),
    [anon_sym_SQUOTE_LT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_EQ] = ACTIONS(17),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(21),
    [sym__write_outro] = ACTIONS(13),
    [sym__set] = ACTIONS(15),
    [sym__alphanum] = ACTIONS(15),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_SQUOTE_GT] = ACTIONS(23),
    [anon_sym_SQUOTE_LT] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [sym__write_outro] = ACTIONS(23),
    [sym__set] = ACTIONS(25),
    [sym__alphanum] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_SQUOTE_GT] = ACTIONS(27),
    [anon_sym_SQUOTE_LT] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_EQ] = ACTIONS(27),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [sym__write_outro] = ACTIONS(27),
    [sym__set] = ACTIONS(29),
    [sym__alphanum] = ACTIONS(29),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_SQUOTE_GT] = ACTIONS(17),
    [anon_sym_SQUOTE_LT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_EQ] = ACTIONS(17),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(33),
    [sym__write_outro] = ACTIONS(31),
    [sym__set] = ACTIONS(33),
    [sym__alphanum] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(37), 4,
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
  [39] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(41), 4,
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
  [77] = 10,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_comment,
    STATE(12), 1,
      sym_function,
    STATE(20), 1,
      sym__typical_call,
    STATE(24), 1,
      sym__write_call,
    STATE(9), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [115] = 10,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_for,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      sym__set,
    ACTIONS(61), 1,
      sym__alphanum,
    STATE(12), 1,
      sym_function,
    STATE(20), 1,
      sym__typical_call,
    STATE(24), 1,
      sym__write_call,
    STATE(9), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
      aux_sym_program_repeat1,
  [153] = 9,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(64), 1,
      sym_comment,
    STATE(12), 1,
      sym_function,
    STATE(20), 1,
      sym__typical_call,
    STATE(24), 1,
      sym__write_call,
    STATE(23), 7,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
  [187] = 9,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__alphanum,
    ACTIONS(66), 1,
      sym_comment,
    STATE(12), 1,
      sym_function,
    STATE(20), 1,
      sym__typical_call,
    STATE(24), 1,
      sym__write_call,
    STATE(25), 7,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_for_statement,
      sym_if_statement,
      sym_call,
      sym_assignment,
  [221] = 5,
    ACTIONS(70), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_arguments,
    ACTIONS(68), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(2), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [243] = 5,
    ACTIONS(70), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_conditional,
    ACTIONS(74), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(7), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [265] = 4,
    ACTIONS(70), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
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
  [284] = 4,
    ACTIONS(70), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(4), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [303] = 4,
    ACTIONS(70), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(5), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [322] = 4,
    ACTIONS(70), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(82), 3,
      sym_local_variable,
      sym_global_variable,
      sym_literal,
    STATE(3), 5,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
  [341] = 4,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(86), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [359] = 4,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(33), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [377] = 3,
    ACTIONS(95), 1,
      sym__write_outro,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [391] = 2,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym__write_outro,
    ACTIONS(99), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [403] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [414] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [425] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [436] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_for,
      anon_sym_if,
      sym__set,
      sym__alphanum,
  [447] = 2,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(113), 4,
      sym_local_variable,
      sym_global_variable,
      anon_sym_SQUOTE,
      sym_literal,
  [457] = 3,
    STATE(29), 1,
      sym__variable,
    STATE(36), 1,
      sym__loop_range,
    ACTIONS(117), 2,
      sym_local_variable,
      sym_global_variable,
  [468] = 2,
    ACTIONS(119), 2,
      sym_local_variable,
      sym_global_variable,
    STATE(37), 2,
      sym__identifier,
      sym__variable,
  [477] = 3,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(123), 1,
      anon_sym_do,
    STATE(32), 1,
      aux_sym__loop_range_repeat1,
  [487] = 2,
    STATE(35), 1,
      sym__variable,
    ACTIONS(125), 2,
      sym_local_variable,
      sym_global_variable,
  [495] = 2,
    STATE(34), 1,
      sym__variable,
    ACTIONS(127), 2,
      sym_local_variable,
      sym_global_variable,
  [503] = 3,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(129), 1,
      anon_sym_do,
    STATE(33), 1,
      aux_sym__loop_range_repeat1,
  [513] = 3,
    ACTIONS(131), 1,
      anon_sym_COLON,
    ACTIONS(134), 1,
      anon_sym_do,
    STATE(33), 1,
      aux_sym__loop_range_repeat1,
  [523] = 1,
    ACTIONS(134), 2,
      anon_sym_COLON,
      anon_sym_do,
  [528] = 1,
    ACTIONS(136), 1,
      anon_sym_EQ,
  [532] = 1,
    ACTIONS(138), 1,
      anon_sym_do,
  [536] = 1,
    ACTIONS(140), 1,
      anon_sym_EQ,
  [540] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 77,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 284,
  [SMALL_STATE(16)] = 303,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 341,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 377,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 414,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 447,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 468,
  [SMALL_STATE(29)] = 477,
  [SMALL_STATE(30)] = 487,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 503,
  [SMALL_STATE(33)] = 513,
  [SMALL_STATE(34)] = 523,
  [SMALL_STATE(35)] = 528,
  [SMALL_STATE(36)] = 532,
  [SMALL_STATE(37)] = 536,
  [SMALL_STATE(38)] = 540,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_call, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_call, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_call, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_call, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(31),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
