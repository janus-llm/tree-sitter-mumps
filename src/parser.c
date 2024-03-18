#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_b = 2,
  anon_sym_break = 3,
  anon_sym_c = 4,
  anon_sym_close = 5,
  anon_sym_g = 6,
  anon_sym_goto = 7,
  anon_sym_h = 8,
  anon_sym_halt = 9,
  anon_sym_hang = 10,
  anon_sym_j = 11,
  anon_sym_job = 12,
  anon_sym_l = 13,
  anon_sym_lock = 14,
  anon_sym_k = 15,
  anon_sym_kill = 16,
  anon_sym_m = 17,
  anon_sym_merge = 18,
  anon_sym_n = 19,
  anon_sym_new = 20,
  anon_sym_o = 21,
  anon_sym_open = 22,
  anon_sym_q = 23,
  anon_sym_quit = 24,
  anon_sym_tc = 25,
  anon_sym_tcommit = 26,
  anon_sym_tre = 27,
  anon_sym_trestart = 28,
  anon_sym_tro = 29,
  anon_sym_trollback = 30,
  anon_sym_ts = 31,
  anon_sym_tstart = 32,
  anon_sym_u = 33,
  anon_sym_use = 34,
  anon_sym_v = 35,
  anon_sym_view = 36,
  anon_sym_x = 37,
  anon_sym_xecute = 38,
  anon_sym_z = 39,
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
  aux_sym__write_read_command_token1 = 75,
  sym__builtin_function_name = 76,
  sym__external_function_name = 77,
  sym__set = 78,
  sym__numeric = 79,
  sym__alphanum = 80,
  anon_sym_true = 81,
  anon_sym_false = 82,
  sym_integer = 83,
  sym_float = 84,
  sym_string = 85,
  sym__line_comment = 86,
  sym__label = 87,
  sym_program = 88,
  sym__statement = 89,
  sym__simple_statement = 90,
  sym__compound_statement = 91,
  sym_command = 92,
  sym_comment = 93,
  sym_assignment = 94,
  sym__typical_command = 95,
  sym_keyword = 96,
  sym_for_statement = 97,
  sym_if_statement = 98,
  sym_function_definition = 99,
  sym_arguments = 100,
  sym_label = 101,
  sym_parameters = 102,
  sym_parameter = 103,
  sym_conditional = 104,
  sym__loop_range = 105,
  sym__expression = 106,
  sym__identifier = 107,
  sym__array = 108,
  sym_local_array = 109,
  sym_array_index = 110,
  sym__variable = 111,
  sym_local_variable = 112,
  sym_unary_expression = 113,
  sym_binary_expression = 114,
  sym__write_read_command = 115,
  sym__literal = 116,
  sym_boolean = 117,
  aux_sym_program_repeat1 = 118,
  aux_sym_arguments_repeat1 = 119,
  aux_sym_parameters_repeat1 = 120,
  aux_sym__loop_range_repeat1 = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
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
  [aux_sym__write_read_command_token1] = "_write_read_command_token1",
  [sym__builtin_function_name] = "_builtin_function_name",
  [sym__external_function_name] = "_external_function_name",
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
  [sym__typical_command] = "_typical_command",
  [sym_keyword] = "keyword",
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
  [sym__write_read_command] = "_write_read_command",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__loop_range_repeat1] = "_loop_range_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [aux_sym__write_read_command_token1] = aux_sym__write_read_command_token1,
  [sym__builtin_function_name] = sym__builtin_function_name,
  [sym__external_function_name] = sym__external_function_name,
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
  [sym__typical_command] = sym__typical_command,
  [sym_keyword] = sym_keyword,
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
  [sym__write_read_command] = sym__write_read_command,
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
  [anon_sym_EQ] = {
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
  [aux_sym__write_read_command_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__builtin_function_name] = {
    .visible = false,
    .named = true,
  },
  [sym__external_function_name] = {
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
  [sym__typical_command] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
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
  [sym__write_read_command] = {
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
  [34] = 2,
  [35] = 6,
  [36] = 8,
  [37] = 7,
  [38] = 5,
  [39] = 3,
  [40] = 10,
  [41] = 41,
  [42] = 41,
  [43] = 9,
  [44] = 4,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 47,
  [53] = 50,
  [54] = 49,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 21,
  [62] = 20,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 64,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(263);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '&') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(242);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(248);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == ']') ADVANCE(253);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'j') ADVANCE(99);
      if (lookahead == 'k') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == 'w') ADVANCE(267);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == 'z') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 't') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == ',') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == ']') ADVANCE(258);
      END_STATE();
    case 6:
      if (lookahead == '^') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 40:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 72:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 75:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(263);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '&') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(242);
      if (lookahead == '+') ADVANCE(243);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(248);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == ']') ADVANCE(253);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'j') ADVANCE(99);
      if (lookahead == 'k') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'q') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == 'w') ADVANCE(267);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == 'z') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'j') ADVANCE(100);
      if (lookahead == 'k') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'q') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == 'w') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(152);
      if (lookahead == 'z') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(237);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_hang);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_hang);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_job);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_job);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_lock);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_kill);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_q);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_quit);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_quit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_tc);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_tcommit);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_tcommit);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_tre);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_trestart);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_trestart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_tro);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_trollback);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_trollback);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_tstart);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_tstart);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_view);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_xecute);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_xecute);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!') ADVANCE(264);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(192);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(106);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(138);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(118);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(150);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == ']') ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__write_read_outro);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__external_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__alphanum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 285:
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
  [2] = {.lex_state = 77, .external_lex_state = 1},
  [3] = {.lex_state = 77, .external_lex_state = 1},
  [4] = {.lex_state = 77, .external_lex_state = 1},
  [5] = {.lex_state = 77, .external_lex_state = 1},
  [6] = {.lex_state = 77, .external_lex_state = 1},
  [7] = {.lex_state = 77, .external_lex_state = 1},
  [8] = {.lex_state = 77, .external_lex_state = 1},
  [9] = {.lex_state = 77, .external_lex_state = 1},
  [10] = {.lex_state = 77, .external_lex_state = 1},
  [11] = {.lex_state = 77, .external_lex_state = 1},
  [12] = {.lex_state = 77, .external_lex_state = 1},
  [13] = {.lex_state = 78, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 78, .external_lex_state = 1},
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
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 77},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 77},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [aux_sym__write_read_command_token1] = ACTIONS(1),
    [sym__builtin_function_name] = ACTIONS(1),
    [sym__external_function_name] = ACTIONS(1),
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
    [sym_program] = STATE(80),
    [sym__statement] = STATE(14),
    [sym__simple_statement] = STATE(14),
    [sym__compound_statement] = STATE(14),
    [sym_command] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_assignment] = STATE(14),
    [sym__typical_command] = STATE(24),
    [sym_keyword] = STATE(13),
    [sym_for_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym_label] = STATE(18),
    [sym__write_read_command] = STATE(24),
    [aux_sym_program_repeat1] = STATE(14),
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
    [aux_sym__write_read_command_token1] = ACTIONS(13),
    [sym__set] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(11),
    [sym__label] = ACTIONS(17),
  },
  [2] = {
    [sym_array_index] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
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
    [aux_sym__write_read_command_token1] = ACTIONS(19),
    [sym__set] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [3] = {
    [aux_sym_arguments_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_b] = ACTIONS(29),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_c] = ACTIONS(29),
    [anon_sym_close] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(29),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(29),
    [anon_sym_halt] = ACTIONS(25),
    [anon_sym_hang] = ACTIONS(25),
    [anon_sym_j] = ACTIONS(29),
    [anon_sym_job] = ACTIONS(25),
    [anon_sym_l] = ACTIONS(29),
    [anon_sym_lock] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(29),
    [anon_sym_kill] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(29),
    [anon_sym_merge] = ACTIONS(25),
    [anon_sym_n] = ACTIONS(29),
    [anon_sym_new] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(29),
    [anon_sym_open] = ACTIONS(25),
    [anon_sym_q] = ACTIONS(29),
    [anon_sym_quit] = ACTIONS(25),
    [anon_sym_tc] = ACTIONS(29),
    [anon_sym_tcommit] = ACTIONS(25),
    [anon_sym_tre] = ACTIONS(29),
    [anon_sym_trestart] = ACTIONS(25),
    [anon_sym_tro] = ACTIONS(29),
    [anon_sym_trollback] = ACTIONS(25),
    [anon_sym_ts] = ACTIONS(29),
    [anon_sym_tstart] = ACTIONS(25),
    [anon_sym_u] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_v] = ACTIONS(29),
    [anon_sym_view] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(29),
    [anon_sym_xecute] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(25),
    [aux_sym_if_statement_token1] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(31),
    [sym__eol_comment] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(33),
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
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_EQ] = ACTIONS(27),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [aux_sym__write_read_command_token1] = ACTIONS(25),
    [sym__set] = ACTIONS(25),
    [sym__line_comment] = ACTIONS(25),
    [sym__label] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
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
    [aux_sym__write_read_command_token1] = ACTIONS(35),
    [sym__set] = ACTIONS(35),
    [sym__line_comment] = ACTIONS(35),
    [sym__label] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
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
    [aux_sym__write_read_command_token1] = ACTIONS(39),
    [sym__set] = ACTIONS(39),
    [sym__line_comment] = ACTIONS(39),
    [sym__label] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
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
    [aux_sym__write_read_command_token1] = ACTIONS(43),
    [sym__set] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(43),
    [sym__label] = ACTIONS(43),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_b] = ACTIONS(49),
    [anon_sym_break] = ACTIONS(47),
    [anon_sym_c] = ACTIONS(49),
    [anon_sym_close] = ACTIONS(47),
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
    [anon_sym_x] = ACTIONS(49),
    [anon_sym_xecute] = ACTIONS(47),
    [anon_sym_z] = ACTIONS(47),
    [anon_sym_for] = ACTIONS(47),
    [aux_sym_if_statement_token1] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__eol_comment] = ACTIONS(47),
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
    [aux_sym__write_read_command_token1] = ACTIONS(47),
    [sym__set] = ACTIONS(47),
    [sym__line_comment] = ACTIONS(47),
    [sym__label] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_b] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_c] = ACTIONS(53),
    [anon_sym_close] = ACTIONS(51),
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
    [anon_sym_x] = ACTIONS(53),
    [anon_sym_xecute] = ACTIONS(51),
    [anon_sym_z] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(51),
    [aux_sym_if_statement_token1] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym__eol_comment] = ACTIONS(51),
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
    [aux_sym__write_read_command_token1] = ACTIONS(51),
    [sym__set] = ACTIONS(51),
    [sym__line_comment] = ACTIONS(51),
    [sym__label] = ACTIONS(51),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_b] = ACTIONS(57),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_c] = ACTIONS(57),
    [anon_sym_close] = ACTIONS(55),
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
    [anon_sym_x] = ACTIONS(57),
    [anon_sym_xecute] = ACTIONS(55),
    [anon_sym_z] = ACTIONS(55),
    [anon_sym_for] = ACTIONS(55),
    [aux_sym_if_statement_token1] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [sym__eol_comment] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(33),
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
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_EQ] = ACTIONS(27),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [aux_sym__write_read_command_token1] = ACTIONS(55),
    [sym__set] = ACTIONS(55),
    [sym__line_comment] = ACTIONS(55),
    [sym__label] = ACTIONS(55),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_b] = ACTIONS(61),
    [anon_sym_break] = ACTIONS(59),
    [anon_sym_c] = ACTIONS(61),
    [anon_sym_close] = ACTIONS(59),
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
    [anon_sym_x] = ACTIONS(61),
    [anon_sym_xecute] = ACTIONS(59),
    [anon_sym_z] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(59),
    [aux_sym_if_statement_token1] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym__eol_comment] = ACTIONS(59),
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
    [aux_sym__write_read_command_token1] = ACTIONS(59),
    [sym__set] = ACTIONS(59),
    [sym__line_comment] = ACTIONS(59),
    [sym__label] = ACTIONS(59),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(27),
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
    [anon_sym_for] = ACTIONS(63),
    [aux_sym_if_statement_token1] = ACTIONS(63),
    [sym__eol_comment] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(33),
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
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_EQ] = ACTIONS(27),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [aux_sym__write_read_command_token1] = ACTIONS(63),
    [sym__set] = ACTIONS(63),
    [sym__line_comment] = ACTIONS(63),
    [sym__label] = ACTIONS(63),
  },
  [12] = {
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_b] = ACTIONS(67),
    [anon_sym_break] = ACTIONS(69),
    [anon_sym_c] = ACTIONS(67),
    [anon_sym_close] = ACTIONS(69),
    [anon_sym_g] = ACTIONS(67),
    [anon_sym_goto] = ACTIONS(69),
    [anon_sym_h] = ACTIONS(67),
    [anon_sym_halt] = ACTIONS(69),
    [anon_sym_hang] = ACTIONS(69),
    [anon_sym_j] = ACTIONS(67),
    [anon_sym_job] = ACTIONS(69),
    [anon_sym_l] = ACTIONS(67),
    [anon_sym_lock] = ACTIONS(69),
    [anon_sym_k] = ACTIONS(67),
    [anon_sym_kill] = ACTIONS(69),
    [anon_sym_m] = ACTIONS(67),
    [anon_sym_merge] = ACTIONS(69),
    [anon_sym_n] = ACTIONS(67),
    [anon_sym_new] = ACTIONS(69),
    [anon_sym_o] = ACTIONS(67),
    [anon_sym_open] = ACTIONS(69),
    [anon_sym_q] = ACTIONS(67),
    [anon_sym_quit] = ACTIONS(69),
    [anon_sym_tc] = ACTIONS(67),
    [anon_sym_tcommit] = ACTIONS(69),
    [anon_sym_tre] = ACTIONS(67),
    [anon_sym_trestart] = ACTIONS(69),
    [anon_sym_tro] = ACTIONS(67),
    [anon_sym_trollback] = ACTIONS(69),
    [anon_sym_ts] = ACTIONS(67),
    [anon_sym_tstart] = ACTIONS(69),
    [anon_sym_u] = ACTIONS(67),
    [anon_sym_use] = ACTIONS(69),
    [anon_sym_v] = ACTIONS(67),
    [anon_sym_view] = ACTIONS(69),
    [anon_sym_x] = ACTIONS(67),
    [anon_sym_xecute] = ACTIONS(69),
    [anon_sym_z] = ACTIONS(69),
    [anon_sym_for] = ACTIONS(69),
    [aux_sym_if_statement_token1] = ACTIONS(69),
    [sym__eol_comment] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(33),
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
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_EQ] = ACTIONS(27),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [aux_sym__write_read_command_token1] = ACTIONS(69),
    [sym__set] = ACTIONS(69),
    [sym__line_comment] = ACTIONS(69),
    [sym__label] = ACTIONS(69),
  },
  [13] = {
    [sym_arguments] = STATE(26),
    [sym__expression] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__array] = STATE(3),
    [sym_local_array] = STATE(3),
    [sym__variable] = STATE(3),
    [sym_local_variable] = STATE(3),
    [sym_unary_expression] = STATE(3),
    [sym_binary_expression] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_boolean] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_b] = ACTIONS(73),
    [anon_sym_break] = ACTIONS(73),
    [anon_sym_c] = ACTIONS(73),
    [anon_sym_close] = ACTIONS(73),
    [anon_sym_g] = ACTIONS(73),
    [anon_sym_goto] = ACTIONS(73),
    [anon_sym_h] = ACTIONS(73),
    [anon_sym_halt] = ACTIONS(73),
    [anon_sym_hang] = ACTIONS(73),
    [anon_sym_j] = ACTIONS(73),
    [anon_sym_job] = ACTIONS(73),
    [anon_sym_l] = ACTIONS(73),
    [anon_sym_lock] = ACTIONS(73),
    [anon_sym_k] = ACTIONS(73),
    [anon_sym_kill] = ACTIONS(73),
    [anon_sym_m] = ACTIONS(73),
    [anon_sym_merge] = ACTIONS(73),
    [anon_sym_n] = ACTIONS(73),
    [anon_sym_new] = ACTIONS(73),
    [anon_sym_o] = ACTIONS(73),
    [anon_sym_open] = ACTIONS(73),
    [anon_sym_q] = ACTIONS(73),
    [anon_sym_quit] = ACTIONS(73),
    [anon_sym_tc] = ACTIONS(73),
    [anon_sym_tcommit] = ACTIONS(73),
    [anon_sym_tre] = ACTIONS(73),
    [anon_sym_trestart] = ACTIONS(73),
    [anon_sym_tro] = ACTIONS(73),
    [anon_sym_trollback] = ACTIONS(73),
    [anon_sym_ts] = ACTIONS(73),
    [anon_sym_tstart] = ACTIONS(73),
    [anon_sym_u] = ACTIONS(73),
    [anon_sym_use] = ACTIONS(73),
    [anon_sym_v] = ACTIONS(73),
    [anon_sym_view] = ACTIONS(73),
    [anon_sym_x] = ACTIONS(73),
    [anon_sym_xecute] = ACTIONS(73),
    [anon_sym_z] = ACTIONS(73),
    [anon_sym_for] = ACTIONS(73),
    [aux_sym_if_statement_token1] = ACTIONS(73),
    [sym__eol_comment] = ACTIONS(71),
    [sym__variable_name] = ACTIONS(75),
    [sym_global_variable] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [aux_sym__write_read_command_token1] = ACTIONS(73),
    [sym__set] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_integer] = ACTIONS(83),
    [sym_float] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym__line_comment] = ACTIONS(71),
    [sym__label] = ACTIONS(71),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(17), 1,
      sym__label,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_keyword,
    STATE(18), 1,
      sym_label,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(24), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(15), 10,
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
  [87] = 13,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_for,
    ACTIONS(98), 1,
      aux_sym_if_statement_token1,
    ACTIONS(104), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(107), 1,
      sym__set,
    ACTIONS(110), 1,
      sym__label,
    STATE(13), 1,
      sym_keyword,
    STATE(18), 1,
      sym_label,
    ACTIONS(101), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(24), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(15), 10,
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
    ACTIONS(89), 18,
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
    ACTIONS(92), 20,
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
  [174] = 12,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(17), 1,
      sym__label,
    STATE(13), 1,
      sym_keyword,
    STATE(18), 1,
      sym_label,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(24), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(33), 9,
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
  [257] = 12,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(17), 1,
      sym__label,
    STATE(13), 1,
      sym_keyword,
    STATE(18), 1,
      sym_label,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(24), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(23), 9,
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
  [340] = 11,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(13), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(15), 1,
      sym__set,
    ACTIONS(113), 1,
      sym__label,
    STATE(13), 1,
      sym_keyword,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(24), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(28), 8,
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
  [419] = 2,
    ACTIONS(115), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      sym_global_variable,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      sym_string,
    ACTIONS(117), 46,
      anon_sym_b,
      anon_sym_break,
      anon_sym_c,
      anon_sym_close,
      anon_sym_g,
      anon_sym_goto,
      anon_sym_h,
      anon_sym_halt,
      anon_sym_hang,
      anon_sym_j,
      anon_sym_job,
      anon_sym_l,
      anon_sym_lock,
      anon_sym_k,
      anon_sym_kill,
      anon_sym_m,
      anon_sym_merge,
      anon_sym_n,
      anon_sym_new,
      anon_sym_o,
      anon_sym_open,
      anon_sym_q,
      anon_sym_quit,
      anon_sym_tc,
      anon_sym_tcommit,
      anon_sym_tre,
      anon_sym_trestart,
      anon_sym_tro,
      anon_sym_trollback,
      anon_sym_ts,
      anon_sym_tstart,
      anon_sym_u,
      anon_sym_use,
      anon_sym_v,
      anon_sym_view,
      anon_sym_x,
      anon_sym_xecute,
      anon_sym_z,
      anon_sym_for,
      aux_sym_if_statement_token1,
      sym__variable_name,
      aux_sym__write_read_command_token1,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
  [479] = 4,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(121), 18,
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
    ACTIONS(119), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [536] = 4,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(57), 18,
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
    ACTIONS(55), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [593] = 4,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parameters,
    ACTIONS(126), 18,
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
    ACTIONS(128), 27,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [649] = 2,
    ACTIONS(134), 18,
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
    ACTIONS(132), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [700] = 2,
    ACTIONS(138), 18,
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
    ACTIONS(136), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [751] = 2,
    ACTIONS(142), 18,
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
    ACTIONS(140), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [802] = 2,
    ACTIONS(146), 18,
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
    ACTIONS(144), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [853] = 2,
    ACTIONS(150), 18,
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
    ACTIONS(148), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [904] = 2,
    ACTIONS(154), 18,
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
    ACTIONS(152), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [955] = 2,
    ACTIONS(158), 18,
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
    ACTIONS(156), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1006] = 2,
    ACTIONS(162), 18,
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
    ACTIONS(160), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1057] = 2,
    ACTIONS(166), 18,
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
    ACTIONS(164), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1108] = 2,
    ACTIONS(170), 18,
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
    ACTIONS(168), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1159] = 2,
    ACTIONS(174), 18,
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
    ACTIONS(172), 28,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1210] = 4,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
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
  [1250] = 2,
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
  [1284] = 2,
    ACTIONS(53), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 25,
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
  [1318] = 2,
    ACTIONS(49), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(47), 25,
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
  [1352] = 2,
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
  [1384] = 5,
    ACTIONS(25), 1,
      sym__write_read_outro,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(182), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(178), 21,
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
  [1422] = 2,
    ACTIONS(61), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(59), 23,
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
  [1454] = 5,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(182), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(178), 21,
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
  [1492] = 5,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(182), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(178), 21,
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
  [1530] = 4,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
    ACTIONS(182), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(178), 21,
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
  [1566] = 2,
    ACTIONS(37), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(35), 23,
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
  [1598] = 7,
    ACTIONS(190), 1,
      sym__variable_name,
    ACTIONS(198), 1,
      sym_integer,
    STATE(78), 1,
      sym_arguments,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(196), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(192), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(39), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1633] = 7,
    ACTIONS(75), 1,
      sym__variable_name,
    ACTIONS(202), 1,
      sym_integer,
    STATE(16), 1,
      sym_conditional,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(12), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1668] = 6,
    ACTIONS(75), 1,
      sym__variable_name,
    ACTIONS(206), 1,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(204), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(4), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1700] = 6,
    ACTIONS(75), 1,
      sym__variable_name,
    ACTIONS(210), 1,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(208), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(11), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1732] = 6,
    ACTIONS(190), 1,
      sym__variable_name,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(196), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(42), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1764] = 6,
    ACTIONS(75), 1,
      sym__variable_name,
    ACTIONS(218), 1,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(216), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(5), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1796] = 6,
    ACTIONS(75), 1,
      sym__variable_name,
    ACTIONS(222), 1,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(9), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1828] = 6,
    ACTIONS(190), 1,
      sym__variable_name,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(196), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(44), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1860] = 6,
    ACTIONS(190), 1,
      sym__variable_name,
    ACTIONS(230), 1,
      sym_integer,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(196), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(38), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1892] = 6,
    ACTIONS(190), 1,
      sym__variable_name,
    ACTIONS(234), 1,
      sym_integer,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(196), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(232), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(41), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1924] = 6,
    ACTIONS(190), 1,
      sym__variable_name,
    ACTIONS(238), 1,
      sym_integer,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(196), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(236), 3,
      sym_global_variable,
      sym_float,
      sym_string,
    STATE(43), 10,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_boolean,
  [1956] = 3,
    ACTIONS(240), 1,
      sym__variable_name,
    ACTIONS(242), 1,
      sym_global_variable,
    STATE(79), 5,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [1970] = 4,
    ACTIONS(240), 1,
      sym__variable_name,
    ACTIONS(244), 1,
      sym_global_variable,
    STATE(81), 1,
      sym__loop_range,
    STATE(66), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [1985] = 3,
    ACTIONS(240), 1,
      sym__variable_name,
    ACTIONS(246), 1,
      sym_global_variable,
    STATE(74), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [1997] = 3,
    ACTIONS(240), 1,
      sym__variable_name,
    ACTIONS(248), 1,
      sym_global_variable,
    STATE(77), 3,
      sym_local_array,
      sym__variable,
      sym_local_variable,
  [2009] = 5,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(254), 1,
      sym__alphanum,
    STATE(68), 1,
      aux_sym_parameters_repeat1,
    STATE(70), 1,
      sym_parameter,
  [2025] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      sym__write_read_outro,
  [2036] = 3,
    ACTIONS(119), 1,
      sym__write_read_outro,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
  [2046] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [2056] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
  [2066] = 3,
    ACTIONS(266), 1,
      anon_sym_do,
    ACTIONS(268), 1,
      anon_sym_COLON,
    STATE(67), 1,
      aux_sym__loop_range_repeat1,
  [2076] = 3,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(270), 1,
      anon_sym_do,
    STATE(65), 1,
      aux_sym__loop_range_repeat1,
  [2086] = 3,
    ACTIONS(272), 1,
      anon_sym_do,
    ACTIONS(274), 1,
      anon_sym_COLON,
    STATE(67), 1,
      aux_sym__loop_range_repeat1,
  [2096] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [2106] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_arguments_repeat1,
  [2116] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_parameters_repeat1,
  [2126] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [2136] = 2,
    ACTIONS(254), 1,
      sym__alphanum,
    STATE(73), 1,
      sym_parameter,
  [2143] = 1,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2148] = 1,
    ACTIONS(272), 2,
      anon_sym_do,
      anon_sym_COLON,
  [2153] = 2,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parameters,
  [2160] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2165] = 1,
    ACTIONS(285), 1,
      anon_sym_EQ,
  [2169] = 1,
    ACTIONS(287), 1,
      sym__write_read_outro,
  [2173] = 1,
    ACTIONS(289), 1,
      anon_sym_EQ,
  [2177] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
  [2181] = 1,
    ACTIONS(293), 1,
      anon_sym_do,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 87,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 340,
  [SMALL_STATE(19)] = 419,
  [SMALL_STATE(20)] = 479,
  [SMALL_STATE(21)] = 536,
  [SMALL_STATE(22)] = 593,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 700,
  [SMALL_STATE(25)] = 751,
  [SMALL_STATE(26)] = 802,
  [SMALL_STATE(27)] = 853,
  [SMALL_STATE(28)] = 904,
  [SMALL_STATE(29)] = 955,
  [SMALL_STATE(30)] = 1006,
  [SMALL_STATE(31)] = 1057,
  [SMALL_STATE(32)] = 1108,
  [SMALL_STATE(33)] = 1159,
  [SMALL_STATE(34)] = 1210,
  [SMALL_STATE(35)] = 1250,
  [SMALL_STATE(36)] = 1284,
  [SMALL_STATE(37)] = 1318,
  [SMALL_STATE(38)] = 1352,
  [SMALL_STATE(39)] = 1384,
  [SMALL_STATE(40)] = 1422,
  [SMALL_STATE(41)] = 1454,
  [SMALL_STATE(42)] = 1492,
  [SMALL_STATE(43)] = 1530,
  [SMALL_STATE(44)] = 1566,
  [SMALL_STATE(45)] = 1598,
  [SMALL_STATE(46)] = 1633,
  [SMALL_STATE(47)] = 1668,
  [SMALL_STATE(48)] = 1700,
  [SMALL_STATE(49)] = 1732,
  [SMALL_STATE(50)] = 1764,
  [SMALL_STATE(51)] = 1796,
  [SMALL_STATE(52)] = 1828,
  [SMALL_STATE(53)] = 1860,
  [SMALL_STATE(54)] = 1892,
  [SMALL_STATE(55)] = 1924,
  [SMALL_STATE(56)] = 1956,
  [SMALL_STATE(57)] = 1970,
  [SMALL_STATE(58)] = 1985,
  [SMALL_STATE(59)] = 1997,
  [SMALL_STATE(60)] = 2009,
  [SMALL_STATE(61)] = 2025,
  [SMALL_STATE(62)] = 2036,
  [SMALL_STATE(63)] = 2046,
  [SMALL_STATE(64)] = 2056,
  [SMALL_STATE(65)] = 2066,
  [SMALL_STATE(66)] = 2076,
  [SMALL_STATE(67)] = 2086,
  [SMALL_STATE(68)] = 2096,
  [SMALL_STATE(69)] = 2106,
  [SMALL_STATE(70)] = 2116,
  [SMALL_STATE(71)] = 2126,
  [SMALL_STATE(72)] = 2136,
  [SMALL_STATE(73)] = 2143,
  [SMALL_STATE(74)] = 2148,
  [SMALL_STATE(75)] = 2153,
  [SMALL_STATE(76)] = 2160,
  [SMALL_STATE(77)] = 2165,
  [SMALL_STATE(78)] = 2169,
  [SMALL_STATE(79)] = 2173,
  [SMALL_STATE(80)] = 2177,
  [SMALL_STATE(81)] = 2181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(51),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_command, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__write_read_command, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(55),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(72),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(58),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [291] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
