#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 63
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_COMMA = 2,
  anon_sym_RPAREN = 3,
  sym__eol_comment = 4,
  anon_sym_COLON = 5,
  anon_sym_for = 6,
  anon_sym_EQ = 7,
  anon_sym_do = 8,
  anon_sym_if = 9,
  sym_local_variable = 10,
  sym_global_variable = 11,
  anon_sym_DASH = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_STAR = 14,
  anon_sym_PLUS = 15,
  anon_sym_SLASH = 16,
  anon_sym_BSLASH = 17,
  anon_sym_POUND = 18,
  anon_sym_STAR_STAR = 19,
  anon_sym_GT = 20,
  anon_sym_LT = 21,
  anon_sym_SQUOTE_GT = 22,
  anon_sym_SQUOTE_LT = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_QMARK = 26,
  anon_sym_RBRACK_RBRACK = 27,
  anon_sym_SQUOTE_EQ = 28,
  anon_sym_SQUOTE_LBRACK = 29,
  anon_sym_SQUOTE_RBRACK = 30,
  anon_sym_SQUOTE_QMARK = 31,
  anon_sym_SQUOTE_RBRACK_RBRACK = 32,
  anon_sym__ = 33,
  anon_sym_AMP = 34,
  anon_sym_BANG = 35,
  sym_write_read_outro = 36,
  anon_sym_DOLLAR = 37,
  anon_sym_b = 38,
  anon_sym_break = 39,
  anon_sym_c = 40,
  anon_sym_close = 41,
  anon_sym_d = 42,
  anon_sym_e = 43,
  anon_sym_else = 44,
  anon_sym_f = 45,
  anon_sym_g = 46,
  anon_sym_goto = 47,
  anon_sym_h = 48,
  anon_sym_halt = 49,
  anon_sym_hang = 50,
  anon_sym_i = 51,
  anon_sym_j = 52,
  anon_sym_job = 53,
  anon_sym_l = 54,
  anon_sym_lock = 55,
  anon_sym_k = 56,
  anon_sym_kill = 57,
  anon_sym_m = 58,
  anon_sym_merge = 59,
  anon_sym_n = 60,
  anon_sym_new = 61,
  anon_sym_o = 62,
  anon_sym_open = 63,
  anon_sym_q = 64,
  anon_sym_quit = 65,
  anon_sym_r = 66,
  anon_sym_read = 67,
  anon_sym_tc = 68,
  anon_sym_tcommit = 69,
  anon_sym_tre = 70,
  anon_sym_trestart = 71,
  anon_sym_tro = 72,
  anon_sym_trollback = 73,
  anon_sym_ts = 74,
  anon_sym_tstart = 75,
  anon_sym_u = 76,
  anon_sym_use = 77,
  anon_sym_v = 78,
  anon_sym_view = 79,
  anon_sym_w = 80,
  anon_sym_write = 81,
  anon_sym_x = 82,
  anon_sym_xecute = 83,
  anon_sym_z = 84,
  sym__set = 85,
  sym__numeric = 86,
  sym__alphanum = 87,
  anon_sym_true = 88,
  anon_sym_false = 89,
  sym_integer = 90,
  sym_float = 91,
  sym_string = 92,
  sym__line_comment = 93,
  sym__label = 94,
  sym_program = 95,
  sym__statement = 96,
  sym_label = 97,
  sym_function_declaration = 98,
  sym_parameters = 99,
  sym_parameter = 100,
  sym_comment = 101,
  sym_conditional = 102,
  sym__simple_statement = 103,
  sym__compound_statement = 104,
  sym_for_statement = 105,
  sym__loop_range = 106,
  sym_if_statement = 107,
  sym__expression = 108,
  sym__identifier = 109,
  sym__variable = 110,
  sym_unary_expression = 111,
  sym_binary_expression = 112,
  sym_arguments = 113,
  sym_function = 114,
  sym_call = 115,
  sym_command = 116,
  sym__write_read_call = 117,
  sym__typical_call = 118,
  sym_assignment = 119,
  sym_literal = 120,
  sym_boolean = 121,
  aux_sym_program_repeat1 = 122,
  aux_sym_parameters_repeat1 = 123,
  aux_sym__loop_range_repeat1 = 124,
  aux_sym_arguments_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_write_read_outro] = "write_read_outro",
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
  [sym__set] = "_set",
  [sym__numeric] = "_numeric",
  [sym__alphanum] = "_alphanum",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym__line_comment] = "_line_comment",
  [sym__label] = "_label",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
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
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__loop_range_repeat1] = "_loop_range_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_write_read_outro] = sym_write_read_outro,
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
  [sym__set] = sym__set,
  [sym__numeric] = sym__numeric,
  [sym__alphanum] = sym__alphanum,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym__line_comment] = sym__line_comment,
  [sym__label] = sym__label,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_label] = sym_label,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
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
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__loop_range_repeat1] = aux_sym__loop_range_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym_write_read_outro] = {
    .visible = true,
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
  [sym__label] = {
    .visible = false,
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
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
  [aux_sym_parameters_repeat1] = {
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
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 8,
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
  [24] = 8,
  [25] = 9,
  [26] = 10,
  [27] = 16,
  [28] = 18,
  [29] = 20,
  [30] = 14,
  [31] = 15,
  [32] = 21,
  [33] = 22,
  [34] = 23,
  [35] = 17,
  [36] = 23,
  [37] = 22,
  [38] = 38,
  [39] = 18,
  [40] = 17,
  [41] = 15,
  [42] = 14,
  [43] = 16,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 51,
  [55] = 50,
  [56] = 49,
  [57] = 49,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 9,
  [73] = 73,
  [74] = 8,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 65,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 91,
  [98] = 92,
  [99] = 91,
  [100] = 92,
  [101] = 101,
  [102] = 102,
  [103] = 95,
  [104] = 95,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(171);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(173);
      if (lookahead == '&') ADVANCE(170);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '?') ADVANCE(162);
      if (lookahead == '[') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'k') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'q') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == 'v') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(258);
      if (lookahead == 'x') ADVANCE(262);
      if (lookahead == 'z') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 3:
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 4:
      if (lookahead == '^') ADVANCE(66);
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
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(247);
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
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(198);
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
      if (lookahead == 'k') ADVANCE(208);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(244);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(212);
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
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(76);
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
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(240);
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
      if (lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(256);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 66:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(171);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(173);
      if (lookahead == '&') ADVANCE(170);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '?') ADVANCE(162);
      if (lookahead == '[') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'k') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'q') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == 'v') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(258);
      if (lookahead == 'x') ADVANCE(262);
      if (lookahead == 'z') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(146);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(171);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(173);
      if (lookahead == '&') ADVANCE(170);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '?') ADVANCE(162);
      if (lookahead == '[') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'k') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'q') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == 'v') ADVANCE(254);
      if (lookahead == 'w') ADVANCE(259);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead == 'z') ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(172);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(114);
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
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(246);
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
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'g') ADVANCE(199);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'g') ADVANCE(102);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'k') ADVANCE(209);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'k') ADVANCE(177);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'k') ADVANCE(245);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'r') ADVANCE(138);
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
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'w') ADVANCE(221);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_local_variable);
      if (lookahead == 'w') ADVANCE(257);
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
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_write_read_outro);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_hang);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_hang);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_job);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_job);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_lock);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_kill);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_quit);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_quit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_tcommit);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_tcommit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_trestart);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_trestart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_trollback);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_trollback);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_tstart);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_tstart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_view);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_write);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_xecute);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_xecute);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 68, .external_lex_state = 1},
  [2] = {.lex_state = 67, .external_lex_state = 1},
  [3] = {.lex_state = 67, .external_lex_state = 1},
  [4] = {.lex_state = 67, .external_lex_state = 1},
  [5] = {.lex_state = 67, .external_lex_state = 1},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67, .external_lex_state = 1},
  [9] = {.lex_state = 67, .external_lex_state = 1},
  [10] = {.lex_state = 67, .external_lex_state = 1},
  [11] = {.lex_state = 67, .external_lex_state = 1},
  [12] = {.lex_state = 67, .external_lex_state = 1},
  [13] = {.lex_state = 67, .external_lex_state = 1},
  [14] = {.lex_state = 67, .external_lex_state = 1},
  [15] = {.lex_state = 67, .external_lex_state = 1},
  [16] = {.lex_state = 67, .external_lex_state = 1},
  [17] = {.lex_state = 67, .external_lex_state = 1},
  [18] = {.lex_state = 67, .external_lex_state = 1},
  [19] = {.lex_state = 67, .external_lex_state = 1},
  [20] = {.lex_state = 67, .external_lex_state = 1},
  [21] = {.lex_state = 67, .external_lex_state = 1},
  [22] = {.lex_state = 67, .external_lex_state = 1},
  [23] = {.lex_state = 67, .external_lex_state = 1},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 67},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 67},
  [35] = {.lex_state = 67},
  [36] = {.lex_state = 68, .external_lex_state = 1},
  [37] = {.lex_state = 68, .external_lex_state = 1},
  [38] = {.lex_state = 68, .external_lex_state = 1},
  [39] = {.lex_state = 68, .external_lex_state = 1},
  [40] = {.lex_state = 68, .external_lex_state = 1},
  [41] = {.lex_state = 68, .external_lex_state = 1},
  [42] = {.lex_state = 68, .external_lex_state = 1},
  [43] = {.lex_state = 68, .external_lex_state = 1},
  [44] = {.lex_state = 67, .external_lex_state = 1},
  [45] = {.lex_state = 67, .external_lex_state = 1},
  [46] = {.lex_state = 67},
  [47] = {.lex_state = 67},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 67},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 67},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 68, .external_lex_state = 1},
  [59] = {.lex_state = 68, .external_lex_state = 1},
  [60] = {.lex_state = 68, .external_lex_state = 1},
  [61] = {.lex_state = 68, .external_lex_state = 1},
  [62] = {.lex_state = 68, .external_lex_state = 1},
  [63] = {.lex_state = 68, .external_lex_state = 1},
  [64] = {.lex_state = 68, .external_lex_state = 1},
  [65] = {.lex_state = 68, .external_lex_state = 1},
  [66] = {.lex_state = 68, .external_lex_state = 1},
  [67] = {.lex_state = 68, .external_lex_state = 1},
  [68] = {.lex_state = 68, .external_lex_state = 1},
  [69] = {.lex_state = 68, .external_lex_state = 1},
  [70] = {.lex_state = 68, .external_lex_state = 1},
  [71] = {.lex_state = 68, .external_lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 68},
  [77] = {.lex_state = 68},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 68},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 68},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 68},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_write_read_outro] = ACTIONS(1),
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
    [sym__set] = ACTIONS(1),
    [sym__numeric] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(1),
    [sym__label] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(96),
    [sym__statement] = STATE(59),
    [sym_label] = STATE(60),
    [sym_function_declaration] = STATE(59),
    [sym_comment] = STATE(59),
    [sym__simple_statement] = STATE(59),
    [sym__compound_statement] = STATE(59),
    [sym_for_statement] = STATE(59),
    [sym_if_statement] = STATE(59),
    [sym_function] = STATE(95),
    [sym_call] = STATE(59),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_assignment] = STATE(59),
    [aux_sym_program_repeat1] = STATE(59),
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
    [sym__label] = ACTIONS(17),
  },
  [2] = {
    [sym__expression] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym__variable] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym_arguments] = STATE(20),
    [sym_function] = STATE(103),
    [sym_call] = STATE(9),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(16),
    [sym__typical_call] = STATE(16),
    [sym_literal] = STATE(9),
    [sym_boolean] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(21),
    [sym_local_variable] = ACTIONS(21),
    [sym_global_variable] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_SQUOTE_GT] = ACTIONS(19),
    [anon_sym_SQUOTE_LT] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_EQ] = ACTIONS(19),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(21),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_b] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_c] = ACTIONS(21),
    [anon_sym_close] = ACTIONS(21),
    [anon_sym_d] = ACTIONS(21),
    [anon_sym_e] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_f] = ACTIONS(21),
    [anon_sym_g] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(21),
    [anon_sym_halt] = ACTIONS(21),
    [anon_sym_hang] = ACTIONS(21),
    [anon_sym_i] = ACTIONS(21),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_job] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_m] = ACTIONS(21),
    [anon_sym_merge] = ACTIONS(21),
    [anon_sym_n] = ACTIONS(21),
    [anon_sym_new] = ACTIONS(21),
    [anon_sym_o] = ACTIONS(21),
    [anon_sym_open] = ACTIONS(21),
    [anon_sym_q] = ACTIONS(21),
    [anon_sym_quit] = ACTIONS(21),
    [anon_sym_r] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_tc] = ACTIONS(21),
    [anon_sym_tcommit] = ACTIONS(21),
    [anon_sym_tre] = ACTIONS(21),
    [anon_sym_trestart] = ACTIONS(21),
    [anon_sym_tro] = ACTIONS(21),
    [anon_sym_trollback] = ACTIONS(21),
    [anon_sym_ts] = ACTIONS(21),
    [anon_sym_tstart] = ACTIONS(21),
    [anon_sym_u] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_v] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_xecute] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [sym__set] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [3] = {
    [sym__expression] = STATE(72),
    [sym__identifier] = STATE(72),
    [sym__variable] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_arguments] = STATE(97),
    [sym_function] = STATE(104),
    [sym_call] = STATE(72),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(72),
    [sym_boolean] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym__eol_comment] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
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
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [sym__set] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [sym__line_comment] = ACTIONS(23),
    [sym__label] = ACTIONS(23),
  },
  [4] = {
    [sym__expression] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym__variable] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_arguments] = STATE(20),
    [sym_function] = STATE(103),
    [sym_call] = STATE(11),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(16),
    [sym__typical_call] = STATE(16),
    [sym_literal] = STATE(11),
    [sym_boolean] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(21),
    [sym_local_variable] = ACTIONS(21),
    [sym_global_variable] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_SQUOTE_GT] = ACTIONS(19),
    [anon_sym_SQUOTE_LT] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_EQ] = ACTIONS(19),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(21),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_b] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_c] = ACTIONS(21),
    [anon_sym_close] = ACTIONS(21),
    [anon_sym_d] = ACTIONS(21),
    [anon_sym_e] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_f] = ACTIONS(21),
    [anon_sym_g] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(21),
    [anon_sym_halt] = ACTIONS(21),
    [anon_sym_hang] = ACTIONS(21),
    [anon_sym_i] = ACTIONS(21),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_job] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_m] = ACTIONS(21),
    [anon_sym_merge] = ACTIONS(21),
    [anon_sym_n] = ACTIONS(21),
    [anon_sym_new] = ACTIONS(21),
    [anon_sym_o] = ACTIONS(21),
    [anon_sym_open] = ACTIONS(21),
    [anon_sym_q] = ACTIONS(21),
    [anon_sym_quit] = ACTIONS(21),
    [anon_sym_r] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_tc] = ACTIONS(21),
    [anon_sym_tcommit] = ACTIONS(21),
    [anon_sym_tre] = ACTIONS(21),
    [anon_sym_trestart] = ACTIONS(21),
    [anon_sym_tro] = ACTIONS(21),
    [anon_sym_trollback] = ACTIONS(21),
    [anon_sym_ts] = ACTIONS(21),
    [anon_sym_tstart] = ACTIONS(21),
    [anon_sym_u] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_v] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_xecute] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [sym__set] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [5] = {
    [sym__expression] = STATE(72),
    [sym__identifier] = STATE(72),
    [sym__variable] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_arguments] = STATE(91),
    [sym_function] = STATE(104),
    [sym_call] = STATE(72),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(72),
    [sym_boolean] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__eol_comment] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
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
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [sym__set] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [sym__line_comment] = ACTIONS(23),
    [sym__label] = ACTIONS(23),
  },
  [6] = {
    [sym__expression] = STATE(25),
    [sym__identifier] = STATE(25),
    [sym__variable] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_arguments] = STATE(29),
    [sym_function] = STATE(104),
    [sym_call] = STATE(25),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(25),
    [sym_boolean] = STATE(28),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(21),
    [sym_local_variable] = ACTIONS(21),
    [sym_global_variable] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_SQUOTE_GT] = ACTIONS(19),
    [anon_sym_SQUOTE_LT] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_EQ] = ACTIONS(19),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(21),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(19),
    [sym_write_read_outro] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_b] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_c] = ACTIONS(21),
    [anon_sym_close] = ACTIONS(21),
    [anon_sym_d] = ACTIONS(21),
    [anon_sym_e] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_f] = ACTIONS(21),
    [anon_sym_g] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(21),
    [anon_sym_halt] = ACTIONS(21),
    [anon_sym_hang] = ACTIONS(21),
    [anon_sym_i] = ACTIONS(21),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_job] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_m] = ACTIONS(21),
    [anon_sym_merge] = ACTIONS(21),
    [anon_sym_n] = ACTIONS(21),
    [anon_sym_new] = ACTIONS(21),
    [anon_sym_o] = ACTIONS(21),
    [anon_sym_open] = ACTIONS(21),
    [anon_sym_q] = ACTIONS(21),
    [anon_sym_quit] = ACTIONS(21),
    [anon_sym_r] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_tc] = ACTIONS(21),
    [anon_sym_tcommit] = ACTIONS(21),
    [anon_sym_tre] = ACTIONS(21),
    [anon_sym_trestart] = ACTIONS(21),
    [anon_sym_tro] = ACTIONS(21),
    [anon_sym_trollback] = ACTIONS(21),
    [anon_sym_ts] = ACTIONS(21),
    [anon_sym_tstart] = ACTIONS(21),
    [anon_sym_u] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_v] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_xecute] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
  },
  [7] = {
    [sym__expression] = STATE(72),
    [sym__identifier] = STATE(72),
    [sym__variable] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_arguments] = STATE(99),
    [sym_function] = STATE(104),
    [sym_call] = STATE(72),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(72),
    [sym_boolean] = STATE(28),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
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
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_write_read_outro] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [8] = {
    [aux_sym_arguments_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [sym__eol_comment] = ACTIONS(43),
    [anon_sym_for] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [sym_local_variable] = ACTIONS(47),
    [sym_global_variable] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_STAR_STAR] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_SQUOTE_GT] = ACTIONS(43),
    [anon_sym_SQUOTE_LT] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_EQ] = ACTIONS(43),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym__] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(43),
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
    [sym_float] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(43),
    [sym__label] = ACTIONS(43),
  },
  [9] = {
    [aux_sym_arguments_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [sym__eol_comment] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [sym_local_variable] = ACTIONS(51),
    [sym_global_variable] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_SQUOTE_GT] = ACTIONS(53),
    [anon_sym_SQUOTE_LT] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_EQ] = ACTIONS(53),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_b] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_c] = ACTIONS(51),
    [anon_sym_close] = ACTIONS(51),
    [anon_sym_d] = ACTIONS(51),
    [anon_sym_e] = ACTIONS(51),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_f] = ACTIONS(51),
    [anon_sym_g] = ACTIONS(51),
    [anon_sym_goto] = ACTIONS(51),
    [anon_sym_h] = ACTIONS(51),
    [anon_sym_halt] = ACTIONS(51),
    [anon_sym_hang] = ACTIONS(51),
    [anon_sym_i] = ACTIONS(51),
    [anon_sym_j] = ACTIONS(51),
    [anon_sym_job] = ACTIONS(51),
    [anon_sym_l] = ACTIONS(51),
    [anon_sym_lock] = ACTIONS(51),
    [anon_sym_k] = ACTIONS(51),
    [anon_sym_kill] = ACTIONS(51),
    [anon_sym_m] = ACTIONS(51),
    [anon_sym_merge] = ACTIONS(51),
    [anon_sym_n] = ACTIONS(51),
    [anon_sym_new] = ACTIONS(51),
    [anon_sym_o] = ACTIONS(51),
    [anon_sym_open] = ACTIONS(51),
    [anon_sym_q] = ACTIONS(51),
    [anon_sym_quit] = ACTIONS(51),
    [anon_sym_r] = ACTIONS(51),
    [anon_sym_read] = ACTIONS(51),
    [anon_sym_tc] = ACTIONS(51),
    [anon_sym_tcommit] = ACTIONS(51),
    [anon_sym_tre] = ACTIONS(51),
    [anon_sym_trestart] = ACTIONS(51),
    [anon_sym_tro] = ACTIONS(51),
    [anon_sym_trollback] = ACTIONS(51),
    [anon_sym_ts] = ACTIONS(51),
    [anon_sym_tstart] = ACTIONS(51),
    [anon_sym_u] = ACTIONS(51),
    [anon_sym_use] = ACTIONS(51),
    [anon_sym_v] = ACTIONS(51),
    [anon_sym_view] = ACTIONS(51),
    [anon_sym_w] = ACTIONS(51),
    [anon_sym_write] = ACTIONS(51),
    [anon_sym_x] = ACTIONS(51),
    [anon_sym_xecute] = ACTIONS(51),
    [anon_sym_z] = ACTIONS(51),
    [sym__set] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [sym__line_comment] = ACTIONS(49),
    [sym__label] = ACTIONS(49),
  },
  [10] = {
    [aux_sym_arguments_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym__eol_comment] = ACTIONS(57),
    [anon_sym_for] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(62),
    [sym_local_variable] = ACTIONS(62),
    [sym_global_variable] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_SQUOTE_GT] = ACTIONS(57),
    [anon_sym_SQUOTE_LT] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(57),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_EQ] = ACTIONS(57),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(62),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(57),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(57),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [anon_sym_b] = ACTIONS(62),
    [anon_sym_break] = ACTIONS(62),
    [anon_sym_c] = ACTIONS(62),
    [anon_sym_close] = ACTIONS(62),
    [anon_sym_d] = ACTIONS(62),
    [anon_sym_e] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_f] = ACTIONS(62),
    [anon_sym_g] = ACTIONS(62),
    [anon_sym_goto] = ACTIONS(62),
    [anon_sym_h] = ACTIONS(62),
    [anon_sym_halt] = ACTIONS(62),
    [anon_sym_hang] = ACTIONS(62),
    [anon_sym_i] = ACTIONS(62),
    [anon_sym_j] = ACTIONS(62),
    [anon_sym_job] = ACTIONS(62),
    [anon_sym_l] = ACTIONS(62),
    [anon_sym_lock] = ACTIONS(62),
    [anon_sym_k] = ACTIONS(62),
    [anon_sym_kill] = ACTIONS(62),
    [anon_sym_m] = ACTIONS(62),
    [anon_sym_merge] = ACTIONS(62),
    [anon_sym_n] = ACTIONS(62),
    [anon_sym_new] = ACTIONS(62),
    [anon_sym_o] = ACTIONS(62),
    [anon_sym_open] = ACTIONS(62),
    [anon_sym_q] = ACTIONS(62),
    [anon_sym_quit] = ACTIONS(62),
    [anon_sym_r] = ACTIONS(62),
    [anon_sym_read] = ACTIONS(62),
    [anon_sym_tc] = ACTIONS(62),
    [anon_sym_tcommit] = ACTIONS(62),
    [anon_sym_tre] = ACTIONS(62),
    [anon_sym_trestart] = ACTIONS(62),
    [anon_sym_tro] = ACTIONS(62),
    [anon_sym_trollback] = ACTIONS(62),
    [anon_sym_ts] = ACTIONS(62),
    [anon_sym_tstart] = ACTIONS(62),
    [anon_sym_u] = ACTIONS(62),
    [anon_sym_use] = ACTIONS(62),
    [anon_sym_v] = ACTIONS(62),
    [anon_sym_view] = ACTIONS(62),
    [anon_sym_w] = ACTIONS(62),
    [anon_sym_write] = ACTIONS(62),
    [anon_sym_x] = ACTIONS(62),
    [anon_sym_xecute] = ACTIONS(62),
    [anon_sym_z] = ACTIONS(62),
    [sym__set] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(62),
    [anon_sym_false] = ACTIONS(62),
    [sym_integer] = ACTIONS(62),
    [sym_float] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym__line_comment] = ACTIONS(57),
    [sym__label] = ACTIONS(57),
  },
  [11] = {
    [aux_sym_arguments_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(45),
    [sym__eol_comment] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [sym_local_variable] = ACTIONS(51),
    [sym_global_variable] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_SQUOTE_GT] = ACTIONS(53),
    [anon_sym_SQUOTE_LT] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_EQ] = ACTIONS(53),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_b] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_c] = ACTIONS(51),
    [anon_sym_close] = ACTIONS(51),
    [anon_sym_d] = ACTIONS(51),
    [anon_sym_e] = ACTIONS(51),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_f] = ACTIONS(51),
    [anon_sym_g] = ACTIONS(51),
    [anon_sym_goto] = ACTIONS(51),
    [anon_sym_h] = ACTIONS(51),
    [anon_sym_halt] = ACTIONS(51),
    [anon_sym_hang] = ACTIONS(51),
    [anon_sym_i] = ACTIONS(51),
    [anon_sym_j] = ACTIONS(51),
    [anon_sym_job] = ACTIONS(51),
    [anon_sym_l] = ACTIONS(51),
    [anon_sym_lock] = ACTIONS(51),
    [anon_sym_k] = ACTIONS(51),
    [anon_sym_kill] = ACTIONS(51),
    [anon_sym_m] = ACTIONS(51),
    [anon_sym_merge] = ACTIONS(51),
    [anon_sym_n] = ACTIONS(51),
    [anon_sym_new] = ACTIONS(51),
    [anon_sym_o] = ACTIONS(51),
    [anon_sym_open] = ACTIONS(51),
    [anon_sym_q] = ACTIONS(51),
    [anon_sym_quit] = ACTIONS(51),
    [anon_sym_r] = ACTIONS(51),
    [anon_sym_read] = ACTIONS(51),
    [anon_sym_tc] = ACTIONS(51),
    [anon_sym_tcommit] = ACTIONS(51),
    [anon_sym_tre] = ACTIONS(51),
    [anon_sym_trestart] = ACTIONS(51),
    [anon_sym_tro] = ACTIONS(51),
    [anon_sym_trollback] = ACTIONS(51),
    [anon_sym_ts] = ACTIONS(51),
    [anon_sym_tstart] = ACTIONS(51),
    [anon_sym_u] = ACTIONS(51),
    [anon_sym_use] = ACTIONS(51),
    [anon_sym_v] = ACTIONS(51),
    [anon_sym_view] = ACTIONS(51),
    [anon_sym_w] = ACTIONS(51),
    [anon_sym_write] = ACTIONS(51),
    [anon_sym_x] = ACTIONS(51),
    [anon_sym_xecute] = ACTIONS(51),
    [anon_sym_z] = ACTIONS(51),
    [sym__set] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [sym__line_comment] = ACTIONS(49),
    [sym__label] = ACTIONS(49),
  },
  [12] = {
    [aux_sym_arguments_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(45),
    [sym__eol_comment] = ACTIONS(64),
    [anon_sym_for] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(66),
    [anon_sym_if] = ACTIONS(66),
    [sym_local_variable] = ACTIONS(51),
    [sym_global_variable] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_SQUOTE_GT] = ACTIONS(53),
    [anon_sym_SQUOTE_LT] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_EQ] = ACTIONS(53),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(64),
    [anon_sym_b] = ACTIONS(66),
    [anon_sym_break] = ACTIONS(66),
    [anon_sym_c] = ACTIONS(66),
    [anon_sym_close] = ACTIONS(66),
    [anon_sym_d] = ACTIONS(66),
    [anon_sym_e] = ACTIONS(66),
    [anon_sym_else] = ACTIONS(66),
    [anon_sym_f] = ACTIONS(66),
    [anon_sym_g] = ACTIONS(66),
    [anon_sym_goto] = ACTIONS(66),
    [anon_sym_h] = ACTIONS(66),
    [anon_sym_halt] = ACTIONS(66),
    [anon_sym_hang] = ACTIONS(66),
    [anon_sym_i] = ACTIONS(66),
    [anon_sym_j] = ACTIONS(66),
    [anon_sym_job] = ACTIONS(66),
    [anon_sym_l] = ACTIONS(66),
    [anon_sym_lock] = ACTIONS(66),
    [anon_sym_k] = ACTIONS(66),
    [anon_sym_kill] = ACTIONS(66),
    [anon_sym_m] = ACTIONS(66),
    [anon_sym_merge] = ACTIONS(66),
    [anon_sym_n] = ACTIONS(66),
    [anon_sym_new] = ACTIONS(66),
    [anon_sym_o] = ACTIONS(66),
    [anon_sym_open] = ACTIONS(66),
    [anon_sym_q] = ACTIONS(66),
    [anon_sym_quit] = ACTIONS(66),
    [anon_sym_r] = ACTIONS(66),
    [anon_sym_read] = ACTIONS(66),
    [anon_sym_tc] = ACTIONS(66),
    [anon_sym_tcommit] = ACTIONS(66),
    [anon_sym_tre] = ACTIONS(66),
    [anon_sym_trestart] = ACTIONS(66),
    [anon_sym_tro] = ACTIONS(66),
    [anon_sym_trollback] = ACTIONS(66),
    [anon_sym_ts] = ACTIONS(66),
    [anon_sym_tstart] = ACTIONS(66),
    [anon_sym_u] = ACTIONS(66),
    [anon_sym_use] = ACTIONS(66),
    [anon_sym_v] = ACTIONS(66),
    [anon_sym_view] = ACTIONS(66),
    [anon_sym_w] = ACTIONS(66),
    [anon_sym_write] = ACTIONS(66),
    [anon_sym_x] = ACTIONS(66),
    [anon_sym_xecute] = ACTIONS(66),
    [anon_sym_z] = ACTIONS(66),
    [sym__set] = ACTIONS(66),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [sym__line_comment] = ACTIONS(64),
    [sym__label] = ACTIONS(64),
  },
  [13] = {
    [aux_sym_arguments_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [sym__eol_comment] = ACTIONS(43),
    [anon_sym_for] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [sym_local_variable] = ACTIONS(47),
    [sym_global_variable] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_STAR_STAR] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_SQUOTE_GT] = ACTIONS(43),
    [anon_sym_SQUOTE_LT] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_EQ] = ACTIONS(43),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym__] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(43),
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
    [sym_float] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(43),
    [sym__label] = ACTIONS(43),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [sym__eol_comment] = ACTIONS(68),
    [anon_sym_for] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_do] = ACTIONS(70),
    [anon_sym_if] = ACTIONS(70),
    [sym_local_variable] = ACTIONS(70),
    [sym_global_variable] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_STAR_STAR] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_SQUOTE_GT] = ACTIONS(68),
    [anon_sym_SQUOTE_LT] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(68),
    [anon_sym_SQUOTE_EQ] = ACTIONS(68),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(68),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(70),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(68),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(68),
    [anon_sym__] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [anon_sym_b] = ACTIONS(70),
    [anon_sym_break] = ACTIONS(70),
    [anon_sym_c] = ACTIONS(70),
    [anon_sym_close] = ACTIONS(70),
    [anon_sym_d] = ACTIONS(70),
    [anon_sym_e] = ACTIONS(70),
    [anon_sym_else] = ACTIONS(70),
    [anon_sym_f] = ACTIONS(70),
    [anon_sym_g] = ACTIONS(70),
    [anon_sym_goto] = ACTIONS(70),
    [anon_sym_h] = ACTIONS(70),
    [anon_sym_halt] = ACTIONS(70),
    [anon_sym_hang] = ACTIONS(70),
    [anon_sym_i] = ACTIONS(70),
    [anon_sym_j] = ACTIONS(70),
    [anon_sym_job] = ACTIONS(70),
    [anon_sym_l] = ACTIONS(70),
    [anon_sym_lock] = ACTIONS(70),
    [anon_sym_k] = ACTIONS(70),
    [anon_sym_kill] = ACTIONS(70),
    [anon_sym_m] = ACTIONS(70),
    [anon_sym_merge] = ACTIONS(70),
    [anon_sym_n] = ACTIONS(70),
    [anon_sym_new] = ACTIONS(70),
    [anon_sym_o] = ACTIONS(70),
    [anon_sym_open] = ACTIONS(70),
    [anon_sym_q] = ACTIONS(70),
    [anon_sym_quit] = ACTIONS(70),
    [anon_sym_r] = ACTIONS(70),
    [anon_sym_read] = ACTIONS(70),
    [anon_sym_tc] = ACTIONS(70),
    [anon_sym_tcommit] = ACTIONS(70),
    [anon_sym_tre] = ACTIONS(70),
    [anon_sym_trestart] = ACTIONS(70),
    [anon_sym_tro] = ACTIONS(70),
    [anon_sym_trollback] = ACTIONS(70),
    [anon_sym_ts] = ACTIONS(70),
    [anon_sym_tstart] = ACTIONS(70),
    [anon_sym_u] = ACTIONS(70),
    [anon_sym_use] = ACTIONS(70),
    [anon_sym_v] = ACTIONS(70),
    [anon_sym_view] = ACTIONS(70),
    [anon_sym_w] = ACTIONS(70),
    [anon_sym_write] = ACTIONS(70),
    [anon_sym_x] = ACTIONS(70),
    [anon_sym_xecute] = ACTIONS(70),
    [anon_sym_z] = ACTIONS(70),
    [sym__set] = ACTIONS(70),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_integer] = ACTIONS(70),
    [sym_float] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [sym__line_comment] = ACTIONS(68),
    [sym__label] = ACTIONS(68),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [sym__eol_comment] = ACTIONS(72),
    [anon_sym_for] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_do] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(74),
    [sym_local_variable] = ACTIONS(74),
    [sym_global_variable] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_BSLASH] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_SQUOTE_GT] = ACTIONS(72),
    [anon_sym_SQUOTE_LT] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(72),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(72),
    [anon_sym_SQUOTE_EQ] = ACTIONS(72),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(72),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(74),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(72),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(72),
    [anon_sym__] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(72),
    [anon_sym_b] = ACTIONS(74),
    [anon_sym_break] = ACTIONS(74),
    [anon_sym_c] = ACTIONS(74),
    [anon_sym_close] = ACTIONS(74),
    [anon_sym_d] = ACTIONS(74),
    [anon_sym_e] = ACTIONS(74),
    [anon_sym_else] = ACTIONS(74),
    [anon_sym_f] = ACTIONS(74),
    [anon_sym_g] = ACTIONS(74),
    [anon_sym_goto] = ACTIONS(74),
    [anon_sym_h] = ACTIONS(74),
    [anon_sym_halt] = ACTIONS(74),
    [anon_sym_hang] = ACTIONS(74),
    [anon_sym_i] = ACTIONS(74),
    [anon_sym_j] = ACTIONS(74),
    [anon_sym_job] = ACTIONS(74),
    [anon_sym_l] = ACTIONS(74),
    [anon_sym_lock] = ACTIONS(74),
    [anon_sym_k] = ACTIONS(74),
    [anon_sym_kill] = ACTIONS(74),
    [anon_sym_m] = ACTIONS(74),
    [anon_sym_merge] = ACTIONS(74),
    [anon_sym_n] = ACTIONS(74),
    [anon_sym_new] = ACTIONS(74),
    [anon_sym_o] = ACTIONS(74),
    [anon_sym_open] = ACTIONS(74),
    [anon_sym_q] = ACTIONS(74),
    [anon_sym_quit] = ACTIONS(74),
    [anon_sym_r] = ACTIONS(74),
    [anon_sym_read] = ACTIONS(74),
    [anon_sym_tc] = ACTIONS(74),
    [anon_sym_tcommit] = ACTIONS(74),
    [anon_sym_tre] = ACTIONS(74),
    [anon_sym_trestart] = ACTIONS(74),
    [anon_sym_tro] = ACTIONS(74),
    [anon_sym_trollback] = ACTIONS(74),
    [anon_sym_ts] = ACTIONS(74),
    [anon_sym_tstart] = ACTIONS(74),
    [anon_sym_u] = ACTIONS(74),
    [anon_sym_use] = ACTIONS(74),
    [anon_sym_v] = ACTIONS(74),
    [anon_sym_view] = ACTIONS(74),
    [anon_sym_w] = ACTIONS(74),
    [anon_sym_write] = ACTIONS(74),
    [anon_sym_x] = ACTIONS(74),
    [anon_sym_xecute] = ACTIONS(74),
    [anon_sym_z] = ACTIONS(74),
    [sym__set] = ACTIONS(74),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [sym_integer] = ACTIONS(74),
    [sym_float] = ACTIONS(72),
    [sym_string] = ACTIONS(72),
    [sym__line_comment] = ACTIONS(72),
    [sym__label] = ACTIONS(72),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym__eol_comment] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [sym_local_variable] = ACTIONS(35),
    [sym_global_variable] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
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
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(23),
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
    [sym_float] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(23),
    [sym__label] = ACTIONS(23),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [sym__eol_comment] = ACTIONS(76),
    [anon_sym_for] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_do] = ACTIONS(78),
    [anon_sym_if] = ACTIONS(78),
    [sym_local_variable] = ACTIONS(78),
    [sym_global_variable] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_SQUOTE_GT] = ACTIONS(76),
    [anon_sym_SQUOTE_LT] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE_EQ] = ACTIONS(76),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(78),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(76),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [anon_sym_b] = ACTIONS(78),
    [anon_sym_break] = ACTIONS(78),
    [anon_sym_c] = ACTIONS(78),
    [anon_sym_close] = ACTIONS(78),
    [anon_sym_d] = ACTIONS(78),
    [anon_sym_e] = ACTIONS(78),
    [anon_sym_else] = ACTIONS(78),
    [anon_sym_f] = ACTIONS(78),
    [anon_sym_g] = ACTIONS(78),
    [anon_sym_goto] = ACTIONS(78),
    [anon_sym_h] = ACTIONS(78),
    [anon_sym_halt] = ACTIONS(78),
    [anon_sym_hang] = ACTIONS(78),
    [anon_sym_i] = ACTIONS(78),
    [anon_sym_j] = ACTIONS(78),
    [anon_sym_job] = ACTIONS(78),
    [anon_sym_l] = ACTIONS(78),
    [anon_sym_lock] = ACTIONS(78),
    [anon_sym_k] = ACTIONS(78),
    [anon_sym_kill] = ACTIONS(78),
    [anon_sym_m] = ACTIONS(78),
    [anon_sym_merge] = ACTIONS(78),
    [anon_sym_n] = ACTIONS(78),
    [anon_sym_new] = ACTIONS(78),
    [anon_sym_o] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(78),
    [anon_sym_q] = ACTIONS(78),
    [anon_sym_quit] = ACTIONS(78),
    [anon_sym_r] = ACTIONS(78),
    [anon_sym_read] = ACTIONS(78),
    [anon_sym_tc] = ACTIONS(78),
    [anon_sym_tcommit] = ACTIONS(78),
    [anon_sym_tre] = ACTIONS(78),
    [anon_sym_trestart] = ACTIONS(78),
    [anon_sym_tro] = ACTIONS(78),
    [anon_sym_trollback] = ACTIONS(78),
    [anon_sym_ts] = ACTIONS(78),
    [anon_sym_tstart] = ACTIONS(78),
    [anon_sym_u] = ACTIONS(78),
    [anon_sym_use] = ACTIONS(78),
    [anon_sym_v] = ACTIONS(78),
    [anon_sym_view] = ACTIONS(78),
    [anon_sym_w] = ACTIONS(78),
    [anon_sym_write] = ACTIONS(78),
    [anon_sym_x] = ACTIONS(78),
    [anon_sym_xecute] = ACTIONS(78),
    [anon_sym_z] = ACTIONS(78),
    [sym__set] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(78),
    [sym_integer] = ACTIONS(78),
    [sym_float] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
    [sym__line_comment] = ACTIONS(76),
    [sym__label] = ACTIONS(76),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [sym__eol_comment] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_do] = ACTIONS(82),
    [anon_sym_if] = ACTIONS(82),
    [sym_local_variable] = ACTIONS(82),
    [sym_global_variable] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_SQUOTE_GT] = ACTIONS(80),
    [anon_sym_SQUOTE_LT] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(80),
    [anon_sym_SQUOTE_EQ] = ACTIONS(80),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(80),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(82),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(80),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_b] = ACTIONS(82),
    [anon_sym_break] = ACTIONS(82),
    [anon_sym_c] = ACTIONS(82),
    [anon_sym_close] = ACTIONS(82),
    [anon_sym_d] = ACTIONS(82),
    [anon_sym_e] = ACTIONS(82),
    [anon_sym_else] = ACTIONS(82),
    [anon_sym_f] = ACTIONS(82),
    [anon_sym_g] = ACTIONS(82),
    [anon_sym_goto] = ACTIONS(82),
    [anon_sym_h] = ACTIONS(82),
    [anon_sym_halt] = ACTIONS(82),
    [anon_sym_hang] = ACTIONS(82),
    [anon_sym_i] = ACTIONS(82),
    [anon_sym_j] = ACTIONS(82),
    [anon_sym_job] = ACTIONS(82),
    [anon_sym_l] = ACTIONS(82),
    [anon_sym_lock] = ACTIONS(82),
    [anon_sym_k] = ACTIONS(82),
    [anon_sym_kill] = ACTIONS(82),
    [anon_sym_m] = ACTIONS(82),
    [anon_sym_merge] = ACTIONS(82),
    [anon_sym_n] = ACTIONS(82),
    [anon_sym_new] = ACTIONS(82),
    [anon_sym_o] = ACTIONS(82),
    [anon_sym_open] = ACTIONS(82),
    [anon_sym_q] = ACTIONS(82),
    [anon_sym_quit] = ACTIONS(82),
    [anon_sym_r] = ACTIONS(82),
    [anon_sym_read] = ACTIONS(82),
    [anon_sym_tc] = ACTIONS(82),
    [anon_sym_tcommit] = ACTIONS(82),
    [anon_sym_tre] = ACTIONS(82),
    [anon_sym_trestart] = ACTIONS(82),
    [anon_sym_tro] = ACTIONS(82),
    [anon_sym_trollback] = ACTIONS(82),
    [anon_sym_ts] = ACTIONS(82),
    [anon_sym_tstart] = ACTIONS(82),
    [anon_sym_u] = ACTIONS(82),
    [anon_sym_use] = ACTIONS(82),
    [anon_sym_v] = ACTIONS(82),
    [anon_sym_view] = ACTIONS(82),
    [anon_sym_w] = ACTIONS(82),
    [anon_sym_write] = ACTIONS(82),
    [anon_sym_x] = ACTIONS(82),
    [anon_sym_xecute] = ACTIONS(82),
    [anon_sym_z] = ACTIONS(82),
    [sym__set] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [sym_integer] = ACTIONS(82),
    [sym_float] = ACTIONS(80),
    [sym_string] = ACTIONS(80),
    [sym__line_comment] = ACTIONS(80),
    [sym__label] = ACTIONS(80),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym__eol_comment] = ACTIONS(84),
    [anon_sym_for] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_do] = ACTIONS(86),
    [anon_sym_if] = ACTIONS(86),
    [sym_local_variable] = ACTIONS(86),
    [sym_global_variable] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_STAR_STAR] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_SQUOTE_GT] = ACTIONS(84),
    [anon_sym_SQUOTE_LT] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(84),
    [anon_sym_SQUOTE_EQ] = ACTIONS(84),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(84),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(86),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(84),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(84),
    [anon_sym__] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_b] = ACTIONS(86),
    [anon_sym_break] = ACTIONS(86),
    [anon_sym_c] = ACTIONS(86),
    [anon_sym_close] = ACTIONS(86),
    [anon_sym_d] = ACTIONS(86),
    [anon_sym_e] = ACTIONS(86),
    [anon_sym_else] = ACTIONS(86),
    [anon_sym_f] = ACTIONS(86),
    [anon_sym_g] = ACTIONS(86),
    [anon_sym_goto] = ACTIONS(86),
    [anon_sym_h] = ACTIONS(86),
    [anon_sym_halt] = ACTIONS(86),
    [anon_sym_hang] = ACTIONS(86),
    [anon_sym_i] = ACTIONS(86),
    [anon_sym_j] = ACTIONS(86),
    [anon_sym_job] = ACTIONS(86),
    [anon_sym_l] = ACTIONS(86),
    [anon_sym_lock] = ACTIONS(86),
    [anon_sym_k] = ACTIONS(86),
    [anon_sym_kill] = ACTIONS(86),
    [anon_sym_m] = ACTIONS(86),
    [anon_sym_merge] = ACTIONS(86),
    [anon_sym_n] = ACTIONS(86),
    [anon_sym_new] = ACTIONS(86),
    [anon_sym_o] = ACTIONS(86),
    [anon_sym_open] = ACTIONS(86),
    [anon_sym_q] = ACTIONS(86),
    [anon_sym_quit] = ACTIONS(86),
    [anon_sym_r] = ACTIONS(86),
    [anon_sym_read] = ACTIONS(86),
    [anon_sym_tc] = ACTIONS(86),
    [anon_sym_tcommit] = ACTIONS(86),
    [anon_sym_tre] = ACTIONS(86),
    [anon_sym_trestart] = ACTIONS(86),
    [anon_sym_tro] = ACTIONS(86),
    [anon_sym_trollback] = ACTIONS(86),
    [anon_sym_ts] = ACTIONS(86),
    [anon_sym_tstart] = ACTIONS(86),
    [anon_sym_u] = ACTIONS(86),
    [anon_sym_use] = ACTIONS(86),
    [anon_sym_v] = ACTIONS(86),
    [anon_sym_view] = ACTIONS(86),
    [anon_sym_w] = ACTIONS(86),
    [anon_sym_write] = ACTIONS(86),
    [anon_sym_x] = ACTIONS(86),
    [anon_sym_xecute] = ACTIONS(86),
    [anon_sym_z] = ACTIONS(86),
    [sym__set] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
    [sym_integer] = ACTIONS(86),
    [sym_float] = ACTIONS(84),
    [sym_string] = ACTIONS(84),
    [sym__line_comment] = ACTIONS(84),
    [sym__label] = ACTIONS(84),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [sym__eol_comment] = ACTIONS(90),
    [anon_sym_for] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_do] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(92),
    [sym_local_variable] = ACTIONS(92),
    [sym_global_variable] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_BSLASH] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [anon_sym_SQUOTE_GT] = ACTIONS(90),
    [anon_sym_SQUOTE_LT] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(90),
    [anon_sym_SQUOTE_EQ] = ACTIONS(90),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(90),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(92),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(90),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(90),
    [anon_sym_DOLLAR] = ACTIONS(90),
    [anon_sym_b] = ACTIONS(92),
    [anon_sym_break] = ACTIONS(92),
    [anon_sym_c] = ACTIONS(92),
    [anon_sym_close] = ACTIONS(92),
    [anon_sym_d] = ACTIONS(92),
    [anon_sym_e] = ACTIONS(92),
    [anon_sym_else] = ACTIONS(92),
    [anon_sym_f] = ACTIONS(92),
    [anon_sym_g] = ACTIONS(92),
    [anon_sym_goto] = ACTIONS(92),
    [anon_sym_h] = ACTIONS(92),
    [anon_sym_halt] = ACTIONS(92),
    [anon_sym_hang] = ACTIONS(92),
    [anon_sym_i] = ACTIONS(92),
    [anon_sym_j] = ACTIONS(92),
    [anon_sym_job] = ACTIONS(92),
    [anon_sym_l] = ACTIONS(92),
    [anon_sym_lock] = ACTIONS(92),
    [anon_sym_k] = ACTIONS(92),
    [anon_sym_kill] = ACTIONS(92),
    [anon_sym_m] = ACTIONS(92),
    [anon_sym_merge] = ACTIONS(92),
    [anon_sym_n] = ACTIONS(92),
    [anon_sym_new] = ACTIONS(92),
    [anon_sym_o] = ACTIONS(92),
    [anon_sym_open] = ACTIONS(92),
    [anon_sym_q] = ACTIONS(92),
    [anon_sym_quit] = ACTIONS(92),
    [anon_sym_r] = ACTIONS(92),
    [anon_sym_read] = ACTIONS(92),
    [anon_sym_tc] = ACTIONS(92),
    [anon_sym_tcommit] = ACTIONS(92),
    [anon_sym_tre] = ACTIONS(92),
    [anon_sym_trestart] = ACTIONS(92),
    [anon_sym_tro] = ACTIONS(92),
    [anon_sym_trollback] = ACTIONS(92),
    [anon_sym_ts] = ACTIONS(92),
    [anon_sym_tstart] = ACTIONS(92),
    [anon_sym_u] = ACTIONS(92),
    [anon_sym_use] = ACTIONS(92),
    [anon_sym_v] = ACTIONS(92),
    [anon_sym_view] = ACTIONS(92),
    [anon_sym_w] = ACTIONS(92),
    [anon_sym_write] = ACTIONS(92),
    [anon_sym_x] = ACTIONS(92),
    [anon_sym_xecute] = ACTIONS(92),
    [anon_sym_z] = ACTIONS(92),
    [sym__set] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [sym_integer] = ACTIONS(92),
    [sym_float] = ACTIONS(90),
    [sym_string] = ACTIONS(90),
    [sym__line_comment] = ACTIONS(90),
    [sym__label] = ACTIONS(90),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym__eol_comment] = ACTIONS(57),
    [anon_sym_for] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(62),
    [sym_local_variable] = ACTIONS(62),
    [sym_global_variable] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_SQUOTE_GT] = ACTIONS(53),
    [anon_sym_SQUOTE_LT] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_EQ] = ACTIONS(53),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [anon_sym_b] = ACTIONS(62),
    [anon_sym_break] = ACTIONS(62),
    [anon_sym_c] = ACTIONS(62),
    [anon_sym_close] = ACTIONS(62),
    [anon_sym_d] = ACTIONS(62),
    [anon_sym_e] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_f] = ACTIONS(62),
    [anon_sym_g] = ACTIONS(62),
    [anon_sym_goto] = ACTIONS(62),
    [anon_sym_h] = ACTIONS(62),
    [anon_sym_halt] = ACTIONS(62),
    [anon_sym_hang] = ACTIONS(62),
    [anon_sym_i] = ACTIONS(62),
    [anon_sym_j] = ACTIONS(62),
    [anon_sym_job] = ACTIONS(62),
    [anon_sym_l] = ACTIONS(62),
    [anon_sym_lock] = ACTIONS(62),
    [anon_sym_k] = ACTIONS(62),
    [anon_sym_kill] = ACTIONS(62),
    [anon_sym_m] = ACTIONS(62),
    [anon_sym_merge] = ACTIONS(62),
    [anon_sym_n] = ACTIONS(62),
    [anon_sym_new] = ACTIONS(62),
    [anon_sym_o] = ACTIONS(62),
    [anon_sym_open] = ACTIONS(62),
    [anon_sym_q] = ACTIONS(62),
    [anon_sym_quit] = ACTIONS(62),
    [anon_sym_r] = ACTIONS(62),
    [anon_sym_read] = ACTIONS(62),
    [anon_sym_tc] = ACTIONS(62),
    [anon_sym_tcommit] = ACTIONS(62),
    [anon_sym_tre] = ACTIONS(62),
    [anon_sym_trestart] = ACTIONS(62),
    [anon_sym_tro] = ACTIONS(62),
    [anon_sym_trollback] = ACTIONS(62),
    [anon_sym_ts] = ACTIONS(62),
    [anon_sym_tstart] = ACTIONS(62),
    [anon_sym_u] = ACTIONS(62),
    [anon_sym_use] = ACTIONS(62),
    [anon_sym_v] = ACTIONS(62),
    [anon_sym_view] = ACTIONS(62),
    [anon_sym_w] = ACTIONS(62),
    [anon_sym_write] = ACTIONS(62),
    [anon_sym_x] = ACTIONS(62),
    [anon_sym_xecute] = ACTIONS(62),
    [anon_sym_z] = ACTIONS(62),
    [sym__set] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(62),
    [anon_sym_false] = ACTIONS(62),
    [sym_integer] = ACTIONS(62),
    [sym_float] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym__line_comment] = ACTIONS(57),
    [sym__label] = ACTIONS(57),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [sym__eol_comment] = ACTIONS(94),
    [anon_sym_for] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_do] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(96),
    [sym_local_variable] = ACTIONS(96),
    [sym_global_variable] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_SQUOTE_GT] = ACTIONS(94),
    [anon_sym_SQUOTE_LT] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(94),
    [anon_sym_SQUOTE_EQ] = ACTIONS(94),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(94),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(96),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(94),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(94),
    [anon_sym_b] = ACTIONS(96),
    [anon_sym_break] = ACTIONS(96),
    [anon_sym_c] = ACTIONS(96),
    [anon_sym_close] = ACTIONS(96),
    [anon_sym_d] = ACTIONS(96),
    [anon_sym_e] = ACTIONS(96),
    [anon_sym_else] = ACTIONS(96),
    [anon_sym_f] = ACTIONS(96),
    [anon_sym_g] = ACTIONS(96),
    [anon_sym_goto] = ACTIONS(96),
    [anon_sym_h] = ACTIONS(96),
    [anon_sym_halt] = ACTIONS(96),
    [anon_sym_hang] = ACTIONS(96),
    [anon_sym_i] = ACTIONS(96),
    [anon_sym_j] = ACTIONS(96),
    [anon_sym_job] = ACTIONS(96),
    [anon_sym_l] = ACTIONS(96),
    [anon_sym_lock] = ACTIONS(96),
    [anon_sym_k] = ACTIONS(96),
    [anon_sym_kill] = ACTIONS(96),
    [anon_sym_m] = ACTIONS(96),
    [anon_sym_merge] = ACTIONS(96),
    [anon_sym_n] = ACTIONS(96),
    [anon_sym_new] = ACTIONS(96),
    [anon_sym_o] = ACTIONS(96),
    [anon_sym_open] = ACTIONS(96),
    [anon_sym_q] = ACTIONS(96),
    [anon_sym_quit] = ACTIONS(96),
    [anon_sym_r] = ACTIONS(96),
    [anon_sym_read] = ACTIONS(96),
    [anon_sym_tc] = ACTIONS(96),
    [anon_sym_tcommit] = ACTIONS(96),
    [anon_sym_tre] = ACTIONS(96),
    [anon_sym_trestart] = ACTIONS(96),
    [anon_sym_tro] = ACTIONS(96),
    [anon_sym_trollback] = ACTIONS(96),
    [anon_sym_ts] = ACTIONS(96),
    [anon_sym_tstart] = ACTIONS(96),
    [anon_sym_u] = ACTIONS(96),
    [anon_sym_use] = ACTIONS(96),
    [anon_sym_v] = ACTIONS(96),
    [anon_sym_view] = ACTIONS(96),
    [anon_sym_w] = ACTIONS(96),
    [anon_sym_write] = ACTIONS(96),
    [anon_sym_x] = ACTIONS(96),
    [anon_sym_xecute] = ACTIONS(96),
    [anon_sym_z] = ACTIONS(96),
    [sym__set] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [sym_integer] = ACTIONS(96),
    [sym_float] = ACTIONS(94),
    [sym_string] = ACTIONS(94),
    [sym__line_comment] = ACTIONS(94),
    [sym__label] = ACTIONS(94),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [sym__eol_comment] = ACTIONS(98),
    [anon_sym_for] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_do] = ACTIONS(100),
    [anon_sym_if] = ACTIONS(100),
    [sym_local_variable] = ACTIONS(100),
    [sym_global_variable] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_SQUOTE_GT] = ACTIONS(98),
    [anon_sym_SQUOTE_LT] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(98),
    [anon_sym_SQUOTE_EQ] = ACTIONS(98),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(98),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(100),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(98),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [anon_sym_b] = ACTIONS(100),
    [anon_sym_break] = ACTIONS(100),
    [anon_sym_c] = ACTIONS(100),
    [anon_sym_close] = ACTIONS(100),
    [anon_sym_d] = ACTIONS(100),
    [anon_sym_e] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(100),
    [anon_sym_f] = ACTIONS(100),
    [anon_sym_g] = ACTIONS(100),
    [anon_sym_goto] = ACTIONS(100),
    [anon_sym_h] = ACTIONS(100),
    [anon_sym_halt] = ACTIONS(100),
    [anon_sym_hang] = ACTIONS(100),
    [anon_sym_i] = ACTIONS(100),
    [anon_sym_j] = ACTIONS(100),
    [anon_sym_job] = ACTIONS(100),
    [anon_sym_l] = ACTIONS(100),
    [anon_sym_lock] = ACTIONS(100),
    [anon_sym_k] = ACTIONS(100),
    [anon_sym_kill] = ACTIONS(100),
    [anon_sym_m] = ACTIONS(100),
    [anon_sym_merge] = ACTIONS(100),
    [anon_sym_n] = ACTIONS(100),
    [anon_sym_new] = ACTIONS(100),
    [anon_sym_o] = ACTIONS(100),
    [anon_sym_open] = ACTIONS(100),
    [anon_sym_q] = ACTIONS(100),
    [anon_sym_quit] = ACTIONS(100),
    [anon_sym_r] = ACTIONS(100),
    [anon_sym_read] = ACTIONS(100),
    [anon_sym_tc] = ACTIONS(100),
    [anon_sym_tcommit] = ACTIONS(100),
    [anon_sym_tre] = ACTIONS(100),
    [anon_sym_trestart] = ACTIONS(100),
    [anon_sym_tro] = ACTIONS(100),
    [anon_sym_trollback] = ACTIONS(100),
    [anon_sym_ts] = ACTIONS(100),
    [anon_sym_tstart] = ACTIONS(100),
    [anon_sym_u] = ACTIONS(100),
    [anon_sym_use] = ACTIONS(100),
    [anon_sym_v] = ACTIONS(100),
    [anon_sym_view] = ACTIONS(100),
    [anon_sym_w] = ACTIONS(100),
    [anon_sym_write] = ACTIONS(100),
    [anon_sym_x] = ACTIONS(100),
    [anon_sym_xecute] = ACTIONS(100),
    [anon_sym_z] = ACTIONS(100),
    [sym__set] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_integer] = ACTIONS(100),
    [sym_float] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [sym__line_comment] = ACTIONS(98),
    [sym__label] = ACTIONS(98),
  },
  [24] = {
    [aux_sym_arguments_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_for] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [sym_local_variable] = ACTIONS(47),
    [sym_global_variable] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_STAR_STAR] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_SQUOTE_GT] = ACTIONS(43),
    [anon_sym_SQUOTE_LT] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_EQ] = ACTIONS(43),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym__] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_write_read_outro] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(43),
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
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
  },
  [25] = {
    [aux_sym_arguments_repeat1] = STATE(24),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [sym_local_variable] = ACTIONS(51),
    [sym_global_variable] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_BSLASH] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(102),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_SQUOTE_GT] = ACTIONS(102),
    [anon_sym_SQUOTE_LT] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(102),
    [anon_sym_SQUOTE_EQ] = ACTIONS(102),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(102),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(104),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(102),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_BANG] = ACTIONS(102),
    [sym_write_read_outro] = ACTIONS(49),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_b] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_c] = ACTIONS(51),
    [anon_sym_close] = ACTIONS(51),
    [anon_sym_d] = ACTIONS(51),
    [anon_sym_e] = ACTIONS(51),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_f] = ACTIONS(51),
    [anon_sym_g] = ACTIONS(51),
    [anon_sym_goto] = ACTIONS(51),
    [anon_sym_h] = ACTIONS(51),
    [anon_sym_halt] = ACTIONS(51),
    [anon_sym_hang] = ACTIONS(51),
    [anon_sym_i] = ACTIONS(51),
    [anon_sym_j] = ACTIONS(51),
    [anon_sym_job] = ACTIONS(51),
    [anon_sym_l] = ACTIONS(51),
    [anon_sym_lock] = ACTIONS(51),
    [anon_sym_k] = ACTIONS(51),
    [anon_sym_kill] = ACTIONS(51),
    [anon_sym_m] = ACTIONS(51),
    [anon_sym_merge] = ACTIONS(51),
    [anon_sym_n] = ACTIONS(51),
    [anon_sym_new] = ACTIONS(51),
    [anon_sym_o] = ACTIONS(51),
    [anon_sym_open] = ACTIONS(51),
    [anon_sym_q] = ACTIONS(51),
    [anon_sym_quit] = ACTIONS(51),
    [anon_sym_r] = ACTIONS(51),
    [anon_sym_read] = ACTIONS(51),
    [anon_sym_tc] = ACTIONS(51),
    [anon_sym_tcommit] = ACTIONS(51),
    [anon_sym_tre] = ACTIONS(51),
    [anon_sym_trestart] = ACTIONS(51),
    [anon_sym_tro] = ACTIONS(51),
    [anon_sym_trollback] = ACTIONS(51),
    [anon_sym_ts] = ACTIONS(51),
    [anon_sym_tstart] = ACTIONS(51),
    [anon_sym_u] = ACTIONS(51),
    [anon_sym_use] = ACTIONS(51),
    [anon_sym_v] = ACTIONS(51),
    [anon_sym_view] = ACTIONS(51),
    [anon_sym_w] = ACTIONS(51),
    [anon_sym_write] = ACTIONS(51),
    [anon_sym_x] = ACTIONS(51),
    [anon_sym_xecute] = ACTIONS(51),
    [anon_sym_z] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
  },
  [26] = {
    [aux_sym_arguments_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_for] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(62),
    [sym_local_variable] = ACTIONS(62),
    [sym_global_variable] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_SQUOTE_GT] = ACTIONS(57),
    [anon_sym_SQUOTE_LT] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(57),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_EQ] = ACTIONS(57),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(62),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(57),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(57),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(57),
    [sym_write_read_outro] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [anon_sym_b] = ACTIONS(62),
    [anon_sym_break] = ACTIONS(62),
    [anon_sym_c] = ACTIONS(62),
    [anon_sym_close] = ACTIONS(62),
    [anon_sym_d] = ACTIONS(62),
    [anon_sym_e] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_f] = ACTIONS(62),
    [anon_sym_g] = ACTIONS(62),
    [anon_sym_goto] = ACTIONS(62),
    [anon_sym_h] = ACTIONS(62),
    [anon_sym_halt] = ACTIONS(62),
    [anon_sym_hang] = ACTIONS(62),
    [anon_sym_i] = ACTIONS(62),
    [anon_sym_j] = ACTIONS(62),
    [anon_sym_job] = ACTIONS(62),
    [anon_sym_l] = ACTIONS(62),
    [anon_sym_lock] = ACTIONS(62),
    [anon_sym_k] = ACTIONS(62),
    [anon_sym_kill] = ACTIONS(62),
    [anon_sym_m] = ACTIONS(62),
    [anon_sym_merge] = ACTIONS(62),
    [anon_sym_n] = ACTIONS(62),
    [anon_sym_new] = ACTIONS(62),
    [anon_sym_o] = ACTIONS(62),
    [anon_sym_open] = ACTIONS(62),
    [anon_sym_q] = ACTIONS(62),
    [anon_sym_quit] = ACTIONS(62),
    [anon_sym_r] = ACTIONS(62),
    [anon_sym_read] = ACTIONS(62),
    [anon_sym_tc] = ACTIONS(62),
    [anon_sym_tcommit] = ACTIONS(62),
    [anon_sym_tre] = ACTIONS(62),
    [anon_sym_trestart] = ACTIONS(62),
    [anon_sym_tro] = ACTIONS(62),
    [anon_sym_trollback] = ACTIONS(62),
    [anon_sym_ts] = ACTIONS(62),
    [anon_sym_tstart] = ACTIONS(62),
    [anon_sym_u] = ACTIONS(62),
    [anon_sym_use] = ACTIONS(62),
    [anon_sym_v] = ACTIONS(62),
    [anon_sym_view] = ACTIONS(62),
    [anon_sym_w] = ACTIONS(62),
    [anon_sym_write] = ACTIONS(62),
    [anon_sym_x] = ACTIONS(62),
    [anon_sym_xecute] = ACTIONS(62),
    [anon_sym_z] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(62),
    [anon_sym_false] = ACTIONS(62),
    [sym_integer] = ACTIONS(62),
    [sym_float] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [sym_local_variable] = ACTIONS(35),
    [sym_global_variable] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
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
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_write_read_outro] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_do] = ACTIONS(82),
    [anon_sym_if] = ACTIONS(82),
    [sym_local_variable] = ACTIONS(82),
    [sym_global_variable] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_SQUOTE_GT] = ACTIONS(80),
    [anon_sym_SQUOTE_LT] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(80),
    [anon_sym_SQUOTE_EQ] = ACTIONS(80),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(80),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(82),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(80),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(80),
    [sym_write_read_outro] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_b] = ACTIONS(82),
    [anon_sym_break] = ACTIONS(82),
    [anon_sym_c] = ACTIONS(82),
    [anon_sym_close] = ACTIONS(82),
    [anon_sym_d] = ACTIONS(82),
    [anon_sym_e] = ACTIONS(82),
    [anon_sym_else] = ACTIONS(82),
    [anon_sym_f] = ACTIONS(82),
    [anon_sym_g] = ACTIONS(82),
    [anon_sym_goto] = ACTIONS(82),
    [anon_sym_h] = ACTIONS(82),
    [anon_sym_halt] = ACTIONS(82),
    [anon_sym_hang] = ACTIONS(82),
    [anon_sym_i] = ACTIONS(82),
    [anon_sym_j] = ACTIONS(82),
    [anon_sym_job] = ACTIONS(82),
    [anon_sym_l] = ACTIONS(82),
    [anon_sym_lock] = ACTIONS(82),
    [anon_sym_k] = ACTIONS(82),
    [anon_sym_kill] = ACTIONS(82),
    [anon_sym_m] = ACTIONS(82),
    [anon_sym_merge] = ACTIONS(82),
    [anon_sym_n] = ACTIONS(82),
    [anon_sym_new] = ACTIONS(82),
    [anon_sym_o] = ACTIONS(82),
    [anon_sym_open] = ACTIONS(82),
    [anon_sym_q] = ACTIONS(82),
    [anon_sym_quit] = ACTIONS(82),
    [anon_sym_r] = ACTIONS(82),
    [anon_sym_read] = ACTIONS(82),
    [anon_sym_tc] = ACTIONS(82),
    [anon_sym_tcommit] = ACTIONS(82),
    [anon_sym_tre] = ACTIONS(82),
    [anon_sym_trestart] = ACTIONS(82),
    [anon_sym_tro] = ACTIONS(82),
    [anon_sym_trollback] = ACTIONS(82),
    [anon_sym_ts] = ACTIONS(82),
    [anon_sym_tstart] = ACTIONS(82),
    [anon_sym_u] = ACTIONS(82),
    [anon_sym_use] = ACTIONS(82),
    [anon_sym_v] = ACTIONS(82),
    [anon_sym_view] = ACTIONS(82),
    [anon_sym_w] = ACTIONS(82),
    [anon_sym_write] = ACTIONS(82),
    [anon_sym_x] = ACTIONS(82),
    [anon_sym_xecute] = ACTIONS(82),
    [anon_sym_z] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [sym_integer] = ACTIONS(82),
    [sym_float] = ACTIONS(80),
    [sym_string] = ACTIONS(80),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_for] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_do] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(92),
    [sym_local_variable] = ACTIONS(92),
    [sym_global_variable] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_BSLASH] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [anon_sym_SQUOTE_GT] = ACTIONS(90),
    [anon_sym_SQUOTE_LT] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(90),
    [anon_sym_SQUOTE_EQ] = ACTIONS(90),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(90),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(92),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(90),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(90),
    [sym_write_read_outro] = ACTIONS(90),
    [anon_sym_DOLLAR] = ACTIONS(90),
    [anon_sym_b] = ACTIONS(92),
    [anon_sym_break] = ACTIONS(92),
    [anon_sym_c] = ACTIONS(92),
    [anon_sym_close] = ACTIONS(92),
    [anon_sym_d] = ACTIONS(92),
    [anon_sym_e] = ACTIONS(92),
    [anon_sym_else] = ACTIONS(92),
    [anon_sym_f] = ACTIONS(92),
    [anon_sym_g] = ACTIONS(92),
    [anon_sym_goto] = ACTIONS(92),
    [anon_sym_h] = ACTIONS(92),
    [anon_sym_halt] = ACTIONS(92),
    [anon_sym_hang] = ACTIONS(92),
    [anon_sym_i] = ACTIONS(92),
    [anon_sym_j] = ACTIONS(92),
    [anon_sym_job] = ACTIONS(92),
    [anon_sym_l] = ACTIONS(92),
    [anon_sym_lock] = ACTIONS(92),
    [anon_sym_k] = ACTIONS(92),
    [anon_sym_kill] = ACTIONS(92),
    [anon_sym_m] = ACTIONS(92),
    [anon_sym_merge] = ACTIONS(92),
    [anon_sym_n] = ACTIONS(92),
    [anon_sym_new] = ACTIONS(92),
    [anon_sym_o] = ACTIONS(92),
    [anon_sym_open] = ACTIONS(92),
    [anon_sym_q] = ACTIONS(92),
    [anon_sym_quit] = ACTIONS(92),
    [anon_sym_r] = ACTIONS(92),
    [anon_sym_read] = ACTIONS(92),
    [anon_sym_tc] = ACTIONS(92),
    [anon_sym_tcommit] = ACTIONS(92),
    [anon_sym_tre] = ACTIONS(92),
    [anon_sym_trestart] = ACTIONS(92),
    [anon_sym_tro] = ACTIONS(92),
    [anon_sym_trollback] = ACTIONS(92),
    [anon_sym_ts] = ACTIONS(92),
    [anon_sym_tstart] = ACTIONS(92),
    [anon_sym_u] = ACTIONS(92),
    [anon_sym_use] = ACTIONS(92),
    [anon_sym_v] = ACTIONS(92),
    [anon_sym_view] = ACTIONS(92),
    [anon_sym_w] = ACTIONS(92),
    [anon_sym_write] = ACTIONS(92),
    [anon_sym_x] = ACTIONS(92),
    [anon_sym_xecute] = ACTIONS(92),
    [anon_sym_z] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [sym_integer] = ACTIONS(92),
    [sym_float] = ACTIONS(90),
    [sym_string] = ACTIONS(90),
  },
  [30] = {
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_for] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_do] = ACTIONS(70),
    [anon_sym_if] = ACTIONS(70),
    [sym_local_variable] = ACTIONS(70),
    [sym_global_variable] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_STAR_STAR] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_SQUOTE_GT] = ACTIONS(68),
    [anon_sym_SQUOTE_LT] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(68),
    [anon_sym_SQUOTE_EQ] = ACTIONS(68),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(68),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(70),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(68),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(68),
    [anon_sym__] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_write_read_outro] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [anon_sym_b] = ACTIONS(70),
    [anon_sym_break] = ACTIONS(70),
    [anon_sym_c] = ACTIONS(70),
    [anon_sym_close] = ACTIONS(70),
    [anon_sym_d] = ACTIONS(70),
    [anon_sym_e] = ACTIONS(70),
    [anon_sym_else] = ACTIONS(70),
    [anon_sym_f] = ACTIONS(70),
    [anon_sym_g] = ACTIONS(70),
    [anon_sym_goto] = ACTIONS(70),
    [anon_sym_h] = ACTIONS(70),
    [anon_sym_halt] = ACTIONS(70),
    [anon_sym_hang] = ACTIONS(70),
    [anon_sym_i] = ACTIONS(70),
    [anon_sym_j] = ACTIONS(70),
    [anon_sym_job] = ACTIONS(70),
    [anon_sym_l] = ACTIONS(70),
    [anon_sym_lock] = ACTIONS(70),
    [anon_sym_k] = ACTIONS(70),
    [anon_sym_kill] = ACTIONS(70),
    [anon_sym_m] = ACTIONS(70),
    [anon_sym_merge] = ACTIONS(70),
    [anon_sym_n] = ACTIONS(70),
    [anon_sym_new] = ACTIONS(70),
    [anon_sym_o] = ACTIONS(70),
    [anon_sym_open] = ACTIONS(70),
    [anon_sym_q] = ACTIONS(70),
    [anon_sym_quit] = ACTIONS(70),
    [anon_sym_r] = ACTIONS(70),
    [anon_sym_read] = ACTIONS(70),
    [anon_sym_tc] = ACTIONS(70),
    [anon_sym_tcommit] = ACTIONS(70),
    [anon_sym_tre] = ACTIONS(70),
    [anon_sym_trestart] = ACTIONS(70),
    [anon_sym_tro] = ACTIONS(70),
    [anon_sym_trollback] = ACTIONS(70),
    [anon_sym_ts] = ACTIONS(70),
    [anon_sym_tstart] = ACTIONS(70),
    [anon_sym_u] = ACTIONS(70),
    [anon_sym_use] = ACTIONS(70),
    [anon_sym_v] = ACTIONS(70),
    [anon_sym_view] = ACTIONS(70),
    [anon_sym_w] = ACTIONS(70),
    [anon_sym_write] = ACTIONS(70),
    [anon_sym_x] = ACTIONS(70),
    [anon_sym_xecute] = ACTIONS(70),
    [anon_sym_z] = ACTIONS(70),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_integer] = ACTIONS(70),
    [sym_float] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
  },
  [31] = {
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_for] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_do] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(74),
    [sym_local_variable] = ACTIONS(74),
    [sym_global_variable] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_BSLASH] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_SQUOTE_GT] = ACTIONS(72),
    [anon_sym_SQUOTE_LT] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(72),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(72),
    [anon_sym_SQUOTE_EQ] = ACTIONS(72),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(72),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(74),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(72),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(72),
    [anon_sym__] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_write_read_outro] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(72),
    [anon_sym_b] = ACTIONS(74),
    [anon_sym_break] = ACTIONS(74),
    [anon_sym_c] = ACTIONS(74),
    [anon_sym_close] = ACTIONS(74),
    [anon_sym_d] = ACTIONS(74),
    [anon_sym_e] = ACTIONS(74),
    [anon_sym_else] = ACTIONS(74),
    [anon_sym_f] = ACTIONS(74),
    [anon_sym_g] = ACTIONS(74),
    [anon_sym_goto] = ACTIONS(74),
    [anon_sym_h] = ACTIONS(74),
    [anon_sym_halt] = ACTIONS(74),
    [anon_sym_hang] = ACTIONS(74),
    [anon_sym_i] = ACTIONS(74),
    [anon_sym_j] = ACTIONS(74),
    [anon_sym_job] = ACTIONS(74),
    [anon_sym_l] = ACTIONS(74),
    [anon_sym_lock] = ACTIONS(74),
    [anon_sym_k] = ACTIONS(74),
    [anon_sym_kill] = ACTIONS(74),
    [anon_sym_m] = ACTIONS(74),
    [anon_sym_merge] = ACTIONS(74),
    [anon_sym_n] = ACTIONS(74),
    [anon_sym_new] = ACTIONS(74),
    [anon_sym_o] = ACTIONS(74),
    [anon_sym_open] = ACTIONS(74),
    [anon_sym_q] = ACTIONS(74),
    [anon_sym_quit] = ACTIONS(74),
    [anon_sym_r] = ACTIONS(74),
    [anon_sym_read] = ACTIONS(74),
    [anon_sym_tc] = ACTIONS(74),
    [anon_sym_tcommit] = ACTIONS(74),
    [anon_sym_tre] = ACTIONS(74),
    [anon_sym_trestart] = ACTIONS(74),
    [anon_sym_tro] = ACTIONS(74),
    [anon_sym_trollback] = ACTIONS(74),
    [anon_sym_ts] = ACTIONS(74),
    [anon_sym_tstart] = ACTIONS(74),
    [anon_sym_u] = ACTIONS(74),
    [anon_sym_use] = ACTIONS(74),
    [anon_sym_v] = ACTIONS(74),
    [anon_sym_view] = ACTIONS(74),
    [anon_sym_w] = ACTIONS(74),
    [anon_sym_write] = ACTIONS(74),
    [anon_sym_x] = ACTIONS(74),
    [anon_sym_xecute] = ACTIONS(74),
    [anon_sym_z] = ACTIONS(74),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [sym_integer] = ACTIONS(74),
    [sym_float] = ACTIONS(72),
    [sym_string] = ACTIONS(72),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_for] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(62),
    [sym_local_variable] = ACTIONS(62),
    [sym_global_variable] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_BSLASH] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(102),
    [anon_sym_STAR_STAR] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_SQUOTE_GT] = ACTIONS(102),
    [anon_sym_SQUOTE_LT] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(102),
    [anon_sym_SQUOTE_EQ] = ACTIONS(102),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(102),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(104),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(102),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_BANG] = ACTIONS(102),
    [sym_write_read_outro] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [anon_sym_b] = ACTIONS(62),
    [anon_sym_break] = ACTIONS(62),
    [anon_sym_c] = ACTIONS(62),
    [anon_sym_close] = ACTIONS(62),
    [anon_sym_d] = ACTIONS(62),
    [anon_sym_e] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_f] = ACTIONS(62),
    [anon_sym_g] = ACTIONS(62),
    [anon_sym_goto] = ACTIONS(62),
    [anon_sym_h] = ACTIONS(62),
    [anon_sym_halt] = ACTIONS(62),
    [anon_sym_hang] = ACTIONS(62),
    [anon_sym_i] = ACTIONS(62),
    [anon_sym_j] = ACTIONS(62),
    [anon_sym_job] = ACTIONS(62),
    [anon_sym_l] = ACTIONS(62),
    [anon_sym_lock] = ACTIONS(62),
    [anon_sym_k] = ACTIONS(62),
    [anon_sym_kill] = ACTIONS(62),
    [anon_sym_m] = ACTIONS(62),
    [anon_sym_merge] = ACTIONS(62),
    [anon_sym_n] = ACTIONS(62),
    [anon_sym_new] = ACTIONS(62),
    [anon_sym_o] = ACTIONS(62),
    [anon_sym_open] = ACTIONS(62),
    [anon_sym_q] = ACTIONS(62),
    [anon_sym_quit] = ACTIONS(62),
    [anon_sym_r] = ACTIONS(62),
    [anon_sym_read] = ACTIONS(62),
    [anon_sym_tc] = ACTIONS(62),
    [anon_sym_tcommit] = ACTIONS(62),
    [anon_sym_tre] = ACTIONS(62),
    [anon_sym_trestart] = ACTIONS(62),
    [anon_sym_tro] = ACTIONS(62),
    [anon_sym_trollback] = ACTIONS(62),
    [anon_sym_ts] = ACTIONS(62),
    [anon_sym_tstart] = ACTIONS(62),
    [anon_sym_u] = ACTIONS(62),
    [anon_sym_use] = ACTIONS(62),
    [anon_sym_v] = ACTIONS(62),
    [anon_sym_view] = ACTIONS(62),
    [anon_sym_w] = ACTIONS(62),
    [anon_sym_write] = ACTIONS(62),
    [anon_sym_x] = ACTIONS(62),
    [anon_sym_xecute] = ACTIONS(62),
    [anon_sym_z] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(62),
    [anon_sym_false] = ACTIONS(62),
    [sym_integer] = ACTIONS(62),
    [sym_float] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_for] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_do] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(96),
    [sym_local_variable] = ACTIONS(96),
    [sym_global_variable] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_SQUOTE_GT] = ACTIONS(94),
    [anon_sym_SQUOTE_LT] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(94),
    [anon_sym_SQUOTE_EQ] = ACTIONS(94),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(94),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(96),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(94),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [sym_write_read_outro] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(94),
    [anon_sym_b] = ACTIONS(96),
    [anon_sym_break] = ACTIONS(96),
    [anon_sym_c] = ACTIONS(96),
    [anon_sym_close] = ACTIONS(96),
    [anon_sym_d] = ACTIONS(96),
    [anon_sym_e] = ACTIONS(96),
    [anon_sym_else] = ACTIONS(96),
    [anon_sym_f] = ACTIONS(96),
    [anon_sym_g] = ACTIONS(96),
    [anon_sym_goto] = ACTIONS(96),
    [anon_sym_h] = ACTIONS(96),
    [anon_sym_halt] = ACTIONS(96),
    [anon_sym_hang] = ACTIONS(96),
    [anon_sym_i] = ACTIONS(96),
    [anon_sym_j] = ACTIONS(96),
    [anon_sym_job] = ACTIONS(96),
    [anon_sym_l] = ACTIONS(96),
    [anon_sym_lock] = ACTIONS(96),
    [anon_sym_k] = ACTIONS(96),
    [anon_sym_kill] = ACTIONS(96),
    [anon_sym_m] = ACTIONS(96),
    [anon_sym_merge] = ACTIONS(96),
    [anon_sym_n] = ACTIONS(96),
    [anon_sym_new] = ACTIONS(96),
    [anon_sym_o] = ACTIONS(96),
    [anon_sym_open] = ACTIONS(96),
    [anon_sym_q] = ACTIONS(96),
    [anon_sym_quit] = ACTIONS(96),
    [anon_sym_r] = ACTIONS(96),
    [anon_sym_read] = ACTIONS(96),
    [anon_sym_tc] = ACTIONS(96),
    [anon_sym_tcommit] = ACTIONS(96),
    [anon_sym_tre] = ACTIONS(96),
    [anon_sym_trestart] = ACTIONS(96),
    [anon_sym_tro] = ACTIONS(96),
    [anon_sym_trollback] = ACTIONS(96),
    [anon_sym_ts] = ACTIONS(96),
    [anon_sym_tstart] = ACTIONS(96),
    [anon_sym_u] = ACTIONS(96),
    [anon_sym_use] = ACTIONS(96),
    [anon_sym_v] = ACTIONS(96),
    [anon_sym_view] = ACTIONS(96),
    [anon_sym_w] = ACTIONS(96),
    [anon_sym_write] = ACTIONS(96),
    [anon_sym_x] = ACTIONS(96),
    [anon_sym_xecute] = ACTIONS(96),
    [anon_sym_z] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [sym_integer] = ACTIONS(96),
    [sym_float] = ACTIONS(94),
    [sym_string] = ACTIONS(94),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_for] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_do] = ACTIONS(100),
    [anon_sym_if] = ACTIONS(100),
    [sym_local_variable] = ACTIONS(100),
    [sym_global_variable] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_SQUOTE_GT] = ACTIONS(98),
    [anon_sym_SQUOTE_LT] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(98),
    [anon_sym_SQUOTE_EQ] = ACTIONS(98),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(98),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(100),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(98),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [sym_write_read_outro] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [anon_sym_b] = ACTIONS(100),
    [anon_sym_break] = ACTIONS(100),
    [anon_sym_c] = ACTIONS(100),
    [anon_sym_close] = ACTIONS(100),
    [anon_sym_d] = ACTIONS(100),
    [anon_sym_e] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(100),
    [anon_sym_f] = ACTIONS(100),
    [anon_sym_g] = ACTIONS(100),
    [anon_sym_goto] = ACTIONS(100),
    [anon_sym_h] = ACTIONS(100),
    [anon_sym_halt] = ACTIONS(100),
    [anon_sym_hang] = ACTIONS(100),
    [anon_sym_i] = ACTIONS(100),
    [anon_sym_j] = ACTIONS(100),
    [anon_sym_job] = ACTIONS(100),
    [anon_sym_l] = ACTIONS(100),
    [anon_sym_lock] = ACTIONS(100),
    [anon_sym_k] = ACTIONS(100),
    [anon_sym_kill] = ACTIONS(100),
    [anon_sym_m] = ACTIONS(100),
    [anon_sym_merge] = ACTIONS(100),
    [anon_sym_n] = ACTIONS(100),
    [anon_sym_new] = ACTIONS(100),
    [anon_sym_o] = ACTIONS(100),
    [anon_sym_open] = ACTIONS(100),
    [anon_sym_q] = ACTIONS(100),
    [anon_sym_quit] = ACTIONS(100),
    [anon_sym_r] = ACTIONS(100),
    [anon_sym_read] = ACTIONS(100),
    [anon_sym_tc] = ACTIONS(100),
    [anon_sym_tcommit] = ACTIONS(100),
    [anon_sym_tre] = ACTIONS(100),
    [anon_sym_trestart] = ACTIONS(100),
    [anon_sym_tro] = ACTIONS(100),
    [anon_sym_trollback] = ACTIONS(100),
    [anon_sym_ts] = ACTIONS(100),
    [anon_sym_tstart] = ACTIONS(100),
    [anon_sym_u] = ACTIONS(100),
    [anon_sym_use] = ACTIONS(100),
    [anon_sym_v] = ACTIONS(100),
    [anon_sym_view] = ACTIONS(100),
    [anon_sym_w] = ACTIONS(100),
    [anon_sym_write] = ACTIONS(100),
    [anon_sym_x] = ACTIONS(100),
    [anon_sym_xecute] = ACTIONS(100),
    [anon_sym_z] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [sym_integer] = ACTIONS(100),
    [sym_float] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_for] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_do] = ACTIONS(78),
    [anon_sym_if] = ACTIONS(78),
    [sym_local_variable] = ACTIONS(78),
    [sym_global_variable] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_SQUOTE_GT] = ACTIONS(76),
    [anon_sym_SQUOTE_LT] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE_EQ] = ACTIONS(76),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(78),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(76),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(76),
    [sym_write_read_outro] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [anon_sym_b] = ACTIONS(78),
    [anon_sym_break] = ACTIONS(78),
    [anon_sym_c] = ACTIONS(78),
    [anon_sym_close] = ACTIONS(78),
    [anon_sym_d] = ACTIONS(78),
    [anon_sym_e] = ACTIONS(78),
    [anon_sym_else] = ACTIONS(78),
    [anon_sym_f] = ACTIONS(78),
    [anon_sym_g] = ACTIONS(78),
    [anon_sym_goto] = ACTIONS(78),
    [anon_sym_h] = ACTIONS(78),
    [anon_sym_halt] = ACTIONS(78),
    [anon_sym_hang] = ACTIONS(78),
    [anon_sym_i] = ACTIONS(78),
    [anon_sym_j] = ACTIONS(78),
    [anon_sym_job] = ACTIONS(78),
    [anon_sym_l] = ACTIONS(78),
    [anon_sym_lock] = ACTIONS(78),
    [anon_sym_k] = ACTIONS(78),
    [anon_sym_kill] = ACTIONS(78),
    [anon_sym_m] = ACTIONS(78),
    [anon_sym_merge] = ACTIONS(78),
    [anon_sym_n] = ACTIONS(78),
    [anon_sym_new] = ACTIONS(78),
    [anon_sym_o] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(78),
    [anon_sym_q] = ACTIONS(78),
    [anon_sym_quit] = ACTIONS(78),
    [anon_sym_r] = ACTIONS(78),
    [anon_sym_read] = ACTIONS(78),
    [anon_sym_tc] = ACTIONS(78),
    [anon_sym_tcommit] = ACTIONS(78),
    [anon_sym_tre] = ACTIONS(78),
    [anon_sym_trestart] = ACTIONS(78),
    [anon_sym_tro] = ACTIONS(78),
    [anon_sym_trollback] = ACTIONS(78),
    [anon_sym_ts] = ACTIONS(78),
    [anon_sym_tstart] = ACTIONS(78),
    [anon_sym_u] = ACTIONS(78),
    [anon_sym_use] = ACTIONS(78),
    [anon_sym_v] = ACTIONS(78),
    [anon_sym_view] = ACTIONS(78),
    [anon_sym_w] = ACTIONS(78),
    [anon_sym_write] = ACTIONS(78),
    [anon_sym_x] = ACTIONS(78),
    [anon_sym_xecute] = ACTIONS(78),
    [anon_sym_z] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(78),
    [sym_integer] = ACTIONS(78),
    [sym_float] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym__eol_comment] = ACTIONS(98),
    [anon_sym_for] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_do] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_STAR_STAR] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_SQUOTE_GT] = ACTIONS(98),
    [anon_sym_SQUOTE_LT] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(98),
    [anon_sym_SQUOTE_EQ] = ACTIONS(98),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(98),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(100),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(98),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [anon_sym_b] = ACTIONS(100),
    [anon_sym_break] = ACTIONS(98),
    [anon_sym_c] = ACTIONS(100),
    [anon_sym_close] = ACTIONS(98),
    [anon_sym_d] = ACTIONS(100),
    [anon_sym_e] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(98),
    [anon_sym_f] = ACTIONS(100),
    [anon_sym_g] = ACTIONS(100),
    [anon_sym_goto] = ACTIONS(98),
    [anon_sym_h] = ACTIONS(100),
    [anon_sym_halt] = ACTIONS(98),
    [anon_sym_hang] = ACTIONS(98),
    [anon_sym_i] = ACTIONS(100),
    [anon_sym_j] = ACTIONS(100),
    [anon_sym_job] = ACTIONS(98),
    [anon_sym_l] = ACTIONS(100),
    [anon_sym_lock] = ACTIONS(98),
    [anon_sym_k] = ACTIONS(100),
    [anon_sym_kill] = ACTIONS(98),
    [anon_sym_m] = ACTIONS(100),
    [anon_sym_merge] = ACTIONS(98),
    [anon_sym_n] = ACTIONS(100),
    [anon_sym_new] = ACTIONS(98),
    [anon_sym_o] = ACTIONS(100),
    [anon_sym_open] = ACTIONS(98),
    [anon_sym_q] = ACTIONS(100),
    [anon_sym_quit] = ACTIONS(98),
    [anon_sym_r] = ACTIONS(100),
    [anon_sym_read] = ACTIONS(98),
    [anon_sym_tc] = ACTIONS(100),
    [anon_sym_tcommit] = ACTIONS(98),
    [anon_sym_tre] = ACTIONS(100),
    [anon_sym_trestart] = ACTIONS(98),
    [anon_sym_tro] = ACTIONS(100),
    [anon_sym_trollback] = ACTIONS(98),
    [anon_sym_ts] = ACTIONS(100),
    [anon_sym_tstart] = ACTIONS(98),
    [anon_sym_u] = ACTIONS(100),
    [anon_sym_use] = ACTIONS(98),
    [anon_sym_v] = ACTIONS(100),
    [anon_sym_view] = ACTIONS(98),
    [anon_sym_w] = ACTIONS(100),
    [anon_sym_write] = ACTIONS(98),
    [anon_sym_x] = ACTIONS(100),
    [anon_sym_xecute] = ACTIONS(98),
    [anon_sym_z] = ACTIONS(98),
    [sym__set] = ACTIONS(98),
    [sym__line_comment] = ACTIONS(98),
    [sym__label] = ACTIONS(98),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym__eol_comment] = ACTIONS(94),
    [anon_sym_for] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_do] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_SQUOTE_GT] = ACTIONS(94),
    [anon_sym_SQUOTE_LT] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(94),
    [anon_sym_SQUOTE_EQ] = ACTIONS(94),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(94),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(96),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(94),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(94),
    [anon_sym_b] = ACTIONS(96),
    [anon_sym_break] = ACTIONS(94),
    [anon_sym_c] = ACTIONS(96),
    [anon_sym_close] = ACTIONS(94),
    [anon_sym_d] = ACTIONS(96),
    [anon_sym_e] = ACTIONS(96),
    [anon_sym_else] = ACTIONS(94),
    [anon_sym_f] = ACTIONS(96),
    [anon_sym_g] = ACTIONS(96),
    [anon_sym_goto] = ACTIONS(94),
    [anon_sym_h] = ACTIONS(96),
    [anon_sym_halt] = ACTIONS(94),
    [anon_sym_hang] = ACTIONS(94),
    [anon_sym_i] = ACTIONS(96),
    [anon_sym_j] = ACTIONS(96),
    [anon_sym_job] = ACTIONS(94),
    [anon_sym_l] = ACTIONS(96),
    [anon_sym_lock] = ACTIONS(94),
    [anon_sym_k] = ACTIONS(96),
    [anon_sym_kill] = ACTIONS(94),
    [anon_sym_m] = ACTIONS(96),
    [anon_sym_merge] = ACTIONS(94),
    [anon_sym_n] = ACTIONS(96),
    [anon_sym_new] = ACTIONS(94),
    [anon_sym_o] = ACTIONS(96),
    [anon_sym_open] = ACTIONS(94),
    [anon_sym_q] = ACTIONS(96),
    [anon_sym_quit] = ACTIONS(94),
    [anon_sym_r] = ACTIONS(96),
    [anon_sym_read] = ACTIONS(94),
    [anon_sym_tc] = ACTIONS(96),
    [anon_sym_tcommit] = ACTIONS(94),
    [anon_sym_tre] = ACTIONS(96),
    [anon_sym_trestart] = ACTIONS(94),
    [anon_sym_tro] = ACTIONS(96),
    [anon_sym_trollback] = ACTIONS(94),
    [anon_sym_ts] = ACTIONS(96),
    [anon_sym_tstart] = ACTIONS(94),
    [anon_sym_u] = ACTIONS(96),
    [anon_sym_use] = ACTIONS(94),
    [anon_sym_v] = ACTIONS(96),
    [anon_sym_view] = ACTIONS(94),
    [anon_sym_w] = ACTIONS(96),
    [anon_sym_write] = ACTIONS(94),
    [anon_sym_x] = ACTIONS(96),
    [anon_sym_xecute] = ACTIONS(94),
    [anon_sym_z] = ACTIONS(94),
    [sym__set] = ACTIONS(94),
    [sym__line_comment] = ACTIONS(94),
    [sym__label] = ACTIONS(94),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym__eol_comment] = ACTIONS(109),
    [anon_sym_for] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_do] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_STAR_STAR] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_SQUOTE_GT] = ACTIONS(111),
    [anon_sym_SQUOTE_LT] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(111),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(111),
    [anon_sym_SQUOTE_EQ] = ACTIONS(111),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(111),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(113),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(111),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(111),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_b] = ACTIONS(115),
    [anon_sym_break] = ACTIONS(109),
    [anon_sym_c] = ACTIONS(115),
    [anon_sym_close] = ACTIONS(109),
    [anon_sym_d] = ACTIONS(115),
    [anon_sym_e] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(109),
    [anon_sym_f] = ACTIONS(115),
    [anon_sym_g] = ACTIONS(115),
    [anon_sym_goto] = ACTIONS(109),
    [anon_sym_h] = ACTIONS(115),
    [anon_sym_halt] = ACTIONS(109),
    [anon_sym_hang] = ACTIONS(109),
    [anon_sym_i] = ACTIONS(115),
    [anon_sym_j] = ACTIONS(115),
    [anon_sym_job] = ACTIONS(109),
    [anon_sym_l] = ACTIONS(115),
    [anon_sym_lock] = ACTIONS(109),
    [anon_sym_k] = ACTIONS(115),
    [anon_sym_kill] = ACTIONS(109),
    [anon_sym_m] = ACTIONS(115),
    [anon_sym_merge] = ACTIONS(109),
    [anon_sym_n] = ACTIONS(115),
    [anon_sym_new] = ACTIONS(109),
    [anon_sym_o] = ACTIONS(115),
    [anon_sym_open] = ACTIONS(109),
    [anon_sym_q] = ACTIONS(115),
    [anon_sym_quit] = ACTIONS(109),
    [anon_sym_r] = ACTIONS(115),
    [anon_sym_read] = ACTIONS(109),
    [anon_sym_tc] = ACTIONS(115),
    [anon_sym_tcommit] = ACTIONS(109),
    [anon_sym_tre] = ACTIONS(115),
    [anon_sym_trestart] = ACTIONS(109),
    [anon_sym_tro] = ACTIONS(115),
    [anon_sym_trollback] = ACTIONS(109),
    [anon_sym_ts] = ACTIONS(115),
    [anon_sym_tstart] = ACTIONS(109),
    [anon_sym_u] = ACTIONS(115),
    [anon_sym_use] = ACTIONS(109),
    [anon_sym_v] = ACTIONS(115),
    [anon_sym_view] = ACTIONS(109),
    [anon_sym_w] = ACTIONS(115),
    [anon_sym_write] = ACTIONS(109),
    [anon_sym_x] = ACTIONS(115),
    [anon_sym_xecute] = ACTIONS(109),
    [anon_sym_z] = ACTIONS(109),
    [sym__set] = ACTIONS(109),
    [sym__line_comment] = ACTIONS(109),
    [sym__label] = ACTIONS(109),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym__eol_comment] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_do] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_SQUOTE_GT] = ACTIONS(80),
    [anon_sym_SQUOTE_LT] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(80),
    [anon_sym_SQUOTE_EQ] = ACTIONS(80),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(80),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(82),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(80),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_b] = ACTIONS(82),
    [anon_sym_break] = ACTIONS(80),
    [anon_sym_c] = ACTIONS(82),
    [anon_sym_close] = ACTIONS(80),
    [anon_sym_d] = ACTIONS(82),
    [anon_sym_e] = ACTIONS(82),
    [anon_sym_else] = ACTIONS(80),
    [anon_sym_f] = ACTIONS(82),
    [anon_sym_g] = ACTIONS(82),
    [anon_sym_goto] = ACTIONS(80),
    [anon_sym_h] = ACTIONS(82),
    [anon_sym_halt] = ACTIONS(80),
    [anon_sym_hang] = ACTIONS(80),
    [anon_sym_i] = ACTIONS(82),
    [anon_sym_j] = ACTIONS(82),
    [anon_sym_job] = ACTIONS(80),
    [anon_sym_l] = ACTIONS(82),
    [anon_sym_lock] = ACTIONS(80),
    [anon_sym_k] = ACTIONS(82),
    [anon_sym_kill] = ACTIONS(80),
    [anon_sym_m] = ACTIONS(82),
    [anon_sym_merge] = ACTIONS(80),
    [anon_sym_n] = ACTIONS(82),
    [anon_sym_new] = ACTIONS(80),
    [anon_sym_o] = ACTIONS(82),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_q] = ACTIONS(82),
    [anon_sym_quit] = ACTIONS(80),
    [anon_sym_r] = ACTIONS(82),
    [anon_sym_read] = ACTIONS(80),
    [anon_sym_tc] = ACTIONS(82),
    [anon_sym_tcommit] = ACTIONS(80),
    [anon_sym_tre] = ACTIONS(82),
    [anon_sym_trestart] = ACTIONS(80),
    [anon_sym_tro] = ACTIONS(82),
    [anon_sym_trollback] = ACTIONS(80),
    [anon_sym_ts] = ACTIONS(82),
    [anon_sym_tstart] = ACTIONS(80),
    [anon_sym_u] = ACTIONS(82),
    [anon_sym_use] = ACTIONS(80),
    [anon_sym_v] = ACTIONS(82),
    [anon_sym_view] = ACTIONS(80),
    [anon_sym_w] = ACTIONS(82),
    [anon_sym_write] = ACTIONS(80),
    [anon_sym_x] = ACTIONS(82),
    [anon_sym_xecute] = ACTIONS(80),
    [anon_sym_z] = ACTIONS(80),
    [sym__set] = ACTIONS(80),
    [sym__line_comment] = ACTIONS(80),
    [sym__label] = ACTIONS(80),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym__eol_comment] = ACTIONS(76),
    [anon_sym_for] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_do] = ACTIONS(76),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_SQUOTE_GT] = ACTIONS(76),
    [anon_sym_SQUOTE_LT] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE_EQ] = ACTIONS(76),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(78),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(76),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [anon_sym_b] = ACTIONS(78),
    [anon_sym_break] = ACTIONS(76),
    [anon_sym_c] = ACTIONS(78),
    [anon_sym_close] = ACTIONS(76),
    [anon_sym_d] = ACTIONS(78),
    [anon_sym_e] = ACTIONS(78),
    [anon_sym_else] = ACTIONS(76),
    [anon_sym_f] = ACTIONS(78),
    [anon_sym_g] = ACTIONS(78),
    [anon_sym_goto] = ACTIONS(76),
    [anon_sym_h] = ACTIONS(78),
    [anon_sym_halt] = ACTIONS(76),
    [anon_sym_hang] = ACTIONS(76),
    [anon_sym_i] = ACTIONS(78),
    [anon_sym_j] = ACTIONS(78),
    [anon_sym_job] = ACTIONS(76),
    [anon_sym_l] = ACTIONS(78),
    [anon_sym_lock] = ACTIONS(76),
    [anon_sym_k] = ACTIONS(78),
    [anon_sym_kill] = ACTIONS(76),
    [anon_sym_m] = ACTIONS(78),
    [anon_sym_merge] = ACTIONS(76),
    [anon_sym_n] = ACTIONS(78),
    [anon_sym_new] = ACTIONS(76),
    [anon_sym_o] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(76),
    [anon_sym_q] = ACTIONS(78),
    [anon_sym_quit] = ACTIONS(76),
    [anon_sym_r] = ACTIONS(78),
    [anon_sym_read] = ACTIONS(76),
    [anon_sym_tc] = ACTIONS(78),
    [anon_sym_tcommit] = ACTIONS(76),
    [anon_sym_tre] = ACTIONS(78),
    [anon_sym_trestart] = ACTIONS(76),
    [anon_sym_tro] = ACTIONS(78),
    [anon_sym_trollback] = ACTIONS(76),
    [anon_sym_ts] = ACTIONS(78),
    [anon_sym_tstart] = ACTIONS(76),
    [anon_sym_u] = ACTIONS(78),
    [anon_sym_use] = ACTIONS(76),
    [anon_sym_v] = ACTIONS(78),
    [anon_sym_view] = ACTIONS(76),
    [anon_sym_w] = ACTIONS(78),
    [anon_sym_write] = ACTIONS(76),
    [anon_sym_x] = ACTIONS(78),
    [anon_sym_xecute] = ACTIONS(76),
    [anon_sym_z] = ACTIONS(76),
    [sym__set] = ACTIONS(76),
    [sym__line_comment] = ACTIONS(76),
    [sym__label] = ACTIONS(76),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym__eol_comment] = ACTIONS(72),
    [anon_sym_for] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_do] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_BSLASH] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_SQUOTE_GT] = ACTIONS(72),
    [anon_sym_SQUOTE_LT] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(72),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(72),
    [anon_sym_SQUOTE_EQ] = ACTIONS(72),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(72),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(74),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(72),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(72),
    [anon_sym__] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(72),
    [anon_sym_b] = ACTIONS(74),
    [anon_sym_break] = ACTIONS(72),
    [anon_sym_c] = ACTIONS(74),
    [anon_sym_close] = ACTIONS(72),
    [anon_sym_d] = ACTIONS(74),
    [anon_sym_e] = ACTIONS(74),
    [anon_sym_else] = ACTIONS(72),
    [anon_sym_f] = ACTIONS(74),
    [anon_sym_g] = ACTIONS(74),
    [anon_sym_goto] = ACTIONS(72),
    [anon_sym_h] = ACTIONS(74),
    [anon_sym_halt] = ACTIONS(72),
    [anon_sym_hang] = ACTIONS(72),
    [anon_sym_i] = ACTIONS(74),
    [anon_sym_j] = ACTIONS(74),
    [anon_sym_job] = ACTIONS(72),
    [anon_sym_l] = ACTIONS(74),
    [anon_sym_lock] = ACTIONS(72),
    [anon_sym_k] = ACTIONS(74),
    [anon_sym_kill] = ACTIONS(72),
    [anon_sym_m] = ACTIONS(74),
    [anon_sym_merge] = ACTIONS(72),
    [anon_sym_n] = ACTIONS(74),
    [anon_sym_new] = ACTIONS(72),
    [anon_sym_o] = ACTIONS(74),
    [anon_sym_open] = ACTIONS(72),
    [anon_sym_q] = ACTIONS(74),
    [anon_sym_quit] = ACTIONS(72),
    [anon_sym_r] = ACTIONS(74),
    [anon_sym_read] = ACTIONS(72),
    [anon_sym_tc] = ACTIONS(74),
    [anon_sym_tcommit] = ACTIONS(72),
    [anon_sym_tre] = ACTIONS(74),
    [anon_sym_trestart] = ACTIONS(72),
    [anon_sym_tro] = ACTIONS(74),
    [anon_sym_trollback] = ACTIONS(72),
    [anon_sym_ts] = ACTIONS(74),
    [anon_sym_tstart] = ACTIONS(72),
    [anon_sym_u] = ACTIONS(74),
    [anon_sym_use] = ACTIONS(72),
    [anon_sym_v] = ACTIONS(74),
    [anon_sym_view] = ACTIONS(72),
    [anon_sym_w] = ACTIONS(74),
    [anon_sym_write] = ACTIONS(72),
    [anon_sym_x] = ACTIONS(74),
    [anon_sym_xecute] = ACTIONS(72),
    [anon_sym_z] = ACTIONS(72),
    [sym__set] = ACTIONS(72),
    [sym__line_comment] = ACTIONS(72),
    [sym__label] = ACTIONS(72),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym__eol_comment] = ACTIONS(68),
    [anon_sym_for] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_do] = ACTIONS(68),
    [anon_sym_if] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_STAR_STAR] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_SQUOTE_GT] = ACTIONS(68),
    [anon_sym_SQUOTE_LT] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(68),
    [anon_sym_SQUOTE_EQ] = ACTIONS(68),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(68),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(70),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(68),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(68),
    [anon_sym__] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [anon_sym_b] = ACTIONS(70),
    [anon_sym_break] = ACTIONS(68),
    [anon_sym_c] = ACTIONS(70),
    [anon_sym_close] = ACTIONS(68),
    [anon_sym_d] = ACTIONS(70),
    [anon_sym_e] = ACTIONS(70),
    [anon_sym_else] = ACTIONS(68),
    [anon_sym_f] = ACTIONS(70),
    [anon_sym_g] = ACTIONS(70),
    [anon_sym_goto] = ACTIONS(68),
    [anon_sym_h] = ACTIONS(70),
    [anon_sym_halt] = ACTIONS(68),
    [anon_sym_hang] = ACTIONS(68),
    [anon_sym_i] = ACTIONS(70),
    [anon_sym_j] = ACTIONS(70),
    [anon_sym_job] = ACTIONS(68),
    [anon_sym_l] = ACTIONS(70),
    [anon_sym_lock] = ACTIONS(68),
    [anon_sym_k] = ACTIONS(70),
    [anon_sym_kill] = ACTIONS(68),
    [anon_sym_m] = ACTIONS(70),
    [anon_sym_merge] = ACTIONS(68),
    [anon_sym_n] = ACTIONS(70),
    [anon_sym_new] = ACTIONS(68),
    [anon_sym_o] = ACTIONS(70),
    [anon_sym_open] = ACTIONS(68),
    [anon_sym_q] = ACTIONS(70),
    [anon_sym_quit] = ACTIONS(68),
    [anon_sym_r] = ACTIONS(70),
    [anon_sym_read] = ACTIONS(68),
    [anon_sym_tc] = ACTIONS(70),
    [anon_sym_tcommit] = ACTIONS(68),
    [anon_sym_tre] = ACTIONS(70),
    [anon_sym_trestart] = ACTIONS(68),
    [anon_sym_tro] = ACTIONS(70),
    [anon_sym_trollback] = ACTIONS(68),
    [anon_sym_ts] = ACTIONS(70),
    [anon_sym_tstart] = ACTIONS(68),
    [anon_sym_u] = ACTIONS(70),
    [anon_sym_use] = ACTIONS(68),
    [anon_sym_v] = ACTIONS(70),
    [anon_sym_view] = ACTIONS(68),
    [anon_sym_w] = ACTIONS(70),
    [anon_sym_write] = ACTIONS(68),
    [anon_sym_x] = ACTIONS(70),
    [anon_sym_xecute] = ACTIONS(68),
    [anon_sym_z] = ACTIONS(68),
    [sym__set] = ACTIONS(68),
    [sym__line_comment] = ACTIONS(68),
    [sym__label] = ACTIONS(68),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__eol_comment] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(35),
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
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(35),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(35),
    [anon_sym_e] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_f] = ACTIONS(35),
    [anon_sym_g] = ACTIONS(35),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
    [anon_sym_i] = ACTIONS(35),
    [anon_sym_j] = ACTIONS(35),
    [anon_sym_job] = ACTIONS(23),
    [anon_sym_l] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_k] = ACTIONS(35),
    [anon_sym_kill] = ACTIONS(23),
    [anon_sym_m] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(23),
    [anon_sym_n] = ACTIONS(35),
    [anon_sym_new] = ACTIONS(23),
    [anon_sym_o] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(23),
    [anon_sym_q] = ACTIONS(35),
    [anon_sym_quit] = ACTIONS(23),
    [anon_sym_r] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(23),
    [anon_sym_tc] = ACTIONS(35),
    [anon_sym_tcommit] = ACTIONS(23),
    [anon_sym_tre] = ACTIONS(35),
    [anon_sym_trestart] = ACTIONS(23),
    [anon_sym_tro] = ACTIONS(35),
    [anon_sym_trollback] = ACTIONS(23),
    [anon_sym_ts] = ACTIONS(35),
    [anon_sym_tstart] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(23),
    [anon_sym_v] = ACTIONS(35),
    [anon_sym_view] = ACTIONS(23),
    [anon_sym_w] = ACTIONS(35),
    [anon_sym_write] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(35),
    [anon_sym_xecute] = ACTIONS(23),
    [anon_sym_z] = ACTIONS(23),
    [sym__set] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(23),
    [sym__label] = ACTIONS(23),
  },
  [44] = {
    [sym_conditional] = STATE(62),
    [sym__expression] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym__variable] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_arguments] = STATE(20),
    [sym_function] = STATE(103),
    [sym_call] = STATE(12),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(16),
    [sym__typical_call] = STATE(16),
    [sym_literal] = STATE(12),
    [sym_boolean] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(117),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [sym_local_variable] = ACTIONS(119),
    [sym_global_variable] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_c] = ACTIONS(117),
    [anon_sym_close] = ACTIONS(117),
    [anon_sym_d] = ACTIONS(117),
    [anon_sym_e] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_f] = ACTIONS(117),
    [anon_sym_g] = ACTIONS(117),
    [anon_sym_goto] = ACTIONS(117),
    [anon_sym_h] = ACTIONS(117),
    [anon_sym_halt] = ACTIONS(117),
    [anon_sym_hang] = ACTIONS(117),
    [anon_sym_i] = ACTIONS(117),
    [anon_sym_j] = ACTIONS(117),
    [anon_sym_job] = ACTIONS(117),
    [anon_sym_l] = ACTIONS(117),
    [anon_sym_lock] = ACTIONS(117),
    [anon_sym_k] = ACTIONS(117),
    [anon_sym_kill] = ACTIONS(117),
    [anon_sym_m] = ACTIONS(117),
    [anon_sym_merge] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [anon_sym_new] = ACTIONS(117),
    [anon_sym_o] = ACTIONS(117),
    [anon_sym_open] = ACTIONS(117),
    [anon_sym_q] = ACTIONS(117),
    [anon_sym_quit] = ACTIONS(117),
    [anon_sym_r] = ACTIONS(117),
    [anon_sym_read] = ACTIONS(117),
    [anon_sym_tc] = ACTIONS(117),
    [anon_sym_tcommit] = ACTIONS(117),
    [anon_sym_tre] = ACTIONS(117),
    [anon_sym_trestart] = ACTIONS(117),
    [anon_sym_tro] = ACTIONS(117),
    [anon_sym_trollback] = ACTIONS(117),
    [anon_sym_ts] = ACTIONS(117),
    [anon_sym_tstart] = ACTIONS(117),
    [anon_sym_u] = ACTIONS(117),
    [anon_sym_use] = ACTIONS(117),
    [anon_sym_v] = ACTIONS(117),
    [anon_sym_view] = ACTIONS(117),
    [anon_sym_w] = ACTIONS(117),
    [anon_sym_write] = ACTIONS(117),
    [anon_sym_x] = ACTIONS(117),
    [anon_sym_xecute] = ACTIONS(117),
    [anon_sym_z] = ACTIONS(117),
    [sym__set] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [45] = {
    [sym__expression] = STATE(11),
    [sym__identifier] = STATE(19),
    [sym__variable] = STATE(19),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_arguments] = STATE(20),
    [sym_function] = STATE(103),
    [sym_call] = STATE(11),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(16),
    [sym__typical_call] = STATE(16),
    [sym_literal] = STATE(11),
    [sym_boolean] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(21),
    [sym_local_variable] = ACTIONS(131),
    [sym_global_variable] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_b] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(21),
    [anon_sym_c] = ACTIONS(21),
    [anon_sym_close] = ACTIONS(21),
    [anon_sym_d] = ACTIONS(21),
    [anon_sym_e] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_f] = ACTIONS(21),
    [anon_sym_g] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(21),
    [anon_sym_halt] = ACTIONS(21),
    [anon_sym_hang] = ACTIONS(21),
    [anon_sym_i] = ACTIONS(21),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_job] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_m] = ACTIONS(21),
    [anon_sym_merge] = ACTIONS(21),
    [anon_sym_n] = ACTIONS(21),
    [anon_sym_new] = ACTIONS(21),
    [anon_sym_o] = ACTIONS(21),
    [anon_sym_open] = ACTIONS(21),
    [anon_sym_q] = ACTIONS(21),
    [anon_sym_quit] = ACTIONS(21),
    [anon_sym_r] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_tc] = ACTIONS(21),
    [anon_sym_tcommit] = ACTIONS(21),
    [anon_sym_tre] = ACTIONS(21),
    [anon_sym_trestart] = ACTIONS(21),
    [anon_sym_tro] = ACTIONS(21),
    [anon_sym_trollback] = ACTIONS(21),
    [anon_sym_ts] = ACTIONS(21),
    [anon_sym_tstart] = ACTIONS(21),
    [anon_sym_u] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_v] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_xecute] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [sym__set] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [46] = {
    [sym__expression] = STATE(72),
    [sym__identifier] = STATE(72),
    [sym__variable] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_arguments] = STATE(92),
    [sym_function] = STATE(104),
    [sym_call] = STATE(72),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(72),
    [sym_boolean] = STATE(28),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [47] = {
    [sym__expression] = STATE(72),
    [sym__identifier] = STATE(72),
    [sym__variable] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_arguments] = STATE(100),
    [sym_function] = STATE(104),
    [sym_call] = STATE(72),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(72),
    [sym_boolean] = STATE(28),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [48] = {
    [sym__expression] = STATE(72),
    [sym__identifier] = STATE(72),
    [sym__variable] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_arguments] = STATE(98),
    [sym_function] = STATE(104),
    [sym_call] = STATE(72),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(72),
    [sym_boolean] = STATE(28),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(27),
    [sym_global_variable] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [49] = {
    [sym__expression] = STATE(36),
    [sym__identifier] = STATE(36),
    [sym__variable] = STATE(36),
    [sym_unary_expression] = STATE(36),
    [sym_binary_expression] = STATE(36),
    [sym_function] = STATE(95),
    [sym_call] = STATE(36),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_literal] = STATE(36),
    [sym_boolean] = STATE(39),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [sym_local_variable] = ACTIONS(135),
    [sym_global_variable] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(13),
    [anon_sym_hang] = ACTIONS(13),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(13),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(13),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(13),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(13),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(13),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(13),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(13),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(13),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(13),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(13),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(13),
    [anon_sym_z] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [sym_integer] = ACTIONS(143),
    [sym_float] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
  },
  [50] = {
    [sym__expression] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym__variable] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_function] = STATE(103),
    [sym_call] = STATE(15),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(16),
    [sym__typical_call] = STATE(16),
    [sym_literal] = STATE(15),
    [sym_boolean] = STATE(18),
    [anon_sym_for] = ACTIONS(117),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [sym_local_variable] = ACTIONS(147),
    [sym_global_variable] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_c] = ACTIONS(117),
    [anon_sym_close] = ACTIONS(117),
    [anon_sym_d] = ACTIONS(117),
    [anon_sym_e] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_f] = ACTIONS(117),
    [anon_sym_g] = ACTIONS(117),
    [anon_sym_goto] = ACTIONS(117),
    [anon_sym_h] = ACTIONS(117),
    [anon_sym_halt] = ACTIONS(117),
    [anon_sym_hang] = ACTIONS(117),
    [anon_sym_i] = ACTIONS(117),
    [anon_sym_j] = ACTIONS(117),
    [anon_sym_job] = ACTIONS(117),
    [anon_sym_l] = ACTIONS(117),
    [anon_sym_lock] = ACTIONS(117),
    [anon_sym_k] = ACTIONS(117),
    [anon_sym_kill] = ACTIONS(117),
    [anon_sym_m] = ACTIONS(117),
    [anon_sym_merge] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [anon_sym_new] = ACTIONS(117),
    [anon_sym_o] = ACTIONS(117),
    [anon_sym_open] = ACTIONS(117),
    [anon_sym_q] = ACTIONS(117),
    [anon_sym_quit] = ACTIONS(117),
    [anon_sym_r] = ACTIONS(117),
    [anon_sym_read] = ACTIONS(117),
    [anon_sym_tc] = ACTIONS(117),
    [anon_sym_tcommit] = ACTIONS(117),
    [anon_sym_tre] = ACTIONS(117),
    [anon_sym_trestart] = ACTIONS(117),
    [anon_sym_tro] = ACTIONS(117),
    [anon_sym_trollback] = ACTIONS(117),
    [anon_sym_ts] = ACTIONS(117),
    [anon_sym_tstart] = ACTIONS(117),
    [anon_sym_u] = ACTIONS(117),
    [anon_sym_use] = ACTIONS(117),
    [anon_sym_v] = ACTIONS(117),
    [anon_sym_view] = ACTIONS(117),
    [anon_sym_w] = ACTIONS(117),
    [anon_sym_write] = ACTIONS(117),
    [anon_sym_x] = ACTIONS(117),
    [anon_sym_xecute] = ACTIONS(117),
    [anon_sym_z] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
  },
  [51] = {
    [sym__expression] = STATE(21),
    [sym__identifier] = STATE(21),
    [sym__variable] = STATE(21),
    [sym_unary_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_function] = STATE(103),
    [sym_call] = STATE(21),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(16),
    [sym__typical_call] = STATE(16),
    [sym_literal] = STATE(21),
    [sym_boolean] = STATE(18),
    [anon_sym_for] = ACTIONS(117),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [sym_local_variable] = ACTIONS(151),
    [sym_global_variable] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_c] = ACTIONS(117),
    [anon_sym_close] = ACTIONS(117),
    [anon_sym_d] = ACTIONS(117),
    [anon_sym_e] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_f] = ACTIONS(117),
    [anon_sym_g] = ACTIONS(117),
    [anon_sym_goto] = ACTIONS(117),
    [anon_sym_h] = ACTIONS(117),
    [anon_sym_halt] = ACTIONS(117),
    [anon_sym_hang] = ACTIONS(117),
    [anon_sym_i] = ACTIONS(117),
    [anon_sym_j] = ACTIONS(117),
    [anon_sym_job] = ACTIONS(117),
    [anon_sym_l] = ACTIONS(117),
    [anon_sym_lock] = ACTIONS(117),
    [anon_sym_k] = ACTIONS(117),
    [anon_sym_kill] = ACTIONS(117),
    [anon_sym_m] = ACTIONS(117),
    [anon_sym_merge] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [anon_sym_new] = ACTIONS(117),
    [anon_sym_o] = ACTIONS(117),
    [anon_sym_open] = ACTIONS(117),
    [anon_sym_q] = ACTIONS(117),
    [anon_sym_quit] = ACTIONS(117),
    [anon_sym_r] = ACTIONS(117),
    [anon_sym_read] = ACTIONS(117),
    [anon_sym_tc] = ACTIONS(117),
    [anon_sym_tcommit] = ACTIONS(117),
    [anon_sym_tre] = ACTIONS(117),
    [anon_sym_trestart] = ACTIONS(117),
    [anon_sym_tro] = ACTIONS(117),
    [anon_sym_trollback] = ACTIONS(117),
    [anon_sym_ts] = ACTIONS(117),
    [anon_sym_tstart] = ACTIONS(117),
    [anon_sym_u] = ACTIONS(117),
    [anon_sym_use] = ACTIONS(117),
    [anon_sym_v] = ACTIONS(117),
    [anon_sym_view] = ACTIONS(117),
    [anon_sym_w] = ACTIONS(117),
    [anon_sym_write] = ACTIONS(117),
    [anon_sym_x] = ACTIONS(117),
    [anon_sym_xecute] = ACTIONS(117),
    [anon_sym_z] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
  },
  [52] = {
    [sym__expression] = STATE(31),
    [sym__identifier] = STATE(31),
    [sym__variable] = STATE(31),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_function] = STATE(104),
    [sym_call] = STATE(31),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(31),
    [sym_boolean] = STATE(28),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(155),
    [sym_global_variable] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [53] = {
    [sym__expression] = STATE(38),
    [sym__identifier] = STATE(38),
    [sym__variable] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym_function] = STATE(95),
    [sym_call] = STATE(38),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_literal] = STATE(38),
    [sym_boolean] = STATE(39),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [sym_local_variable] = ACTIONS(159),
    [sym_global_variable] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(13),
    [anon_sym_hang] = ACTIONS(13),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(13),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(13),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(13),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(13),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(13),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(13),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(13),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(13),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(13),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(13),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(13),
    [anon_sym_z] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [sym_integer] = ACTIONS(143),
    [sym_float] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
  },
  [54] = {
    [sym__expression] = STATE(32),
    [sym__identifier] = STATE(32),
    [sym__variable] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_function] = STATE(104),
    [sym_call] = STATE(32),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(32),
    [sym_boolean] = STATE(28),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(163),
    [sym_global_variable] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [55] = {
    [sym__expression] = STATE(41),
    [sym__identifier] = STATE(41),
    [sym__variable] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_function] = STATE(95),
    [sym_call] = STATE(41),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_literal] = STATE(41),
    [sym_boolean] = STATE(39),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [sym_local_variable] = ACTIONS(167),
    [sym_global_variable] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(13),
    [anon_sym_hang] = ACTIONS(13),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_job] = ACTIONS(13),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(13),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kill] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_merge] = ACTIONS(13),
    [anon_sym_n] = ACTIONS(13),
    [anon_sym_new] = ACTIONS(13),
    [anon_sym_o] = ACTIONS(13),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_q] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_tc] = ACTIONS(13),
    [anon_sym_tcommit] = ACTIONS(13),
    [anon_sym_tre] = ACTIONS(13),
    [anon_sym_trestart] = ACTIONS(13),
    [anon_sym_tro] = ACTIONS(13),
    [anon_sym_trollback] = ACTIONS(13),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_tstart] = ACTIONS(13),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_v] = ACTIONS(13),
    [anon_sym_view] = ACTIONS(13),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(13),
    [anon_sym_x] = ACTIONS(13),
    [anon_sym_xecute] = ACTIONS(13),
    [anon_sym_z] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [sym_integer] = ACTIONS(143),
    [sym_float] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
  },
  [56] = {
    [sym__expression] = STATE(34),
    [sym__identifier] = STATE(34),
    [sym__variable] = STATE(34),
    [sym_unary_expression] = STATE(34),
    [sym_binary_expression] = STATE(34),
    [sym_function] = STATE(104),
    [sym_call] = STATE(34),
    [sym_command] = STATE(7),
    [sym__write_read_call] = STATE(27),
    [sym__typical_call] = STATE(27),
    [sym_literal] = STATE(34),
    [sym_boolean] = STATE(28),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [sym_local_variable] = ACTIONS(171),
    [sym_global_variable] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_f] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(25),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(25),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(25),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_r] = ACTIONS(25),
    [anon_sym_read] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(25),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(25),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(25),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(25),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(25),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_write] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [57] = {
    [sym__expression] = STATE(23),
    [sym__identifier] = STATE(23),
    [sym__variable] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_function] = STATE(103),
    [sym_call] = STATE(23),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(16),
    [sym__typical_call] = STATE(16),
    [sym_literal] = STATE(23),
    [sym_boolean] = STATE(18),
    [anon_sym_for] = ACTIONS(117),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [sym_local_variable] = ACTIONS(175),
    [sym_global_variable] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(117),
    [anon_sym_c] = ACTIONS(117),
    [anon_sym_close] = ACTIONS(117),
    [anon_sym_d] = ACTIONS(117),
    [anon_sym_e] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_f] = ACTIONS(117),
    [anon_sym_g] = ACTIONS(117),
    [anon_sym_goto] = ACTIONS(117),
    [anon_sym_h] = ACTIONS(117),
    [anon_sym_halt] = ACTIONS(117),
    [anon_sym_hang] = ACTIONS(117),
    [anon_sym_i] = ACTIONS(117),
    [anon_sym_j] = ACTIONS(117),
    [anon_sym_job] = ACTIONS(117),
    [anon_sym_l] = ACTIONS(117),
    [anon_sym_lock] = ACTIONS(117),
    [anon_sym_k] = ACTIONS(117),
    [anon_sym_kill] = ACTIONS(117),
    [anon_sym_m] = ACTIONS(117),
    [anon_sym_merge] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [anon_sym_new] = ACTIONS(117),
    [anon_sym_o] = ACTIONS(117),
    [anon_sym_open] = ACTIONS(117),
    [anon_sym_q] = ACTIONS(117),
    [anon_sym_quit] = ACTIONS(117),
    [anon_sym_r] = ACTIONS(117),
    [anon_sym_read] = ACTIONS(117),
    [anon_sym_tc] = ACTIONS(117),
    [anon_sym_tcommit] = ACTIONS(117),
    [anon_sym_tre] = ACTIONS(117),
    [anon_sym_trestart] = ACTIONS(117),
    [anon_sym_tro] = ACTIONS(117),
    [anon_sym_trollback] = ACTIONS(117),
    [anon_sym_ts] = ACTIONS(117),
    [anon_sym_tstart] = ACTIONS(117),
    [anon_sym_u] = ACTIONS(117),
    [anon_sym_use] = ACTIONS(117),
    [anon_sym_v] = ACTIONS(117),
    [anon_sym_view] = ACTIONS(117),
    [anon_sym_w] = ACTIONS(117),
    [anon_sym_write] = ACTIONS(117),
    [anon_sym_x] = ACTIONS(117),
    [anon_sym_xecute] = ACTIONS(117),
    [anon_sym_z] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(129),
    [sym_string] = ACTIONS(129),
  },
  [58] = {
    [sym__statement] = STATE(58),
    [sym_label] = STATE(60),
    [sym_function_declaration] = STATE(58),
    [sym_comment] = STATE(58),
    [sym__simple_statement] = STATE(58),
    [sym__compound_statement] = STATE(58),
    [sym_for_statement] = STATE(58),
    [sym_if_statement] = STATE(58),
    [sym_function] = STATE(95),
    [sym_call] = STATE(58),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_assignment] = STATE(58),
    [aux_sym_program_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym__eol_comment] = ACTIONS(181),
    [anon_sym_for] = ACTIONS(184),
    [anon_sym_do] = ACTIONS(187),
    [anon_sym_if] = ACTIONS(190),
    [anon_sym_DOLLAR] = ACTIONS(193),
    [anon_sym_b] = ACTIONS(196),
    [anon_sym_break] = ACTIONS(187),
    [anon_sym_c] = ACTIONS(196),
    [anon_sym_close] = ACTIONS(187),
    [anon_sym_d] = ACTIONS(196),
    [anon_sym_e] = ACTIONS(196),
    [anon_sym_else] = ACTIONS(187),
    [anon_sym_f] = ACTIONS(196),
    [anon_sym_g] = ACTIONS(196),
    [anon_sym_goto] = ACTIONS(187),
    [anon_sym_h] = ACTIONS(196),
    [anon_sym_halt] = ACTIONS(187),
    [anon_sym_hang] = ACTIONS(187),
    [anon_sym_i] = ACTIONS(196),
    [anon_sym_j] = ACTIONS(196),
    [anon_sym_job] = ACTIONS(187),
    [anon_sym_l] = ACTIONS(196),
    [anon_sym_lock] = ACTIONS(187),
    [anon_sym_k] = ACTIONS(196),
    [anon_sym_kill] = ACTIONS(187),
    [anon_sym_m] = ACTIONS(196),
    [anon_sym_merge] = ACTIONS(187),
    [anon_sym_n] = ACTIONS(196),
    [anon_sym_new] = ACTIONS(187),
    [anon_sym_o] = ACTIONS(196),
    [anon_sym_open] = ACTIONS(187),
    [anon_sym_q] = ACTIONS(196),
    [anon_sym_quit] = ACTIONS(187),
    [anon_sym_r] = ACTIONS(196),
    [anon_sym_read] = ACTIONS(187),
    [anon_sym_tc] = ACTIONS(196),
    [anon_sym_tcommit] = ACTIONS(187),
    [anon_sym_tre] = ACTIONS(196),
    [anon_sym_trestart] = ACTIONS(187),
    [anon_sym_tro] = ACTIONS(196),
    [anon_sym_trollback] = ACTIONS(187),
    [anon_sym_ts] = ACTIONS(196),
    [anon_sym_tstart] = ACTIONS(187),
    [anon_sym_u] = ACTIONS(196),
    [anon_sym_use] = ACTIONS(187),
    [anon_sym_v] = ACTIONS(196),
    [anon_sym_view] = ACTIONS(187),
    [anon_sym_w] = ACTIONS(196),
    [anon_sym_write] = ACTIONS(187),
    [anon_sym_x] = ACTIONS(196),
    [anon_sym_xecute] = ACTIONS(187),
    [anon_sym_z] = ACTIONS(187),
    [sym__set] = ACTIONS(199),
    [sym__line_comment] = ACTIONS(181),
    [sym__label] = ACTIONS(202),
  },
  [59] = {
    [sym__statement] = STATE(58),
    [sym_label] = STATE(60),
    [sym_function_declaration] = STATE(58),
    [sym_comment] = STATE(58),
    [sym__simple_statement] = STATE(58),
    [sym__compound_statement] = STATE(58),
    [sym_for_statement] = STATE(58),
    [sym_if_statement] = STATE(58),
    [sym_function] = STATE(95),
    [sym_call] = STATE(58),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_assignment] = STATE(58),
    [aux_sym_program_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(205),
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
    [sym__label] = ACTIONS(17),
  },
  [60] = {
    [sym_label] = STATE(88),
    [sym_function_declaration] = STATE(70),
    [sym_parameters] = STATE(67),
    [sym_comment] = STATE(70),
    [sym__simple_statement] = STATE(70),
    [sym__compound_statement] = STATE(70),
    [sym_for_statement] = STATE(70),
    [sym_if_statement] = STATE(70),
    [sym_function] = STATE(95),
    [sym_call] = STATE(70),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_assignment] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(207),
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
    [sym__label] = ACTIONS(209),
  },
  [61] = {
    [sym__statement] = STATE(69),
    [sym_label] = STATE(60),
    [sym_function_declaration] = STATE(69),
    [sym_comment] = STATE(69),
    [sym__simple_statement] = STATE(69),
    [sym__compound_statement] = STATE(69),
    [sym_for_statement] = STATE(69),
    [sym_if_statement] = STATE(69),
    [sym_function] = STATE(95),
    [sym_call] = STATE(69),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_assignment] = STATE(69),
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
    [sym__label] = ACTIONS(17),
  },
  [62] = {
    [sym__statement] = STATE(64),
    [sym_label] = STATE(60),
    [sym_function_declaration] = STATE(64),
    [sym_comment] = STATE(64),
    [sym__simple_statement] = STATE(64),
    [sym__compound_statement] = STATE(64),
    [sym_for_statement] = STATE(64),
    [sym_if_statement] = STATE(64),
    [sym_function] = STATE(95),
    [sym_call] = STATE(64),
    [sym_command] = STATE(5),
    [sym__write_read_call] = STATE(43),
    [sym__typical_call] = STATE(43),
    [sym_assignment] = STATE(64),
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
    [sym__label] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(213), 24,
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
    ACTIONS(211), 32,
      sym__line_comment,
      sym__label,
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
    ACTIONS(217), 24,
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
    ACTIONS(215), 32,
      sym__line_comment,
      sym__label,
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
    ACTIONS(221), 24,
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
    ACTIONS(219), 32,
      sym__line_comment,
      sym__label,
      anon_sym_LPAREN,
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
    ACTIONS(225), 24,
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
    ACTIONS(223), 32,
      sym__line_comment,
      sym__label,
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
    ACTIONS(229), 24,
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
    ACTIONS(227), 32,
      sym__line_comment,
      sym__label,
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
    ACTIONS(233), 24,
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
    ACTIONS(231), 32,
      sym__line_comment,
      sym__label,
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
    ACTIONS(237), 24,
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
    ACTIONS(235), 32,
      sym__line_comment,
      sym__label,
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
  [427] = 2,
    ACTIONS(241), 24,
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
    ACTIONS(239), 32,
      sym__line_comment,
      sym__label,
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
  [488] = 2,
    ACTIONS(245), 24,
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
    ACTIONS(243), 32,
      sym__line_comment,
      sym__label,
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
  [549] = 5,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(49), 2,
      anon_sym_RPAREN,
      sym_write_read_outro,
    ACTIONS(104), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(102), 21,
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
  [588] = 5,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      sym__alphanum,
    STATE(80), 1,
      aux_sym_parameters_repeat1,
    STATE(81), 1,
      sym_parameter,
  [604] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      sym_write_read_outro,
  [615] = 3,
    STATE(77), 1,
      sym__variable,
    STATE(101), 1,
      sym__loop_range,
    ACTIONS(255), 2,
      sym_local_variable,
      sym_global_variable,
  [626] = 3,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_do,
    STATE(79), 1,
      aux_sym__loop_range_repeat1,
  [636] = 3,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_do,
    STATE(76), 1,
      aux_sym__loop_range_repeat1,
  [646] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_parameters_repeat1,
  [656] = 3,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(271), 1,
      anon_sym_do,
    STATE(79), 1,
      aux_sym__loop_range_repeat1,
  [666] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_parameters_repeat1,
  [676] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameters_repeat1,
  [686] = 2,
    STATE(93), 1,
      sym__variable,
    ACTIONS(275), 2,
      sym_local_variable,
      sym_global_variable,
  [694] = 2,
    STATE(89), 1,
      sym__variable,
    ACTIONS(277), 2,
      sym_local_variable,
      sym_global_variable,
  [702] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_parameters_repeat1,
  [712] = 2,
    ACTIONS(253), 1,
      sym__alphanum,
    STATE(86), 1,
      sym_parameter,
  [719] = 1,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [724] = 1,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [729] = 2,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_parameters,
  [736] = 1,
    ACTIONS(271), 2,
      anon_sym_COLON,
      anon_sym_do,
  [741] = 1,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
  [745] = 1,
    ACTIONS(283), 1,
      sym_write_read_outro,
  [749] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [753] = 1,
    ACTIONS(287), 1,
      anon_sym_EQ,
  [757] = 1,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
  [761] = 1,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
  [765] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [769] = 1,
    ACTIONS(295), 1,
      sym_write_read_outro,
  [773] = 1,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [777] = 1,
    ACTIONS(299), 1,
      sym_write_read_outro,
  [781] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [785] = 1,
    ACTIONS(303), 1,
      anon_sym_do,
  [789] = 1,
    ACTIONS(305), 1,
      sym__alphanum,
  [793] = 1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [797] = 1,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(63)] = 0,
  [SMALL_STATE(64)] = 61,
  [SMALL_STATE(65)] = 122,
  [SMALL_STATE(66)] = 183,
  [SMALL_STATE(67)] = 244,
  [SMALL_STATE(68)] = 305,
  [SMALL_STATE(69)] = 366,
  [SMALL_STATE(70)] = 427,
  [SMALL_STATE(71)] = 488,
  [SMALL_STATE(72)] = 549,
  [SMALL_STATE(73)] = 588,
  [SMALL_STATE(74)] = 604,
  [SMALL_STATE(75)] = 615,
  [SMALL_STATE(76)] = 626,
  [SMALL_STATE(77)] = 636,
  [SMALL_STATE(78)] = 646,
  [SMALL_STATE(79)] = 656,
  [SMALL_STATE(80)] = 666,
  [SMALL_STATE(81)] = 676,
  [SMALL_STATE(82)] = 686,
  [SMALL_STATE(83)] = 694,
  [SMALL_STATE(84)] = 702,
  [SMALL_STATE(85)] = 712,
  [SMALL_STATE(86)] = 719,
  [SMALL_STATE(87)] = 724,
  [SMALL_STATE(88)] = 729,
  [SMALL_STATE(89)] = 736,
  [SMALL_STATE(90)] = 741,
  [SMALL_STATE(91)] = 745,
  [SMALL_STATE(92)] = 749,
  [SMALL_STATE(93)] = 753,
  [SMALL_STATE(94)] = 757,
  [SMALL_STATE(95)] = 761,
  [SMALL_STATE(96)] = 765,
  [SMALL_STATE(97)] = 769,
  [SMALL_STATE(98)] = 773,
  [SMALL_STATE(99)] = 777,
  [SMALL_STATE(100)] = 781,
  [SMALL_STATE(101)] = 785,
  [SMALL_STATE(102)] = 789,
  [SMALL_STATE(103)] = 793,
  [SMALL_STATE(104)] = 797,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(51),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_call, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_read_call, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_call, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_call, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(54),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(102),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(85),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(83),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_comment = 0,
  ts_external_token__label = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_comment] = sym__line_comment,
  [ts_external_token__label] = sym__label,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
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
