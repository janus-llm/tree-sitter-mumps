#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 33
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
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
  aux_sym_if_statement_token1 = 9,
  sym__variable_name = 10,
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
  sym__write_read_outro = 36,
  anon_sym_DOLLAR = 37,
  anon_sym_b = 38,
  anon_sym_break = 39,
  anon_sym_c = 40,
  anon_sym_close = 41,
  anon_sym_d = 42,
  anon_sym_g = 43,
  anon_sym_goto = 44,
  anon_sym_h = 45,
  anon_sym_halt = 46,
  anon_sym_hang = 47,
  anon_sym_j = 48,
  anon_sym_job = 49,
  anon_sym_l = 50,
  anon_sym_lock = 51,
  anon_sym_k = 52,
  anon_sym_kill = 53,
  anon_sym_m = 54,
  anon_sym_merge = 55,
  anon_sym_n = 56,
  anon_sym_new = 57,
  anon_sym_o = 58,
  anon_sym_open = 59,
  anon_sym_q = 60,
  anon_sym_quit = 61,
  anon_sym_r = 62,
  anon_sym_read = 63,
  anon_sym_tc = 64,
  anon_sym_tcommit = 65,
  anon_sym_tre = 66,
  anon_sym_trestart = 67,
  anon_sym_tro = 68,
  anon_sym_trollback = 69,
  anon_sym_ts = 70,
  anon_sym_tstart = 71,
  anon_sym_u = 72,
  anon_sym_use = 73,
  anon_sym_v = 74,
  anon_sym_view = 75,
  anon_sym_w = 76,
  anon_sym_write = 77,
  anon_sym_x = 78,
  anon_sym_xecute = 79,
  anon_sym_z = 80,
  anon_sym_0 = 81,
  sym__set = 82,
  sym__alphanum = 83,
  anon_sym_true = 84,
  anon_sym_false = 85,
  sym_integer = 86,
  sym_float = 87,
  sym_string = 88,
  sym__line_comment = 89,
  sym__label = 90,
  sym_program = 91,
  sym__statement = 92,
  sym_label = 93,
  sym_function_declaration = 94,
  sym_parameters = 95,
  sym_parameter = 96,
  sym_comment = 97,
  sym_conditional = 98,
  sym__simple_statement = 99,
  sym__compound_statement = 100,
  sym_for_statement = 101,
  sym__loop_range = 102,
  sym_if_statement = 103,
  sym__expression = 104,
  sym__identifier = 105,
  sym__array = 106,
  sym_local_array = 107,
  sym_array_index = 108,
  sym__variable = 109,
  sym_local_variable = 110,
  sym_unary_expression = 111,
  sym_binary_expression = 112,
  sym_arguments = 113,
  sym_function = 114,
  sym_call = 115,
  sym_command = 116,
  sym__write_read_call = 117,
  sym__typical_call = 118,
  sym_assignment = 119,
  sym__literal = 120,
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
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [sym__variable_name] = "_variable_name",
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
  [sym__write_read_outro] = "_write_read_outro",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_b] = "b",
  [anon_sym_break] = "break",
  [anon_sym_c] = "c",
  [anon_sym_close] = "close",
  [anon_sym_d] = "d",
  [anon_sym_g] = "g",
  [anon_sym_goto] = "goto",
  [anon_sym_h] = "h",
  [anon_sym_halt] = "halt",
  [anon_sym_hang] = "hang",
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
  [anon_sym_0] = "0",
  [sym__set] = "_set",
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
  [sym__array] = "_array",
  [sym_local_array] = "local_array",
  [sym_array_index] = "array_index",
  [sym__variable] = "_variable",
  [sym_local_variable] = "local_variable",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_function] = "function",
  [sym_call] = "call",
  [sym_command] = "command",
  [sym__write_read_call] = "_write_read_call",
  [sym__typical_call] = "_typical_call",
  [sym_assignment] = "assignment",
  [sym__literal] = "_literal",
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
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [sym__variable_name] = sym__variable_name,
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
  [sym__write_read_outro] = sym__write_read_outro,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_halt] = anon_sym_halt,
  [anon_sym_hang] = anon_sym_hang,
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
  [anon_sym_0] = anon_sym_0,
  [sym__set] = sym__set,
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
  [sym__array] = sym__array,
  [sym_local_array] = sym_local_array,
  [sym_array_index] = sym_array_index,
  [sym__variable] = sym__variable,
  [sym_local_variable] = sym_local_variable,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_function] = sym_function,
  [sym_call] = sym_call,
  [sym_command] = sym_command,
  [sym__write_read_call] = sym__write_read_call,
  [sym__typical_call] = sym__typical_call,
  [sym_assignment] = sym_assignment,
  [sym__literal] = sym__literal,
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
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__variable_name] = {
    .visible = false,
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
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [sym__set] = {
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
  [sym__array] = {
    .visible = false,
    .named = true,
  },
  [sym_local_array] = {
    .visible = true,
    .named = true,
  },
  [sym_array_index] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
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
  [sym__literal] = {
    .visible = false,
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
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
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 20,
  [27] = 23,
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
  [41] = 41,
  [42] = 6,
  [43] = 15,
  [44] = 13,
  [45] = 45,
  [46] = 7,
  [47] = 10,
  [48] = 8,
  [49] = 49,
  [50] = 9,
  [51] = 12,
  [52] = 14,
  [53] = 53,
  [54] = 53,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 41,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 74,
  [83] = 78,
  [84] = 75,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 85,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '&') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(262);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'j') ADVANCE(196);
      if (lookahead == 'k') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'q') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(249);
      if (lookahead == 'w') ADVANCE(252);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead == 'z') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '&') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'j') ADVANCE(196);
      if (lookahead == 'k') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'q') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(249);
      if (lookahead == 'w') ADVANCE(252);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead == 'z') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '?') ADVANCE(169);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == ']') ADVANCE(168);
      END_STATE();
    case 5:
      if (lookahead == '^') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(194);
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
      if (lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(238);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(12);
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
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(250);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 66:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '&') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'j') ADVANCE(196);
      if (lookahead == 'k') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'q') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(249);
      if (lookahead == 'w') ADVANCE(252);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead == 'z') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(148);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == '&') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'j') ADVANCE(197);
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'q') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(248);
      if (lookahead == 'w') ADVANCE(253);
      if (lookahead == 'x') ADVANCE(257);
      if (lookahead == 'z') ADVANCE(260);
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
      if (lookahead == '!') ADVANCE(174);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(199);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(203);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(179);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(239);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(215);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '?') ADVANCE(169);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == ']') ADVANCE(168);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__write_read_outro);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_hang);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_hang);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_job);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_job);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_lock);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_kill);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_quit);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_quit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_tcommit);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_tcommit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_trestart);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_trestart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_trollback);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_trollback);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_tstart);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_tstart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_view);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_write);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_xecute);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_xecute);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '_') ADVANCE(269);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 68, .external_lex_state = 1},
  [2] = {.lex_state = 67, .external_lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 67, .external_lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 68, .external_lex_state = 1},
  [7] = {.lex_state = 68, .external_lex_state = 1},
  [8] = {.lex_state = 68, .external_lex_state = 1},
  [9] = {.lex_state = 68, .external_lex_state = 1},
  [10] = {.lex_state = 68, .external_lex_state = 1},
  [11] = {.lex_state = 68, .external_lex_state = 1},
  [12] = {.lex_state = 68, .external_lex_state = 1},
  [13] = {.lex_state = 68, .external_lex_state = 1},
  [14] = {.lex_state = 68, .external_lex_state = 1},
  [15] = {.lex_state = 68, .external_lex_state = 1},
  [16] = {.lex_state = 68, .external_lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 68, .external_lex_state = 1},
  [29] = {.lex_state = 68, .external_lex_state = 1},
  [30] = {.lex_state = 68, .external_lex_state = 1},
  [31] = {.lex_state = 68, .external_lex_state = 1},
  [32] = {.lex_state = 68, .external_lex_state = 1},
  [33] = {.lex_state = 68, .external_lex_state = 1},
  [34] = {.lex_state = 68, .external_lex_state = 1},
  [35] = {.lex_state = 68, .external_lex_state = 1},
  [36] = {.lex_state = 68, .external_lex_state = 1},
  [37] = {.lex_state = 68, .external_lex_state = 1},
  [38] = {.lex_state = 68, .external_lex_state = 1},
  [39] = {.lex_state = 68, .external_lex_state = 1},
  [40] = {.lex_state = 68, .external_lex_state = 1},
  [41] = {.lex_state = 68, .external_lex_state = 1},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 68},
  [44] = {.lex_state = 68},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 68},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 68},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 68},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 68},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 68},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
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
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [sym__variable_name] = ACTIONS(1),
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
    [sym__write_read_outro] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_halt] = ACTIONS(1),
    [anon_sym_hang] = ACTIONS(1),
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
    [anon_sym_0] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(1),
    [sym__label] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(86),
    [sym__statement] = STATE(28),
    [sym_label] = STATE(30),
    [sym_function_declaration] = STATE(28),
    [sym_comment] = STATE(28),
    [sym__simple_statement] = STATE(28),
    [sym__compound_statement] = STATE(28),
    [sym_for_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_function] = STATE(85),
    [sym_call] = STATE(28),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym_assignment] = STATE(28),
    [aux_sym_program_repeat1] = STATE(28),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
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
    [sym__expression] = STATE(45),
    [sym__identifier] = STATE(45),
    [sym__array] = STATE(45),
    [sym_local_array] = STATE(45),
    [sym__variable] = STATE(45),
    [sym_local_variable] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_arguments] = STATE(78),
    [sym_function] = STATE(88),
    [sym_call] = STATE(45),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(23),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
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
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [sym__set] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [3] = {
    [sym__expression] = STATE(45),
    [sym__identifier] = STATE(45),
    [sym__array] = STATE(45),
    [sym_local_array] = STATE(45),
    [sym__variable] = STATE(45),
    [sym_local_variable] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_arguments] = STATE(83),
    [sym_function] = STATE(88),
    [sym_call] = STATE(45),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
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
    [sym__write_read_outro] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__eol_comment] = ACTIONS(37),
    [anon_sym_for] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_do] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(39),
    [sym__variable_name] = ACTIONS(39),
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
    [anon_sym_DOLLAR] = ACTIONS(37),
    [anon_sym_b] = ACTIONS(39),
    [anon_sym_break] = ACTIONS(39),
    [anon_sym_c] = ACTIONS(39),
    [anon_sym_close] = ACTIONS(39),
    [anon_sym_d] = ACTIONS(39),
    [anon_sym_g] = ACTIONS(39),
    [anon_sym_goto] = ACTIONS(39),
    [anon_sym_h] = ACTIONS(39),
    [anon_sym_halt] = ACTIONS(39),
    [anon_sym_hang] = ACTIONS(39),
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
    [sym__label] = ACTIONS(37),
  },
  [5] = {
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_do] = ACTIONS(39),
    [sym__variable_name] = ACTIONS(39),
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
    [sym__write_read_outro] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(37),
    [anon_sym_b] = ACTIONS(39),
    [anon_sym_break] = ACTIONS(39),
    [anon_sym_c] = ACTIONS(39),
    [anon_sym_close] = ACTIONS(39),
    [anon_sym_d] = ACTIONS(39),
    [anon_sym_g] = ACTIONS(39),
    [anon_sym_goto] = ACTIONS(39),
    [anon_sym_h] = ACTIONS(39),
    [anon_sym_halt] = ACTIONS(39),
    [anon_sym_hang] = ACTIONS(39),
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
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
  },
  [6] = {
    [sym_array_index] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym__eol_comment] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(41),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(45),
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
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_EQ] = ACTIONS(41),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [anon_sym_b] = ACTIONS(45),
    [anon_sym_break] = ACTIONS(41),
    [anon_sym_c] = ACTIONS(45),
    [anon_sym_close] = ACTIONS(41),
    [anon_sym_d] = ACTIONS(45),
    [anon_sym_g] = ACTIONS(45),
    [anon_sym_goto] = ACTIONS(41),
    [anon_sym_h] = ACTIONS(45),
    [anon_sym_halt] = ACTIONS(41),
    [anon_sym_hang] = ACTIONS(41),
    [anon_sym_j] = ACTIONS(45),
    [anon_sym_job] = ACTIONS(41),
    [anon_sym_l] = ACTIONS(45),
    [anon_sym_lock] = ACTIONS(41),
    [anon_sym_k] = ACTIONS(45),
    [anon_sym_kill] = ACTIONS(41),
    [anon_sym_m] = ACTIONS(45),
    [anon_sym_merge] = ACTIONS(41),
    [anon_sym_n] = ACTIONS(45),
    [anon_sym_new] = ACTIONS(41),
    [anon_sym_o] = ACTIONS(45),
    [anon_sym_open] = ACTIONS(41),
    [anon_sym_q] = ACTIONS(45),
    [anon_sym_quit] = ACTIONS(41),
    [anon_sym_r] = ACTIONS(45),
    [anon_sym_read] = ACTIONS(41),
    [anon_sym_tc] = ACTIONS(45),
    [anon_sym_tcommit] = ACTIONS(41),
    [anon_sym_tre] = ACTIONS(45),
    [anon_sym_trestart] = ACTIONS(41),
    [anon_sym_tro] = ACTIONS(45),
    [anon_sym_trollback] = ACTIONS(41),
    [anon_sym_ts] = ACTIONS(45),
    [anon_sym_tstart] = ACTIONS(41),
    [anon_sym_u] = ACTIONS(45),
    [anon_sym_use] = ACTIONS(41),
    [anon_sym_v] = ACTIONS(45),
    [anon_sym_view] = ACTIONS(41),
    [anon_sym_w] = ACTIONS(45),
    [anon_sym_write] = ACTIONS(41),
    [anon_sym_x] = ACTIONS(45),
    [anon_sym_xecute] = ACTIONS(41),
    [anon_sym_z] = ACTIONS(41),
    [sym__set] = ACTIONS(41),
    [sym__line_comment] = ACTIONS(41),
    [sym__label] = ACTIONS(41),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym__eol_comment] = ACTIONS(47),
    [anon_sym_for] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [aux_sym_if_statement_token1] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_STAR_STAR] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_SQUOTE_GT] = ACTIONS(47),
    [anon_sym_SQUOTE_LT] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_EQ] = ACTIONS(47),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(49),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(47),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [anon_sym_b] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(47),
    [anon_sym_c] = ACTIONS(49),
    [anon_sym_close] = ACTIONS(47),
    [anon_sym_d] = ACTIONS(49),
    [anon_sym_g] = ACTIONS(49),
    [anon_sym_goto] = ACTIONS(47),
    [anon_sym_h] = ACTIONS(49),
    [anon_sym_halt] = ACTIONS(47),
    [anon_sym_hang] = ACTIONS(47),
    [anon_sym_j] = ACTIONS(49),
    [anon_sym_job] = ACTIONS(47),
    [anon_sym_l] = ACTIONS(49),
    [anon_sym_lock] = ACTIONS(47),
    [anon_sym_k] = ACTIONS(49),
    [anon_sym_kill] = ACTIONS(47),
    [anon_sym_m] = ACTIONS(49),
    [anon_sym_merge] = ACTIONS(47),
    [anon_sym_n] = ACTIONS(49),
    [anon_sym_new] = ACTIONS(47),
    [anon_sym_o] = ACTIONS(49),
    [anon_sym_open] = ACTIONS(47),
    [anon_sym_q] = ACTIONS(49),
    [anon_sym_quit] = ACTIONS(47),
    [anon_sym_r] = ACTIONS(49),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_tc] = ACTIONS(49),
    [anon_sym_tcommit] = ACTIONS(47),
    [anon_sym_tre] = ACTIONS(49),
    [anon_sym_trestart] = ACTIONS(47),
    [anon_sym_tro] = ACTIONS(49),
    [anon_sym_trollback] = ACTIONS(47),
    [anon_sym_ts] = ACTIONS(49),
    [anon_sym_tstart] = ACTIONS(47),
    [anon_sym_u] = ACTIONS(49),
    [anon_sym_use] = ACTIONS(47),
    [anon_sym_v] = ACTIONS(49),
    [anon_sym_view] = ACTIONS(47),
    [anon_sym_w] = ACTIONS(49),
    [anon_sym_write] = ACTIONS(47),
    [anon_sym_x] = ACTIONS(49),
    [anon_sym_xecute] = ACTIONS(47),
    [anon_sym_z] = ACTIONS(47),
    [sym__set] = ACTIONS(47),
    [sym__line_comment] = ACTIONS(47),
    [sym__label] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__eol_comment] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [aux_sym_if_statement_token1] = ACTIONS(51),
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
    [anon_sym_g] = ACTIONS(53),
    [anon_sym_goto] = ACTIONS(51),
    [anon_sym_h] = ACTIONS(53),
    [anon_sym_halt] = ACTIONS(51),
    [anon_sym_hang] = ACTIONS(51),
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
    [sym__label] = ACTIONS(51),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__eol_comment] = ACTIONS(55),
    [anon_sym_for] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [aux_sym_if_statement_token1] = ACTIONS(55),
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
    [anon_sym_g] = ACTIONS(57),
    [anon_sym_goto] = ACTIONS(55),
    [anon_sym_h] = ACTIONS(57),
    [anon_sym_halt] = ACTIONS(55),
    [anon_sym_hang] = ACTIONS(55),
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
    [sym__label] = ACTIONS(55),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__eol_comment] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [aux_sym_if_statement_token1] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_STAR_STAR] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_SQUOTE_GT] = ACTIONS(59),
    [anon_sym_SQUOTE_LT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE_EQ] = ACTIONS(59),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(61),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(59),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(59),
    [anon_sym__] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_b] = ACTIONS(61),
    [anon_sym_break] = ACTIONS(59),
    [anon_sym_c] = ACTIONS(61),
    [anon_sym_close] = ACTIONS(59),
    [anon_sym_d] = ACTIONS(61),
    [anon_sym_g] = ACTIONS(61),
    [anon_sym_goto] = ACTIONS(59),
    [anon_sym_h] = ACTIONS(61),
    [anon_sym_halt] = ACTIONS(59),
    [anon_sym_hang] = ACTIONS(59),
    [anon_sym_j] = ACTIONS(61),
    [anon_sym_job] = ACTIONS(59),
    [anon_sym_l] = ACTIONS(61),
    [anon_sym_lock] = ACTIONS(59),
    [anon_sym_k] = ACTIONS(61),
    [anon_sym_kill] = ACTIONS(59),
    [anon_sym_m] = ACTIONS(61),
    [anon_sym_merge] = ACTIONS(59),
    [anon_sym_n] = ACTIONS(61),
    [anon_sym_new] = ACTIONS(59),
    [anon_sym_o] = ACTIONS(61),
    [anon_sym_open] = ACTIONS(59),
    [anon_sym_q] = ACTIONS(61),
    [anon_sym_quit] = ACTIONS(59),
    [anon_sym_r] = ACTIONS(61),
    [anon_sym_read] = ACTIONS(59),
    [anon_sym_tc] = ACTIONS(61),
    [anon_sym_tcommit] = ACTIONS(59),
    [anon_sym_tre] = ACTIONS(61),
    [anon_sym_trestart] = ACTIONS(59),
    [anon_sym_tro] = ACTIONS(61),
    [anon_sym_trollback] = ACTIONS(59),
    [anon_sym_ts] = ACTIONS(61),
    [anon_sym_tstart] = ACTIONS(59),
    [anon_sym_u] = ACTIONS(61),
    [anon_sym_use] = ACTIONS(59),
    [anon_sym_v] = ACTIONS(61),
    [anon_sym_view] = ACTIONS(59),
    [anon_sym_w] = ACTIONS(61),
    [anon_sym_write] = ACTIONS(59),
    [anon_sym_x] = ACTIONS(61),
    [anon_sym_xecute] = ACTIONS(59),
    [anon_sym_z] = ACTIONS(59),
    [sym__set] = ACTIONS(59),
    [sym__line_comment] = ACTIONS(59),
    [sym__label] = ACTIONS(59),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym__eol_comment] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(63),
    [aux_sym_if_statement_token1] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_STAR_STAR] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_SQUOTE_GT] = ACTIONS(65),
    [anon_sym_SQUOTE_LT] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_EQ] = ACTIONS(65),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(65),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(63),
    [anon_sym_b] = ACTIONS(69),
    [anon_sym_break] = ACTIONS(63),
    [anon_sym_c] = ACTIONS(69),
    [anon_sym_close] = ACTIONS(63),
    [anon_sym_d] = ACTIONS(69),
    [anon_sym_g] = ACTIONS(69),
    [anon_sym_goto] = ACTIONS(63),
    [anon_sym_h] = ACTIONS(69),
    [anon_sym_halt] = ACTIONS(63),
    [anon_sym_hang] = ACTIONS(63),
    [anon_sym_j] = ACTIONS(69),
    [anon_sym_job] = ACTIONS(63),
    [anon_sym_l] = ACTIONS(69),
    [anon_sym_lock] = ACTIONS(63),
    [anon_sym_k] = ACTIONS(69),
    [anon_sym_kill] = ACTIONS(63),
    [anon_sym_m] = ACTIONS(69),
    [anon_sym_merge] = ACTIONS(63),
    [anon_sym_n] = ACTIONS(69),
    [anon_sym_new] = ACTIONS(63),
    [anon_sym_o] = ACTIONS(69),
    [anon_sym_open] = ACTIONS(63),
    [anon_sym_q] = ACTIONS(69),
    [anon_sym_quit] = ACTIONS(63),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_read] = ACTIONS(63),
    [anon_sym_tc] = ACTIONS(69),
    [anon_sym_tcommit] = ACTIONS(63),
    [anon_sym_tre] = ACTIONS(69),
    [anon_sym_trestart] = ACTIONS(63),
    [anon_sym_tro] = ACTIONS(69),
    [anon_sym_trollback] = ACTIONS(63),
    [anon_sym_ts] = ACTIONS(69),
    [anon_sym_tstart] = ACTIONS(63),
    [anon_sym_u] = ACTIONS(69),
    [anon_sym_use] = ACTIONS(63),
    [anon_sym_v] = ACTIONS(69),
    [anon_sym_view] = ACTIONS(63),
    [anon_sym_w] = ACTIONS(69),
    [anon_sym_write] = ACTIONS(63),
    [anon_sym_x] = ACTIONS(69),
    [anon_sym_xecute] = ACTIONS(63),
    [anon_sym_z] = ACTIONS(63),
    [sym__set] = ACTIONS(63),
    [sym__line_comment] = ACTIONS(63),
    [sym__label] = ACTIONS(63),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym__eol_comment] = ACTIONS(71),
    [anon_sym_for] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_do] = ACTIONS(71),
    [aux_sym_if_statement_token1] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_STAR_STAR] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_SQUOTE_GT] = ACTIONS(71),
    [anon_sym_SQUOTE_LT] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE_EQ] = ACTIONS(71),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(73),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(71),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(71),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(71),
    [anon_sym_b] = ACTIONS(73),
    [anon_sym_break] = ACTIONS(71),
    [anon_sym_c] = ACTIONS(73),
    [anon_sym_close] = ACTIONS(71),
    [anon_sym_d] = ACTIONS(73),
    [anon_sym_g] = ACTIONS(73),
    [anon_sym_goto] = ACTIONS(71),
    [anon_sym_h] = ACTIONS(73),
    [anon_sym_halt] = ACTIONS(71),
    [anon_sym_hang] = ACTIONS(71),
    [anon_sym_j] = ACTIONS(73),
    [anon_sym_job] = ACTIONS(71),
    [anon_sym_l] = ACTIONS(73),
    [anon_sym_lock] = ACTIONS(71),
    [anon_sym_k] = ACTIONS(73),
    [anon_sym_kill] = ACTIONS(71),
    [anon_sym_m] = ACTIONS(73),
    [anon_sym_merge] = ACTIONS(71),
    [anon_sym_n] = ACTIONS(73),
    [anon_sym_new] = ACTIONS(71),
    [anon_sym_o] = ACTIONS(73),
    [anon_sym_open] = ACTIONS(71),
    [anon_sym_q] = ACTIONS(73),
    [anon_sym_quit] = ACTIONS(71),
    [anon_sym_r] = ACTIONS(73),
    [anon_sym_read] = ACTIONS(71),
    [anon_sym_tc] = ACTIONS(73),
    [anon_sym_tcommit] = ACTIONS(71),
    [anon_sym_tre] = ACTIONS(73),
    [anon_sym_trestart] = ACTIONS(71),
    [anon_sym_tro] = ACTIONS(73),
    [anon_sym_trollback] = ACTIONS(71),
    [anon_sym_ts] = ACTIONS(73),
    [anon_sym_tstart] = ACTIONS(71),
    [anon_sym_u] = ACTIONS(73),
    [anon_sym_use] = ACTIONS(71),
    [anon_sym_v] = ACTIONS(73),
    [anon_sym_view] = ACTIONS(71),
    [anon_sym_w] = ACTIONS(73),
    [anon_sym_write] = ACTIONS(71),
    [anon_sym_x] = ACTIONS(73),
    [anon_sym_xecute] = ACTIONS(71),
    [anon_sym_z] = ACTIONS(71),
    [sym__set] = ACTIONS(71),
    [sym__line_comment] = ACTIONS(71),
    [sym__label] = ACTIONS(71),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym__eol_comment] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [aux_sym_if_statement_token1] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_STAR_STAR] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_SQUOTE_GT] = ACTIONS(75),
    [anon_sym_SQUOTE_LT] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE_EQ] = ACTIONS(75),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(77),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(75),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(75),
    [anon_sym_b] = ACTIONS(77),
    [anon_sym_break] = ACTIONS(75),
    [anon_sym_c] = ACTIONS(77),
    [anon_sym_close] = ACTIONS(75),
    [anon_sym_d] = ACTIONS(77),
    [anon_sym_g] = ACTIONS(77),
    [anon_sym_goto] = ACTIONS(75),
    [anon_sym_h] = ACTIONS(77),
    [anon_sym_halt] = ACTIONS(75),
    [anon_sym_hang] = ACTIONS(75),
    [anon_sym_j] = ACTIONS(77),
    [anon_sym_job] = ACTIONS(75),
    [anon_sym_l] = ACTIONS(77),
    [anon_sym_lock] = ACTIONS(75),
    [anon_sym_k] = ACTIONS(77),
    [anon_sym_kill] = ACTIONS(75),
    [anon_sym_m] = ACTIONS(77),
    [anon_sym_merge] = ACTIONS(75),
    [anon_sym_n] = ACTIONS(77),
    [anon_sym_new] = ACTIONS(75),
    [anon_sym_o] = ACTIONS(77),
    [anon_sym_open] = ACTIONS(75),
    [anon_sym_q] = ACTIONS(77),
    [anon_sym_quit] = ACTIONS(75),
    [anon_sym_r] = ACTIONS(77),
    [anon_sym_read] = ACTIONS(75),
    [anon_sym_tc] = ACTIONS(77),
    [anon_sym_tcommit] = ACTIONS(75),
    [anon_sym_tre] = ACTIONS(77),
    [anon_sym_trestart] = ACTIONS(75),
    [anon_sym_tro] = ACTIONS(77),
    [anon_sym_trollback] = ACTIONS(75),
    [anon_sym_ts] = ACTIONS(77),
    [anon_sym_tstart] = ACTIONS(75),
    [anon_sym_u] = ACTIONS(77),
    [anon_sym_use] = ACTIONS(75),
    [anon_sym_v] = ACTIONS(77),
    [anon_sym_view] = ACTIONS(75),
    [anon_sym_w] = ACTIONS(77),
    [anon_sym_write] = ACTIONS(75),
    [anon_sym_x] = ACTIONS(77),
    [anon_sym_xecute] = ACTIONS(75),
    [anon_sym_z] = ACTIONS(75),
    [sym__set] = ACTIONS(75),
    [sym__line_comment] = ACTIONS(75),
    [sym__label] = ACTIONS(75),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
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
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_c] = ACTIONS(21),
    [anon_sym_close] = ACTIONS(19),
    [anon_sym_d] = ACTIONS(21),
    [anon_sym_g] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(19),
    [anon_sym_h] = ACTIONS(21),
    [anon_sym_halt] = ACTIONS(19),
    [anon_sym_hang] = ACTIONS(19),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_job] = ACTIONS(19),
    [anon_sym_l] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(19),
    [anon_sym_m] = ACTIONS(21),
    [anon_sym_merge] = ACTIONS(19),
    [anon_sym_n] = ACTIONS(21),
    [anon_sym_new] = ACTIONS(19),
    [anon_sym_o] = ACTIONS(21),
    [anon_sym_open] = ACTIONS(19),
    [anon_sym_q] = ACTIONS(21),
    [anon_sym_quit] = ACTIONS(19),
    [anon_sym_r] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(19),
    [anon_sym_tc] = ACTIONS(21),
    [anon_sym_tcommit] = ACTIONS(19),
    [anon_sym_tre] = ACTIONS(21),
    [anon_sym_trestart] = ACTIONS(19),
    [anon_sym_tro] = ACTIONS(21),
    [anon_sym_trollback] = ACTIONS(19),
    [anon_sym_ts] = ACTIONS(21),
    [anon_sym_tstart] = ACTIONS(19),
    [anon_sym_u] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(19),
    [anon_sym_v] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(19),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(19),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_xecute] = ACTIONS(19),
    [anon_sym_z] = ACTIONS(19),
    [sym__set] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym__eol_comment] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(79),
    [aux_sym_if_statement_token1] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_SQUOTE_GT] = ACTIONS(79),
    [anon_sym_SQUOTE_LT] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(79),
    [anon_sym_SQUOTE_EQ] = ACTIONS(79),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(79),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(81),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(79),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_b] = ACTIONS(81),
    [anon_sym_break] = ACTIONS(79),
    [anon_sym_c] = ACTIONS(81),
    [anon_sym_close] = ACTIONS(79),
    [anon_sym_d] = ACTIONS(81),
    [anon_sym_g] = ACTIONS(81),
    [anon_sym_goto] = ACTIONS(79),
    [anon_sym_h] = ACTIONS(81),
    [anon_sym_halt] = ACTIONS(79),
    [anon_sym_hang] = ACTIONS(79),
    [anon_sym_j] = ACTIONS(81),
    [anon_sym_job] = ACTIONS(79),
    [anon_sym_l] = ACTIONS(81),
    [anon_sym_lock] = ACTIONS(79),
    [anon_sym_k] = ACTIONS(81),
    [anon_sym_kill] = ACTIONS(79),
    [anon_sym_m] = ACTIONS(81),
    [anon_sym_merge] = ACTIONS(79),
    [anon_sym_n] = ACTIONS(81),
    [anon_sym_new] = ACTIONS(79),
    [anon_sym_o] = ACTIONS(81),
    [anon_sym_open] = ACTIONS(79),
    [anon_sym_q] = ACTIONS(81),
    [anon_sym_quit] = ACTIONS(79),
    [anon_sym_r] = ACTIONS(81),
    [anon_sym_read] = ACTIONS(79),
    [anon_sym_tc] = ACTIONS(81),
    [anon_sym_tcommit] = ACTIONS(79),
    [anon_sym_tre] = ACTIONS(81),
    [anon_sym_trestart] = ACTIONS(79),
    [anon_sym_tro] = ACTIONS(81),
    [anon_sym_trollback] = ACTIONS(79),
    [anon_sym_ts] = ACTIONS(81),
    [anon_sym_tstart] = ACTIONS(79),
    [anon_sym_u] = ACTIONS(81),
    [anon_sym_use] = ACTIONS(79),
    [anon_sym_v] = ACTIONS(81),
    [anon_sym_view] = ACTIONS(79),
    [anon_sym_w] = ACTIONS(81),
    [anon_sym_write] = ACTIONS(79),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_xecute] = ACTIONS(79),
    [anon_sym_z] = ACTIONS(79),
    [sym__set] = ACTIONS(79),
    [sym__line_comment] = ACTIONS(79),
    [sym__label] = ACTIONS(79),
  },
  [16] = {
    [sym__eol_comment] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(83),
    [aux_sym_if_statement_token1] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_STAR_STAR] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_SQUOTE_GT] = ACTIONS(65),
    [anon_sym_SQUOTE_LT] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_EQ] = ACTIONS(65),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(65),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(83),
    [anon_sym_b] = ACTIONS(85),
    [anon_sym_break] = ACTIONS(83),
    [anon_sym_c] = ACTIONS(85),
    [anon_sym_close] = ACTIONS(83),
    [anon_sym_d] = ACTIONS(85),
    [anon_sym_g] = ACTIONS(85),
    [anon_sym_goto] = ACTIONS(83),
    [anon_sym_h] = ACTIONS(85),
    [anon_sym_halt] = ACTIONS(83),
    [anon_sym_hang] = ACTIONS(83),
    [anon_sym_j] = ACTIONS(85),
    [anon_sym_job] = ACTIONS(83),
    [anon_sym_l] = ACTIONS(85),
    [anon_sym_lock] = ACTIONS(83),
    [anon_sym_k] = ACTIONS(85),
    [anon_sym_kill] = ACTIONS(83),
    [anon_sym_m] = ACTIONS(85),
    [anon_sym_merge] = ACTIONS(83),
    [anon_sym_n] = ACTIONS(85),
    [anon_sym_new] = ACTIONS(83),
    [anon_sym_o] = ACTIONS(85),
    [anon_sym_open] = ACTIONS(83),
    [anon_sym_q] = ACTIONS(85),
    [anon_sym_quit] = ACTIONS(83),
    [anon_sym_r] = ACTIONS(85),
    [anon_sym_read] = ACTIONS(83),
    [anon_sym_tc] = ACTIONS(85),
    [anon_sym_tcommit] = ACTIONS(83),
    [anon_sym_tre] = ACTIONS(85),
    [anon_sym_trestart] = ACTIONS(83),
    [anon_sym_tro] = ACTIONS(85),
    [anon_sym_trollback] = ACTIONS(83),
    [anon_sym_ts] = ACTIONS(85),
    [anon_sym_tstart] = ACTIONS(83),
    [anon_sym_u] = ACTIONS(85),
    [anon_sym_use] = ACTIONS(83),
    [anon_sym_v] = ACTIONS(85),
    [anon_sym_view] = ACTIONS(83),
    [anon_sym_w] = ACTIONS(85),
    [anon_sym_write] = ACTIONS(83),
    [anon_sym_x] = ACTIONS(85),
    [anon_sym_xecute] = ACTIONS(83),
    [anon_sym_z] = ACTIONS(83),
    [sym__set] = ACTIONS(83),
    [sym__line_comment] = ACTIONS(83),
    [sym__label] = ACTIONS(83),
  },
  [17] = {
    [sym__expression] = STATE(45),
    [sym__identifier] = STATE(45),
    [sym__array] = STATE(45),
    [sym_local_array] = STATE(45),
    [sym__variable] = STATE(45),
    [sym_local_variable] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_arguments] = STATE(84),
    [sym_function] = STATE(88),
    [sym_call] = STATE(45),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
  },
  [18] = {
    [sym__expression] = STATE(45),
    [sym__identifier] = STATE(45),
    [sym__array] = STATE(45),
    [sym_local_array] = STATE(45),
    [sym__variable] = STATE(45),
    [sym_local_variable] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_arguments] = STATE(75),
    [sym_function] = STATE(88),
    [sym_call] = STATE(45),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
  },
  [19] = {
    [sym_conditional] = STATE(31),
    [sym__expression] = STATE(16),
    [sym__identifier] = STATE(16),
    [sym__array] = STATE(16),
    [sym_local_array] = STATE(16),
    [sym__variable] = STATE(16),
    [sym_local_variable] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_function] = STATE(85),
    [sym_call] = STATE(16),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym__literal] = STATE(16),
    [sym_boolean] = STATE(16),
    [anon_sym_do] = ACTIONS(13),
    [sym__variable_name] = ACTIONS(87),
    [sym_global_variable] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(13),
    [anon_sym_hang] = ACTIONS(13),
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
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
  },
  [20] = {
    [sym__expression] = STATE(10),
    [sym__identifier] = STATE(10),
    [sym__array] = STATE(10),
    [sym_local_array] = STATE(10),
    [sym__variable] = STATE(10),
    [sym_local_variable] = STATE(10),
    [sym_unary_expression] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_function] = STATE(85),
    [sym_call] = STATE(10),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [anon_sym_do] = ACTIONS(13),
    [sym__variable_name] = ACTIONS(87),
    [sym_global_variable] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(13),
    [anon_sym_hang] = ACTIONS(13),
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
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_integer] = ACTIONS(99),
    [sym_float] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
  },
  [21] = {
    [sym__expression] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym__array] = STATE(11),
    [sym_local_array] = STATE(11),
    [sym__variable] = STATE(11),
    [sym_local_variable] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_function] = STATE(85),
    [sym_call] = STATE(11),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym__literal] = STATE(11),
    [sym_boolean] = STATE(11),
    [anon_sym_do] = ACTIONS(13),
    [sym__variable_name] = ACTIONS(87),
    [sym_global_variable] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(13),
    [anon_sym_hang] = ACTIONS(13),
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
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
  },
  [22] = {
    [sym__expression] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym__array] = STATE(9),
    [sym_local_array] = STATE(9),
    [sym__variable] = STATE(9),
    [sym_local_variable] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym_function] = STATE(85),
    [sym_call] = STATE(9),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym__literal] = STATE(9),
    [sym_boolean] = STATE(9),
    [anon_sym_do] = ACTIONS(13),
    [sym__variable_name] = ACTIONS(87),
    [sym_global_variable] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(13),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(13),
    [anon_sym_hang] = ACTIONS(13),
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
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_integer] = ACTIONS(107),
    [sym_float] = ACTIONS(105),
    [sym_string] = ACTIONS(105),
  },
  [23] = {
    [sym__expression] = STATE(54),
    [sym__identifier] = STATE(54),
    [sym__array] = STATE(54),
    [sym_local_array] = STATE(54),
    [sym__variable] = STATE(54),
    [sym_local_variable] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_function] = STATE(88),
    [sym_call] = STATE(54),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(54),
    [sym_boolean] = STATE(54),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(111),
    [sym_float] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
  },
  [24] = {
    [sym__expression] = STATE(49),
    [sym__identifier] = STATE(49),
    [sym__array] = STATE(49),
    [sym_local_array] = STATE(49),
    [sym__variable] = STATE(49),
    [sym_local_variable] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym_function] = STATE(88),
    [sym_call] = STATE(49),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(49),
    [sym_boolean] = STATE(49),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(115),
    [sym_float] = ACTIONS(113),
    [sym_string] = ACTIONS(113),
  },
  [25] = {
    [sym__expression] = STATE(50),
    [sym__identifier] = STATE(50),
    [sym__array] = STATE(50),
    [sym_local_array] = STATE(50),
    [sym__variable] = STATE(50),
    [sym_local_variable] = STATE(50),
    [sym_unary_expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [sym_function] = STATE(88),
    [sym_call] = STATE(50),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(50),
    [sym_boolean] = STATE(50),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(119),
    [sym_float] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
  },
  [26] = {
    [sym__expression] = STATE(47),
    [sym__identifier] = STATE(47),
    [sym__array] = STATE(47),
    [sym_local_array] = STATE(47),
    [sym__variable] = STATE(47),
    [sym_local_variable] = STATE(47),
    [sym_unary_expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [sym_function] = STATE(88),
    [sym_call] = STATE(47),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(47),
    [sym_boolean] = STATE(47),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(123),
    [sym_float] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
  },
  [27] = {
    [sym__expression] = STATE(53),
    [sym__identifier] = STATE(53),
    [sym__array] = STATE(53),
    [sym_local_array] = STATE(53),
    [sym__variable] = STATE(53),
    [sym_local_variable] = STATE(53),
    [sym_unary_expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [sym_function] = STATE(88),
    [sym_call] = STATE(53),
    [sym_command] = STATE(3),
    [sym__write_read_call] = STATE(52),
    [sym__typical_call] = STATE(52),
    [sym__literal] = STATE(53),
    [sym_boolean] = STATE(53),
    [anon_sym_do] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_c] = ACTIONS(23),
    [anon_sym_close] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_halt] = ACTIONS(23),
    [anon_sym_hang] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
  },
  [28] = {
    [sym__statement] = STATE(29),
    [sym_label] = STATE(30),
    [sym_function_declaration] = STATE(29),
    [sym_comment] = STATE(29),
    [sym__simple_statement] = STATE(29),
    [sym__compound_statement] = STATE(29),
    [sym_for_statement] = STATE(29),
    [sym_if_statement] = STATE(29),
    [sym_function] = STATE(85),
    [sym_call] = STATE(29),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym_assignment] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
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
  [29] = {
    [sym__statement] = STATE(29),
    [sym_label] = STATE(30),
    [sym_function_declaration] = STATE(29),
    [sym_comment] = STATE(29),
    [sym__simple_statement] = STATE(29),
    [sym__compound_statement] = STATE(29),
    [sym_for_statement] = STATE(29),
    [sym_if_statement] = STATE(29),
    [sym_function] = STATE(85),
    [sym_call] = STATE(29),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym_assignment] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym__eol_comment] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(136),
    [anon_sym_do] = ACTIONS(139),
    [aux_sym_if_statement_token1] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(145),
    [anon_sym_b] = ACTIONS(148),
    [anon_sym_break] = ACTIONS(139),
    [anon_sym_c] = ACTIONS(148),
    [anon_sym_close] = ACTIONS(139),
    [anon_sym_d] = ACTIONS(148),
    [anon_sym_g] = ACTIONS(148),
    [anon_sym_goto] = ACTIONS(139),
    [anon_sym_h] = ACTIONS(148),
    [anon_sym_halt] = ACTIONS(139),
    [anon_sym_hang] = ACTIONS(139),
    [anon_sym_j] = ACTIONS(148),
    [anon_sym_job] = ACTIONS(139),
    [anon_sym_l] = ACTIONS(148),
    [anon_sym_lock] = ACTIONS(139),
    [anon_sym_k] = ACTIONS(148),
    [anon_sym_kill] = ACTIONS(139),
    [anon_sym_m] = ACTIONS(148),
    [anon_sym_merge] = ACTIONS(139),
    [anon_sym_n] = ACTIONS(148),
    [anon_sym_new] = ACTIONS(139),
    [anon_sym_o] = ACTIONS(148),
    [anon_sym_open] = ACTIONS(139),
    [anon_sym_q] = ACTIONS(148),
    [anon_sym_quit] = ACTIONS(139),
    [anon_sym_r] = ACTIONS(148),
    [anon_sym_read] = ACTIONS(139),
    [anon_sym_tc] = ACTIONS(148),
    [anon_sym_tcommit] = ACTIONS(139),
    [anon_sym_tre] = ACTIONS(148),
    [anon_sym_trestart] = ACTIONS(139),
    [anon_sym_tro] = ACTIONS(148),
    [anon_sym_trollback] = ACTIONS(139),
    [anon_sym_ts] = ACTIONS(148),
    [anon_sym_tstart] = ACTIONS(139),
    [anon_sym_u] = ACTIONS(148),
    [anon_sym_use] = ACTIONS(139),
    [anon_sym_v] = ACTIONS(148),
    [anon_sym_view] = ACTIONS(139),
    [anon_sym_w] = ACTIONS(148),
    [anon_sym_write] = ACTIONS(139),
    [anon_sym_x] = ACTIONS(148),
    [anon_sym_xecute] = ACTIONS(139),
    [anon_sym_z] = ACTIONS(139),
    [sym__set] = ACTIONS(151),
    [sym__line_comment] = ACTIONS(133),
    [sym__label] = ACTIONS(154),
  },
  [30] = {
    [sym_label] = STATE(73),
    [sym_function_declaration] = STATE(34),
    [sym_parameters] = STATE(35),
    [sym_comment] = STATE(34),
    [sym__simple_statement] = STATE(34),
    [sym__compound_statement] = STATE(34),
    [sym_for_statement] = STATE(34),
    [sym_if_statement] = STATE(34),
    [sym_function] = STATE(85),
    [sym_call] = STATE(34),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym_assignment] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(157),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
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
    [sym__label] = ACTIONS(159),
  },
  [31] = {
    [sym__statement] = STATE(36),
    [sym_label] = STATE(30),
    [sym_function_declaration] = STATE(36),
    [sym_comment] = STATE(36),
    [sym__simple_statement] = STATE(36),
    [sym__compound_statement] = STATE(36),
    [sym_for_statement] = STATE(36),
    [sym_if_statement] = STATE(36),
    [sym_function] = STATE(85),
    [sym_call] = STATE(36),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym_assignment] = STATE(36),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
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
  [32] = {
    [sym__statement] = STATE(40),
    [sym_label] = STATE(30),
    [sym_function_declaration] = STATE(40),
    [sym_comment] = STATE(40),
    [sym__simple_statement] = STATE(40),
    [sym__compound_statement] = STATE(40),
    [sym_for_statement] = STATE(40),
    [sym_if_statement] = STATE(40),
    [sym_function] = STATE(85),
    [sym_call] = STATE(40),
    [sym_command] = STATE(2),
    [sym__write_read_call] = STATE(14),
    [sym__typical_call] = STATE(14),
    [sym_assignment] = STATE(40),
    [sym__eol_comment] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_b] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(13),
    [anon_sym_close] = ACTIONS(7),
    [anon_sym_d] = ACTIONS(13),
    [anon_sym_g] = ACTIONS(13),
    [anon_sym_goto] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_halt] = ACTIONS(7),
    [anon_sym_hang] = ACTIONS(7),
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
    ACTIONS(163), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(161), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [57] = 2,
    ACTIONS(167), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(165), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [114] = 2,
    ACTIONS(171), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(169), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [171] = 2,
    ACTIONS(175), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(173), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [228] = 2,
    ACTIONS(179), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(177), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [285] = 2,
    ACTIONS(183), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(181), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [342] = 2,
    ACTIONS(187), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(185), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [399] = 2,
    ACTIONS(191), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(189), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [456] = 2,
    ACTIONS(195), 21,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_h,
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
    ACTIONS(193), 31,
      sym__line_comment,
      sym__label,
      anon_sym_LPAREN,
      sym__eol_comment,
      anon_sym_for,
      anon_sym_do,
      aux_sym_if_statement_token1,
      anon_sym_DOLLAR,
      anon_sym_break,
      anon_sym_close,
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
  [513] = 4,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_array_index,
    ACTIONS(45), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(41), 25,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_do,
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
  [553] = 2,
    ACTIONS(81), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(79), 25,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_do,
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
  [587] = 2,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 25,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_do,
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
  [621] = 5,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(201), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
    ACTIONS(205), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(203), 21,
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
  [660] = 2,
    ACTIONS(49), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(47), 23,
      anon_sym_RPAREN,
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
  [692] = 2,
    ACTIONS(61), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(59), 23,
      anon_sym_RPAREN,
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
  [724] = 2,
    ACTIONS(53), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 23,
      anon_sym_RPAREN,
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
  [756] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
    ACTIONS(205), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(203), 21,
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
  [792] = 2,
    ACTIONS(57), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(55), 23,
      anon_sym_RPAREN,
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
  [824] = 2,
    ACTIONS(73), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(71), 23,
      anon_sym_RPAREN,
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
  [856] = 2,
    ACTIONS(21), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(19), 23,
      anon_sym_RPAREN,
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
  [888] = 3,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(203), 21,
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
  [920] = 3,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(203), 21,
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
  [952] = 3,
    ACTIONS(215), 1,
      sym__variable_name,
    ACTIONS(217), 1,
      sym_global_variable,
    STATE(81), 5,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [966] = 4,
    ACTIONS(215), 1,
      sym__variable_name,
    ACTIONS(219), 1,
      sym_global_variable,
    STATE(77), 1,
      sym__loop_range,
    STATE(68), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [981] = 5,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      sym__alphanum,
    STATE(65), 1,
      sym_parameter,
    STATE(66), 1,
      aux_sym_parameters_repeat1,
  [997] = 3,
    ACTIONS(215), 1,
      sym__variable_name,
    ACTIONS(227), 1,
      sym_global_variable,
    STATE(71), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [1009] = 3,
    ACTIONS(215), 1,
      sym__variable_name,
    ACTIONS(229), 1,
      sym_global_variable,
    STATE(79), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [1021] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
  [1032] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
  [1043] = 3,
    ACTIONS(236), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_do,
    STATE(62), 1,
      aux_sym__loop_range_repeat1,
  [1053] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [1063] = 3,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      anon_sym_do,
    STATE(62), 1,
      aux_sym__loop_range_repeat1,
  [1073] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameters_repeat1,
  [1083] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [1093] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [1103] = 3,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_do,
    STATE(64), 1,
      aux_sym__loop_range_repeat1,
  [1113] = 1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1118] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1123] = 1,
    ACTIONS(239), 2,
      anon_sym_COLON,
      anon_sym_do,
  [1128] = 2,
    ACTIONS(225), 1,
      sym__alphanum,
    STATE(70), 1,
      sym_parameter,
  [1135] = 2,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_parameters,
  [1142] = 1,
    ACTIONS(258), 1,
      anon_sym_0,
  [1146] = 1,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
  [1150] = 1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
  [1154] = 1,
    ACTIONS(262), 1,
      anon_sym_do,
  [1158] = 1,
    ACTIONS(264), 1,
      sym__write_read_outro,
  [1162] = 1,
    ACTIONS(266), 1,
      anon_sym_EQ,
  [1166] = 1,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
  [1170] = 1,
    ACTIONS(270), 1,
      anon_sym_EQ,
  [1174] = 1,
    ACTIONS(272), 1,
      anon_sym_0,
  [1178] = 1,
    ACTIONS(274), 1,
      sym__write_read_outro,
  [1182] = 1,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [1186] = 1,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
  [1190] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [1194] = 1,
    ACTIONS(282), 1,
      sym__alphanum,
  [1198] = 1,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(33)] = 0,
  [SMALL_STATE(34)] = 57,
  [SMALL_STATE(35)] = 114,
  [SMALL_STATE(36)] = 171,
  [SMALL_STATE(37)] = 228,
  [SMALL_STATE(38)] = 285,
  [SMALL_STATE(39)] = 342,
  [SMALL_STATE(40)] = 399,
  [SMALL_STATE(41)] = 456,
  [SMALL_STATE(42)] = 513,
  [SMALL_STATE(43)] = 553,
  [SMALL_STATE(44)] = 587,
  [SMALL_STATE(45)] = 621,
  [SMALL_STATE(46)] = 660,
  [SMALL_STATE(47)] = 692,
  [SMALL_STATE(48)] = 724,
  [SMALL_STATE(49)] = 756,
  [SMALL_STATE(50)] = 792,
  [SMALL_STATE(51)] = 824,
  [SMALL_STATE(52)] = 856,
  [SMALL_STATE(53)] = 888,
  [SMALL_STATE(54)] = 920,
  [SMALL_STATE(55)] = 952,
  [SMALL_STATE(56)] = 966,
  [SMALL_STATE(57)] = 981,
  [SMALL_STATE(58)] = 997,
  [SMALL_STATE(59)] = 1009,
  [SMALL_STATE(60)] = 1021,
  [SMALL_STATE(61)] = 1032,
  [SMALL_STATE(62)] = 1043,
  [SMALL_STATE(63)] = 1053,
  [SMALL_STATE(64)] = 1063,
  [SMALL_STATE(65)] = 1073,
  [SMALL_STATE(66)] = 1083,
  [SMALL_STATE(67)] = 1093,
  [SMALL_STATE(68)] = 1103,
  [SMALL_STATE(69)] = 1113,
  [SMALL_STATE(70)] = 1118,
  [SMALL_STATE(71)] = 1123,
  [SMALL_STATE(72)] = 1128,
  [SMALL_STATE(73)] = 1135,
  [SMALL_STATE(74)] = 1142,
  [SMALL_STATE(75)] = 1146,
  [SMALL_STATE(76)] = 1150,
  [SMALL_STATE(77)] = 1154,
  [SMALL_STATE(78)] = 1158,
  [SMALL_STATE(79)] = 1162,
  [SMALL_STATE(80)] = 1166,
  [SMALL_STATE(81)] = 1170,
  [SMALL_STATE(82)] = 1174,
  [SMALL_STATE(83)] = 1178,
  [SMALL_STATE(84)] = 1182,
  [SMALL_STATE(85)] = 1186,
  [SMALL_STATE(86)] = 1190,
  [SMALL_STATE(87)] = 1194,
  [SMALL_STATE(88)] = 1198,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_call, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_read_call, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_call, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_call, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(24),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(58),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(72),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [280] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
