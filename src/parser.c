#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__eol_comment = 1,
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
  sym__write_read_outro = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_b = 36,
  anon_sym_break = 37,
  anon_sym_c = 38,
  anon_sym_close = 39,
  anon_sym_d = 40,
  anon_sym_e = 41,
  anon_sym_else = 42,
  anon_sym_f = 43,
  anon_sym_g = 44,
  anon_sym_goto = 45,
  anon_sym_h = 46,
  anon_sym_halt = 47,
  anon_sym_hang = 48,
  anon_sym_i = 49,
  anon_sym_j = 50,
  anon_sym_job = 51,
  anon_sym_l = 52,
  anon_sym_lock = 53,
  anon_sym_k = 54,
  anon_sym_kill = 55,
  anon_sym_m = 56,
  anon_sym_merge = 57,
  anon_sym_n = 58,
  anon_sym_new = 59,
  anon_sym_o = 60,
  anon_sym_open = 61,
  anon_sym_q = 62,
  anon_sym_quit = 63,
  anon_sym_r = 64,
  anon_sym_read = 65,
  anon_sym_tc = 66,
  anon_sym_tcommit = 67,
  anon_sym_tre = 68,
  anon_sym_trestart = 69,
  anon_sym_tro = 70,
  anon_sym_trollback = 71,
  anon_sym_ts = 72,
  anon_sym_tstart = 73,
  anon_sym_u = 74,
  anon_sym_use = 75,
  anon_sym_v = 76,
  anon_sym_view = 77,
  anon_sym_w = 78,
  anon_sym_write = 79,
  anon_sym_x = 80,
  anon_sym_xecute = 81,
  anon_sym_z = 82,
  anon_sym_LPAREN = 83,
  anon_sym_RPAREN = 84,
  sym__set = 85,
  sym__numeric = 86,
  sym__alphanum = 87,
  anon_sym_true = 88,
  anon_sym_false = 89,
  sym_integer = 90,
  sym_float = 91,
  sym_string = 92,
  sym__line_comment = 93,
  sym_label = 94,
  sym_program = 95,
  sym__statement = 96,
  sym_comment = 97,
  sym_conditional = 98,
  sym__simple_statement = 99,
  sym__compound_statement = 100,
  sym_for_statement = 101,
  sym__loop_range = 102,
  sym_if_statement = 103,
  sym__expression = 104,
  sym__identifier = 105,
  sym__variable = 106,
  sym_unary_expression = 107,
  sym_binary_expression = 108,
  sym_arguments = 109,
  sym_function = 110,
  sym_call = 111,
  sym_command = 112,
  sym__write_read_call = 113,
  sym__typical_call = 114,
  sym_assignment = 115,
  sym_literal = 116,
  sym_boolean = 117,
  aux_sym_program_repeat1 = 118,
  aux_sym__loop_range_repeat1 = 119,
  aux_sym_arguments_repeat1 = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__eol_comment] = "_eol_comment",
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
  [sym__write_read_outro] = "_write_read_outro",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_b] = "b",
  [anon_sym_break] = "break",
  [anon_sym_c] = "c",
  [anon_sym_close] = "close",
  [anon_sym_d] = "d",
  [anon_sym_e] = "e",
  [anon_sym_else] = "else",
  [anon_sym_f] = "f",
  [anon_sym_g] = "g",
  [anon_sym_goto] = "goto",
  [anon_sym_h] = "h",
  [anon_sym_halt] = "halt",
  [anon_sym_hang] = "hang",
  [anon_sym_i] = "i",
  [anon_sym_j] = "j",
  [anon_sym_job] = "job",
  [anon_sym_l] = "l",
  [anon_sym_lock] = "lock",
  [anon_sym_k] = "k",
  [anon_sym_kill] = "kill",
  [anon_sym_m] = "m",
  [anon_sym_merge] = "merge",
  [anon_sym_n] = "n",
  [anon_sym_new] = "new",
  [anon_sym_o] = "o",
  [anon_sym_open] = "open",
  [anon_sym_q] = "q",
  [anon_sym_quit] = "quit",
  [anon_sym_r] = "r",
  [anon_sym_read] = "read",
  [anon_sym_tc] = "tc",
  [anon_sym_tcommit] = "tcommit",
  [anon_sym_tre] = "tre",
  [anon_sym_trestart] = "trestart",
  [anon_sym_tro] = "tro",
  [anon_sym_trollback] = "trollback",
  [anon_sym_ts] = "ts",
  [anon_sym_tstart] = "tstart",
  [anon_sym_u] = "u",
  [anon_sym_use] = "use",
  [anon_sym_v] = "v",
  [anon_sym_view] = "view",
  [anon_sym_w] = "w",
  [anon_sym_write] = "write",
  [anon_sym_x] = "x",
  [anon_sym_xecute] = "xecute",
  [anon_sym_z] = "z",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__set] = "_set",
  [sym__numeric] = "_numeric",
  [sym__alphanum] = "_alphanum",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym__line_comment] = "_line_comment",
  [sym_label] = "label",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
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
  [sym_command] = "command",
  [sym__write_read_call] = "_write_read_call",
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
  [sym__eol_comment] = sym__eol_comment,
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
  [sym__write_read_outro] = sym__write_read_outro,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_halt] = anon_sym_halt,
  [anon_sym_hang] = anon_sym_hang,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_job] = anon_sym_job,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_q] = anon_sym_q,
  [anon_sym_quit] = anon_sym_quit,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_tc] = anon_sym_tc,
  [anon_sym_tcommit] = anon_sym_tcommit,
  [anon_sym_tre] = anon_sym_tre,
  [anon_sym_trestart] = anon_sym_trestart,
  [anon_sym_tro] = anon_sym_tro,
  [anon_sym_trollback] = anon_sym_trollback,
  [anon_sym_ts] = anon_sym_ts,
  [anon_sym_tstart] = anon_sym_tstart,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_view] = anon_sym_view,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_xecute] = anon_sym_xecute,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__set] = sym__set,
  [sym__numeric] = sym__numeric,
  [sym__alphanum] = sym__alphanum,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym__line_comment] = sym__line_comment,
  [sym_label] = sym_label,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
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
  [sym_command] = sym_command,
  [sym__write_read_call] = sym__write_read_call,
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
  [sym__eol_comment] = {
    .visible = false,
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
  [sym__write_read_outro] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_halt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_job] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_q] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcommit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trestart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trollback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tstart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_view] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xecute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
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
  [sym_comment] = {
    .visible = true,
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
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__write_read_call] = {
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
  [11] = 6,
  [12] = 9,
  [13] = 8,
  [14] = 5,
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
  [34] = 3,
  [35] = 4,
  [36] = 6,
  [37] = 5,
  [38] = 8,
  [39] = 9,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 42,
  [45] = 42,
  [46] = 41,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 21,
  [51] = 51,
  [52] = 24,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(172);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '&') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '?') ADVANCE(163);
      if (lookahead == '[') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == '_') ADVANCE(170);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'j') ADVANCE(205);
      if (lookahead == 'k') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 'q') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == 'z') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 't') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(286);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '?') ADVANCE(168);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == ']') ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '^') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(211);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(179);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(247);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(223);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(259);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 64:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 67:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(172);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '&') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(173);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '?') ADVANCE(163);
      if (lookahead == '[') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == '_') ADVANCE(170);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'j') ADVANCE(205);
      if (lookahead == 'k') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 'q') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == 'z') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(146);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(172);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(176);
      if (lookahead == '&') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '?') ADVANCE(163);
      if (lookahead == '[') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == '_') ADVANCE(170);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'j') ADVANCE(206);
      if (lookahead == 'k') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 'q') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(257);
      if (lookahead == 'w') ADVANCE(262);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'z') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'g') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'k') ADVANCE(180);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'k') ADVANCE(248);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'w') ADVANCE(224);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'w') ADVANCE(260);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '?') ADVANCE(168);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == ']') ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__write_read_outro);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_hang);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_hang);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_job);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_job);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_lock);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_kill);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_quit);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_quit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_tcommit);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_tcommit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_trestart);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_trestart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_trollback);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_trollback);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_tstart);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_tstart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_view);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_write);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_xecute);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_xecute);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 69, .external_lex_state = 1},
  [2] = {.lex_state = 68, .external_lex_state = 1},
  [3] = {.lex_state = 68, .external_lex_state = 1},
  [4] = {.lex_state = 68, .external_lex_state = 1},
  [5] = {.lex_state = 68, .external_lex_state = 1},
  [6] = {.lex_state = 68, .external_lex_state = 1},
  [7] = {.lex_state = 68, .external_lex_state = 1},
  [8] = {.lex_state = 68, .external_lex_state = 1},
  [9] = {.lex_state = 68, .external_lex_state = 1},
  [10] = {.lex_state = 69, .external_lex_state = 1},
  [11] = {.lex_state = 69, .external_lex_state = 1},
  [12] = {.lex_state = 69, .external_lex_state = 1},
  [13] = {.lex_state = 69, .external_lex_state = 1},
  [14] = {.lex_state = 69, .external_lex_state = 1},
  [15] = {.lex_state = 68, .external_lex_state = 1},
  [16] = {.lex_state = 68, .external_lex_state = 1},
  [17] = {.lex_state = 68, .external_lex_state = 1},
  [18] = {.lex_state = 68, .external_lex_state = 1},
  [19] = {.lex_state = 69, .external_lex_state = 1},
  [20] = {.lex_state = 69, .external_lex_state = 1},
  [21] = {.lex_state = 68, .external_lex_state = 1},
  [22] = {.lex_state = 69, .external_lex_state = 1},
  [23] = {.lex_state = 69, .external_lex_state = 1},
  [24] = {.lex_state = 68, .external_lex_state = 1},
  [25] = {.lex_state = 68, .external_lex_state = 1},
  [26] = {.lex_state = 69, .external_lex_state = 2},
  [27] = {.lex_state = 69, .external_lex_state = 1},
  [28] = {.lex_state = 69, .external_lex_state = 1},
  [29] = {.lex_state = 69, .external_lex_state = 1},
  [30] = {.lex_state = 69, .external_lex_state = 1},
  [31] = {.lex_state = 69, .external_lex_state = 1},
  [32] = {.lex_state = 69, .external_lex_state = 1},
  [33] = {.lex_state = 69, .external_lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 69},
  [54] = {.lex_state = 69},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 69},
  [58] = {.lex_state = 69},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 69},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 64},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__eol_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_local_variable] = ACTIONS(1),
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
    [sym__write_read_outro] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_halt] = ACTIONS(1),
    [anon_sym_hang] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_job] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_q] = ACTIONS(1),
    [anon_sym_quit] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_tc] = ACTIONS(1),
    [anon_sym_tcommit] = ACTIONS(1),
    [anon_sym_tre] = ACTIONS(1),
    [anon_sym_trestart] = ACTIONS(1),
    [anon_sym_tro] = ACTIONS(1),
    [anon_sym_trollback] = ACTIONS(1),
    [anon_sym_ts] = ACTIONS(1),
    [anon_sym_tstart] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_xecute] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym__numeric] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(65),
    [sym__statement] = STATE(20),
    [sym_comment] = STATE(20),
    [sym__simple_statement] = STATE(20),
    [sym__compound_statement] = STATE(20),
    [sym_for_statement] = STATE(20),
    [sym_if_statement] = STATE(20),
    [sym_function] = STATE(64),
    [sym_call] = STATE(20),
    [sym_command] = STATE(16),
    [sym__write_read_call] = STATE(28),
    [sym__typical_call] = STATE(28),
    [sym_assignment] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(7),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(7),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(7),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(7),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(7),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(7),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(7),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(7),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(7),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(7),
    [anon_sym_z] = ACTIONS(7),
    [sym__set] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(17),
  },
  [2] = {
    [aux_sym_arguments_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_STAR_STAR] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_SQUOTE_GT] = ACTIONS(25),
    [anon_sym_SQUOTE_LT] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_EQ] = ACTIONS(25),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(25),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(25),
    [anon_sym__] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_e] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_f] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
    [anon_sym_i] = ACTIONS(23),
    [anon_sym_j] = ACTIONS(23),
    [anon_sym_job] = ACTIONS(23),
    [anon_sym_l] = ACTIONS(23),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_k] = ACTIONS(23),
    [anon_sym_kill] = ACTIONS(23),
    [anon_sym_m] = ACTIONS(23),
    [anon_sym_merge] = ACTIONS(23),
    [anon_sym_n] = ACTIONS(23),
    [anon_sym_new] = ACTIONS(23),
    [anon_sym_o] = ACTIONS(23),
    [anon_sym_open] = ACTIONS(23),
    [anon_sym_q] = ACTIONS(23),
    [anon_sym_quit] = ACTIONS(23),
    [anon_sym_r] = ACTIONS(23),
    [anon_sym_read] = ACTIONS(23),
    [anon_sym_tc] = ACTIONS(23),
    [anon_sym_tcommit] = ACTIONS(23),
    [anon_sym_tre] = ACTIONS(23),
    [anon_sym_trestart] = ACTIONS(23),
    [anon_sym_tro] = ACTIONS(23),
    [anon_sym_trollback] = ACTIONS(23),
    [anon_sym_ts] = ACTIONS(23),
    [anon_sym_tstart] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(23),
    [anon_sym_use] = ACTIONS(23),
    [anon_sym_v] = ACTIONS(23),
    [anon_sym_view] = ACTIONS(23),
    [anon_sym_w] = ACTIONS(23),
    [anon_sym_write] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_xecute] = ACTIONS(23),
    [anon_sym_z] = ACTIONS(23),
    [sym__set] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(21),
    [sym_label] = ACTIONS(21),
  },
  [3] = {
    [aux_sym_arguments_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_STAR_STAR] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_SQUOTE_GT] = ACTIONS(25),
    [anon_sym_SQUOTE_LT] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_EQ] = ACTIONS(25),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(25),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(25),
    [anon_sym__] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_b] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(27),
    [anon_sym_c] = ACTIONS(27),
    [anon_sym_close] = ACTIONS(27),
    [anon_sym_d] = ACTIONS(27),
    [anon_sym_e] = ACTIONS(27),
    [anon_sym_else] = ACTIONS(27),
    [anon_sym_f] = ACTIONS(27),
    [anon_sym_g] = ACTIONS(27),
    [anon_sym_goto] = ACTIONS(27),
    [anon_sym_h] = ACTIONS(27),
    [anon_sym_halt] = ACTIONS(27),
    [anon_sym_hang] = ACTIONS(27),
    [anon_sym_i] = ACTIONS(27),
    [anon_sym_j] = ACTIONS(27),
    [anon_sym_job] = ACTIONS(27),
    [anon_sym_l] = ACTIONS(27),
    [anon_sym_lock] = ACTIONS(27),
    [anon_sym_k] = ACTIONS(27),
    [anon_sym_kill] = ACTIONS(27),
    [anon_sym_m] = ACTIONS(27),
    [anon_sym_merge] = ACTIONS(27),
    [anon_sym_n] = ACTIONS(27),
    [anon_sym_new] = ACTIONS(27),
    [anon_sym_o] = ACTIONS(27),
    [anon_sym_open] = ACTIONS(27),
    [anon_sym_q] = ACTIONS(27),
    [anon_sym_quit] = ACTIONS(27),
    [anon_sym_r] = ACTIONS(27),
    [anon_sym_read] = ACTIONS(27),
    [anon_sym_tc] = ACTIONS(27),
    [anon_sym_tcommit] = ACTIONS(27),
    [anon_sym_tre] = ACTIONS(27),
    [anon_sym_trestart] = ACTIONS(27),
    [anon_sym_tro] = ACTIONS(27),
    [anon_sym_trollback] = ACTIONS(27),
    [anon_sym_ts] = ACTIONS(27),
    [anon_sym_tstart] = ACTIONS(27),
    [anon_sym_u] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(27),
    [anon_sym_v] = ACTIONS(27),
    [anon_sym_view] = ACTIONS(27),
    [anon_sym_w] = ACTIONS(27),
    [anon_sym_write] = ACTIONS(27),
    [anon_sym_x] = ACTIONS(27),
    [anon_sym_xecute] = ACTIONS(27),
    [anon_sym_z] = ACTIONS(27),
    [sym__set] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(19),
    [sym_label] = ACTIONS(19),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__eol_comment] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [sym_local_variable] = ACTIONS(35),
    [sym_global_variable] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_STAR_STAR] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_SQUOTE_GT] = ACTIONS(25),
    [anon_sym_SQUOTE_LT] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_EQ] = ACTIONS(25),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(25),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(25),
    [anon_sym__] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_b] = ACTIONS(35),
    [anon_sym_break] = ACTIONS(35),
    [anon_sym_c] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_d] = ACTIONS(35),
    [anon_sym_e] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_f] = ACTIONS(35),
    [anon_sym_g] = ACTIONS(35),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_halt] = ACTIONS(35),
    [anon_sym_hang] = ACTIONS(35),
    [anon_sym_i] = ACTIONS(35),
    [anon_sym_j] = ACTIONS(35),
    [anon_sym_job] = ACTIONS(35),
    [anon_sym_l] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_k] = ACTIONS(35),
    [anon_sym_kill] = ACTIONS(35),
    [anon_sym_m] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_n] = ACTIONS(35),
    [anon_sym_new] = ACTIONS(35),
    [anon_sym_o] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_q] = ACTIONS(35),
    [anon_sym_quit] = ACTIONS(35),
    [anon_sym_r] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_tc] = ACTIONS(35),
    [anon_sym_tcommit] = ACTIONS(35),
    [anon_sym_tre] = ACTIONS(35),
    [anon_sym_trestart] = ACTIONS(35),
    [anon_sym_tro] = ACTIONS(35),
    [anon_sym_trollback] = ACTIONS(35),
    [anon_sym_ts] = ACTIONS(35),
    [anon_sym_tstart] = ACTIONS(35),
    [anon_sym_u] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_v] = ACTIONS(35),
    [anon_sym_view] = ACTIONS(35),
    [anon_sym_w] = ACTIONS(35),
    [anon_sym_write] = ACTIONS(35),
    [anon_sym_x] = ACTIONS(35),
    [anon_sym_xecute] = ACTIONS(35),
    [anon_sym_z] = ACTIONS(35),
    [sym__set] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym__line_comment] = ACTIONS(33),
    [sym_label] = ACTIONS(33),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__eol_comment] = ACTIONS(37),
    [anon_sym_for] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_do] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(39),
    [sym_local_variable] = ACTIONS(39),
    [sym_global_variable] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_SQUOTE_GT] = ACTIONS(37),
    [anon_sym_SQUOTE_LT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_EQ] = ACTIONS(37),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(37),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(37),
    [anon_sym__] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(37),
    [anon_sym_b] = ACTIONS(39),
    [anon_sym_break] = ACTIONS(39),
    [anon_sym_c] = ACTIONS(39),
    [anon_sym_close] = ACTIONS(39),
    [anon_sym_d] = ACTIONS(39),
    [anon_sym_e] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(39),
    [anon_sym_f] = ACTIONS(39),
    [anon_sym_g] = ACTIONS(39),
    [anon_sym_goto] = ACTIONS(39),
    [anon_sym_h] = ACTIONS(39),
    [anon_sym_halt] = ACTIONS(39),
    [anon_sym_hang] = ACTIONS(39),
    [anon_sym_i] = ACTIONS(39),
    [anon_sym_j] = ACTIONS(39),
    [anon_sym_job] = ACTIONS(39),
    [anon_sym_l] = ACTIONS(39),
    [anon_sym_lock] = ACTIONS(39),
    [anon_sym_k] = ACTIONS(39),
    [anon_sym_kill] = ACTIONS(39),
    [anon_sym_m] = ACTIONS(39),
    [anon_sym_merge] = ACTIONS(39),
    [anon_sym_n] = ACTIONS(39),
    [anon_sym_new] = ACTIONS(39),
    [anon_sym_o] = ACTIONS(39),
    [anon_sym_open] = ACTIONS(39),
    [anon_sym_q] = ACTIONS(39),
    [anon_sym_quit] = ACTIONS(39),
    [anon_sym_r] = ACTIONS(39),
    [anon_sym_read] = ACTIONS(39),
    [anon_sym_tc] = ACTIONS(39),
    [anon_sym_tcommit] = ACTIONS(39),
    [anon_sym_tre] = ACTIONS(39),
    [anon_sym_trestart] = ACTIONS(39),
    [anon_sym_tro] = ACTIONS(39),
    [anon_sym_trollback] = ACTIONS(39),
    [anon_sym_ts] = ACTIONS(39),
    [anon_sym_tstart] = ACTIONS(39),
    [anon_sym_u] = ACTIONS(39),
    [anon_sym_use] = ACTIONS(39),
    [anon_sym_v] = ACTIONS(39),
    [anon_sym_view] = ACTIONS(39),
    [anon_sym_w] = ACTIONS(39),
    [anon_sym_write] = ACTIONS(39),
    [anon_sym_x] = ACTIONS(39),
    [anon_sym_xecute] = ACTIONS(39),
    [anon_sym_z] = ACTIONS(39),
    [sym__set] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym__line_comment] = ACTIONS(37),
    [sym_label] = ACTIONS(37),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__eol_comment] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(43),
    [sym_local_variable] = ACTIONS(43),
    [sym_global_variable] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_STAR_STAR] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_SQUOTE_GT] = ACTIONS(41),
    [anon_sym_SQUOTE_LT] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_EQ] = ACTIONS(41),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_b] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_c] = ACTIONS(43),
    [anon_sym_close] = ACTIONS(43),
    [anon_sym_d] = ACTIONS(43),
    [anon_sym_e] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_f] = ACTIONS(43),
    [anon_sym_g] = ACTIONS(43),
    [anon_sym_goto] = ACTIONS(43),
    [anon_sym_h] = ACTIONS(43),
    [anon_sym_halt] = ACTIONS(43),
    [anon_sym_hang] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(43),
    [anon_sym_j] = ACTIONS(43),
    [anon_sym_job] = ACTIONS(43),
    [anon_sym_l] = ACTIONS(43),
    [anon_sym_lock] = ACTIONS(43),
    [anon_sym_k] = ACTIONS(43),
    [anon_sym_kill] = ACTIONS(43),
    [anon_sym_m] = ACTIONS(43),
    [anon_sym_merge] = ACTIONS(43),
    [anon_sym_n] = ACTIONS(43),
    [anon_sym_new] = ACTIONS(43),
    [anon_sym_o] = ACTIONS(43),
    [anon_sym_open] = ACTIONS(43),
    [anon_sym_q] = ACTIONS(43),
    [anon_sym_quit] = ACTIONS(43),
    [anon_sym_r] = ACTIONS(43),
    [anon_sym_read] = ACTIONS(43),
    [anon_sym_tc] = ACTIONS(43),
    [anon_sym_tcommit] = ACTIONS(43),
    [anon_sym_tre] = ACTIONS(43),
    [anon_sym_trestart] = ACTIONS(43),
    [anon_sym_tro] = ACTIONS(43),
    [anon_sym_trollback] = ACTIONS(43),
    [anon_sym_ts] = ACTIONS(43),
    [anon_sym_tstart] = ACTIONS(43),
    [anon_sym_u] = ACTIONS(43),
    [anon_sym_use] = ACTIONS(43),
    [anon_sym_v] = ACTIONS(43),
    [anon_sym_view] = ACTIONS(43),
    [anon_sym_w] = ACTIONS(43),
    [anon_sym_write] = ACTIONS(43),
    [anon_sym_x] = ACTIONS(43),
    [anon_sym_xecute] = ACTIONS(43),
    [anon_sym_z] = ACTIONS(43),
    [sym__set] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [sym__line_comment] = ACTIONS(41),
    [sym_label] = ACTIONS(41),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym__eol_comment] = ACTIONS(45),
    [anon_sym_for] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [sym_local_variable] = ACTIONS(47),
    [sym_global_variable] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_SQUOTE_GT] = ACTIONS(45),
    [anon_sym_SQUOTE_LT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(45),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE_EQ] = ACTIONS(45),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(45),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(45),
    [anon_sym__] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(45),
    [anon_sym_b] = ACTIONS(47),
    [anon_sym_break] = ACTIONS(47),
    [anon_sym_c] = ACTIONS(47),
    [anon_sym_close] = ACTIONS(47),
    [anon_sym_d] = ACTIONS(47),
    [anon_sym_e] = ACTIONS(47),
    [anon_sym_else] = ACTIONS(47),
    [anon_sym_f] = ACTIONS(47),
    [anon_sym_g] = ACTIONS(47),
    [anon_sym_goto] = ACTIONS(47),
    [anon_sym_h] = ACTIONS(47),
    [anon_sym_halt] = ACTIONS(47),
    [anon_sym_hang] = ACTIONS(47),
    [anon_sym_i] = ACTIONS(47),
    [anon_sym_j] = ACTIONS(47),
    [anon_sym_job] = ACTIONS(47),
    [anon_sym_l] = ACTIONS(47),
    [anon_sym_lock] = ACTIONS(47),
    [anon_sym_k] = ACTIONS(47),
    [anon_sym_kill] = ACTIONS(47),
    [anon_sym_m] = ACTIONS(47),
    [anon_sym_merge] = ACTIONS(47),
    [anon_sym_n] = ACTIONS(47),
    [anon_sym_new] = ACTIONS(47),
    [anon_sym_o] = ACTIONS(47),
    [anon_sym_open] = ACTIONS(47),
    [anon_sym_q] = ACTIONS(47),
    [anon_sym_quit] = ACTIONS(47),
    [anon_sym_r] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_tc] = ACTIONS(47),
    [anon_sym_tcommit] = ACTIONS(47),
    [anon_sym_tre] = ACTIONS(47),
    [anon_sym_trestart] = ACTIONS(47),
    [anon_sym_tro] = ACTIONS(47),
    [anon_sym_trollback] = ACTIONS(47),
    [anon_sym_ts] = ACTIONS(47),
    [anon_sym_tstart] = ACTIONS(47),
    [anon_sym_u] = ACTIONS(47),
    [anon_sym_use] = ACTIONS(47),
    [anon_sym_v] = ACTIONS(47),
    [anon_sym_view] = ACTIONS(47),
    [anon_sym_w] = ACTIONS(47),
    [anon_sym_write] = ACTIONS(47),
    [anon_sym_x] = ACTIONS(47),
    [anon_sym_xecute] = ACTIONS(47),
    [anon_sym_z] = ACTIONS(47),
    [sym__set] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym__line_comment] = ACTIONS(45),
    [sym_label] = ACTIONS(45),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__eol_comment] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(53),
    [sym_local_variable] = ACTIONS(53),
    [sym_global_variable] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_SQUOTE_GT] = ACTIONS(51),
    [anon_sym_SQUOTE_LT] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE_EQ] = ACTIONS(51),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(51),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_b] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(53),
    [anon_sym_c] = ACTIONS(53),
    [anon_sym_close] = ACTIONS(53),
    [anon_sym_d] = ACTIONS(53),
    [anon_sym_e] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_f] = ACTIONS(53),
    [anon_sym_g] = ACTIONS(53),
    [anon_sym_goto] = ACTIONS(53),
    [anon_sym_h] = ACTIONS(53),
    [anon_sym_halt] = ACTIONS(53),
    [anon_sym_hang] = ACTIONS(53),
    [anon_sym_i] = ACTIONS(53),
    [anon_sym_j] = ACTIONS(53),
    [anon_sym_job] = ACTIONS(53),
    [anon_sym_l] = ACTIONS(53),
    [anon_sym_lock] = ACTIONS(53),
    [anon_sym_k] = ACTIONS(53),
    [anon_sym_kill] = ACTIONS(53),
    [anon_sym_m] = ACTIONS(53),
    [anon_sym_merge] = ACTIONS(53),
    [anon_sym_n] = ACTIONS(53),
    [anon_sym_new] = ACTIONS(53),
    [anon_sym_o] = ACTIONS(53),
    [anon_sym_open] = ACTIONS(53),
    [anon_sym_q] = ACTIONS(53),
    [anon_sym_quit] = ACTIONS(53),
    [anon_sym_r] = ACTIONS(53),
    [anon_sym_read] = ACTIONS(53),
    [anon_sym_tc] = ACTIONS(53),
    [anon_sym_tcommit] = ACTIONS(53),
    [anon_sym_tre] = ACTIONS(53),
    [anon_sym_trestart] = ACTIONS(53),
    [anon_sym_tro] = ACTIONS(53),
    [anon_sym_trollback] = ACTIONS(53),
    [anon_sym_ts] = ACTIONS(53),
    [anon_sym_tstart] = ACTIONS(53),
    [anon_sym_u] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(53),
    [anon_sym_v] = ACTIONS(53),
    [anon_sym_view] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(53),
    [anon_sym_write] = ACTIONS(53),
    [anon_sym_x] = ACTIONS(53),
    [anon_sym_xecute] = ACTIONS(53),
    [anon_sym_z] = ACTIONS(53),
    [sym__set] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_integer] = ACTIONS(53),
    [sym_float] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym__line_comment] = ACTIONS(51),
    [sym_label] = ACTIONS(51),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__eol_comment] = ACTIONS(55),
    [anon_sym_for] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(57),
    [sym_local_variable] = ACTIONS(57),
    [sym_global_variable] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_STAR_STAR] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_SQUOTE_GT] = ACTIONS(55),
    [anon_sym_SQUOTE_LT] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(55),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_EQ] = ACTIONS(55),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(55),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(55),
    [anon_sym__] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(55),
    [anon_sym_b] = ACTIONS(57),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_c] = ACTIONS(57),
    [anon_sym_close] = ACTIONS(57),
    [anon_sym_d] = ACTIONS(57),
    [anon_sym_e] = ACTIONS(57),
    [anon_sym_else] = ACTIONS(57),
    [anon_sym_f] = ACTIONS(57),
    [anon_sym_g] = ACTIONS(57),
    [anon_sym_goto] = ACTIONS(57),
    [anon_sym_h] = ACTIONS(57),
    [anon_sym_halt] = ACTIONS(57),
    [anon_sym_hang] = ACTIONS(57),
    [anon_sym_i] = ACTIONS(57),
    [anon_sym_j] = ACTIONS(57),
    [anon_sym_job] = ACTIONS(57),
    [anon_sym_l] = ACTIONS(57),
    [anon_sym_lock] = ACTIONS(57),
    [anon_sym_k] = ACTIONS(57),
    [anon_sym_kill] = ACTIONS(57),
    [anon_sym_m] = ACTIONS(57),
    [anon_sym_merge] = ACTIONS(57),
    [anon_sym_n] = ACTIONS(57),
    [anon_sym_new] = ACTIONS(57),
    [anon_sym_o] = ACTIONS(57),
    [anon_sym_open] = ACTIONS(57),
    [anon_sym_q] = ACTIONS(57),
    [anon_sym_quit] = ACTIONS(57),
    [anon_sym_r] = ACTIONS(57),
    [anon_sym_read] = ACTIONS(57),
    [anon_sym_tc] = ACTIONS(57),
    [anon_sym_tcommit] = ACTIONS(57),
    [anon_sym_tre] = ACTIONS(57),
    [anon_sym_trestart] = ACTIONS(57),
    [anon_sym_tro] = ACTIONS(57),
    [anon_sym_trollback] = ACTIONS(57),
    [anon_sym_ts] = ACTIONS(57),
    [anon_sym_tstart] = ACTIONS(57),
    [anon_sym_u] = ACTIONS(57),
    [anon_sym_use] = ACTIONS(57),
    [anon_sym_v] = ACTIONS(57),
    [anon_sym_view] = ACTIONS(57),
    [anon_sym_w] = ACTIONS(57),
    [anon_sym_write] = ACTIONS(57),
    [anon_sym_x] = ACTIONS(57),
    [anon_sym_xecute] = ACTIONS(57),
    [anon_sym_z] = ACTIONS(57),
    [sym__set] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_integer] = ACTIONS(57),
    [sym_float] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym__line_comment] = ACTIONS(55),
    [sym_label] = ACTIONS(55),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__eol_comment] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(61),
    [anon_sym_STAR_STAR] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_SQUOTE_GT] = ACTIONS(61),
    [anon_sym_SQUOTE_LT] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(61),
    [anon_sym_SQUOTE_EQ] = ACTIONS(61),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(61),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(61),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(61),
    [anon_sym__] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_b] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(59),
    [anon_sym_c] = ACTIONS(65),
    [anon_sym_close] = ACTIONS(59),
    [anon_sym_d] = ACTIONS(65),
    [anon_sym_e] = ACTIONS(65),
    [anon_sym_else] = ACTIONS(59),
    [anon_sym_f] = ACTIONS(65),
    [anon_sym_g] = ACTIONS(65),
    [anon_sym_goto] = ACTIONS(59),
    [anon_sym_h] = ACTIONS(65),
    [anon_sym_halt] = ACTIONS(59),
    [anon_sym_hang] = ACTIONS(59),
    [anon_sym_i] = ACTIONS(65),
    [anon_sym_j] = ACTIONS(65),
    [anon_sym_job] = ACTIONS(59),
    [anon_sym_l] = ACTIONS(65),
    [anon_sym_lock] = ACTIONS(59),
    [anon_sym_k] = ACTIONS(65),
    [anon_sym_kill] = ACTIONS(59),
    [anon_sym_m] = ACTIONS(65),
    [anon_sym_merge] = ACTIONS(59),
    [anon_sym_n] = ACTIONS(65),
    [anon_sym_new] = ACTIONS(59),
    [anon_sym_o] = ACTIONS(65),
    [anon_sym_open] = ACTIONS(59),
    [anon_sym_q] = ACTIONS(65),
    [anon_sym_quit] = ACTIONS(59),
    [anon_sym_r] = ACTIONS(65),
    [anon_sym_read] = ACTIONS(59),
    [anon_sym_tc] = ACTIONS(65),
    [anon_sym_tcommit] = ACTIONS(59),
    [anon_sym_tre] = ACTIONS(65),
    [anon_sym_trestart] = ACTIONS(59),
    [anon_sym_tro] = ACTIONS(65),
    [anon_sym_trollback] = ACTIONS(59),
    [anon_sym_ts] = ACTIONS(65),
    [anon_sym_tstart] = ACTIONS(59),
    [anon_sym_u] = ACTIONS(65),
    [anon_sym_use] = ACTIONS(59),
    [anon_sym_v] = ACTIONS(65),
    [anon_sym_view] = ACTIONS(59),
    [anon_sym_w] = ACTIONS(65),
    [anon_sym_write] = ACTIONS(59),
    [anon_sym_x] = ACTIONS(65),
    [anon_sym_xecute] = ACTIONS(59),
    [anon_sym_z] = ACTIONS(59),
    [sym__set] = ACTIONS(59),
    [sym__line_comment] = ACTIONS(59),
    [sym_label] = ACTIONS(59),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__eol_comment] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_STAR_STAR] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_SQUOTE_GT] = ACTIONS(41),
    [anon_sym_SQUOTE_LT] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_EQ] = ACTIONS(41),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_b] = ACTIONS(43),
    [anon_sym_break] = ACTIONS(41),
    [anon_sym_c] = ACTIONS(43),
    [anon_sym_close] = ACTIONS(41),
    [anon_sym_d] = ACTIONS(43),
    [anon_sym_e] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(41),
    [anon_sym_f] = ACTIONS(43),
    [anon_sym_g] = ACTIONS(43),
    [anon_sym_goto] = ACTIONS(41),
    [anon_sym_h] = ACTIONS(43),
    [anon_sym_halt] = ACTIONS(41),
    [anon_sym_hang] = ACTIONS(41),
    [anon_sym_i] = ACTIONS(43),
    [anon_sym_j] = ACTIONS(43),
    [anon_sym_job] = ACTIONS(41),
    [anon_sym_l] = ACTIONS(43),
    [anon_sym_lock] = ACTIONS(41),
    [anon_sym_k] = ACTIONS(43),
    [anon_sym_kill] = ACTIONS(41),
    [anon_sym_m] = ACTIONS(43),
    [anon_sym_merge] = ACTIONS(41),
    [anon_sym_n] = ACTIONS(43),
    [anon_sym_new] = ACTIONS(41),
    [anon_sym_o] = ACTIONS(43),
    [anon_sym_open] = ACTIONS(41),
    [anon_sym_q] = ACTIONS(43),
    [anon_sym_quit] = ACTIONS(41),
    [anon_sym_r] = ACTIONS(43),
    [anon_sym_read] = ACTIONS(41),
    [anon_sym_tc] = ACTIONS(43),
    [anon_sym_tcommit] = ACTIONS(41),
    [anon_sym_tre] = ACTIONS(43),
    [anon_sym_trestart] = ACTIONS(41),
    [anon_sym_tro] = ACTIONS(43),
    [anon_sym_trollback] = ACTIONS(41),
    [anon_sym_ts] = ACTIONS(43),
    [anon_sym_tstart] = ACTIONS(41),
    [anon_sym_u] = ACTIONS(43),
    [anon_sym_use] = ACTIONS(41),
    [anon_sym_v] = ACTIONS(43),
    [anon_sym_view] = ACTIONS(41),
    [anon_sym_w] = ACTIONS(43),
    [anon_sym_write] = ACTIONS(41),
    [anon_sym_x] = ACTIONS(43),
    [anon_sym_xecute] = ACTIONS(41),
    [anon_sym_z] = ACTIONS(41),
    [sym__set] = ACTIONS(41),
    [sym__line_comment] = ACTIONS(41),
    [sym_label] = ACTIONS(41),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__eol_comment] = ACTIONS(55),
    [anon_sym_for] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_STAR_STAR] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_SQUOTE_GT] = ACTIONS(55),
    [anon_sym_SQUOTE_LT] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(55),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_EQ] = ACTIONS(55),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(55),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(55),
    [anon_sym__] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(55),
    [anon_sym_b] = ACTIONS(57),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_c] = ACTIONS(57),
    [anon_sym_close] = ACTIONS(55),
    [anon_sym_d] = ACTIONS(57),
    [anon_sym_e] = ACTIONS(57),
    [anon_sym_else] = ACTIONS(55),
    [anon_sym_f] = ACTIONS(57),
    [anon_sym_g] = ACTIONS(57),
    [anon_sym_goto] = ACTIONS(55),
    [anon_sym_h] = ACTIONS(57),
    [anon_sym_halt] = ACTIONS(55),
    [anon_sym_hang] = ACTIONS(55),
    [anon_sym_i] = ACTIONS(57),
    [anon_sym_j] = ACTIONS(57),
    [anon_sym_job] = ACTIONS(55),
    [anon_sym_l] = ACTIONS(57),
    [anon_sym_lock] = ACTIONS(55),
    [anon_sym_k] = ACTIONS(57),
    [anon_sym_kill] = ACTIONS(55),
    [anon_sym_m] = ACTIONS(57),
    [anon_sym_merge] = ACTIONS(55),
    [anon_sym_n] = ACTIONS(57),
    [anon_sym_new] = ACTIONS(55),
    [anon_sym_o] = ACTIONS(57),
    [anon_sym_open] = ACTIONS(55),
    [anon_sym_q] = ACTIONS(57),
    [anon_sym_quit] = ACTIONS(55),
    [anon_sym_r] = ACTIONS(57),
    [anon_sym_read] = ACTIONS(55),
    [anon_sym_tc] = ACTIONS(57),
    [anon_sym_tcommit] = ACTIONS(55),
    [anon_sym_tre] = ACTIONS(57),
    [anon_sym_trestart] = ACTIONS(55),
    [anon_sym_tro] = ACTIONS(57),
    [anon_sym_trollback] = ACTIONS(55),
    [anon_sym_ts] = ACTIONS(57),
    [anon_sym_tstart] = ACTIONS(55),
    [anon_sym_u] = ACTIONS(57),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_v] = ACTIONS(57),
    [anon_sym_view] = ACTIONS(55),
    [anon_sym_w] = ACTIONS(57),
    [anon_sym_write] = ACTIONS(55),
    [anon_sym_x] = ACTIONS(57),
    [anon_sym_xecute] = ACTIONS(55),
    [anon_sym_z] = ACTIONS(55),
    [sym__set] = ACTIONS(55),
    [sym__line_comment] = ACTIONS(55),
    [sym_label] = ACTIONS(55),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__eol_comment] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_SQUOTE_GT] = ACTIONS(51),
    [anon_sym_SQUOTE_LT] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE_EQ] = ACTIONS(51),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(51),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_b] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_c] = ACTIONS(53),
    [anon_sym_close] = ACTIONS(51),
    [anon_sym_d] = ACTIONS(53),
    [anon_sym_e] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_f] = ACTIONS(53),
    [anon_sym_g] = ACTIONS(53),
    [anon_sym_goto] = ACTIONS(51),
    [anon_sym_h] = ACTIONS(53),
    [anon_sym_halt] = ACTIONS(51),
    [anon_sym_hang] = ACTIONS(51),
    [anon_sym_i] = ACTIONS(53),
    [anon_sym_j] = ACTIONS(53),
    [anon_sym_job] = ACTIONS(51),
    [anon_sym_l] = ACTIONS(53),
    [anon_sym_lock] = ACTIONS(51),
    [anon_sym_k] = ACTIONS(53),
    [anon_sym_kill] = ACTIONS(51),
    [anon_sym_m] = ACTIONS(53),
    [anon_sym_merge] = ACTIONS(51),
    [anon_sym_n] = ACTIONS(53),
    [anon_sym_new] = ACTIONS(51),
    [anon_sym_o] = ACTIONS(53),
    [anon_sym_open] = ACTIONS(51),
    [anon_sym_q] = ACTIONS(53),
    [anon_sym_quit] = ACTIONS(51),
    [anon_sym_r] = ACTIONS(53),
    [anon_sym_read] = ACTIONS(51),
    [anon_sym_tc] = ACTIONS(53),
    [anon_sym_tcommit] = ACTIONS(51),
    [anon_sym_tre] = ACTIONS(53),
    [anon_sym_trestart] = ACTIONS(51),
    [anon_sym_tro] = ACTIONS(53),
    [anon_sym_trollback] = ACTIONS(51),
    [anon_sym_ts] = ACTIONS(53),
    [anon_sym_tstart] = ACTIONS(51),
    [anon_sym_u] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(51),
    [anon_sym_v] = ACTIONS(53),
    [anon_sym_view] = ACTIONS(51),
    [anon_sym_w] = ACTIONS(53),
    [anon_sym_write] = ACTIONS(51),
    [anon_sym_x] = ACTIONS(53),
    [anon_sym_xecute] = ACTIONS(51),
    [anon_sym_z] = ACTIONS(51),
    [sym__set] = ACTIONS(51),
    [sym__line_comment] = ACTIONS(51),
    [sym_label] = ACTIONS(51),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__eol_comment] = ACTIONS(37),
    [anon_sym_for] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_do] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_SQUOTE_GT] = ACTIONS(37),
    [anon_sym_SQUOTE_LT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_EQ] = ACTIONS(37),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(37),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(37),
    [anon_sym__] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(37),
    [anon_sym_b] = ACTIONS(39),
    [anon_sym_break] = ACTIONS(37),
    [anon_sym_c] = ACTIONS(39),
    [anon_sym_close] = ACTIONS(37),
    [anon_sym_d] = ACTIONS(39),
    [anon_sym_e] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(37),
    [anon_sym_f] = ACTIONS(39),
    [anon_sym_g] = ACTIONS(39),
    [anon_sym_goto] = ACTIONS(37),
    [anon_sym_h] = ACTIONS(39),
    [anon_sym_halt] = ACTIONS(37),
    [anon_sym_hang] = ACTIONS(37),
    [anon_sym_i] = ACTIONS(39),
    [anon_sym_j] = ACTIONS(39),
    [anon_sym_job] = ACTIONS(37),
    [anon_sym_l] = ACTIONS(39),
    [anon_sym_lock] = ACTIONS(37),
    [anon_sym_k] = ACTIONS(39),
    [anon_sym_kill] = ACTIONS(37),
    [anon_sym_m] = ACTIONS(39),
    [anon_sym_merge] = ACTIONS(37),
    [anon_sym_n] = ACTIONS(39),
    [anon_sym_new] = ACTIONS(37),
    [anon_sym_o] = ACTIONS(39),
    [anon_sym_open] = ACTIONS(37),
    [anon_sym_q] = ACTIONS(39),
    [anon_sym_quit] = ACTIONS(37),
    [anon_sym_r] = ACTIONS(39),
    [anon_sym_read] = ACTIONS(37),
    [anon_sym_tc] = ACTIONS(39),
    [anon_sym_tcommit] = ACTIONS(37),
    [anon_sym_tre] = ACTIONS(39),
    [anon_sym_trestart] = ACTIONS(37),
    [anon_sym_tro] = ACTIONS(39),
    [anon_sym_trollback] = ACTIONS(37),
    [anon_sym_ts] = ACTIONS(39),
    [anon_sym_tstart] = ACTIONS(37),
    [anon_sym_u] = ACTIONS(39),
    [anon_sym_use] = ACTIONS(37),
    [anon_sym_v] = ACTIONS(39),
    [anon_sym_view] = ACTIONS(37),
    [anon_sym_w] = ACTIONS(39),
    [anon_sym_write] = ACTIONS(37),
    [anon_sym_x] = ACTIONS(39),
    [anon_sym_xecute] = ACTIONS(37),
    [anon_sym_z] = ACTIONS(37),
    [sym__set] = ACTIONS(37),
    [sym__line_comment] = ACTIONS(37),
    [sym_label] = ACTIONS(37),
  },
  [15] = {
    [sym_conditional] = STATE(23),
    [sym__expression] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__variable] = STATE(2),
    [sym_unary_expression] = STATE(2),
    [sym_binary_expression] = STATE(2),
    [sym_arguments] = STATE(25),
    [sym_literal] = STATE(2),
    [sym_boolean] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__eol_comment] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_do] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(69),
    [sym_local_variable] = ACTIONS(71),
    [sym_global_variable] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(67),
    [anon_sym_b] = ACTIONS(69),
    [anon_sym_break] = ACTIONS(69),
    [anon_sym_c] = ACTIONS(69),
    [anon_sym_close] = ACTIONS(69),
    [anon_sym_d] = ACTIONS(69),
    [anon_sym_e] = ACTIONS(69),
    [anon_sym_else] = ACTIONS(69),
    [anon_sym_f] = ACTIONS(69),
    [anon_sym_g] = ACTIONS(69),
    [anon_sym_goto] = ACTIONS(69),
    [anon_sym_h] = ACTIONS(69),
    [anon_sym_halt] = ACTIONS(69),
    [anon_sym_hang] = ACTIONS(69),
    [anon_sym_i] = ACTIONS(69),
    [anon_sym_j] = ACTIONS(69),
    [anon_sym_job] = ACTIONS(69),
    [anon_sym_l] = ACTIONS(69),
    [anon_sym_lock] = ACTIONS(69),
    [anon_sym_k] = ACTIONS(69),
    [anon_sym_kill] = ACTIONS(69),
    [anon_sym_m] = ACTIONS(69),
    [anon_sym_merge] = ACTIONS(69),
    [anon_sym_n] = ACTIONS(69),
    [anon_sym_new] = ACTIONS(69),
    [anon_sym_o] = ACTIONS(69),
    [anon_sym_open] = ACTIONS(69),
    [anon_sym_q] = ACTIONS(69),
    [anon_sym_quit] = ACTIONS(69),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_read] = ACTIONS(69),
    [anon_sym_tc] = ACTIONS(69),
    [anon_sym_tcommit] = ACTIONS(69),
    [anon_sym_tre] = ACTIONS(69),
    [anon_sym_trestart] = ACTIONS(69),
    [anon_sym_tro] = ACTIONS(69),
    [anon_sym_trollback] = ACTIONS(69),
    [anon_sym_ts] = ACTIONS(69),
    [anon_sym_tstart] = ACTIONS(69),
    [anon_sym_u] = ACTIONS(69),
    [anon_sym_use] = ACTIONS(69),
    [anon_sym_v] = ACTIONS(69),
    [anon_sym_view] = ACTIONS(69),
    [anon_sym_w] = ACTIONS(69),
    [anon_sym_write] = ACTIONS(69),
    [anon_sym_x] = ACTIONS(69),
    [anon_sym_xecute] = ACTIONS(69),
    [anon_sym_z] = ACTIONS(69),
    [sym__set] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [sym__line_comment] = ACTIONS(67),
    [sym_label] = ACTIONS(67),
  },
  [16] = {
    [sym__expression] = STATE(34),
    [sym__identifier] = STATE(34),
    [sym__variable] = STATE(34),
    [sym_unary_expression] = STATE(34),
    [sym_binary_expression] = STATE(34),
    [sym_arguments] = STATE(63),
    [sym_literal] = STATE(34),
    [sym_boolean] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym__eol_comment] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(85),
    [sym_local_variable] = ACTIONS(87),
    [sym_global_variable] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(83),
    [anon_sym_b] = ACTIONS(85),
    [anon_sym_break] = ACTIONS(85),
    [anon_sym_c] = ACTIONS(85),
    [anon_sym_close] = ACTIONS(85),
    [anon_sym_d] = ACTIONS(85),
    [anon_sym_e] = ACTIONS(85),
    [anon_sym_else] = ACTIONS(85),
    [anon_sym_f] = ACTIONS(85),
    [anon_sym_g] = ACTIONS(85),
    [anon_sym_goto] = ACTIONS(85),
    [anon_sym_h] = ACTIONS(85),
    [anon_sym_halt] = ACTIONS(85),
    [anon_sym_hang] = ACTIONS(85),
    [anon_sym_i] = ACTIONS(85),
    [anon_sym_j] = ACTIONS(85),
    [anon_sym_job] = ACTIONS(85),
    [anon_sym_l] = ACTIONS(85),
    [anon_sym_lock] = ACTIONS(85),
    [anon_sym_k] = ACTIONS(85),
    [anon_sym_kill] = ACTIONS(85),
    [anon_sym_m] = ACTIONS(85),
    [anon_sym_merge] = ACTIONS(85),
    [anon_sym_n] = ACTIONS(85),
    [anon_sym_new] = ACTIONS(85),
    [anon_sym_o] = ACTIONS(85),
    [anon_sym_open] = ACTIONS(85),
    [anon_sym_q] = ACTIONS(85),
    [anon_sym_quit] = ACTIONS(85),
    [anon_sym_r] = ACTIONS(85),
    [anon_sym_read] = ACTIONS(85),
    [anon_sym_tc] = ACTIONS(85),
    [anon_sym_tcommit] = ACTIONS(85),
    [anon_sym_tre] = ACTIONS(85),
    [anon_sym_trestart] = ACTIONS(85),
    [anon_sym_tro] = ACTIONS(85),
    [anon_sym_trollback] = ACTIONS(85),
    [anon_sym_ts] = ACTIONS(85),
    [anon_sym_tstart] = ACTIONS(85),
    [anon_sym_u] = ACTIONS(85),
    [anon_sym_use] = ACTIONS(85),
    [anon_sym_v] = ACTIONS(85),
    [anon_sym_view] = ACTIONS(85),
    [anon_sym_w] = ACTIONS(85),
    [anon_sym_write] = ACTIONS(85),
    [anon_sym_x] = ACTIONS(85),
    [anon_sym_xecute] = ACTIONS(85),
    [anon_sym_z] = ACTIONS(85),
    [sym__set] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
    [sym__line_comment] = ACTIONS(83),
    [sym_label] = ACTIONS(83),
  },
  [17] = {
    [sym__expression] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__variable] = STATE(3),
    [sym_unary_expression] = STATE(3),
    [sym_binary_expression] = STATE(3),
    [sym_arguments] = STATE(25),
    [sym_literal] = STATE(3),
    [sym_boolean] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__eol_comment] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_do] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(69),
    [sym_local_variable] = ACTIONS(69),
    [sym_global_variable] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(67),
    [anon_sym_b] = ACTIONS(69),
    [anon_sym_break] = ACTIONS(69),
    [anon_sym_c] = ACTIONS(69),
    [anon_sym_close] = ACTIONS(69),
    [anon_sym_d] = ACTIONS(69),
    [anon_sym_e] = ACTIONS(69),
    [anon_sym_else] = ACTIONS(69),
    [anon_sym_f] = ACTIONS(69),
    [anon_sym_g] = ACTIONS(69),
    [anon_sym_goto] = ACTIONS(69),
    [anon_sym_h] = ACTIONS(69),
    [anon_sym_halt] = ACTIONS(69),
    [anon_sym_hang] = ACTIONS(69),
    [anon_sym_i] = ACTIONS(69),
    [anon_sym_j] = ACTIONS(69),
    [anon_sym_job] = ACTIONS(69),
    [anon_sym_l] = ACTIONS(69),
    [anon_sym_lock] = ACTIONS(69),
    [anon_sym_k] = ACTIONS(69),
    [anon_sym_kill] = ACTIONS(69),
    [anon_sym_m] = ACTIONS(69),
    [anon_sym_merge] = ACTIONS(69),
    [anon_sym_n] = ACTIONS(69),
    [anon_sym_new] = ACTIONS(69),
    [anon_sym_o] = ACTIONS(69),
    [anon_sym_open] = ACTIONS(69),
    [anon_sym_q] = ACTIONS(69),
    [anon_sym_quit] = ACTIONS(69),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_read] = ACTIONS(69),
    [anon_sym_tc] = ACTIONS(69),
    [anon_sym_tcommit] = ACTIONS(69),
    [anon_sym_tre] = ACTIONS(69),
    [anon_sym_trestart] = ACTIONS(69),
    [anon_sym_tro] = ACTIONS(69),
    [anon_sym_trollback] = ACTIONS(69),
    [anon_sym_ts] = ACTIONS(69),
    [anon_sym_tstart] = ACTIONS(69),
    [anon_sym_u] = ACTIONS(69),
    [anon_sym_use] = ACTIONS(69),
    [anon_sym_v] = ACTIONS(69),
    [anon_sym_view] = ACTIONS(69),
    [anon_sym_w] = ACTIONS(69),
    [anon_sym_write] = ACTIONS(69),
    [anon_sym_x] = ACTIONS(69),
    [anon_sym_xecute] = ACTIONS(69),
    [anon_sym_z] = ACTIONS(69),
    [sym__set] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_integer] = ACTIONS(69),
    [sym_float] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym__line_comment] = ACTIONS(67),
    [sym_label] = ACTIONS(67),
  },
  [18] = {
    [sym__expression] = STATE(3),
    [sym__identifier] = STATE(7),
    [sym__variable] = STATE(7),
    [sym_unary_expression] = STATE(3),
    [sym_binary_expression] = STATE(3),
    [sym_arguments] = STATE(25),
    [sym_literal] = STATE(3),
    [sym_boolean] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__eol_comment] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_do] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(69),
    [sym_local_variable] = ACTIONS(99),
    [sym_global_variable] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(67),
    [anon_sym_b] = ACTIONS(69),
    [anon_sym_break] = ACTIONS(69),
    [anon_sym_c] = ACTIONS(69),
    [anon_sym_close] = ACTIONS(69),
    [anon_sym_d] = ACTIONS(69),
    [anon_sym_e] = ACTIONS(69),
    [anon_sym_else] = ACTIONS(69),
    [anon_sym_f] = ACTIONS(69),
    [anon_sym_g] = ACTIONS(69),
    [anon_sym_goto] = ACTIONS(69),
    [anon_sym_h] = ACTIONS(69),
    [anon_sym_halt] = ACTIONS(69),
    [anon_sym_hang] = ACTIONS(69),
    [anon_sym_i] = ACTIONS(69),
    [anon_sym_j] = ACTIONS(69),
    [anon_sym_job] = ACTIONS(69),
    [anon_sym_l] = ACTIONS(69),
    [anon_sym_lock] = ACTIONS(69),
    [anon_sym_k] = ACTIONS(69),
    [anon_sym_kill] = ACTIONS(69),
    [anon_sym_m] = ACTIONS(69),
    [anon_sym_merge] = ACTIONS(69),
    [anon_sym_n] = ACTIONS(69),
    [anon_sym_new] = ACTIONS(69),
    [anon_sym_o] = ACTIONS(69),
    [anon_sym_open] = ACTIONS(69),
    [anon_sym_q] = ACTIONS(69),
    [anon_sym_quit] = ACTIONS(69),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_read] = ACTIONS(69),
    [anon_sym_tc] = ACTIONS(69),
    [anon_sym_tcommit] = ACTIONS(69),
    [anon_sym_tre] = ACTIONS(69),
    [anon_sym_trestart] = ACTIONS(69),
    [anon_sym_tro] = ACTIONS(69),
    [anon_sym_trollback] = ACTIONS(69),
    [anon_sym_ts] = ACTIONS(69),
    [anon_sym_tstart] = ACTIONS(69),
    [anon_sym_u] = ACTIONS(69),
    [anon_sym_use] = ACTIONS(69),
    [anon_sym_v] = ACTIONS(69),
    [anon_sym_view] = ACTIONS(69),
    [anon_sym_w] = ACTIONS(69),
    [anon_sym_write] = ACTIONS(69),
    [anon_sym_x] = ACTIONS(69),
    [anon_sym_xecute] = ACTIONS(69),
    [anon_sym_z] = ACTIONS(69),
    [sym__set] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_integer] = ACTIONS(69),
    [sym_float] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym__line_comment] = ACTIONS(67),
    [sym_label] = ACTIONS(67),
  },
  [19] = {
    [sym__statement] = STATE(19),
    [sym_comment] = STATE(19),
    [sym__simple_statement] = STATE(19),
    [sym__compound_statement] = STATE(19),
    [sym_for_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_function] = STATE(64),
    [sym_call] = STATE(19),
    [sym_command] = STATE(16),
    [sym__write_read_call] = STATE(28),
    [sym__typical_call] = STATE(28),
    [sym_assignment] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym__eol_comment] = ACTIONS(105),
    [anon_sym_for] = ACTIONS(108),
    [anon_sym_do] = ACTIONS(111),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_b] = ACTIONS(120),
    [anon_sym_break] = ACTIONS(111),
    [anon_sym_c] = ACTIONS(120),
    [anon_sym_close] = ACTIONS(111),
    [anon_sym_d] = ACTIONS(120),
    [anon_sym_e] = ACTIONS(120),
    [anon_sym_else] = ACTIONS(111),
    [anon_sym_f] = ACTIONS(120),
    [anon_sym_g] = ACTIONS(120),
    [anon_sym_goto] = ACTIONS(111),
    [anon_sym_h] = ACTIONS(120),
    [anon_sym_halt] = ACTIONS(111),
    [anon_sym_hang] = ACTIONS(111),
    [anon_sym_i] = ACTIONS(120),
    [anon_sym_j] = ACTIONS(120),
    [anon_sym_job] = ACTIONS(111),
    [anon_sym_l] = ACTIONS(120),
    [anon_sym_lock] = ACTIONS(111),
    [anon_sym_k] = ACTIONS(120),
    [anon_sym_kill] = ACTIONS(111),
    [anon_sym_m] = ACTIONS(120),
    [anon_sym_merge] = ACTIONS(111),
    [anon_sym_n] = ACTIONS(120),
    [anon_sym_new] = ACTIONS(111),
    [anon_sym_o] = ACTIONS(120),
    [anon_sym_open] = ACTIONS(111),
    [anon_sym_q] = ACTIONS(120),
    [anon_sym_quit] = ACTIONS(111),
    [anon_sym_r] = ACTIONS(120),
    [anon_sym_read] = ACTIONS(111),
    [anon_sym_tc] = ACTIONS(120),
    [anon_sym_tcommit] = ACTIONS(111),
    [anon_sym_tre] = ACTIONS(120),
    [anon_sym_trestart] = ACTIONS(111),
    [anon_sym_tro] = ACTIONS(120),
    [anon_sym_trollback] = ACTIONS(111),
    [anon_sym_ts] = ACTIONS(120),
    [anon_sym_tstart] = ACTIONS(111),
    [anon_sym_u] = ACTIONS(120),
    [anon_sym_use] = ACTIONS(111),
    [anon_sym_v] = ACTIONS(120),
    [anon_sym_view] = ACTIONS(111),
    [anon_sym_w] = ACTIONS(120),
    [anon_sym_write] = ACTIONS(111),
    [anon_sym_x] = ACTIONS(120),
    [anon_sym_xecute] = ACTIONS(111),
    [anon_sym_z] = ACTIONS(111),
    [sym__set] = ACTIONS(123),
    [sym__line_comment] = ACTIONS(105),
    [sym_label] = ACTIONS(126),
  },
  [20] = {
    [sym__statement] = STATE(19),
    [sym_comment] = STATE(19),
    [sym__simple_statement] = STATE(19),
    [sym__compound_statement] = STATE(19),
    [sym_for_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_function] = STATE(64),
    [sym_call] = STATE(19),
    [sym_command] = STATE(16),
    [sym__write_read_call] = STATE(28),
    [sym__typical_call] = STATE(28),
    [sym_assignment] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(7),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(7),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(7),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(7),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(7),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(7),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(7),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(7),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(7),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(7),
    [anon_sym_z] = ACTIONS(7),
    [sym__set] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(17),
  },
  [21] = {
    [aux_sym_arguments_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__eol_comment] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [sym_local_variable] = ACTIONS(35),
    [sym_global_variable] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_b] = ACTIONS(35),
    [anon_sym_break] = ACTIONS(35),
    [anon_sym_c] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_d] = ACTIONS(35),
    [anon_sym_e] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_f] = ACTIONS(35),
    [anon_sym_g] = ACTIONS(35),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_halt] = ACTIONS(35),
    [anon_sym_hang] = ACTIONS(35),
    [anon_sym_i] = ACTIONS(35),
    [anon_sym_j] = ACTIONS(35),
    [anon_sym_job] = ACTIONS(35),
    [anon_sym_l] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_k] = ACTIONS(35),
    [anon_sym_kill] = ACTIONS(35),
    [anon_sym_m] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_n] = ACTIONS(35),
    [anon_sym_new] = ACTIONS(35),
    [anon_sym_o] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_q] = ACTIONS(35),
    [anon_sym_quit] = ACTIONS(35),
    [anon_sym_r] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_tc] = ACTIONS(35),
    [anon_sym_tcommit] = ACTIONS(35),
    [anon_sym_tre] = ACTIONS(35),
    [anon_sym_trestart] = ACTIONS(35),
    [anon_sym_tro] = ACTIONS(35),
    [anon_sym_trollback] = ACTIONS(35),
    [anon_sym_ts] = ACTIONS(35),
    [anon_sym_tstart] = ACTIONS(35),
    [anon_sym_u] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_v] = ACTIONS(35),
    [anon_sym_view] = ACTIONS(35),
    [anon_sym_w] = ACTIONS(35),
    [anon_sym_write] = ACTIONS(35),
    [anon_sym_x] = ACTIONS(35),
    [anon_sym_xecute] = ACTIONS(35),
    [anon_sym_z] = ACTIONS(35),
    [sym__set] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym__line_comment] = ACTIONS(33),
    [sym_label] = ACTIONS(33),
  },
  [22] = {
    [sym__statement] = STATE(31),
    [sym_comment] = STATE(31),
    [sym__simple_statement] = STATE(31),
    [sym__compound_statement] = STATE(31),
    [sym_for_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym_function] = STATE(64),
    [sym_call] = STATE(31),
    [sym_command] = STATE(16),
    [sym__write_read_call] = STATE(28),
    [sym__typical_call] = STATE(28),
    [sym_assignment] = STATE(31),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(7),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(7),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(7),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(7),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(7),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(7),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(7),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(7),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(7),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(7),
    [anon_sym_z] = ACTIONS(7),
    [sym__set] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(17),
  },
  [23] = {
    [sym__statement] = STATE(27),
    [sym_comment] = STATE(27),
    [sym__simple_statement] = STATE(27),
    [sym__compound_statement] = STATE(27),
    [sym_for_statement] = STATE(27),
    [sym_if_statement] = STATE(27),
    [sym_function] = STATE(64),
    [sym_call] = STATE(27),
    [sym_command] = STATE(16),
    [sym__write_read_call] = STATE(28),
    [sym__typical_call] = STATE(28),
    [sym_assignment] = STATE(27),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(7),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(7),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(7),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(7),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(7),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(7),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(7),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(7),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(7),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(7),
    [anon_sym_z] = ACTIONS(7),
    [sym__set] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(17),
  },
  [24] = {
    [aux_sym_arguments_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym__eol_comment] = ACTIONS(134),
    [anon_sym_for] = ACTIONS(136),
    [anon_sym_do] = ACTIONS(136),
    [anon_sym_if] = ACTIONS(136),
    [sym_local_variable] = ACTIONS(136),
    [sym_global_variable] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [anon_sym_b] = ACTIONS(136),
    [anon_sym_break] = ACTIONS(136),
    [anon_sym_c] = ACTIONS(136),
    [anon_sym_close] = ACTIONS(136),
    [anon_sym_d] = ACTIONS(136),
    [anon_sym_e] = ACTIONS(136),
    [anon_sym_else] = ACTIONS(136),
    [anon_sym_f] = ACTIONS(136),
    [anon_sym_g] = ACTIONS(136),
    [anon_sym_goto] = ACTIONS(136),
    [anon_sym_h] = ACTIONS(136),
    [anon_sym_halt] = ACTIONS(136),
    [anon_sym_hang] = ACTIONS(136),
    [anon_sym_i] = ACTIONS(136),
    [anon_sym_j] = ACTIONS(136),
    [anon_sym_job] = ACTIONS(136),
    [anon_sym_l] = ACTIONS(136),
    [anon_sym_lock] = ACTIONS(136),
    [anon_sym_k] = ACTIONS(136),
    [anon_sym_kill] = ACTIONS(136),
    [anon_sym_m] = ACTIONS(136),
    [anon_sym_merge] = ACTIONS(136),
    [anon_sym_n] = ACTIONS(136),
    [anon_sym_new] = ACTIONS(136),
    [anon_sym_o] = ACTIONS(136),
    [anon_sym_open] = ACTIONS(136),
    [anon_sym_q] = ACTIONS(136),
    [anon_sym_quit] = ACTIONS(136),
    [anon_sym_r] = ACTIONS(136),
    [anon_sym_read] = ACTIONS(136),
    [anon_sym_tc] = ACTIONS(136),
    [anon_sym_tcommit] = ACTIONS(136),
    [anon_sym_tre] = ACTIONS(136),
    [anon_sym_trestart] = ACTIONS(136),
    [anon_sym_tro] = ACTIONS(136),
    [anon_sym_trollback] = ACTIONS(136),
    [anon_sym_ts] = ACTIONS(136),
    [anon_sym_tstart] = ACTIONS(136),
    [anon_sym_u] = ACTIONS(136),
    [anon_sym_use] = ACTIONS(136),
    [anon_sym_v] = ACTIONS(136),
    [anon_sym_view] = ACTIONS(136),
    [anon_sym_w] = ACTIONS(136),
    [anon_sym_write] = ACTIONS(136),
    [anon_sym_x] = ACTIONS(136),
    [anon_sym_xecute] = ACTIONS(136),
    [anon_sym_z] = ACTIONS(136),
    [sym__set] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_false] = ACTIONS(136),
    [sym_integer] = ACTIONS(136),
    [sym_float] = ACTIONS(134),
    [sym_string] = ACTIONS(134),
    [sym__line_comment] = ACTIONS(134),
    [sym_label] = ACTIONS(134),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym__eol_comment] = ACTIONS(138),
    [anon_sym_for] = ACTIONS(140),
    [anon_sym_do] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(140),
    [sym_local_variable] = ACTIONS(140),
    [sym_global_variable] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [anon_sym_b] = ACTIONS(140),
    [anon_sym_break] = ACTIONS(140),
    [anon_sym_c] = ACTIONS(140),
    [anon_sym_close] = ACTIONS(140),
    [anon_sym_d] = ACTIONS(140),
    [anon_sym_e] = ACTIONS(140),
    [anon_sym_else] = ACTIONS(140),
    [anon_sym_f] = ACTIONS(140),
    [anon_sym_g] = ACTIONS(140),
    [anon_sym_goto] = ACTIONS(140),
    [anon_sym_h] = ACTIONS(140),
    [anon_sym_halt] = ACTIONS(140),
    [anon_sym_hang] = ACTIONS(140),
    [anon_sym_i] = ACTIONS(140),
    [anon_sym_j] = ACTIONS(140),
    [anon_sym_job] = ACTIONS(140),
    [anon_sym_l] = ACTIONS(140),
    [anon_sym_lock] = ACTIONS(140),
    [anon_sym_k] = ACTIONS(140),
    [anon_sym_kill] = ACTIONS(140),
    [anon_sym_m] = ACTIONS(140),
    [anon_sym_merge] = ACTIONS(140),
    [anon_sym_n] = ACTIONS(140),
    [anon_sym_new] = ACTIONS(140),
    [anon_sym_o] = ACTIONS(140),
    [anon_sym_open] = ACTIONS(140),
    [anon_sym_q] = ACTIONS(140),
    [anon_sym_quit] = ACTIONS(140),
    [anon_sym_r] = ACTIONS(140),
    [anon_sym_read] = ACTIONS(140),
    [anon_sym_tc] = ACTIONS(140),
    [anon_sym_tcommit] = ACTIONS(140),
    [anon_sym_tre] = ACTIONS(140),
    [anon_sym_trestart] = ACTIONS(140),
    [anon_sym_tro] = ACTIONS(140),
    [anon_sym_trollback] = ACTIONS(140),
    [anon_sym_ts] = ACTIONS(140),
    [anon_sym_tstart] = ACTIONS(140),
    [anon_sym_u] = ACTIONS(140),
    [anon_sym_use] = ACTIONS(140),
    [anon_sym_v] = ACTIONS(140),
    [anon_sym_view] = ACTIONS(140),
    [anon_sym_w] = ACTIONS(140),
    [anon_sym_write] = ACTIONS(140),
    [anon_sym_x] = ACTIONS(140),
    [anon_sym_xecute] = ACTIONS(140),
    [anon_sym_z] = ACTIONS(140),
    [sym__set] = ACTIONS(140),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [sym_integer] = ACTIONS(140),
    [sym_float] = ACTIONS(138),
    [sym_string] = ACTIONS(138),
    [sym__line_comment] = ACTIONS(138),
    [sym_label] = ACTIONS(138),
  },
  [26] = {
    [sym_comment] = STATE(32),
    [sym__simple_statement] = STATE(32),
    [sym__compound_statement] = STATE(32),
    [sym_for_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym_function] = STATE(64),
    [sym_call] = STATE(32),
    [sym_command] = STATE(16),
    [sym__write_read_call] = STATE(28),
    [sym__typical_call] = STATE(28),
    [sym_assignment] = STATE(32),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(7),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(7),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(7),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(7),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(7),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(7),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(7),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(7),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(7),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(7),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(7),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(7),
    [anon_sym_z] = ACTIONS(7),
    [sym__set] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(144), 24,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_r,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
    ACTIONS(142), 32,
      sym__line_comment,
      sym_label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      anon_sym_if,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
      anon_sym_else,
      anon_sym_goto,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_job,
      anon_sym_lock,
      anon_sym_kill,
      anon_sym_merge,
      anon_sym_new,
      anon_sym_open,
      anon_sym_quit,
      anon_sym_read,
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_write,
      anon_sym_xecute,
      anon_sym_z,
      sym__set,
  [61] = 2,
    ACTIONS(85), 24,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_r,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
    ACTIONS(83), 32,
      sym__line_comment,
      sym_label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      anon_sym_if,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
      anon_sym_else,
      anon_sym_goto,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_job,
      anon_sym_lock,
      anon_sym_kill,
      anon_sym_merge,
      anon_sym_new,
      anon_sym_open,
      anon_sym_quit,
      anon_sym_read,
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_write,
      anon_sym_xecute,
      anon_sym_z,
      sym__set,
  [122] = 2,
    ACTIONS(148), 24,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_r,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
    ACTIONS(146), 32,
      sym__line_comment,
      sym_label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      anon_sym_if,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
      anon_sym_else,
      anon_sym_goto,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_job,
      anon_sym_lock,
      anon_sym_kill,
      anon_sym_merge,
      anon_sym_new,
      anon_sym_open,
      anon_sym_quit,
      anon_sym_read,
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_write,
      anon_sym_xecute,
      anon_sym_z,
      sym__set,
  [183] = 2,
    ACTIONS(152), 24,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_r,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
    ACTIONS(150), 32,
      sym__line_comment,
      sym_label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      anon_sym_if,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
      anon_sym_else,
      anon_sym_goto,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_job,
      anon_sym_lock,
      anon_sym_kill,
      anon_sym_merge,
      anon_sym_new,
      anon_sym_open,
      anon_sym_quit,
      anon_sym_read,
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_write,
      anon_sym_xecute,
      anon_sym_z,
      sym__set,
  [244] = 2,
    ACTIONS(156), 24,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_r,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
    ACTIONS(154), 32,
      sym__line_comment,
      sym_label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      anon_sym_if,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
      anon_sym_else,
      anon_sym_goto,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_job,
      anon_sym_lock,
      anon_sym_kill,
      anon_sym_merge,
      anon_sym_new,
      anon_sym_open,
      anon_sym_quit,
      anon_sym_read,
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_write,
      anon_sym_xecute,
      anon_sym_z,
      sym__set,
  [305] = 2,
    ACTIONS(160), 24,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_r,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
    ACTIONS(158), 32,
      sym__line_comment,
      sym_label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      anon_sym_if,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
      anon_sym_else,
      anon_sym_goto,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_job,
      anon_sym_lock,
      anon_sym_kill,
      anon_sym_merge,
      anon_sym_new,
      anon_sym_open,
      anon_sym_quit,
      anon_sym_read,
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_write,
      anon_sym_xecute,
      anon_sym_z,
      sym__set,
  [366] = 2,
    ACTIONS(164), 24,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_r,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
    ACTIONS(162), 32,
      sym__line_comment,
      sym_label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      anon_sym_if,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
      anon_sym_else,
      anon_sym_goto,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_job,
      anon_sym_lock,
      anon_sym_kill,
      anon_sym_merge,
      anon_sym_new,
      anon_sym_open,
      anon_sym_quit,
      anon_sym_read,
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_write,
      anon_sym_xecute,
      anon_sym_z,
      sym__set,
  [427] = 5,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(19), 2,
      sym__write_read_outro,
      anon_sym_RPAREN,
    ACTIONS(168), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(166), 21,
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
  [466] = 4,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(33), 2,
      sym__write_read_outro,
      anon_sym_RPAREN,
    ACTIONS(168), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(166), 21,
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
  [502] = 2,
    ACTIONS(43), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
    ACTIONS(41), 23,
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
      sym__write_read_outro,
      anon_sym_RPAREN,
  [534] = 2,
    ACTIONS(39), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
    ACTIONS(37), 23,
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
      sym__write_read_outro,
      anon_sym_RPAREN,
  [566] = 2,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
    ACTIONS(51), 23,
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
      sym__write_read_outro,
      anon_sym_RPAREN,
  [598] = 2,
    ACTIONS(57), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_COMMA,
    ACTIONS(55), 23,
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
      sym__write_read_outro,
      anon_sym_RPAREN,
  [630] = 9,
    ACTIONS(87), 1,
      sym_local_variable,
    ACTIONS(89), 1,
      sym_global_variable,
    ACTIONS(95), 1,
      sym_integer,
    STATE(38), 1,
      sym_boolean,
    STATE(60), 1,
      sym_arguments,
    ACTIONS(91), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_float,
      sym_string,
    STATE(34), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [666] = 8,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym_local_variable,
    ACTIONS(174), 1,
      sym_global_variable,
    STATE(38), 1,
      sym_boolean,
    ACTIONS(91), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_float,
      sym_string,
    STATE(36), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [699] = 8,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(176), 1,
      sym_local_variable,
    ACTIONS(178), 1,
      sym_global_variable,
    STATE(38), 1,
      sym_boolean,
    ACTIONS(91), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_float,
      sym_string,
    STATE(37), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [732] = 8,
    ACTIONS(180), 1,
      sym_local_variable,
    ACTIONS(182), 1,
      sym_global_variable,
    ACTIONS(188), 1,
      sym_integer,
    STATE(13), 1,
      sym_boolean,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_float,
      sym_string,
    STATE(11), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [765] = 8,
    ACTIONS(188), 1,
      sym_integer,
    ACTIONS(192), 1,
      sym_local_variable,
    ACTIONS(194), 1,
      sym_global_variable,
    STATE(13), 1,
      sym_boolean,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_float,
      sym_string,
    STATE(14), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [798] = 8,
    ACTIONS(79), 1,
      sym_integer,
    ACTIONS(196), 1,
      sym_local_variable,
    ACTIONS(198), 1,
      sym_global_variable,
    STATE(8), 1,
      sym_boolean,
    ACTIONS(75), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      sym_float,
      sym_string,
    STATE(5), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [831] = 8,
    ACTIONS(79), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_local_variable,
    ACTIONS(202), 1,
      sym_global_variable,
    STATE(8), 1,
      sym_boolean,
    ACTIONS(75), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      sym_float,
      sym_string,
    STATE(6), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [864] = 8,
    ACTIONS(79), 1,
      sym_integer,
    ACTIONS(204), 1,
      sym_local_variable,
    ACTIONS(206), 1,
      sym_global_variable,
    STATE(8), 1,
      sym_boolean,
    ACTIONS(75), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      sym_float,
      sym_string,
    STATE(4), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [897] = 8,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(208), 1,
      sym_local_variable,
    ACTIONS(210), 1,
      sym_global_variable,
    STATE(38), 1,
      sym_boolean,
    ACTIONS(91), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_float,
      sym_string,
    STATE(35), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [930] = 8,
    ACTIONS(188), 1,
      sym_integer,
    ACTIONS(212), 1,
      sym_local_variable,
    ACTIONS(214), 1,
      sym_global_variable,
    STATE(13), 1,
      sym_boolean,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(186), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_float,
      sym_string,
    STATE(10), 6,
      sym__expression,
      sym__identifier,
      sym__variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [963] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(33), 2,
      sym__write_read_outro,
      anon_sym_RPAREN,
  [974] = 3,
    STATE(57), 1,
      sym__variable,
    STATE(62), 1,
      sym__loop_range,
    ACTIONS(219), 2,
      sym_local_variable,
      sym_global_variable,
  [985] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(134), 2,
      sym__write_read_outro,
      anon_sym_RPAREN,
  [996] = 3,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(224), 1,
      anon_sym_do,
    STATE(53), 1,
      aux_sym__loop_range_repeat1,
  [1006] = 3,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(228), 1,
      anon_sym_do,
    STATE(53), 1,
      aux_sym__loop_range_repeat1,
  [1016] = 2,
    STATE(58), 1,
      sym__variable,
    ACTIONS(230), 2,
      sym_local_variable,
      sym_global_variable,
  [1024] = 2,
    STATE(61), 1,
      sym__variable,
    ACTIONS(232), 2,
      sym_local_variable,
      sym_global_variable,
  [1032] = 3,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      anon_sym_do,
    STATE(54), 1,
      aux_sym__loop_range_repeat1,
  [1042] = 1,
    ACTIONS(224), 2,
      anon_sym_COLON,
      anon_sym_do,
  [1047] = 1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
  [1051] = 1,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
  [1055] = 1,
    ACTIONS(240), 1,
      anon_sym_EQ,
  [1059] = 1,
    ACTIONS(242), 1,
      anon_sym_do,
  [1063] = 1,
    ACTIONS(244), 1,
      sym__write_read_outro,
  [1067] = 1,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
  [1071] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
  [1075] = 1,
    ACTIONS(250), 1,
      sym__alphanum,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 61,
  [SMALL_STATE(29)] = 122,
  [SMALL_STATE(30)] = 183,
  [SMALL_STATE(31)] = 244,
  [SMALL_STATE(32)] = 305,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 427,
  [SMALL_STATE(35)] = 466,
  [SMALL_STATE(36)] = 502,
  [SMALL_STATE(37)] = 534,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 598,
  [SMALL_STATE(40)] = 630,
  [SMALL_STATE(41)] = 666,
  [SMALL_STATE(42)] = 699,
  [SMALL_STATE(43)] = 732,
  [SMALL_STATE(44)] = 765,
  [SMALL_STATE(45)] = 798,
  [SMALL_STATE(46)] = 831,
  [SMALL_STATE(47)] = 864,
  [SMALL_STATE(48)] = 897,
  [SMALL_STATE(49)] = 930,
  [SMALL_STATE(50)] = 963,
  [SMALL_STATE(51)] = 974,
  [SMALL_STATE(52)] = 985,
  [SMALL_STATE(53)] = 996,
  [SMALL_STATE(54)] = 1006,
  [SMALL_STATE(55)] = 1016,
  [SMALL_STATE(56)] = 1024,
  [SMALL_STATE(57)] = 1032,
  [SMALL_STATE(58)] = 1042,
  [SMALL_STATE(59)] = 1047,
  [SMALL_STATE(60)] = 1051,
  [SMALL_STATE(61)] = 1055,
  [SMALL_STATE(62)] = 1059,
  [SMALL_STATE(63)] = 1063,
  [SMALL_STATE(64)] = 1067,
  [SMALL_STATE(65)] = 1071,
  [SMALL_STATE(66)] = 1075,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_call, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_read_call, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_call, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_call, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(48),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(55),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [248] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_comment = 0,
  ts_external_token_label = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_comment] = sym__line_comment,
  [ts_external_token_label] = sym_label,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token_label] = true,
  },
  [2] = {
    [ts_external_token__line_comment] = true,
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
