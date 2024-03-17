#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_b = 1,
  anon_sym_break = 2,
  anon_sym_c = 3,
  anon_sym_close = 4,
  anon_sym_g = 5,
  anon_sym_goto = 6,
  anon_sym_h = 7,
  anon_sym_halt = 8,
  anon_sym_hang = 9,
  anon_sym_j = 10,
  anon_sym_job = 11,
  anon_sym_l = 12,
  anon_sym_lock = 13,
  anon_sym_k = 14,
  anon_sym_kill = 15,
  anon_sym_m = 16,
  anon_sym_merge = 17,
  anon_sym_n = 18,
  anon_sym_new = 19,
  anon_sym_o = 20,
  anon_sym_open = 21,
  anon_sym_q = 22,
  anon_sym_quit = 23,
  anon_sym_tc = 24,
  anon_sym_tcommit = 25,
  anon_sym_tre = 26,
  anon_sym_trestart = 27,
  anon_sym_tro = 28,
  anon_sym_trollback = 29,
  anon_sym_ts = 30,
  anon_sym_tstart = 31,
  anon_sym_u = 32,
  anon_sym_use = 33,
  anon_sym_v = 34,
  anon_sym_view = 35,
  anon_sym_x = 36,
  anon_sym_xecute = 37,
  anon_sym_z = 38,
  anon_sym_EQ = 39,
  anon_sym_for = 40,
  anon_sym_do = 41,
  aux_sym_if_statement_token1 = 42,
  anon_sym_COMMA = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  sym__eol_comment = 46,
  anon_sym_COLON = 47,
  sym__variable_name = 48,
  sym_global_variable = 49,
  anon_sym_DASH = 50,
  anon_sym_SQUOTE = 51,
  anon_sym_STAR = 52,
  anon_sym_PLUS = 53,
  anon_sym_SLASH = 54,
  anon_sym_BSLASH = 55,
  anon_sym_POUND = 56,
  anon_sym_STAR_STAR = 57,
  anon_sym_GT = 58,
  anon_sym_LT = 59,
  anon_sym_SQUOTE_GT = 60,
  anon_sym_SQUOTE_LT = 61,
  anon_sym_LBRACK = 62,
  anon_sym_RBRACK = 63,
  anon_sym_QMARK = 64,
  anon_sym_RBRACK_RBRACK = 65,
  anon_sym_SQUOTE_EQ = 66,
  anon_sym_SQUOTE_LBRACK = 67,
  anon_sym_SQUOTE_RBRACK = 68,
  anon_sym_SQUOTE_QMARK = 69,
  anon_sym_SQUOTE_RBRACK_RBRACK = 70,
  anon_sym__ = 71,
  anon_sym_AMP = 72,
  anon_sym_BANG = 73,
  sym__write_read_outro = 74,
  anon_sym_DOLLAR = 75,
  aux_sym__write_read_call_token1 = 76,
  sym__set = 77,
  sym__numeric = 78,
  sym__alphanum = 79,
  anon_sym_true = 80,
  anon_sym_false = 81,
  sym_integer = 82,
  sym_float = 83,
  sym_string = 84,
  sym__line_comment = 85,
  sym__label = 86,
  sym_program = 87,
  sym__statement = 88,
  sym__simple_statement = 89,
  sym__compound_statement = 90,
  sym_command = 91,
  sym_comment = 92,
  sym_assignment = 93,
  sym_for_statement = 94,
  sym_if_statement = 95,
  sym_function_definition = 96,
  sym_arguments = 97,
  sym_label = 98,
  sym_parameters = 99,
  sym_parameter = 100,
  sym_conditional = 101,
  sym__loop_range = 102,
  sym__expression = 103,
  sym__identifier = 104,
  sym__array = 105,
  sym_local_array = 106,
  sym_array_index = 107,
  sym__variable = 108,
  sym_local_variable = 109,
  sym_unary_expression = 110,
  sym_binary_expression = 111,
  sym_function = 112,
  sym_call = 113,
  sym__write_read_call = 114,
  sym__typical_call = 115,
  sym__literal = 116,
  sym_boolean = 117,
  aux_sym_program_repeat1 = 118,
  aux_sym_arguments_repeat1 = 119,
  aux_sym_parameters_repeat1 = 120,
  aux_sym__loop_range_repeat1 = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_b] = "b",
  [anon_sym_break] = "break",
  [anon_sym_c] = "c",
  [anon_sym_close] = "close",
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
  [anon_sym_x] = "x",
  [anon_sym_xecute] = "xecute",
  [anon_sym_z] = "z",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_do] = "do",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__eol_comment] = "_eol_comment",
  [anon_sym_COLON] = ":",
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
  [aux_sym__write_read_call_token1] = "_write_read_call_token1",
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
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_command] = "command",
  [sym_comment] = "comment",
  [sym_assignment] = "assignment",
  [sym_for_statement] = "for_statement",
  [sym_if_statement] = "if_statement",
  [sym_function_definition] = "function_definition",
  [sym_arguments] = "arguments",
  [sym_label] = "label",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_conditional] = "conditional",
  [sym__loop_range] = "_loop_range",
  [sym__expression] = "_expression",
  [sym__identifier] = "_identifier",
  [sym__array] = "_array",
  [sym_local_array] = "local_array",
  [sym_array_index] = "array_index",
  [sym__variable] = "_variable",
  [sym_local_variable] = "local_variable",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_function] = "function",
  [sym_call] = "call",
  [sym__write_read_call] = "_write_read_call",
  [sym__typical_call] = "_typical_call",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__loop_range_repeat1] = "_loop_range_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_close] = anon_sym_close,
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
  [anon_sym_x] = anon_sym_x,
  [anon_sym_xecute] = anon_sym_xecute,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_do] = anon_sym_do,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__eol_comment] = sym__eol_comment,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [aux_sym__write_read_call_token1] = aux_sym__write_read_call_token1,
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
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_command] = sym_command,
  [sym_comment] = sym_comment,
  [sym_assignment] = sym_assignment,
  [sym_for_statement] = sym_for_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_function_definition] = sym_function_definition,
  [sym_arguments] = sym_arguments,
  [sym_label] = sym_label,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_conditional] = sym_conditional,
  [sym__loop_range] = sym__loop_range,
  [sym__expression] = sym__expression,
  [sym__identifier] = sym__identifier,
  [sym__array] = sym__array,
  [sym_local_array] = sym_local_array,
  [sym_array_index] = sym_array_index,
  [sym__variable] = sym__variable,
  [sym_local_variable] = sym_local_variable,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_function] = sym_function,
  [sym_call] = sym_call,
  [sym__write_read_call] = sym__write_read_call,
  [sym__typical_call] = sym__typical_call,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__loop_range_repeat1] = aux_sym__loop_range_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
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
  [anon_sym_COMMA] = {
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
  [sym__eol_comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [aux_sym__write_read_call_token1] = {
    .visible = false,
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
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
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
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
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
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym__loop_range] = {
    .visible = false,
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
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
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
  [aux_sym_arguments_repeat1] = {
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
  [35] = 2,
  [36] = 11,
  [37] = 4,
  [38] = 6,
  [39] = 3,
  [40] = 14,
  [41] = 41,
  [42] = 13,
  [43] = 5,
  [44] = 8,
  [45] = 9,
  [46] = 10,
  [47] = 12,
  [48] = 41,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 49,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 59,
  [62] = 54,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 23,
  [69] = 22,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 71,
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
  [88] = 84,
  [89] = 89,
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(261);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(263);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '+') ADVANCE(241);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '_') ADVANCE(259);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'j') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'q') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == 'x') ADVANCE(148);
      if (lookahead == 'z') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'w') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == ',') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(248);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '[') ADVANCE(255);
      if (lookahead == ']') ADVANCE(256);
      END_STATE();
    case 5:
      if (lookahead == '^') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(134);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 71:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 74:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(261);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '+') ADVANCE(241);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '_') ADVANCE(259);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'j') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'q') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == 'x') ADVANCE(148);
      if (lookahead == 'z') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'j') ADVANCE(97);
      if (lookahead == 'k') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'q') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(145);
      if (lookahead == 'w') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(149);
      if (lookahead == 'z') ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(235);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_hang);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_hang);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_job);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_job);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_lock);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_kill);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(197);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_quit);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_quit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_tcommit);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_tcommit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_trestart);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_trestart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_trollback);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_trollback);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_tstart);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_tstart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_view);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_xecute);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_xecute);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(262);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(103);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(81);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(135);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(209);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(147);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(248);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '[') ADVANCE(255);
      if (lookahead == ']') ADVANCE(256);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__write_read_outro);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__write_read_call_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__write_read_call_token1);
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__write_read_call_token1);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 75, .external_lex_state = 1},
  [3] = {.lex_state = 75, .external_lex_state = 1},
  [4] = {.lex_state = 75, .external_lex_state = 1},
  [5] = {.lex_state = 75, .external_lex_state = 1},
  [6] = {.lex_state = 75, .external_lex_state = 1},
  [7] = {.lex_state = 76, .external_lex_state = 1},
  [8] = {.lex_state = 75, .external_lex_state = 1},
  [9] = {.lex_state = 75, .external_lex_state = 1},
  [10] = {.lex_state = 75, .external_lex_state = 1},
  [11] = {.lex_state = 75, .external_lex_state = 1},
  [12] = {.lex_state = 75, .external_lex_state = 1},
  [13] = {.lex_state = 75, .external_lex_state = 1},
  [14] = {.lex_state = 75, .external_lex_state = 1},
  [15] = {.lex_state = 75, .external_lex_state = 1},
  [16] = {.lex_state = 75, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 75},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 75},
  [45] = {.lex_state = 75},
  [46] = {.lex_state = 75},
  [47] = {.lex_state = 75},
  [48] = {.lex_state = 75},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
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
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_xecute] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__eol_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [aux_sym__write_read_call_token1] = ACTIONS(1),
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
    [sym_program] = STATE(94),
    [sym__statement] = STATE(18),
    [sym__simple_statement] = STATE(18),
    [sym__compound_statement] = STATE(18),
    [sym_command] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_assignment] = STATE(18),
    [sym_for_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_label] = STATE(21),
    [sym__write_read_call] = STATE(30),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_b] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(5),
    [anon_sym_c] = ACTIONS(3),
    [anon_sym_close] = ACTIONS(5),
    [anon_sym_g] = ACTIONS(3),
    [anon_sym_goto] = ACTIONS(5),
    [anon_sym_h] = ACTIONS(3),
    [anon_sym_halt] = ACTIONS(5),
    [anon_sym_hang] = ACTIONS(5),
    [anon_sym_j] = ACTIONS(3),
    [anon_sym_job] = ACTIONS(5),
    [anon_sym_l] = ACTIONS(3),
    [anon_sym_lock] = ACTIONS(5),
    [anon_sym_k] = ACTIONS(3),
    [anon_sym_kill] = ACTIONS(5),
    [anon_sym_m] = ACTIONS(3),
    [anon_sym_merge] = ACTIONS(5),
    [anon_sym_n] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_o] = ACTIONS(3),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_q] = ACTIONS(3),
    [anon_sym_quit] = ACTIONS(5),
    [anon_sym_tc] = ACTIONS(3),
    [anon_sym_tcommit] = ACTIONS(5),
    [anon_sym_tre] = ACTIONS(3),
    [anon_sym_trestart] = ACTIONS(5),
    [anon_sym_tro] = ACTIONS(3),
    [anon_sym_trollback] = ACTIONS(5),
    [anon_sym_ts] = ACTIONS(3),
    [anon_sym_tstart] = ACTIONS(5),
    [anon_sym_u] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
    [anon_sym_v] = ACTIONS(3),
    [anon_sym_view] = ACTIONS(5),
    [anon_sym_x] = ACTIONS(3),
    [anon_sym_xecute] = ACTIONS(5),
    [anon_sym_z] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
    [sym__eol_comment] = ACTIONS(11),
    [aux_sym__write_read_call_token1] = ACTIONS(13),
    [sym__set] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(11),
    [sym__label] = ACTIONS(17),
  },
  [2] = {
    [sym_array_index] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_b] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_c] = ACTIONS(21),
    [anon_sym_close] = ACTIONS(19),
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
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_xecute] = ACTIONS(19),
    [anon_sym_z] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__eol_comment] = ACTIONS(19),
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
    [aux_sym__write_read_call_token1] = ACTIONS(19),
    [sym__set] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [3] = {
    [aux_sym_arguments_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_b] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(27),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(27),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(27),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(27),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(27),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(27),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(27),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(27),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(27),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(27),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(27),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(27),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(27),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(27),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(27),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(27),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(25),
    [aux_sym_if_statement_token1] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(31),
    [sym__eol_comment] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_STAR_STAR] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_SQUOTE_GT] = ACTIONS(29),
    [anon_sym_SQUOTE_LT] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_EQ] = ACTIONS(29),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__write_read_call_token1] = ACTIONS(25),
    [sym__set] = ACTIONS(25),
    [sym__line_comment] = ACTIONS(25),
    [sym__label] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_b] = ACTIONS(37),
    [anon_sym_break] = ACTIONS(35),
    [anon_sym_c] = ACTIONS(37),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_g] = ACTIONS(37),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_h] = ACTIONS(37),
    [anon_sym_halt] = ACTIONS(35),
    [anon_sym_hang] = ACTIONS(35),
    [anon_sym_j] = ACTIONS(37),
    [anon_sym_job] = ACTIONS(35),
    [anon_sym_l] = ACTIONS(37),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_k] = ACTIONS(37),
    [anon_sym_kill] = ACTIONS(35),
    [anon_sym_m] = ACTIONS(37),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_n] = ACTIONS(37),
    [anon_sym_new] = ACTIONS(35),
    [anon_sym_o] = ACTIONS(37),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_q] = ACTIONS(37),
    [anon_sym_quit] = ACTIONS(35),
    [anon_sym_tc] = ACTIONS(37),
    [anon_sym_tcommit] = ACTIONS(35),
    [anon_sym_tre] = ACTIONS(37),
    [anon_sym_trestart] = ACTIONS(35),
    [anon_sym_tro] = ACTIONS(37),
    [anon_sym_trollback] = ACTIONS(35),
    [anon_sym_ts] = ACTIONS(37),
    [anon_sym_tstart] = ACTIONS(35),
    [anon_sym_u] = ACTIONS(37),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_v] = ACTIONS(37),
    [anon_sym_view] = ACTIONS(35),
    [anon_sym_x] = ACTIONS(37),
    [anon_sym_xecute] = ACTIONS(35),
    [anon_sym_z] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(35),
    [aux_sym_if_statement_token1] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym__eol_comment] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_STAR_STAR] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_SQUOTE_GT] = ACTIONS(35),
    [anon_sym_SQUOTE_LT] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_EQ] = ACTIONS(35),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(35),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [aux_sym__write_read_call_token1] = ACTIONS(35),
    [sym__set] = ACTIONS(35),
    [sym__line_comment] = ACTIONS(35),
    [sym__label] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_b] = ACTIONS(41),
    [anon_sym_break] = ACTIONS(39),
    [anon_sym_c] = ACTIONS(41),
    [anon_sym_close] = ACTIONS(39),
    [anon_sym_g] = ACTIONS(41),
    [anon_sym_goto] = ACTIONS(39),
    [anon_sym_h] = ACTIONS(41),
    [anon_sym_halt] = ACTIONS(39),
    [anon_sym_hang] = ACTIONS(39),
    [anon_sym_j] = ACTIONS(41),
    [anon_sym_job] = ACTIONS(39),
    [anon_sym_l] = ACTIONS(41),
    [anon_sym_lock] = ACTIONS(39),
    [anon_sym_k] = ACTIONS(41),
    [anon_sym_kill] = ACTIONS(39),
    [anon_sym_m] = ACTIONS(41),
    [anon_sym_merge] = ACTIONS(39),
    [anon_sym_n] = ACTIONS(41),
    [anon_sym_new] = ACTIONS(39),
    [anon_sym_o] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(39),
    [anon_sym_q] = ACTIONS(41),
    [anon_sym_quit] = ACTIONS(39),
    [anon_sym_tc] = ACTIONS(41),
    [anon_sym_tcommit] = ACTIONS(39),
    [anon_sym_tre] = ACTIONS(41),
    [anon_sym_trestart] = ACTIONS(39),
    [anon_sym_tro] = ACTIONS(41),
    [anon_sym_trollback] = ACTIONS(39),
    [anon_sym_ts] = ACTIONS(41),
    [anon_sym_tstart] = ACTIONS(39),
    [anon_sym_u] = ACTIONS(41),
    [anon_sym_use] = ACTIONS(39),
    [anon_sym_v] = ACTIONS(41),
    [anon_sym_view] = ACTIONS(39),
    [anon_sym_x] = ACTIONS(41),
    [anon_sym_xecute] = ACTIONS(39),
    [anon_sym_z] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [sym__eol_comment] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_STAR_STAR] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_SQUOTE_GT] = ACTIONS(39),
    [anon_sym_SQUOTE_LT] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE_EQ] = ACTIONS(39),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(39),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(39),
    [aux_sym__write_read_call_token1] = ACTIONS(39),
    [sym__set] = ACTIONS(39),
    [sym__line_comment] = ACTIONS(39),
    [sym__label] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_b] = ACTIONS(45),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_c] = ACTIONS(45),
    [anon_sym_close] = ACTIONS(43),
    [anon_sym_g] = ACTIONS(45),
    [anon_sym_goto] = ACTIONS(43),
    [anon_sym_h] = ACTIONS(45),
    [anon_sym_halt] = ACTIONS(43),
    [anon_sym_hang] = ACTIONS(43),
    [anon_sym_j] = ACTIONS(45),
    [anon_sym_job] = ACTIONS(43),
    [anon_sym_l] = ACTIONS(45),
    [anon_sym_lock] = ACTIONS(43),
    [anon_sym_k] = ACTIONS(45),
    [anon_sym_kill] = ACTIONS(43),
    [anon_sym_m] = ACTIONS(45),
    [anon_sym_merge] = ACTIONS(43),
    [anon_sym_n] = ACTIONS(45),
    [anon_sym_new] = ACTIONS(43),
    [anon_sym_o] = ACTIONS(45),
    [anon_sym_open] = ACTIONS(43),
    [anon_sym_q] = ACTIONS(45),
    [anon_sym_quit] = ACTIONS(43),
    [anon_sym_tc] = ACTIONS(45),
    [anon_sym_tcommit] = ACTIONS(43),
    [anon_sym_tre] = ACTIONS(45),
    [anon_sym_trestart] = ACTIONS(43),
    [anon_sym_tro] = ACTIONS(45),
    [anon_sym_trollback] = ACTIONS(43),
    [anon_sym_ts] = ACTIONS(45),
    [anon_sym_tstart] = ACTIONS(43),
    [anon_sym_u] = ACTIONS(45),
    [anon_sym_use] = ACTIONS(43),
    [anon_sym_v] = ACTIONS(45),
    [anon_sym_view] = ACTIONS(43),
    [anon_sym_x] = ACTIONS(45),
    [anon_sym_xecute] = ACTIONS(43),
    [anon_sym_z] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_for] = ACTIONS(43),
    [aux_sym_if_statement_token1] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [sym__eol_comment] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(45),
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
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_EQ] = ACTIONS(43),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(43),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(43),
    [anon_sym__] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [aux_sym__write_read_call_token1] = ACTIONS(43),
    [sym__set] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(43),
    [sym__label] = ACTIONS(43),
  },
  [7] = {
    [sym_arguments] = STATE(26),
    [sym__expression] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__array] = STATE(3),
    [sym_local_array] = STATE(3),
    [sym__variable] = STATE(3),
    [sym_local_variable] = STATE(3),
    [sym_unary_expression] = STATE(3),
    [sym_binary_expression] = STATE(3),
    [sym_function] = STATE(92),
    [sym_call] = STATE(3),
    [sym__write_read_call] = STATE(13),
    [sym__typical_call] = STATE(13),
    [sym__literal] = STATE(3),
    [sym_boolean] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_b] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(49),
    [anon_sym_c] = ACTIONS(49),
    [anon_sym_close] = ACTIONS(49),
    [anon_sym_g] = ACTIONS(49),
    [anon_sym_goto] = ACTIONS(49),
    [anon_sym_h] = ACTIONS(49),
    [anon_sym_halt] = ACTIONS(49),
    [anon_sym_hang] = ACTIONS(49),
    [anon_sym_j] = ACTIONS(49),
    [anon_sym_job] = ACTIONS(49),
    [anon_sym_l] = ACTIONS(49),
    [anon_sym_lock] = ACTIONS(49),
    [anon_sym_k] = ACTIONS(49),
    [anon_sym_kill] = ACTIONS(49),
    [anon_sym_m] = ACTIONS(49),
    [anon_sym_merge] = ACTIONS(49),
    [anon_sym_n] = ACTIONS(49),
    [anon_sym_new] = ACTIONS(49),
    [anon_sym_o] = ACTIONS(49),
    [anon_sym_open] = ACTIONS(49),
    [anon_sym_q] = ACTIONS(49),
    [anon_sym_quit] = ACTIONS(49),
    [anon_sym_tc] = ACTIONS(49),
    [anon_sym_tcommit] = ACTIONS(49),
    [anon_sym_tre] = ACTIONS(49),
    [anon_sym_trestart] = ACTIONS(49),
    [anon_sym_tro] = ACTIONS(49),
    [anon_sym_trollback] = ACTIONS(49),
    [anon_sym_ts] = ACTIONS(49),
    [anon_sym_tstart] = ACTIONS(49),
    [anon_sym_u] = ACTIONS(49),
    [anon_sym_use] = ACTIONS(49),
    [anon_sym_v] = ACTIONS(49),
    [anon_sym_view] = ACTIONS(49),
    [anon_sym_x] = ACTIONS(49),
    [anon_sym_xecute] = ACTIONS(49),
    [anon_sym_z] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(49),
    [aux_sym_if_statement_token1] = ACTIONS(49),
    [sym__eol_comment] = ACTIONS(47),
    [sym__variable_name] = ACTIONS(51),
    [sym_global_variable] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [aux_sym__write_read_call_token1] = ACTIONS(49),
    [sym__set] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [sym__line_comment] = ACTIONS(47),
    [sym__label] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_b] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(63),
    [anon_sym_c] = ACTIONS(65),
    [anon_sym_close] = ACTIONS(63),
    [anon_sym_g] = ACTIONS(65),
    [anon_sym_goto] = ACTIONS(63),
    [anon_sym_h] = ACTIONS(65),
    [anon_sym_halt] = ACTIONS(63),
    [anon_sym_hang] = ACTIONS(63),
    [anon_sym_j] = ACTIONS(65),
    [anon_sym_job] = ACTIONS(63),
    [anon_sym_l] = ACTIONS(65),
    [anon_sym_lock] = ACTIONS(63),
    [anon_sym_k] = ACTIONS(65),
    [anon_sym_kill] = ACTIONS(63),
    [anon_sym_m] = ACTIONS(65),
    [anon_sym_merge] = ACTIONS(63),
    [anon_sym_n] = ACTIONS(65),
    [anon_sym_new] = ACTIONS(63),
    [anon_sym_o] = ACTIONS(65),
    [anon_sym_open] = ACTIONS(63),
    [anon_sym_q] = ACTIONS(65),
    [anon_sym_quit] = ACTIONS(63),
    [anon_sym_tc] = ACTIONS(65),
    [anon_sym_tcommit] = ACTIONS(63),
    [anon_sym_tre] = ACTIONS(65),
    [anon_sym_trestart] = ACTIONS(63),
    [anon_sym_tro] = ACTIONS(65),
    [anon_sym_trollback] = ACTIONS(63),
    [anon_sym_ts] = ACTIONS(65),
    [anon_sym_tstart] = ACTIONS(63),
    [anon_sym_u] = ACTIONS(65),
    [anon_sym_use] = ACTIONS(63),
    [anon_sym_v] = ACTIONS(65),
    [anon_sym_view] = ACTIONS(63),
    [anon_sym_x] = ACTIONS(65),
    [anon_sym_xecute] = ACTIONS(63),
    [anon_sym_z] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(63),
    [aux_sym_if_statement_token1] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym__eol_comment] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(63),
    [anon_sym_STAR_STAR] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_SQUOTE_GT] = ACTIONS(63),
    [anon_sym_SQUOTE_LT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_EQ] = ACTIONS(63),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [aux_sym__write_read_call_token1] = ACTIONS(63),
    [sym__set] = ACTIONS(63),
    [sym__line_comment] = ACTIONS(63),
    [sym__label] = ACTIONS(63),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_b] = ACTIONS(69),
    [anon_sym_break] = ACTIONS(67),
    [anon_sym_c] = ACTIONS(69),
    [anon_sym_close] = ACTIONS(67),
    [anon_sym_g] = ACTIONS(69),
    [anon_sym_goto] = ACTIONS(67),
    [anon_sym_h] = ACTIONS(69),
    [anon_sym_halt] = ACTIONS(67),
    [anon_sym_hang] = ACTIONS(67),
    [anon_sym_j] = ACTIONS(69),
    [anon_sym_job] = ACTIONS(67),
    [anon_sym_l] = ACTIONS(69),
    [anon_sym_lock] = ACTIONS(67),
    [anon_sym_k] = ACTIONS(69),
    [anon_sym_kill] = ACTIONS(67),
    [anon_sym_m] = ACTIONS(69),
    [anon_sym_merge] = ACTIONS(67),
    [anon_sym_n] = ACTIONS(69),
    [anon_sym_new] = ACTIONS(67),
    [anon_sym_o] = ACTIONS(69),
    [anon_sym_open] = ACTIONS(67),
    [anon_sym_q] = ACTIONS(69),
    [anon_sym_quit] = ACTIONS(67),
    [anon_sym_tc] = ACTIONS(69),
    [anon_sym_tcommit] = ACTIONS(67),
    [anon_sym_tre] = ACTIONS(69),
    [anon_sym_trestart] = ACTIONS(67),
    [anon_sym_tro] = ACTIONS(69),
    [anon_sym_trollback] = ACTIONS(67),
    [anon_sym_ts] = ACTIONS(69),
    [anon_sym_tstart] = ACTIONS(67),
    [anon_sym_u] = ACTIONS(69),
    [anon_sym_use] = ACTIONS(67),
    [anon_sym_v] = ACTIONS(69),
    [anon_sym_view] = ACTIONS(67),
    [anon_sym_x] = ACTIONS(69),
    [anon_sym_xecute] = ACTIONS(67),
    [anon_sym_z] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(67),
    [aux_sym_if_statement_token1] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym__eol_comment] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_STAR_STAR] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_SQUOTE_GT] = ACTIONS(67),
    [anon_sym_SQUOTE_LT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_EQ] = ACTIONS(67),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(69),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(67),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [aux_sym__write_read_call_token1] = ACTIONS(67),
    [sym__set] = ACTIONS(67),
    [sym__line_comment] = ACTIONS(67),
    [sym__label] = ACTIONS(67),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_b] = ACTIONS(73),
    [anon_sym_break] = ACTIONS(71),
    [anon_sym_c] = ACTIONS(73),
    [anon_sym_close] = ACTIONS(71),
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
    [anon_sym_x] = ACTIONS(73),
    [anon_sym_xecute] = ACTIONS(71),
    [anon_sym_z] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(71),
    [aux_sym_if_statement_token1] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [sym__eol_comment] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_STAR_STAR] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_SQUOTE_GT] = ACTIONS(29),
    [anon_sym_SQUOTE_LT] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_EQ] = ACTIONS(29),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__write_read_call_token1] = ACTIONS(71),
    [sym__set] = ACTIONS(71),
    [sym__line_comment] = ACTIONS(71),
    [sym__label] = ACTIONS(71),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_b] = ACTIONS(77),
    [anon_sym_break] = ACTIONS(75),
    [anon_sym_c] = ACTIONS(77),
    [anon_sym_close] = ACTIONS(75),
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
    [anon_sym_x] = ACTIONS(77),
    [anon_sym_xecute] = ACTIONS(75),
    [anon_sym_z] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [aux_sym_if_statement_token1] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [sym__eol_comment] = ACTIONS(75),
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
    [aux_sym__write_read_call_token1] = ACTIONS(75),
    [sym__set] = ACTIONS(75),
    [sym__line_comment] = ACTIONS(75),
    [sym__label] = ACTIONS(75),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_b] = ACTIONS(81),
    [anon_sym_break] = ACTIONS(79),
    [anon_sym_c] = ACTIONS(81),
    [anon_sym_close] = ACTIONS(79),
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
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_xecute] = ACTIONS(79),
    [anon_sym_z] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(79),
    [aux_sym_if_statement_token1] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [sym__eol_comment] = ACTIONS(79),
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
    [aux_sym__write_read_call_token1] = ACTIONS(79),
    [sym__set] = ACTIONS(79),
    [sym__line_comment] = ACTIONS(79),
    [sym__label] = ACTIONS(79),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_b] = ACTIONS(85),
    [anon_sym_break] = ACTIONS(83),
    [anon_sym_c] = ACTIONS(85),
    [anon_sym_close] = ACTIONS(83),
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
    [anon_sym_x] = ACTIONS(85),
    [anon_sym_xecute] = ACTIONS(83),
    [anon_sym_z] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(83),
    [aux_sym_if_statement_token1] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym__eol_comment] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_STAR_STAR] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_SQUOTE_GT] = ACTIONS(83),
    [anon_sym_SQUOTE_LT] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(83),
    [anon_sym_SQUOTE_EQ] = ACTIONS(83),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(83),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(85),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(83),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [aux_sym__write_read_call_token1] = ACTIONS(83),
    [sym__set] = ACTIONS(83),
    [sym__line_comment] = ACTIONS(83),
    [sym__label] = ACTIONS(83),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_b] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(87),
    [anon_sym_c] = ACTIONS(89),
    [anon_sym_close] = ACTIONS(87),
    [anon_sym_g] = ACTIONS(89),
    [anon_sym_goto] = ACTIONS(87),
    [anon_sym_h] = ACTIONS(89),
    [anon_sym_halt] = ACTIONS(87),
    [anon_sym_hang] = ACTIONS(87),
    [anon_sym_j] = ACTIONS(89),
    [anon_sym_job] = ACTIONS(87),
    [anon_sym_l] = ACTIONS(89),
    [anon_sym_lock] = ACTIONS(87),
    [anon_sym_k] = ACTIONS(89),
    [anon_sym_kill] = ACTIONS(87),
    [anon_sym_m] = ACTIONS(89),
    [anon_sym_merge] = ACTIONS(87),
    [anon_sym_n] = ACTIONS(89),
    [anon_sym_new] = ACTIONS(87),
    [anon_sym_o] = ACTIONS(89),
    [anon_sym_open] = ACTIONS(87),
    [anon_sym_q] = ACTIONS(89),
    [anon_sym_quit] = ACTIONS(87),
    [anon_sym_tc] = ACTIONS(89),
    [anon_sym_tcommit] = ACTIONS(87),
    [anon_sym_tre] = ACTIONS(89),
    [anon_sym_trestart] = ACTIONS(87),
    [anon_sym_tro] = ACTIONS(89),
    [anon_sym_trollback] = ACTIONS(87),
    [anon_sym_ts] = ACTIONS(89),
    [anon_sym_tstart] = ACTIONS(87),
    [anon_sym_u] = ACTIONS(89),
    [anon_sym_use] = ACTIONS(87),
    [anon_sym_v] = ACTIONS(89),
    [anon_sym_view] = ACTIONS(87),
    [anon_sym_x] = ACTIONS(89),
    [anon_sym_xecute] = ACTIONS(87),
    [anon_sym_z] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_for] = ACTIONS(87),
    [aux_sym_if_statement_token1] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym__eol_comment] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_SQUOTE_GT] = ACTIONS(87),
    [anon_sym_SQUOTE_LT] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(87),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(87),
    [anon_sym_SQUOTE_EQ] = ACTIONS(87),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(87),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(89),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(87),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [aux_sym__write_read_call_token1] = ACTIONS(87),
    [sym__set] = ACTIONS(87),
    [sym__line_comment] = ACTIONS(87),
    [sym__label] = ACTIONS(87),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_b] = ACTIONS(93),
    [anon_sym_break] = ACTIONS(91),
    [anon_sym_c] = ACTIONS(93),
    [anon_sym_close] = ACTIONS(91),
    [anon_sym_g] = ACTIONS(93),
    [anon_sym_goto] = ACTIONS(91),
    [anon_sym_h] = ACTIONS(93),
    [anon_sym_halt] = ACTIONS(91),
    [anon_sym_hang] = ACTIONS(91),
    [anon_sym_j] = ACTIONS(93),
    [anon_sym_job] = ACTIONS(91),
    [anon_sym_l] = ACTIONS(93),
    [anon_sym_lock] = ACTIONS(91),
    [anon_sym_k] = ACTIONS(93),
    [anon_sym_kill] = ACTIONS(91),
    [anon_sym_m] = ACTIONS(93),
    [anon_sym_merge] = ACTIONS(91),
    [anon_sym_n] = ACTIONS(93),
    [anon_sym_new] = ACTIONS(91),
    [anon_sym_o] = ACTIONS(93),
    [anon_sym_open] = ACTIONS(91),
    [anon_sym_q] = ACTIONS(93),
    [anon_sym_quit] = ACTIONS(91),
    [anon_sym_tc] = ACTIONS(93),
    [anon_sym_tcommit] = ACTIONS(91),
    [anon_sym_tre] = ACTIONS(93),
    [anon_sym_trestart] = ACTIONS(91),
    [anon_sym_tro] = ACTIONS(93),
    [anon_sym_trollback] = ACTIONS(91),
    [anon_sym_ts] = ACTIONS(93),
    [anon_sym_tstart] = ACTIONS(91),
    [anon_sym_u] = ACTIONS(93),
    [anon_sym_use] = ACTIONS(91),
    [anon_sym_v] = ACTIONS(93),
    [anon_sym_view] = ACTIONS(91),
    [anon_sym_x] = ACTIONS(93),
    [anon_sym_xecute] = ACTIONS(91),
    [anon_sym_z] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(91),
    [aux_sym_if_statement_token1] = ACTIONS(91),
    [sym__eol_comment] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_STAR_STAR] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_SQUOTE_GT] = ACTIONS(29),
    [anon_sym_SQUOTE_LT] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_EQ] = ACTIONS(29),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__write_read_call_token1] = ACTIONS(91),
    [sym__set] = ACTIONS(91),
    [sym__line_comment] = ACTIONS(91),
    [sym__label] = ACTIONS(91),
  },
  [16] = {
    [anon_sym_b] = ACTIONS(95),
    [anon_sym_break] = ACTIONS(97),
    [anon_sym_c] = ACTIONS(95),
    [anon_sym_close] = ACTIONS(97),
    [anon_sym_g] = ACTIONS(95),
    [anon_sym_goto] = ACTIONS(97),
    [anon_sym_h] = ACTIONS(95),
    [anon_sym_halt] = ACTIONS(97),
    [anon_sym_hang] = ACTIONS(97),
    [anon_sym_j] = ACTIONS(95),
    [anon_sym_job] = ACTIONS(97),
    [anon_sym_l] = ACTIONS(95),
    [anon_sym_lock] = ACTIONS(97),
    [anon_sym_k] = ACTIONS(95),
    [anon_sym_kill] = ACTIONS(97),
    [anon_sym_m] = ACTIONS(95),
    [anon_sym_merge] = ACTIONS(97),
    [anon_sym_n] = ACTIONS(95),
    [anon_sym_new] = ACTIONS(97),
    [anon_sym_o] = ACTIONS(95),
    [anon_sym_open] = ACTIONS(97),
    [anon_sym_q] = ACTIONS(95),
    [anon_sym_quit] = ACTIONS(97),
    [anon_sym_tc] = ACTIONS(95),
    [anon_sym_tcommit] = ACTIONS(97),
    [anon_sym_tre] = ACTIONS(95),
    [anon_sym_trestart] = ACTIONS(97),
    [anon_sym_tro] = ACTIONS(95),
    [anon_sym_trollback] = ACTIONS(97),
    [anon_sym_ts] = ACTIONS(95),
    [anon_sym_tstart] = ACTIONS(97),
    [anon_sym_u] = ACTIONS(95),
    [anon_sym_use] = ACTIONS(97),
    [anon_sym_v] = ACTIONS(95),
    [anon_sym_view] = ACTIONS(97),
    [anon_sym_x] = ACTIONS(95),
    [anon_sym_xecute] = ACTIONS(97),
    [anon_sym_z] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(97),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [sym__eol_comment] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_STAR_STAR] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_SQUOTE_GT] = ACTIONS(29),
    [anon_sym_SQUOTE_LT] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_EQ] = ACTIONS(29),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__write_read_call_token1] = ACTIONS(97),
    [sym__set] = ACTIONS(97),
    [sym__line_comment] = ACTIONS(97),
    [sym__label] = ACTIONS(97),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_for,
    ACTIONS(110), 1,
      aux_sym_if_statement_token1,
    ACTIONS(116), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(119), 1,
      sym__set,
    ACTIONS(122), 1,
      sym__label,
    STATE(21), 1,
      sym_label,
    STATE(30), 1,
      sym__write_read_call,
    ACTIONS(113), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(17), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
    ACTIONS(101), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(104), 20,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
  [83] = 12,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(17), 1,
      sym__label,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_label,
    STATE(30), 1,
      sym__write_read_call,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(17), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
    ACTIONS(3), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(5), 20,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
  [166] = 11,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(17), 1,
      sym__label,
    STATE(21), 1,
      sym_label,
    STATE(30), 1,
      sym__write_read_call,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(29), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_function_definition,
    ACTIONS(3), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(5), 20,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
  [245] = 11,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(17), 1,
      sym__label,
    STATE(21), 1,
      sym_label,
    STATE(30), 1,
      sym__write_read_call,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(34), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_function_definition,
    ACTIONS(3), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(5), 20,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
  [324] = 10,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(127), 1,
      sym__label,
    STATE(30), 1,
      sym__write_read_call,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(32), 8,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_function_definition,
    ACTIONS(3), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(5), 20,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
  [399] = 4,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(131), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(129), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [456] = 4,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(73), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(71), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [513] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_parameters,
    ACTIONS(136), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(138), 27,
      sym__line_comment,
      sym__label,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [569] = 2,
    ACTIONS(144), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(142), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [620] = 2,
    ACTIONS(148), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(146), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [671] = 2,
    ACTIONS(152), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(150), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [722] = 2,
    ACTIONS(156), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(154), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [773] = 2,
    ACTIONS(160), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(158), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [824] = 2,
    ACTIONS(49), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(47), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [875] = 2,
    ACTIONS(164), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(162), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [926] = 2,
    ACTIONS(168), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(166), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [977] = 2,
    ACTIONS(172), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(170), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [1028] = 2,
    ACTIONS(176), 18,
      anon_sym_b,
      anon_sym_c,
      anon_sym_g,
      anon_sym_h,
      anon_sym_j,
      anon_sym_l,
      anon_sym_k,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_q,
      anon_sym_tc,
      anon_sym_tre,
      anon_sym_tro,
      anon_sym_ts,
      anon_sym_u,
      anon_sym_v,
      anon_sym_x,
    ACTIONS(174), 28,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
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
      anon_sym_tcommit,
      anon_sym_trestart,
      anon_sym_trollback,
      anon_sym_tstart,
      anon_sym_use,
      anon_sym_view,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_call_token1,
      sym__set,
  [1079] = 4,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_array_index,
    ACTIONS(21), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(19), 25,
      anon_sym_EQ,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
  [1119] = 2,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 25,
      anon_sym_EQ,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
  [1153] = 2,
    ACTIONS(37), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(35), 25,
      anon_sym_EQ,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
  [1187] = 2,
    ACTIONS(45), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(43), 25,
      anon_sym_EQ,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_COLON,
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
  [1221] = 5,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(25), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
    ACTIONS(184), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(180), 21,
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
  [1260] = 2,
    ACTIONS(89), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(87), 23,
      anon_sym_EQ,
      anon_sym_RPAREN,
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
  [1292] = 5,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(184), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(180), 21,
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
  [1330] = 2,
    ACTIONS(85), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(83), 23,
      anon_sym_EQ,
      anon_sym_RPAREN,
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
  [1362] = 2,
    ACTIONS(41), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(39), 23,
      anon_sym_EQ,
      anon_sym_RPAREN,
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
  [1394] = 2,
    ACTIONS(65), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(63), 23,
      anon_sym_EQ,
      anon_sym_RPAREN,
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
  [1426] = 2,
    ACTIONS(69), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 23,
      anon_sym_EQ,
      anon_sym_RPAREN,
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
  [1458] = 4,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(71), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
    ACTIONS(184), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(180), 21,
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
  [1494] = 2,
    ACTIONS(81), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(79), 23,
      anon_sym_EQ,
      anon_sym_RPAREN,
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
  [1526] = 5,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(184), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(180), 21,
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
  [1564] = 11,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(202), 1,
      sym_integer,
    STATE(90), 1,
      sym_arguments,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(194), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(39), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1613] = 11,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(202), 1,
      sym_integer,
    STATE(88), 1,
      sym_arguments,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(194), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(39), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1662] = 11,
    ACTIONS(51), 1,
      sym__variable_name,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(208), 1,
      sym_integer,
    STATE(20), 1,
      sym_conditional,
    STATE(92), 1,
      sym_function,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(204), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(16), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1711] = 11,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(202), 1,
      sym_integer,
    STATE(84), 1,
      sym_arguments,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(194), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(39), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1760] = 11,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(202), 1,
      sym_integer,
    STATE(87), 1,
      sym_arguments,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(194), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(39), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1809] = 10,
    ACTIONS(51), 1,
      sym__variable_name,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(212), 1,
      sym_integer,
    STATE(92), 1,
      sym_function,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(210), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(5), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1855] = 10,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(216), 1,
      sym_integer,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(214), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(48), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1901] = 10,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(220), 1,
      sym_integer,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(218), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(41), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1947] = 10,
    ACTIONS(51), 1,
      sym__variable_name,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(224), 1,
      sym_integer,
    STATE(92), 1,
      sym_function,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(222), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(9), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [1993] = 10,
    ACTIONS(51), 1,
      sym__variable_name,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(228), 1,
      sym_integer,
    STATE(92), 1,
      sym_function,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(226), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(15), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [2039] = 10,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(232), 1,
      sym_integer,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(230), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(46), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [2085] = 10,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(236), 1,
      sym_integer,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(234), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(45), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [2131] = 10,
    ACTIONS(51), 1,
      sym__variable_name,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(240), 1,
      sym_integer,
    STATE(92), 1,
      sym_function,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(238), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(10), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [2177] = 10,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      aux_sym__write_read_call_token1,
    ACTIONS(244), 1,
      sym_integer,
    STATE(95), 1,
      sym_function,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym__write_read_call,
      sym__typical_call,
    ACTIONS(242), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(43), 11,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_call,
      sym__literal,
      sym_boolean,
  [2223] = 3,
    ACTIONS(246), 1,
      sym__variable_name,
    ACTIONS(248), 1,
      sym_global_variable,
    STATE(91), 5,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [2237] = 4,
    ACTIONS(246), 1,
      sym__variable_name,
    ACTIONS(250), 1,
      sym_global_variable,
    STATE(86), 1,
      sym__loop_range,
    STATE(78), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [2252] = 3,
    ACTIONS(246), 1,
      sym__variable_name,
    ACTIONS(252), 1,
      sym_global_variable,
    STATE(82), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [2264] = 3,
    ACTIONS(246), 1,
      sym__variable_name,
    ACTIONS(254), 1,
      sym_global_variable,
    STATE(85), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [2276] = 5,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      sym__alphanum,
    STATE(70), 1,
      sym_parameter,
    STATE(75), 1,
      aux_sym_parameters_repeat1,
  [2292] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(71), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
  [2303] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(129), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
  [2314] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_parameters_repeat1,
  [2324] = 3,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_arguments_repeat1,
  [2334] = 3,
    ACTIONS(269), 1,
      anon_sym_do,
    ACTIONS(271), 1,
      anon_sym_COLON,
    STATE(72), 1,
      aux_sym__loop_range_repeat1,
  [2344] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameters_repeat1,
  [2354] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameters_repeat1,
  [2364] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameters_repeat1,
  [2374] = 3,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_arguments_repeat1,
  [2384] = 3,
    ACTIONS(283), 1,
      anon_sym_do,
    ACTIONS(285), 1,
      anon_sym_COLON,
    STATE(72), 1,
      aux_sym__loop_range_repeat1,
  [2394] = 3,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      anon_sym_do,
    STATE(77), 1,
      aux_sym__loop_range_repeat1,
  [2404] = 2,
    ACTIONS(260), 1,
      sym__alphanum,
    STATE(81), 1,
      sym_parameter,
  [2411] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_parameters,
  [2418] = 1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2423] = 1,
    ACTIONS(269), 2,
      anon_sym_do,
      anon_sym_COLON,
  [2428] = 1,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2433] = 1,
    ACTIONS(291), 1,
      sym__write_read_outro,
  [2437] = 1,
    ACTIONS(293), 1,
      anon_sym_EQ,
  [2441] = 1,
    ACTIONS(295), 1,
      anon_sym_do,
  [2445] = 1,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [2449] = 1,
    ACTIONS(299), 1,
      sym__write_read_outro,
  [2453] = 1,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
  [2457] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [2461] = 1,
    ACTIONS(305), 1,
      anon_sym_EQ,
  [2465] = 1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [2469] = 1,
    ACTIONS(309), 1,
      sym__alphanum,
  [2473] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
  [2477] = 1,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 83,
  [SMALL_STATE(19)] = 166,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 399,
  [SMALL_STATE(23)] = 456,
  [SMALL_STATE(24)] = 513,
  [SMALL_STATE(25)] = 569,
  [SMALL_STATE(26)] = 620,
  [SMALL_STATE(27)] = 671,
  [SMALL_STATE(28)] = 722,
  [SMALL_STATE(29)] = 773,
  [SMALL_STATE(30)] = 824,
  [SMALL_STATE(31)] = 875,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 977,
  [SMALL_STATE(34)] = 1028,
  [SMALL_STATE(35)] = 1079,
  [SMALL_STATE(36)] = 1119,
  [SMALL_STATE(37)] = 1153,
  [SMALL_STATE(38)] = 1187,
  [SMALL_STATE(39)] = 1221,
  [SMALL_STATE(40)] = 1260,
  [SMALL_STATE(41)] = 1292,
  [SMALL_STATE(42)] = 1330,
  [SMALL_STATE(43)] = 1362,
  [SMALL_STATE(44)] = 1394,
  [SMALL_STATE(45)] = 1426,
  [SMALL_STATE(46)] = 1458,
  [SMALL_STATE(47)] = 1494,
  [SMALL_STATE(48)] = 1526,
  [SMALL_STATE(49)] = 1564,
  [SMALL_STATE(50)] = 1613,
  [SMALL_STATE(51)] = 1662,
  [SMALL_STATE(52)] = 1711,
  [SMALL_STATE(53)] = 1760,
  [SMALL_STATE(54)] = 1809,
  [SMALL_STATE(55)] = 1855,
  [SMALL_STATE(56)] = 1901,
  [SMALL_STATE(57)] = 1947,
  [SMALL_STATE(58)] = 1993,
  [SMALL_STATE(59)] = 2039,
  [SMALL_STATE(60)] = 2085,
  [SMALL_STATE(61)] = 2131,
  [SMALL_STATE(62)] = 2177,
  [SMALL_STATE(63)] = 2223,
  [SMALL_STATE(64)] = 2237,
  [SMALL_STATE(65)] = 2252,
  [SMALL_STATE(66)] = 2264,
  [SMALL_STATE(67)] = 2276,
  [SMALL_STATE(68)] = 2292,
  [SMALL_STATE(69)] = 2303,
  [SMALL_STATE(70)] = 2314,
  [SMALL_STATE(71)] = 2324,
  [SMALL_STATE(72)] = 2334,
  [SMALL_STATE(73)] = 2344,
  [SMALL_STATE(74)] = 2354,
  [SMALL_STATE(75)] = 2364,
  [SMALL_STATE(76)] = 2374,
  [SMALL_STATE(77)] = 2384,
  [SMALL_STATE(78)] = 2394,
  [SMALL_STATE(79)] = 2404,
  [SMALL_STATE(80)] = 2411,
  [SMALL_STATE(81)] = 2418,
  [SMALL_STATE(82)] = 2423,
  [SMALL_STATE(83)] = 2428,
  [SMALL_STATE(84)] = 2433,
  [SMALL_STATE(85)] = 2437,
  [SMALL_STATE(86)] = 2441,
  [SMALL_STATE(87)] = 2445,
  [SMALL_STATE(88)] = 2449,
  [SMALL_STATE(89)] = 2453,
  [SMALL_STATE(90)] = 2457,
  [SMALL_STATE(91)] = 2461,
  [SMALL_STATE(92)] = 2465,
  [SMALL_STATE(93)] = 2469,
  [SMALL_STATE(94)] = 2473,
  [SMALL_STATE(95)] = 2477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_call, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_read_call, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_call, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_call, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(61),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(59),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(65),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [311] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
