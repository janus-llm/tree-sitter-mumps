#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_EQ_PLUS = 2,
  anon_sym_COMMA = 3,
  aux_sym_keyword_token1 = 4,
  aux_sym_for_statement_token1 = 5,
  aux_sym_if_statement_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym__eol_comment = 9,
  anon_sym_COLON = 10,
  sym__variable_name = 11,
  sym_global_variable = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_SQUOTE = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  anon_sym_BSLASH = 18,
  anon_sym_POUND = 19,
  anon_sym_STAR_STAR = 20,
  anon_sym_GT = 21,
  anon_sym_LT = 22,
  anon_sym_SQUOTE_GT = 23,
  anon_sym_SQUOTE_LT = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_QMARK = 27,
  anon_sym_RBRACK_RBRACK = 28,
  anon_sym_SQUOTE_EQ = 29,
  anon_sym_SQUOTE_LBRACK = 30,
  anon_sym_SQUOTE_RBRACK = 31,
  anon_sym_SQUOTE_QMARK = 32,
  anon_sym_SQUOTE_RBRACK_RBRACK = 33,
  anon_sym__ = 34,
  anon_sym_AMP = 35,
  anon_sym_BANG = 36,
  aux_sym__write_read_command_token1 = 37,
  aux_sym_lvalue_function_call_token1 = 38,
  sym_special_variable = 39,
  sym__builtin_function_name = 40,
  sym__external_function_name = 41,
  sym__set = 42,
  sym__numeric = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  sym_integer = 46,
  sym_float = 47,
  sym_string = 48,
  sym_format_specifier = 49,
  sym__line_comment = 50,
  sym__label = 51,
  sym_program = 52,
  sym__statement = 53,
  sym__simple_statement = 54,
  sym__compound_statement = 55,
  sym_command = 56,
  sym_comment = 57,
  sym_assignment = 58,
  sym__typical_command = 59,
  sym_keyword = 60,
  sym_for_statement = 61,
  sym_if_statement = 62,
  sym_arguments = 63,
  sym_label = 64,
  sym__function_arguments = 65,
  sym_postconditional = 66,
  sym__loop_range = 67,
  sym__expression = 68,
  sym__identifier = 69,
  sym__array = 70,
  sym_local_array = 71,
  sym_global_array = 72,
  sym_array_index = 73,
  sym__variable = 74,
  sym_local_variable = 75,
  sym_unary_expression = 76,
  sym_binary_expression = 77,
  sym__write_read_command = 78,
  sym_function_call = 79,
  sym_lvalue_function_call = 80,
  sym__literal = 81,
  sym_boolean = 82,
  aux_sym_program_repeat1 = 83,
  aux_sym_assignment_repeat1 = 84,
  aux_sym_arguments_repeat1 = 85,
  aux_sym__loop_range_repeat1 = 86,
  aux_sym_array_index_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_PLUS] = "=+",
  [anon_sym_COMMA] = ",",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_for_statement_token1] = "for_statement_token1",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__eol_comment] = "_eol_comment",
  [anon_sym_COLON] = ":",
  [sym__variable_name] = "_variable_name",
  [sym_global_variable] = "global_variable",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_STAR] = "*",
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
  [aux_sym__write_read_command_token1] = "_write_read_command_token1",
  [aux_sym_lvalue_function_call_token1] = "lvalue_function_call_token1",
  [sym_special_variable] = "special_variable",
  [sym__builtin_function_name] = "_builtin_function_name",
  [sym__external_function_name] = "_external_function_name",
  [sym__set] = "_set",
  [sym__numeric] = "_numeric",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_format_specifier] = "format_specifier",
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
  [sym_arguments] = "arguments",
  [sym_label] = "label",
  [sym__function_arguments] = "_function_arguments",
  [sym_postconditional] = "postconditional",
  [sym__loop_range] = "_loop_range",
  [sym__expression] = "_expression",
  [sym__identifier] = "_identifier",
  [sym__array] = "_array",
  [sym_local_array] = "local_array",
  [sym_global_array] = "global_array",
  [sym_array_index] = "array_index",
  [sym__variable] = "_variable",
  [sym_local_variable] = "local_variable",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__write_read_command] = "_write_read_command",
  [sym_function_call] = "function_call",
  [sym_lvalue_function_call] = "lvalue_function_call",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__loop_range_repeat1] = "_loop_range_repeat1",
  [aux_sym_array_index_repeat1] = "array_index_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_PLUS] = anon_sym_EQ_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_for_statement_token1] = aux_sym_for_statement_token1,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__eol_comment] = sym__eol_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__variable_name] = sym__variable_name,
  [sym_global_variable] = sym_global_variable,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [aux_sym__write_read_command_token1] = aux_sym__write_read_command_token1,
  [aux_sym_lvalue_function_call_token1] = aux_sym_lvalue_function_call_token1,
  [sym_special_variable] = sym_special_variable,
  [sym__builtin_function_name] = sym__builtin_function_name,
  [sym__external_function_name] = sym__external_function_name,
  [sym__set] = sym__set,
  [sym__numeric] = sym__numeric,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_format_specifier] = sym_format_specifier,
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
  [sym_arguments] = sym_arguments,
  [sym_label] = sym_label,
  [sym__function_arguments] = sym__function_arguments,
  [sym_postconditional] = sym_postconditional,
  [sym__loop_range] = sym__loop_range,
  [sym__expression] = sym__expression,
  [sym__identifier] = sym__identifier,
  [sym__array] = sym__array,
  [sym_local_array] = sym_local_array,
  [sym_global_array] = sym_global_array,
  [sym_array_index] = sym_array_index,
  [sym__variable] = sym__variable,
  [sym_local_variable] = sym_local_variable,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__write_read_command] = sym__write_read_command,
  [sym_function_call] = sym_function_call,
  [sym_lvalue_function_call] = sym_lvalue_function_call,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__loop_range_repeat1] = aux_sym__loop_range_repeat1,
  [aux_sym_array_index_repeat1] = aux_sym_array_index_repeat1,
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
  [anon_sym_EQ_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
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
  [aux_sym__write_read_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lvalue_function_call_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_special_variable] = {
    .visible = true,
    .named = true,
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
  [sym_format_specifier] = {
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
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__function_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_postconditional] = {
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
  [sym_global_array] = {
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
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_lvalue_function_call] = {
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
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__loop_range_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_index_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_condition = 2,
  field_consequence = 3,
  field_left = 4,
  field_right = 5,
  field_subscript = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_right] = "right",
  [field_subscript] = "subscript",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 4},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 4},
  [14] = {.index = 26, .length = 4},
  [15] = {.index = 30, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 0},
  [1] =
    {field_condition, 1},
    {field_consequence, 2},
  [3] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [5] =
    {field_condition, 1},
  [6] =
    {field_argument, 1},
  [7] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [9] =
    {field_left, 1},
    {field_right, 3},
  [11] =
    {field_subscript, 1},
  [12] =
    {field_left, 2},
    {field_right, 4},
  [14] =
    {field_left, 1},
    {field_left, 4, .inherited = true},
    {field_right, 3},
    {field_right, 4, .inherited = true},
  [18] =
    {field_subscript, 1},
    {field_subscript, 2, .inherited = true},
  [20] =
    {field_subscript, 0, .inherited = true},
    {field_subscript, 1, .inherited = true},
  [22] =
    {field_left, 2},
    {field_left, 5, .inherited = true},
    {field_right, 4},
    {field_right, 5, .inherited = true},
  [26] =
    {field_left, 0, .inherited = true},
    {field_left, 1, .inherited = true},
    {field_right, 0, .inherited = true},
    {field_right, 1, .inherited = true},
  [30] =
    {field_left, 1},
    {field_right, 4},
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
  [17] = 2,
  [18] = 3,
  [19] = 19,
  [20] = 3,
  [21] = 2,
  [22] = 11,
  [23] = 8,
  [24] = 7,
  [25] = 12,
  [26] = 5,
  [27] = 6,
  [28] = 10,
  [29] = 13,
  [30] = 30,
  [31] = 14,
  [32] = 10,
  [33] = 12,
  [34] = 8,
  [35] = 11,
  [36] = 36,
  [37] = 6,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 5,
  [42] = 14,
  [43] = 13,
  [44] = 7,
  [45] = 45,
  [46] = 2,
  [47] = 3,
  [48] = 10,
  [49] = 13,
  [50] = 7,
  [51] = 6,
  [52] = 5,
  [53] = 12,
  [54] = 8,
  [55] = 14,
  [56] = 11,
  [57] = 57,
  [58] = 15,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 59,
  [63] = 38,
  [64] = 60,
  [65] = 60,
  [66] = 66,
  [67] = 60,
  [68] = 59,
  [69] = 59,
  [70] = 59,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 74,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 74,
  [84] = 82,
  [85] = 85,
  [86] = 85,
  [87] = 81,
  [88] = 74,
  [89] = 82,
  [90] = 81,
  [91] = 78,
  [92] = 81,
  [93] = 74,
  [94] = 82,
  [95] = 45,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 3,
  [126] = 2,
  [127] = 127,
  [128] = 128,
  [129] = 127,
  [130] = 127,
  [131] = 127,
  [132] = 108,
  [133] = 127,
  [134] = 104,
  [135] = 135,
  [136] = 7,
  [137] = 137,
  [138] = 137,
  [139] = 137,
  [140] = 137,
  [141] = 6,
  [142] = 8,
  [143] = 143,
  [144] = 144,
  [145] = 12,
  [146] = 11,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 149,
  [152] = 152,
  [153] = 149,
  [154] = 154,
  [155] = 149,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '?') ADVANCE(295);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(275);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == 'W') ADVANCE(217);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(284);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'w') ADVANCE(254);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(172);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(166);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == ';') ADVANCE(437);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '?') ADVANCE(295);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(284);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 't') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '?') ADVANCE(294);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(284);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 't') ADVANCE(257);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 't') ADVANCE(257);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(436);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(275);
      if (lookahead == 'W') ADVANCE(217);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 'w') ADVANCE(254);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(172);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(166);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(275);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(349);
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead == 'H') ADVANCE(383);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == 'J') ADVANCE(380);
      if (lookahead == 'K') ADVANCE(350);
      if (lookahead == 'P') ADVANCE(369);
      if (lookahead == 'Q') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == 'X') ADVANCE(353);
      if (lookahead == 'Y') ADVANCE(345);
      if (lookahead == 'Z') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(349);
      if (lookahead == 'E') ADVANCE(342);
      if (lookahead == 'H') ADVANCE(383);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == 'J') ADVANCE(380);
      if (lookahead == 'K') ADVANCE(350);
      if (lookahead == 'P') ADVANCE(392);
      if (lookahead == 'Q') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == 'X') ADVANCE(353);
      if (lookahead == 'Y') ADVANCE(345);
      if (lookahead == 'Z') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'W') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 9:
      if (lookahead == '<') ADVANCE(291);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == '?') ADVANCE(300);
      if (lookahead == '[') ADVANCE(298);
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(306);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(318);
      if (lookahead == 'E') ADVANCE(312);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == 'J') ADVANCE(324);
      if (lookahead == 'K') ADVANCE(319);
      if (lookahead == 'P') ADVANCE(313);
      if (lookahead == 'Q') ADVANCE(328);
      if (lookahead == 'R') ADVANCE(320);
      if (lookahead == 'S') ADVANCE(327);
      if (lookahead == 'T') ADVANCE(322);
      if (lookahead == 'X') ADVANCE(321);
      if (lookahead == 'Y') ADVANCE(317);
      if (lookahead == 'Z') ADVANCE(315);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(318);
      if (lookahead == 'E') ADVANCE(316);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == 'J') ADVANCE(324);
      if (lookahead == 'K') ADVANCE(319);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'Q') ADVANCE(328);
      if (lookahead == 'R') ADVANCE(320);
      if (lookahead == 'S') ADVANCE(327);
      if (lookahead == 'T') ADVANCE(322);
      if (lookahead == 'X') ADVANCE(321);
      if (lookahead == 'Y') ADVANCE(317);
      if (lookahead == 'Z') ADVANCE(315);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(314);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(314);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(85);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 'K') ADVANCE(314);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(314);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(314);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(314);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 'P') ADVANCE(314);
      END_STATE();
    case 67:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 68:
      if (lookahead == 'R') ADVANCE(194);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(314);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(314);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(311);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == 'V') ADVANCE(49);
      END_STATE();
    case 95:
      if (lookahead == 'V') ADVANCE(36);
      END_STATE();
    case 96:
      if (lookahead == 'Y') ADVANCE(314);
      END_STATE();
    case 97:
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 137:
      if (lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'O' ||
          lookahead == 'e' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 144:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 146:
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '?') ADVANCE(295);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(275);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == 'W') ADVANCE(217);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(284);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'w') ADVANCE(254);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(172);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(166);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(146)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 147:
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '?') ADVANCE(294);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'R') ADVANCE(307);
      if (lookahead == 'S') ADVANCE(423);
      if (lookahead == 'W') ADVANCE(308);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(284);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(183);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(180);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(176);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(161);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(147)
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == ';') ADVANCE(209);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(275);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == 'W') ADVANCE(217);
      if (lookahead == '^') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'w') ADVANCE(254);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(172);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(166);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(193);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(437);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(148)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(218);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(206);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(201);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(213);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'D') ADVANCE(275);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(219);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(200);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(221);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(193);
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(193);
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O' ||
          lookahead == 'e' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(291);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == '?') ADVANCE(300);
      if (lookahead == '[') ADVANCE(298);
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'C') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead == 'X') ADVANCE(92);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_special_variable);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'J') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(97);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead == 'V') ADVANCE(38);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'C') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'O') ADVANCE(314);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_special_variable);
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'B') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'B') ADVANCE(399);
      if (lookahead == 'C') ADVANCE(373);
      if (lookahead == 'D') ADVANCE(335);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(395);
      if (lookahead == 'V') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(395);
      if (lookahead == 'X') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'D') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'D') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(403);
      if (lookahead == 'L') ADVANCE(354);
      if (lookahead == 'R') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'F') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'G') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'I') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'I') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'I') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'I') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'I') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'I') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'K') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'L') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'L') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'L') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'M') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'N') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'N') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'N') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'O') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'P') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'P') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'S') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'S') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'S') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'S') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'S') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == 'Y') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'U') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'U') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'V') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'V') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'Y') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'Y') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__external_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '_') ADVANCE(430);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '_') ADVANCE(430);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '_') ADVANCE(430);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(435);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(437);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 147, .external_lex_state = 1},
  [2] = {.lex_state = 146, .external_lex_state = 1},
  [3] = {.lex_state = 146, .external_lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 146, .external_lex_state = 1},
  [6] = {.lex_state = 146, .external_lex_state = 1},
  [7] = {.lex_state = 146, .external_lex_state = 1},
  [8] = {.lex_state = 146, .external_lex_state = 1},
  [9] = {.lex_state = 146, .external_lex_state = 1},
  [10] = {.lex_state = 146, .external_lex_state = 1},
  [11] = {.lex_state = 146, .external_lex_state = 1},
  [12] = {.lex_state = 146, .external_lex_state = 1},
  [13] = {.lex_state = 146, .external_lex_state = 1},
  [14] = {.lex_state = 146, .external_lex_state = 1},
  [15] = {.lex_state = 146, .external_lex_state = 1},
  [16] = {.lex_state = 147, .external_lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 148, .external_lex_state = 1},
  [20] = {.lex_state = 147, .external_lex_state = 1},
  [21] = {.lex_state = 147, .external_lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 148, .external_lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 147, .external_lex_state = 1},
  [33] = {.lex_state = 147, .external_lex_state = 1},
  [34] = {.lex_state = 147, .external_lex_state = 1},
  [35] = {.lex_state = 147, .external_lex_state = 1},
  [36] = {.lex_state = 147, .external_lex_state = 1},
  [37] = {.lex_state = 147, .external_lex_state = 1},
  [38] = {.lex_state = 147, .external_lex_state = 1},
  [39] = {.lex_state = 147, .external_lex_state = 1},
  [40] = {.lex_state = 147, .external_lex_state = 1},
  [41] = {.lex_state = 147, .external_lex_state = 1},
  [42] = {.lex_state = 147, .external_lex_state = 1},
  [43] = {.lex_state = 147, .external_lex_state = 1},
  [44] = {.lex_state = 147, .external_lex_state = 1},
  [45] = {.lex_state = 147, .external_lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 6, .external_lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 147},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 147},
  [63] = {.lex_state = 147},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 147},
  [69] = {.lex_state = 147},
  [70] = {.lex_state = 147},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 147},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 147},
  [96] = {.lex_state = 148, .external_lex_state = 1},
  [97] = {.lex_state = 147, .external_lex_state = 1},
  [98] = {.lex_state = 147, .external_lex_state = 1},
  [99] = {.lex_state = 147, .external_lex_state = 1},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 147, .external_lex_state = 2},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 147, .external_lex_state = 1},
  [105] = {.lex_state = 147, .external_lex_state = 1},
  [106] = {.lex_state = 147, .external_lex_state = 1},
  [107] = {.lex_state = 147, .external_lex_state = 1},
  [108] = {.lex_state = 147, .external_lex_state = 1},
  [109] = {.lex_state = 147, .external_lex_state = 1},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 147, .external_lex_state = 1},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 147, .external_lex_state = 1},
  [114] = {.lex_state = 147, .external_lex_state = 1},
  [115] = {.lex_state = 147, .external_lex_state = 1},
  [116] = {.lex_state = 147, .external_lex_state = 1},
  [117] = {.lex_state = 147, .external_lex_state = 1},
  [118] = {.lex_state = 147, .external_lex_state = 1},
  [119] = {.lex_state = 147, .external_lex_state = 1},
  [120] = {.lex_state = 147, .external_lex_state = 1},
  [121] = {.lex_state = 147, .external_lex_state = 1},
  [122] = {.lex_state = 147, .external_lex_state = 1},
  [123] = {.lex_state = 147, .external_lex_state = 1},
  [124] = {.lex_state = 147, .external_lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 147},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [aux_sym_for_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__eol_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__variable_name] = ACTIONS(1),
    [sym_global_variable] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [aux_sym__write_read_command_token1] = ACTIONS(1),
    [aux_sym_lvalue_function_call_token1] = ACTIONS(1),
    [sym_special_variable] = ACTIONS(1),
    [sym__builtin_function_name] = ACTIONS(1),
    [sym__external_function_name] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym__numeric] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_format_specifier] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(1),
    [sym__label] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(154),
    [sym__statement] = STATE(98),
    [sym__simple_statement] = STATE(98),
    [sym__compound_statement] = STATE(98),
    [sym_command] = STATE(98),
    [sym_comment] = STATE(98),
    [sym_assignment] = STATE(98),
    [sym__typical_command] = STATE(122),
    [sym_keyword] = STATE(19),
    [sym_for_statement] = STATE(98),
    [sym_if_statement] = STATE(98),
    [sym_label] = STATE(101),
    [sym__write_read_command] = STATE(122),
    [aux_sym_program_repeat1] = STATE(98),
    [aux_sym_keyword_token1] = ACTIONS(3),
    [aux_sym_for_statement_token1] = ACTIONS(5),
    [aux_sym_if_statement_token1] = ACTIONS(7),
    [sym__eol_comment] = ACTIONS(9),
    [aux_sym__write_read_command_token1] = ACTIONS(11),
    [sym__set] = ACTIONS(13),
    [sym__line_comment] = ACTIONS(9),
    [sym__label] = ACTIONS(15),
  },
  [2] = {
    [sym_array_index] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_keyword_token1] = ACTIONS(19),
    [aux_sym_for_statement_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym__eol_comment] = ACTIONS(17),
    [sym__variable_name] = ACTIONS(19),
    [sym_global_variable] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_SQUOTE_GT] = ACTIONS(17),
    [anon_sym_SQUOTE_LT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_EQ] = ACTIONS(17),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [aux_sym__write_read_command_token1] = ACTIONS(19),
    [sym_special_variable] = ACTIONS(19),
    [sym__builtin_function_name] = ACTIONS(17),
    [sym__external_function_name] = ACTIONS(17),
    [sym__set] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_format_specifier] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(17),
    [sym__label] = ACTIONS(17),
  },
  [3] = {
    [sym_array_index] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [aux_sym_keyword_token1] = ACTIONS(25),
    [aux_sym_for_statement_token1] = ACTIONS(25),
    [aux_sym_if_statement_token1] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym__eol_comment] = ACTIONS(23),
    [sym__variable_name] = ACTIONS(25),
    [sym_global_variable] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_SQUOTE_GT] = ACTIONS(23),
    [anon_sym_SQUOTE_LT] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_EQ] = ACTIONS(23),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(23),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [aux_sym__write_read_command_token1] = ACTIONS(25),
    [sym_special_variable] = ACTIONS(25),
    [sym__builtin_function_name] = ACTIONS(23),
    [sym__external_function_name] = ACTIONS(23),
    [sym__set] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym_format_specifier] = ACTIONS(25),
    [sym__line_comment] = ACTIONS(23),
    [sym__label] = ACTIONS(23),
  },
  [4] = {
    [sym__expression] = STATE(40),
    [sym__identifier] = STATE(40),
    [sym__array] = STATE(40),
    [sym_local_array] = STATE(40),
    [sym_global_array] = STATE(40),
    [sym__variable] = STATE(40),
    [sym_local_variable] = STATE(40),
    [sym_unary_expression] = STATE(40),
    [sym_binary_expression] = STATE(40),
    [sym_function_call] = STATE(40),
    [sym__literal] = STATE(40),
    [sym_boolean] = STATE(40),
    [anon_sym_EQ] = ACTIONS(27),
    [sym__variable_name] = ACTIONS(29),
    [sym_global_variable] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_SQUOTE_GT] = ACTIONS(27),
    [anon_sym_SQUOTE_LT] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_EQ] = ACTIONS(27),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(37),
    [sym_special_variable] = ACTIONS(39),
    [sym__builtin_function_name] = ACTIONS(41),
    [sym__external_function_name] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym_format_specifier] = ACTIONS(39),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [aux_sym_keyword_token1] = ACTIONS(49),
    [aux_sym_for_statement_token1] = ACTIONS(49),
    [aux_sym_if_statement_token1] = ACTIONS(49),
    [sym__eol_comment] = ACTIONS(47),
    [sym__variable_name] = ACTIONS(49),
    [sym_global_variable] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(49),
    [anon_sym_STAR_STAR] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_SQUOTE_GT] = ACTIONS(47),
    [anon_sym_SQUOTE_LT] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_QMARK] = ACTIONS(49),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_EQ] = ACTIONS(47),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(49),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(47),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(49),
    [aux_sym__write_read_command_token1] = ACTIONS(49),
    [sym_special_variable] = ACTIONS(49),
    [sym__builtin_function_name] = ACTIONS(47),
    [sym__external_function_name] = ACTIONS(47),
    [sym__set] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_format_specifier] = ACTIONS(49),
    [sym__line_comment] = ACTIONS(47),
    [sym__label] = ACTIONS(47),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [aux_sym_keyword_token1] = ACTIONS(53),
    [aux_sym_for_statement_token1] = ACTIONS(53),
    [aux_sym_if_statement_token1] = ACTIONS(53),
    [sym__eol_comment] = ACTIONS(51),
    [sym__variable_name] = ACTIONS(53),
    [sym_global_variable] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_SQUOTE_GT] = ACTIONS(51),
    [anon_sym_SQUOTE_LT] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE_EQ] = ACTIONS(51),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(51),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(53),
    [aux_sym__write_read_command_token1] = ACTIONS(53),
    [sym_special_variable] = ACTIONS(53),
    [sym__builtin_function_name] = ACTIONS(51),
    [sym__external_function_name] = ACTIONS(51),
    [sym__set] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_integer] = ACTIONS(53),
    [sym_float] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym_format_specifier] = ACTIONS(53),
    [sym__line_comment] = ACTIONS(51),
    [sym__label] = ACTIONS(51),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [aux_sym_keyword_token1] = ACTIONS(57),
    [aux_sym_for_statement_token1] = ACTIONS(57),
    [aux_sym_if_statement_token1] = ACTIONS(57),
    [sym__eol_comment] = ACTIONS(55),
    [sym__variable_name] = ACTIONS(57),
    [sym_global_variable] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_SQUOTE_GT] = ACTIONS(55),
    [anon_sym_SQUOTE_LT] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(57),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_EQ] = ACTIONS(55),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(55),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(55),
    [anon_sym__] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(57),
    [aux_sym__write_read_command_token1] = ACTIONS(57),
    [sym_special_variable] = ACTIONS(57),
    [sym__builtin_function_name] = ACTIONS(55),
    [sym__external_function_name] = ACTIONS(55),
    [sym__set] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_integer] = ACTIONS(57),
    [sym_float] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym_format_specifier] = ACTIONS(57),
    [sym__line_comment] = ACTIONS(55),
    [sym__label] = ACTIONS(55),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [aux_sym_keyword_token1] = ACTIONS(61),
    [aux_sym_for_statement_token1] = ACTIONS(61),
    [aux_sym_if_statement_token1] = ACTIONS(61),
    [sym__eol_comment] = ACTIONS(59),
    [sym__variable_name] = ACTIONS(61),
    [sym_global_variable] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(61),
    [anon_sym_STAR_STAR] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_SQUOTE_GT] = ACTIONS(59),
    [anon_sym_SQUOTE_LT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE_EQ] = ACTIONS(59),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(61),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(59),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(59),
    [anon_sym__] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(61),
    [aux_sym__write_read_command_token1] = ACTIONS(61),
    [sym_special_variable] = ACTIONS(61),
    [sym__builtin_function_name] = ACTIONS(59),
    [sym__external_function_name] = ACTIONS(59),
    [sym__set] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [sym_format_specifier] = ACTIONS(61),
    [sym__line_comment] = ACTIONS(59),
    [sym__label] = ACTIONS(59),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [aux_sym_keyword_token1] = ACTIONS(65),
    [aux_sym_for_statement_token1] = ACTIONS(65),
    [aux_sym_if_statement_token1] = ACTIONS(65),
    [sym__eol_comment] = ACTIONS(63),
    [sym__variable_name] = ACTIONS(49),
    [sym_global_variable] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_STAR_STAR] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_SQUOTE_GT] = ACTIONS(63),
    [anon_sym_SQUOTE_LT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_EQ] = ACTIONS(63),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(65),
    [aux_sym__write_read_command_token1] = ACTIONS(65),
    [sym_special_variable] = ACTIONS(49),
    [sym__builtin_function_name] = ACTIONS(47),
    [sym__external_function_name] = ACTIONS(47),
    [sym__set] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_format_specifier] = ACTIONS(49),
    [sym__line_comment] = ACTIONS(63),
    [sym__label] = ACTIONS(63),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [aux_sym_keyword_token1] = ACTIONS(69),
    [aux_sym_for_statement_token1] = ACTIONS(69),
    [aux_sym_if_statement_token1] = ACTIONS(69),
    [sym__eol_comment] = ACTIONS(67),
    [sym__variable_name] = ACTIONS(69),
    [sym_global_variable] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(69),
    [anon_sym_STAR_STAR] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_SQUOTE_GT] = ACTIONS(67),
    [anon_sym_SQUOTE_LT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_EQ] = ACTIONS(67),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(69),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(67),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(69),
    [aux_sym__write_read_command_token1] = ACTIONS(69),
    [sym_special_variable] = ACTIONS(69),
    [sym__builtin_function_name] = ACTIONS(67),
    [sym__external_function_name] = ACTIONS(67),
    [sym__set] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_integer] = ACTIONS(69),
    [sym_float] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_format_specifier] = ACTIONS(69),
    [sym__line_comment] = ACTIONS(67),
    [sym__label] = ACTIONS(67),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [aux_sym_keyword_token1] = ACTIONS(73),
    [aux_sym_for_statement_token1] = ACTIONS(73),
    [aux_sym_if_statement_token1] = ACTIONS(73),
    [sym__eol_comment] = ACTIONS(71),
    [sym__variable_name] = ACTIONS(73),
    [sym_global_variable] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(73),
    [anon_sym_STAR_STAR] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_SQUOTE_GT] = ACTIONS(71),
    [anon_sym_SQUOTE_LT] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE_EQ] = ACTIONS(71),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(73),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(71),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(71),
    [anon_sym_BANG] = ACTIONS(73),
    [aux_sym__write_read_command_token1] = ACTIONS(73),
    [sym_special_variable] = ACTIONS(73),
    [sym__builtin_function_name] = ACTIONS(71),
    [sym__external_function_name] = ACTIONS(71),
    [sym__set] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [sym_format_specifier] = ACTIONS(73),
    [sym__line_comment] = ACTIONS(71),
    [sym__label] = ACTIONS(71),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [aux_sym_keyword_token1] = ACTIONS(77),
    [aux_sym_for_statement_token1] = ACTIONS(77),
    [aux_sym_if_statement_token1] = ACTIONS(77),
    [sym__eol_comment] = ACTIONS(75),
    [sym__variable_name] = ACTIONS(77),
    [sym_global_variable] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_STAR_STAR] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_SQUOTE_GT] = ACTIONS(75),
    [anon_sym_SQUOTE_LT] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE_EQ] = ACTIONS(75),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(77),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(75),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(77),
    [aux_sym__write_read_command_token1] = ACTIONS(77),
    [sym_special_variable] = ACTIONS(77),
    [sym__builtin_function_name] = ACTIONS(75),
    [sym__external_function_name] = ACTIONS(75),
    [sym__set] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [sym_integer] = ACTIONS(77),
    [sym_float] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_format_specifier] = ACTIONS(77),
    [sym__line_comment] = ACTIONS(75),
    [sym__label] = ACTIONS(75),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [aux_sym_keyword_token1] = ACTIONS(65),
    [aux_sym_for_statement_token1] = ACTIONS(65),
    [aux_sym_if_statement_token1] = ACTIONS(65),
    [sym__eol_comment] = ACTIONS(63),
    [sym__variable_name] = ACTIONS(65),
    [sym_global_variable] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_STAR_STAR] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_SQUOTE_GT] = ACTIONS(63),
    [anon_sym_SQUOTE_LT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_EQ] = ACTIONS(63),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(65),
    [aux_sym__write_read_command_token1] = ACTIONS(65),
    [sym_special_variable] = ACTIONS(65),
    [sym__builtin_function_name] = ACTIONS(63),
    [sym__external_function_name] = ACTIONS(63),
    [sym__set] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(63),
    [sym_string] = ACTIONS(63),
    [sym_format_specifier] = ACTIONS(65),
    [sym__line_comment] = ACTIONS(63),
    [sym__label] = ACTIONS(63),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [aux_sym_keyword_token1] = ACTIONS(81),
    [aux_sym_for_statement_token1] = ACTIONS(81),
    [aux_sym_if_statement_token1] = ACTIONS(81),
    [sym__eol_comment] = ACTIONS(79),
    [sym__variable_name] = ACTIONS(81),
    [sym_global_variable] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_SQUOTE_GT] = ACTIONS(79),
    [anon_sym_SQUOTE_LT] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(79),
    [anon_sym_SQUOTE_EQ] = ACTIONS(79),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(79),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(81),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(79),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(81),
    [aux_sym__write_read_command_token1] = ACTIONS(81),
    [sym_special_variable] = ACTIONS(81),
    [sym__builtin_function_name] = ACTIONS(79),
    [sym__external_function_name] = ACTIONS(79),
    [sym__set] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_integer] = ACTIONS(81),
    [sym_float] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_format_specifier] = ACTIONS(81),
    [sym__line_comment] = ACTIONS(79),
    [sym__label] = ACTIONS(79),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_keyword_token1] = ACTIONS(87),
    [aux_sym_for_statement_token1] = ACTIONS(87),
    [aux_sym_if_statement_token1] = ACTIONS(87),
    [sym__eol_comment] = ACTIONS(83),
    [sym__variable_name] = ACTIONS(87),
    [sym_global_variable] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_STAR_STAR] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_SQUOTE_GT] = ACTIONS(85),
    [anon_sym_SQUOTE_LT] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(85),
    [anon_sym_SQUOTE_EQ] = ACTIONS(85),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(85),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(89),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(85),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(89),
    [aux_sym__write_read_command_token1] = ACTIONS(87),
    [sym_special_variable] = ACTIONS(87),
    [sym__builtin_function_name] = ACTIONS(83),
    [sym__external_function_name] = ACTIONS(83),
    [sym__set] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_format_specifier] = ACTIONS(87),
    [sym__line_comment] = ACTIONS(83),
    [sym__label] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_for_statement_token1,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    STATE(19), 1,
      sym_keyword,
    STATE(101), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(122), 2,
      sym__typical_command,
      sym__write_read_command,
    ACTIONS(93), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(115), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
    ACTIONS(91), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [71] = 4,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_array_index,
    ACTIONS(19), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(17), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [118] = 4,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_array_index,
    ACTIONS(25), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(23), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [165] = 13,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(101), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_postconditional,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(105), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    ACTIONS(97), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(99), 5,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym__write_read_command_token1,
      sym__set,
    STATE(38), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [230] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_array_index,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(23), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [276] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_array_index,
    ACTIONS(19), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(17), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [322] = 2,
    ACTIONS(73), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(71), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [363] = 2,
    ACTIONS(61), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(59), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [404] = 2,
    ACTIONS(57), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(55), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [445] = 2,
    ACTIONS(77), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(75), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [486] = 2,
    ACTIONS(49), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(47), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [527] = 2,
    ACTIONS(53), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(51), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [568] = 2,
    ACTIONS(69), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(67), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [609] = 2,
    ACTIONS(65), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(63), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [650] = 11,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    STATE(116), 1,
      sym_arguments,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(105), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    ACTIONS(111), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(113), 5,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym__write_read_command_token1,
      sym__set,
    STATE(38), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [709] = 2,
    ACTIONS(81), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym_special_variable,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(79), 22,
      anon_sym_EQ,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_STAR_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SQUOTE_GT,
      anon_sym_SQUOTE_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_SQUOTE_EQ,
      anon_sym_SQUOTE_LBRACK,
      anon_sym_SQUOTE_QMARK,
      anon_sym_SQUOTE_RBRACK_RBRACK,
      anon_sym__,
      anon_sym_AMP,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [750] = 2,
    ACTIONS(69), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [790] = 2,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [830] = 2,
    ACTIONS(61), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(59), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [870] = 2,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(71), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [910] = 5,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(93), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(115), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(91), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [956] = 2,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [996] = 5,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(93), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(119), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(91), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1042] = 5,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(93), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(123), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(91), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1088] = 3,
    ACTIONS(93), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(125), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(91), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1129] = 2,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(47), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1168] = 2,
    ACTIONS(81), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(79), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1207] = 2,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(63), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1246] = 2,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(55), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
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
      aux_sym__write_read_command_token1,
      sym__set,
  [1285] = 3,
    ACTIONS(93), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(91), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1326] = 4,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_array_index,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(17), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1367] = 4,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_array_index,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(23), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1408] = 2,
    ACTIONS(69), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(67), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1443] = 2,
    ACTIONS(65), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(63), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1478] = 2,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(55), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1513] = 2,
    ACTIONS(53), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(51), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1548] = 2,
    ACTIONS(49), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(47), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1583] = 2,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(75), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1618] = 2,
    ACTIONS(61), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(59), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1653] = 2,
    ACTIONS(81), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(79), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1688] = 2,
    ACTIONS(73), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(71), 25,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__variable_name,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1723] = 15,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(131), 1,
      aux_sym_keyword_token1,
    ACTIONS(133), 1,
      aux_sym_for_statement_token1,
    ACTIONS(135), 1,
      aux_sym_if_statement_token1,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(141), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(143), 1,
      sym_special_variable,
    ACTIONS(145), 1,
      sym__set,
    STATE(19), 1,
      sym_keyword,
    STATE(101), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(122), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(152), 6,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
    STATE(117), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
  [1783] = 4,
    ACTIONS(83), 2,
      sym__variable_name,
      sym_global_variable,
    ACTIONS(87), 2,
      aux_sym_lvalue_function_call_token1,
      sym_special_variable,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1820] = 5,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1858] = 9,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    STATE(150), 1,
      sym_arguments,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(157), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(63), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [1904] = 9,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    STATE(149), 1,
      sym_arguments,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(157), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(63), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [1950] = 5,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [1988] = 5,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [2026] = 9,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    STATE(153), 1,
      sym_arguments,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(157), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(63), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2072] = 9,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    STATE(151), 1,
      sym_arguments,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(157), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(63), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2118] = 9,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    STATE(123), 1,
      sym_arguments,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(105), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(38), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2164] = 9,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(157), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(63), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2210] = 5,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [2248] = 5,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [2286] = 5,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [2324] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(177), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(175), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(80), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2367] = 8,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(179), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(39), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2410] = 8,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(183), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(16), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2453] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(189), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(187), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(62), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2496] = 8,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(191), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(36), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2539] = 8,
    ACTIONS(195), 1,
      sym__variable_name,
    ACTIONS(197), 1,
      sym_global_variable,
    ACTIONS(203), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 2,
      sym_float,
      sym_string,
    ACTIONS(199), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(201), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(4), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2582] = 8,
    ACTIONS(209), 1,
      sym__variable_name,
    ACTIONS(211), 1,
      sym_global_variable,
    ACTIONS(217), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_float,
      sym_string,
    ACTIONS(213), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(215), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(9), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2625] = 8,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(225), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(223), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(45), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2668] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(229), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(227), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(68), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2711] = 3,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [2744] = 8,
    ACTIONS(195), 1,
      sym__variable_name,
    ACTIONS(197), 1,
      sym_global_variable,
    ACTIONS(203), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(235), 2,
      sym_float,
      sym_string,
    ACTIONS(199), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(233), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(26), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2787] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(239), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(237), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(49), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2830] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(243), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(241), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(70), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2873] = 8,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(245), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(43), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2916] = 8,
    ACTIONS(209), 1,
      sym__variable_name,
    ACTIONS(211), 1,
      sym_global_variable,
    ACTIONS(217), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_float,
      sym_string,
    ACTIONS(213), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(249), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(15), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [2959] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(255), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(253), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(58), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3002] = 8,
    ACTIONS(209), 1,
      sym__variable_name,
    ACTIONS(211), 1,
      sym_global_variable,
    ACTIONS(217), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(259), 2,
      sym_float,
      sym_string,
    ACTIONS(213), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(257), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(5), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3045] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(263), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(261), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(59), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3088] = 8,
    ACTIONS(209), 1,
      sym__variable_name,
    ACTIONS(211), 1,
      sym_global_variable,
    ACTIONS(217), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(219), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(267), 2,
      sym_float,
      sym_string,
    ACTIONS(213), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(265), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(13), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3131] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(271), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(269), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(52), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3174] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(273), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(95), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3217] = 8,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(41), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(279), 2,
      sym_float,
      sym_string,
    ACTIONS(103), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(277), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(41), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3260] = 8,
    ACTIONS(137), 1,
      sym__variable_name,
    ACTIONS(139), 1,
      sym_global_variable,
    ACTIONS(159), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(161), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(283), 2,
      sym_float,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(281), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(69), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3303] = 8,
    ACTIONS(195), 1,
      sym__variable_name,
    ACTIONS(197), 1,
      sym_global_variable,
    ACTIONS(203), 2,
      sym__builtin_function_name,
      sym__external_function_name,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(287), 2,
      sym_float,
      sym_string,
    ACTIONS(199), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(285), 3,
      sym_special_variable,
      sym_integer,
      sym_format_specifier,
    STATE(29), 12,
      sym__expression,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
      sym__literal,
      sym_boolean,
  [3346] = 3,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(147), 21,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
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
  [3379] = 2,
    ACTIONS(291), 11,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__variable_name,
      aux_sym__write_read_command_token1,
      sym_special_variable,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(289), 13,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_COLON,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym__builtin_function_name,
      sym__external_function_name,
      sym_float,
      sym_string,
  [3408] = 12,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      aux_sym_keyword_token1,
    ACTIONS(298), 1,
      aux_sym_for_statement_token1,
    ACTIONS(301), 1,
      aux_sym_if_statement_token1,
    ACTIONS(307), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(310), 1,
      sym__set,
    ACTIONS(313), 1,
      sym__label,
    STATE(19), 1,
      sym_keyword,
    STATE(101), 1,
      sym_label,
    ACTIONS(304), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(122), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(97), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      aux_sym_program_repeat1,
  [3455] = 12,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_for_statement_token1,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_keyword,
    STATE(101), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(122), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(97), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      aux_sym_program_repeat1,
  [3502] = 11,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_for_statement_token1,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    STATE(19), 1,
      sym_keyword,
    STATE(101), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(122), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(118), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
  [3545] = 7,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    STATE(99), 1,
      sym__loop_range,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(320), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(318), 3,
      sym_special_variable,
      sym_float,
      sym_string,
    STATE(109), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym__literal,
      sym_boolean,
  [3577] = 9,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_for_statement_token1,
    ACTIONS(7), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(13), 1,
      sym__set,
    STATE(19), 1,
      sym_keyword,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(122), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(120), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
  [3613] = 6,
    ACTIONS(29), 1,
      sym__variable_name,
    ACTIONS(31), 1,
      sym_global_variable,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(324), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(322), 3,
      sym_special_variable,
      sym_float,
      sym_string,
    STATE(114), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym__literal,
      sym_boolean,
  [3642] = 7,
    ACTIONS(326), 1,
      anon_sym_COLON,
    ACTIONS(328), 1,
      sym__variable_name,
    ACTIONS(330), 1,
      sym_global_variable,
    ACTIONS(332), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(334), 1,
      sym_special_variable,
    STATE(110), 1,
      sym_postconditional,
    STATE(135), 6,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
  [3669] = 3,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(336), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3687] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(341), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3705] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(343), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3723] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(348), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3741] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(350), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3759] = 3,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(111), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(352), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3776] = 5,
    ACTIONS(328), 1,
      sym__variable_name,
    ACTIONS(330), 1,
      sym_global_variable,
    ACTIONS(332), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(356), 1,
      sym_special_variable,
    STATE(147), 6,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
  [3797] = 3,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(358), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3814] = 5,
    ACTIONS(328), 1,
      sym__variable_name,
    ACTIONS(330), 1,
      sym_global_variable,
    ACTIONS(332), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(360), 1,
      sym_special_variable,
    STATE(143), 6,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
  [3835] = 3,
    ACTIONS(364), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(362), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3852] = 1,
    ACTIONS(362), 9,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      aux_sym__write_read_command_token1,
      sym__set,
  [3864] = 1,
    ACTIONS(367), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3876] = 1,
    ACTIONS(369), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3888] = 1,
    ACTIONS(371), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3900] = 1,
    ACTIONS(373), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3912] = 1,
    ACTIONS(375), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3924] = 1,
    ACTIONS(377), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3936] = 1,
    ACTIONS(111), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3948] = 1,
    ACTIONS(379), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3960] = 1,
    ACTIONS(381), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3972] = 1,
    ACTIONS(383), 7,
      sym__line_comment,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3982] = 4,
    ACTIONS(23), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_array_index,
  [3995] = 4,
    ACTIONS(17), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_array_index,
  [4008] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_array_index_repeat1,
  [4018] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_array_index_repeat1,
  [4028] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_array_index_repeat1,
  [4038] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_array_index_repeat1,
  [4048] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_array_index_repeat1,
  [4058] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_arguments_repeat1,
  [4068] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_array_index_repeat1,
  [4078] = 3,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_arguments_repeat1,
  [4088] = 2,
    ACTIONS(405), 1,
      anon_sym_EQ,
    ACTIONS(407), 1,
      anon_sym_EQ_PLUS,
  [4095] = 2,
    ACTIONS(55), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(57), 1,
      anon_sym_EQ,
  [4102] = 2,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__function_arguments,
  [4109] = 2,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__function_arguments,
  [4116] = 2,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__function_arguments,
  [4123] = 2,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym__function_arguments,
  [4130] = 2,
    ACTIONS(51), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(53), 1,
      anon_sym_EQ,
  [4137] = 2,
    ACTIONS(59), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(61), 1,
      anon_sym_EQ,
  [4144] = 2,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(419), 1,
      anon_sym_EQ_PLUS,
  [4151] = 2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym__function_arguments,
  [4158] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [4165] = 2,
    ACTIONS(71), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(73), 1,
      anon_sym_EQ,
  [4172] = 2,
    ACTIONS(423), 1,
      anon_sym_EQ,
    ACTIONS(425), 1,
      anon_sym_EQ_PLUS,
  [4179] = 2,
    ACTIONS(427), 1,
      anon_sym_EQ,
    ACTIONS(429), 1,
      anon_sym_EQ_PLUS,
  [4186] = 1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [4190] = 1,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
  [4194] = 1,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [4198] = 1,
    ACTIONS(437), 1,
      anon_sym_EQ,
  [4202] = 1,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [4206] = 1,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
  [4210] = 1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 71,
  [SMALL_STATE(18)] = 118,
  [SMALL_STATE(19)] = 165,
  [SMALL_STATE(20)] = 230,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 363,
  [SMALL_STATE(24)] = 404,
  [SMALL_STATE(25)] = 445,
  [SMALL_STATE(26)] = 486,
  [SMALL_STATE(27)] = 527,
  [SMALL_STATE(28)] = 568,
  [SMALL_STATE(29)] = 609,
  [SMALL_STATE(30)] = 650,
  [SMALL_STATE(31)] = 709,
  [SMALL_STATE(32)] = 750,
  [SMALL_STATE(33)] = 790,
  [SMALL_STATE(34)] = 830,
  [SMALL_STATE(35)] = 870,
  [SMALL_STATE(36)] = 910,
  [SMALL_STATE(37)] = 956,
  [SMALL_STATE(38)] = 996,
  [SMALL_STATE(39)] = 1042,
  [SMALL_STATE(40)] = 1088,
  [SMALL_STATE(41)] = 1129,
  [SMALL_STATE(42)] = 1168,
  [SMALL_STATE(43)] = 1207,
  [SMALL_STATE(44)] = 1246,
  [SMALL_STATE(45)] = 1285,
  [SMALL_STATE(46)] = 1326,
  [SMALL_STATE(47)] = 1367,
  [SMALL_STATE(48)] = 1408,
  [SMALL_STATE(49)] = 1443,
  [SMALL_STATE(50)] = 1478,
  [SMALL_STATE(51)] = 1513,
  [SMALL_STATE(52)] = 1548,
  [SMALL_STATE(53)] = 1583,
  [SMALL_STATE(54)] = 1618,
  [SMALL_STATE(55)] = 1653,
  [SMALL_STATE(56)] = 1688,
  [SMALL_STATE(57)] = 1723,
  [SMALL_STATE(58)] = 1783,
  [SMALL_STATE(59)] = 1820,
  [SMALL_STATE(60)] = 1858,
  [SMALL_STATE(61)] = 1904,
  [SMALL_STATE(62)] = 1950,
  [SMALL_STATE(63)] = 1988,
  [SMALL_STATE(64)] = 2026,
  [SMALL_STATE(65)] = 2072,
  [SMALL_STATE(66)] = 2118,
  [SMALL_STATE(67)] = 2164,
  [SMALL_STATE(68)] = 2210,
  [SMALL_STATE(69)] = 2248,
  [SMALL_STATE(70)] = 2286,
  [SMALL_STATE(71)] = 2324,
  [SMALL_STATE(72)] = 2367,
  [SMALL_STATE(73)] = 2410,
  [SMALL_STATE(74)] = 2453,
  [SMALL_STATE(75)] = 2496,
  [SMALL_STATE(76)] = 2539,
  [SMALL_STATE(77)] = 2582,
  [SMALL_STATE(78)] = 2625,
  [SMALL_STATE(79)] = 2668,
  [SMALL_STATE(80)] = 2711,
  [SMALL_STATE(81)] = 2744,
  [SMALL_STATE(82)] = 2787,
  [SMALL_STATE(83)] = 2830,
  [SMALL_STATE(84)] = 2873,
  [SMALL_STATE(85)] = 2916,
  [SMALL_STATE(86)] = 2959,
  [SMALL_STATE(87)] = 3002,
  [SMALL_STATE(88)] = 3045,
  [SMALL_STATE(89)] = 3088,
  [SMALL_STATE(90)] = 3131,
  [SMALL_STATE(91)] = 3174,
  [SMALL_STATE(92)] = 3217,
  [SMALL_STATE(93)] = 3260,
  [SMALL_STATE(94)] = 3303,
  [SMALL_STATE(95)] = 3346,
  [SMALL_STATE(96)] = 3379,
  [SMALL_STATE(97)] = 3408,
  [SMALL_STATE(98)] = 3455,
  [SMALL_STATE(99)] = 3502,
  [SMALL_STATE(100)] = 3545,
  [SMALL_STATE(101)] = 3577,
  [SMALL_STATE(102)] = 3613,
  [SMALL_STATE(103)] = 3642,
  [SMALL_STATE(104)] = 3669,
  [SMALL_STATE(105)] = 3687,
  [SMALL_STATE(106)] = 3705,
  [SMALL_STATE(107)] = 3723,
  [SMALL_STATE(108)] = 3741,
  [SMALL_STATE(109)] = 3759,
  [SMALL_STATE(110)] = 3776,
  [SMALL_STATE(111)] = 3797,
  [SMALL_STATE(112)] = 3814,
  [SMALL_STATE(113)] = 3835,
  [SMALL_STATE(114)] = 3852,
  [SMALL_STATE(115)] = 3864,
  [SMALL_STATE(116)] = 3876,
  [SMALL_STATE(117)] = 3888,
  [SMALL_STATE(118)] = 3900,
  [SMALL_STATE(119)] = 3912,
  [SMALL_STATE(120)] = 3924,
  [SMALL_STATE(121)] = 3936,
  [SMALL_STATE(122)] = 3948,
  [SMALL_STATE(123)] = 3960,
  [SMALL_STATE(124)] = 3972,
  [SMALL_STATE(125)] = 3982,
  [SMALL_STATE(126)] = 3995,
  [SMALL_STATE(127)] = 4008,
  [SMALL_STATE(128)] = 4018,
  [SMALL_STATE(129)] = 4028,
  [SMALL_STATE(130)] = 4038,
  [SMALL_STATE(131)] = 4048,
  [SMALL_STATE(132)] = 4058,
  [SMALL_STATE(133)] = 4068,
  [SMALL_STATE(134)] = 4078,
  [SMALL_STATE(135)] = 4088,
  [SMALL_STATE(136)] = 4095,
  [SMALL_STATE(137)] = 4102,
  [SMALL_STATE(138)] = 4109,
  [SMALL_STATE(139)] = 4116,
  [SMALL_STATE(140)] = 4123,
  [SMALL_STATE(141)] = 4130,
  [SMALL_STATE(142)] = 4137,
  [SMALL_STATE(143)] = 4144,
  [SMALL_STATE(144)] = 4151,
  [SMALL_STATE(145)] = 4158,
  [SMALL_STATE(146)] = 4165,
  [SMALL_STATE(147)] = 4172,
  [SMALL_STATE(148)] = 4179,
  [SMALL_STATE(149)] = 4186,
  [SMALL_STATE(150)] = 4190,
  [SMALL_STATE(151)] = 4194,
  [SMALL_STATE(152)] = 4198,
  [SMALL_STATE(153)] = 4202,
  [SMALL_STATE(154)] = 4206,
  [SMALL_STATE(155)] = 4210,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_array, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_array, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 5, .production_id = 15),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 8),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(103),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(124),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6), SHIFT_REPEAT(78),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14), SHIFT_REPEAT(112),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 13),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(102),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_command, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12), SHIFT_REPEAT(71),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6), SHIFT_REPEAT(91),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_function_call, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_function_call, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [441] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_comment = 0,
  ts_external_token__label = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_comment] = sym__line_comment,
  [ts_external_token__label] = sym__label,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
