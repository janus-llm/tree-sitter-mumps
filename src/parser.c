#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  sym__builtin_identifier = 39,
  sym__external_identifier = 40,
  sym__builtin_function_name = 41,
  aux_sym__external_function_name_token1 = 42,
  sym__set = 43,
  sym__numeric = 44,
  anon_sym_true = 45,
  anon_sym_false = 46,
  sym_integer = 47,
  sym_float = 48,
  sym_string = 49,
  sym_format_specifier = 50,
  sym__line_comment = 51,
  sym__label = 52,
  sym_program = 53,
  sym__statement = 54,
  sym__simple_statement = 55,
  sym__compound_statement = 56,
  sym_command = 57,
  sym_comment = 58,
  sym_assignment = 59,
  sym__typical_command = 60,
  sym_keyword = 61,
  sym_for_statement = 62,
  sym_if_statement = 63,
  sym_arguments = 64,
  sym_label = 65,
  sym__function_arguments = 66,
  sym_postconditional = 67,
  sym__loop_range = 68,
  sym__expression = 69,
  sym__identifier = 70,
  sym__array = 71,
  sym_local_array = 72,
  sym_global_array = 73,
  sym_array_index = 74,
  sym__variable = 75,
  sym_local_variable = 76,
  sym_unary_expression = 77,
  sym_binary_expression = 78,
  sym__write_read_command = 79,
  sym_function_call = 80,
  sym_lvalue_function_call = 81,
  sym_special_variable = 82,
  sym__user_defined_identifier = 83,
  sym__literal = 84,
  sym_boolean = 85,
  aux_sym_program_repeat1 = 86,
  aux_sym_assignment_repeat1 = 87,
  aux_sym_arguments_repeat1 = 88,
  aux_sym__loop_range_repeat1 = 89,
  aux_sym_array_index_repeat1 = 90,
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
  [sym__builtin_identifier] = "_builtin_identifier",
  [sym__external_identifier] = "_external_identifier",
  [sym__builtin_function_name] = "_builtin_function_name",
  [aux_sym__external_function_name_token1] = "_external_function_name_token1",
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
  [sym_special_variable] = "special_variable",
  [sym__user_defined_identifier] = "_user_defined_identifier",
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
  [sym__builtin_identifier] = sym__builtin_identifier,
  [sym__external_identifier] = sym__external_identifier,
  [sym__builtin_function_name] = sym__builtin_function_name,
  [aux_sym__external_function_name_token1] = aux_sym__external_function_name_token1,
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
  [sym_special_variable] = sym_special_variable,
  [sym__user_defined_identifier] = sym__user_defined_identifier,
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
  [sym__builtin_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__external_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__builtin_function_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__external_function_name_token1] = {
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
  [sym_special_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__user_defined_identifier] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 3,
  [20] = 5,
  [21] = 21,
  [22] = 4,
  [23] = 5,
  [24] = 3,
  [25] = 14,
  [26] = 8,
  [27] = 11,
  [28] = 4,
  [29] = 13,
  [30] = 12,
  [31] = 15,
  [32] = 7,
  [33] = 10,
  [34] = 6,
  [35] = 35,
  [36] = 36,
  [37] = 13,
  [38] = 8,
  [39] = 10,
  [40] = 11,
  [41] = 12,
  [42] = 42,
  [43] = 43,
  [44] = 7,
  [45] = 15,
  [46] = 6,
  [47] = 14,
  [48] = 48,
  [49] = 4,
  [50] = 5,
  [51] = 3,
  [52] = 52,
  [53] = 7,
  [54] = 12,
  [55] = 15,
  [56] = 14,
  [57] = 11,
  [58] = 13,
  [59] = 10,
  [60] = 8,
  [61] = 6,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 62,
  [66] = 62,
  [67] = 62,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 16,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 70,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 70,
  [81] = 81,
  [82] = 74,
  [83] = 74,
  [84] = 72,
  [85] = 72,
  [86] = 74,
  [87] = 74,
  [88] = 81,
  [89] = 73,
  [90] = 70,
  [91] = 91,
  [92] = 92,
  [93] = 35,
  [94] = 92,
  [95] = 92,
  [96] = 92,
  [97] = 92,
  [98] = 48,
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
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 3,
  [131] = 5,
  [132] = 132,
  [133] = 133,
  [134] = 133,
  [135] = 133,
  [136] = 133,
  [137] = 111,
  [138] = 112,
  [139] = 133,
  [140] = 128,
  [141] = 141,
  [142] = 142,
  [143] = 8,
  [144] = 141,
  [145] = 145,
  [146] = 10,
  [147] = 141,
  [148] = 141,
  [149] = 149,
  [150] = 150,
  [151] = 12,
  [152] = 11,
  [153] = 153,
  [154] = 6,
  [155] = 155,
  [156] = 128,
  [157] = 157,
  [158] = 158,
  [159] = 155,
  [160] = 155,
  [161] = 155,
  [162] = 155,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '&') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == ';') ADVANCE(136);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == 'W') ADVANCE(144);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(99);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(86);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '&') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ';') ADVANCE(269);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(222);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 't') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '&') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(221);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '_') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 't') ADVANCE(184);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == ';') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == 'W') ADVANCE(144);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(99);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(86);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(202);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == 'P') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(217);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == ']') ADVANCE(226);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(233);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(233);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'P') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(238);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'O' ||
          lookahead == 'e' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 70:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 73:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '&') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ';') ADVANCE(136);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == 'W') ADVANCE(144);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(99);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(86);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '&') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == ';') ADVANCE(137);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '?') ADVANCE(221);
      if (lookahead == 'F') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(234);
      if (lookahead == 'S') ADVANCE(255);
      if (lookahead == 'W') ADVANCE(235);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '_') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 'w') ADVANCE(237);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(110);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(107);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(103);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(92);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == ';') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == 'W') ADVANCE(144);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(99);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(86);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(145);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'D') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O' ||
          lookahead == 'e' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(217);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == ']') ADVANCE(226);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'X') ADVANCE(23);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__builtin_identifier);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__external_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'A') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'C') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'E') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'I') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'R') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'T') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (lookahead == 'X') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__builtin_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__external_function_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '_') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '_') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '_') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 74, .external_lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 73, .external_lex_state = 1},
  [4] = {.lex_state = 73, .external_lex_state = 1},
  [5] = {.lex_state = 73, .external_lex_state = 1},
  [6] = {.lex_state = 73, .external_lex_state = 1},
  [7] = {.lex_state = 73, .external_lex_state = 1},
  [8] = {.lex_state = 73, .external_lex_state = 1},
  [9] = {.lex_state = 73, .external_lex_state = 1},
  [10] = {.lex_state = 73, .external_lex_state = 1},
  [11] = {.lex_state = 73, .external_lex_state = 1},
  [12] = {.lex_state = 73, .external_lex_state = 1},
  [13] = {.lex_state = 73, .external_lex_state = 1},
  [14] = {.lex_state = 73, .external_lex_state = 1},
  [15] = {.lex_state = 73, .external_lex_state = 1},
  [16] = {.lex_state = 73, .external_lex_state = 1},
  [17] = {.lex_state = 74, .external_lex_state = 1},
  [18] = {.lex_state = 75, .external_lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 75, .external_lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 74, .external_lex_state = 1},
  [24] = {.lex_state = 74, .external_lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 74, .external_lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 74, .external_lex_state = 1},
  [36] = {.lex_state = 74, .external_lex_state = 1},
  [37] = {.lex_state = 74, .external_lex_state = 1},
  [38] = {.lex_state = 74, .external_lex_state = 1},
  [39] = {.lex_state = 74, .external_lex_state = 1},
  [40] = {.lex_state = 74, .external_lex_state = 1},
  [41] = {.lex_state = 74, .external_lex_state = 1},
  [42] = {.lex_state = 74, .external_lex_state = 1},
  [43] = {.lex_state = 74, .external_lex_state = 1},
  [44] = {.lex_state = 74, .external_lex_state = 1},
  [45] = {.lex_state = 74, .external_lex_state = 1},
  [46] = {.lex_state = 74, .external_lex_state = 1},
  [47] = {.lex_state = 74, .external_lex_state = 1},
  [48] = {.lex_state = 74, .external_lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 5, .external_lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
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
  [92] = {.lex_state = 74},
  [93] = {.lex_state = 74},
  [94] = {.lex_state = 74},
  [95] = {.lex_state = 74},
  [96] = {.lex_state = 74},
  [97] = {.lex_state = 74},
  [98] = {.lex_state = 74},
  [99] = {.lex_state = 74},
  [100] = {.lex_state = 75, .external_lex_state = 1},
  [101] = {.lex_state = 74, .external_lex_state = 1},
  [102] = {.lex_state = 74, .external_lex_state = 1},
  [103] = {.lex_state = 74, .external_lex_state = 1},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 74, .external_lex_state = 2},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 74, .external_lex_state = 1},
  [110] = {.lex_state = 74, .external_lex_state = 1},
  [111] = {.lex_state = 74, .external_lex_state = 1},
  [112] = {.lex_state = 74, .external_lex_state = 1},
  [113] = {.lex_state = 74, .external_lex_state = 1},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 74, .external_lex_state = 1},
  [116] = {.lex_state = 74, .external_lex_state = 1},
  [117] = {.lex_state = 74, .external_lex_state = 1},
  [118] = {.lex_state = 74, .external_lex_state = 1},
  [119] = {.lex_state = 74, .external_lex_state = 1},
  [120] = {.lex_state = 74, .external_lex_state = 1},
  [121] = {.lex_state = 74, .external_lex_state = 1},
  [122] = {.lex_state = 74, .external_lex_state = 1},
  [123] = {.lex_state = 74, .external_lex_state = 1},
  [124] = {.lex_state = 74, .external_lex_state = 1},
  [125] = {.lex_state = 74, .external_lex_state = 1},
  [126] = {.lex_state = 74, .external_lex_state = 1},
  [127] = {.lex_state = 74, .external_lex_state = 1},
  [128] = {.lex_state = 74, .external_lex_state = 1},
  [129] = {.lex_state = 74, .external_lex_state = 2},
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
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 74},
  [157] = {.lex_state = 74},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
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
    [sym__builtin_identifier] = ACTIONS(1),
    [sym__external_identifier] = ACTIONS(1),
    [sym__builtin_function_name] = ACTIONS(1),
    [aux_sym__external_function_name_token1] = ACTIONS(1),
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
    [sym_program] = STATE(158),
    [sym__statement] = STATE(101),
    [sym__simple_statement] = STATE(101),
    [sym__compound_statement] = STATE(101),
    [sym_command] = STATE(101),
    [sym_comment] = STATE(101),
    [sym_assignment] = STATE(101),
    [sym__typical_command] = STATE(118),
    [sym_keyword] = STATE(18),
    [sym_for_statement] = STATE(101),
    [sym_if_statement] = STATE(101),
    [sym_label] = STATE(105),
    [sym__write_read_command] = STATE(118),
    [aux_sym_program_repeat1] = STATE(101),
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
    [sym__expression] = STATE(43),
    [sym__identifier] = STATE(43),
    [sym__array] = STATE(43),
    [sym_local_array] = STATE(43),
    [sym_global_array] = STATE(43),
    [sym__variable] = STATE(43),
    [sym_local_variable] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_special_variable] = STATE(43),
    [sym__user_defined_identifier] = STATE(148),
    [sym__literal] = STATE(43),
    [sym_boolean] = STATE(43),
    [anon_sym_EQ] = ACTIONS(17),
    [sym__variable_name] = ACTIONS(19),
    [sym_global_variable] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_SQUOTE_GT] = ACTIONS(17),
    [anon_sym_SQUOTE_LT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_EQ] = ACTIONS(17),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(17),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(27),
    [sym__builtin_identifier] = ACTIONS(29),
    [sym__external_identifier] = ACTIONS(31),
    [aux_sym__external_function_name_token1] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_format_specifier] = ACTIONS(35),
  },
  [3] = {
    [sym_array_index] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [aux_sym_keyword_token1] = ACTIONS(41),
    [aux_sym_for_statement_token1] = ACTIONS(41),
    [aux_sym_if_statement_token1] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym__eol_comment] = ACTIONS(39),
    [sym__variable_name] = ACTIONS(41),
    [sym_global_variable] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_STAR_STAR] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_SQUOTE_GT] = ACTIONS(39),
    [anon_sym_SQUOTE_LT] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE_EQ] = ACTIONS(39),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(39),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(41),
    [aux_sym__write_read_command_token1] = ACTIONS(41),
    [sym__builtin_identifier] = ACTIONS(39),
    [sym__external_identifier] = ACTIONS(41),
    [aux_sym__external_function_name_token1] = ACTIONS(41),
    [sym__set] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_format_specifier] = ACTIONS(41),
    [sym__line_comment] = ACTIONS(39),
    [sym__label] = ACTIONS(39),
  },
  [4] = {
    [sym__function_arguments] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [aux_sym_keyword_token1] = ACTIONS(47),
    [aux_sym_for_statement_token1] = ACTIONS(47),
    [aux_sym_if_statement_token1] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [sym__eol_comment] = ACTIONS(45),
    [sym__variable_name] = ACTIONS(47),
    [sym_global_variable] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_STAR_STAR] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_SQUOTE_GT] = ACTIONS(45),
    [anon_sym_SQUOTE_LT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE_EQ] = ACTIONS(45),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(47),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(45),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(45),
    [anon_sym__] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(47),
    [aux_sym__write_read_command_token1] = ACTIONS(47),
    [sym__builtin_identifier] = ACTIONS(45),
    [sym__external_identifier] = ACTIONS(47),
    [aux_sym__external_function_name_token1] = ACTIONS(47),
    [sym__set] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym_format_specifier] = ACTIONS(47),
    [sym__line_comment] = ACTIONS(45),
    [sym__label] = ACTIONS(45),
  },
  [5] = {
    [sym_array_index] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [aux_sym_keyword_token1] = ACTIONS(53),
    [aux_sym_for_statement_token1] = ACTIONS(53),
    [aux_sym_if_statement_token1] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(43),
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
    [sym__builtin_identifier] = ACTIONS(51),
    [sym__external_identifier] = ACTIONS(53),
    [aux_sym__external_function_name_token1] = ACTIONS(53),
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
  [6] = {
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
    [sym__builtin_identifier] = ACTIONS(55),
    [sym__external_identifier] = ACTIONS(57),
    [aux_sym__external_function_name_token1] = ACTIONS(57),
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
  [7] = {
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
    [sym__builtin_identifier] = ACTIONS(59),
    [sym__external_identifier] = ACTIONS(61),
    [aux_sym__external_function_name_token1] = ACTIONS(61),
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
  [8] = {
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
    [sym__builtin_identifier] = ACTIONS(63),
    [sym__external_identifier] = ACTIONS(65),
    [aux_sym__external_function_name_token1] = ACTIONS(65),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [aux_sym_keyword_token1] = ACTIONS(69),
    [aux_sym_for_statement_token1] = ACTIONS(69),
    [aux_sym_if_statement_token1] = ACTIONS(69),
    [sym__eol_comment] = ACTIONS(67),
    [sym__variable_name] = ACTIONS(61),
    [sym_global_variable] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(61),
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
    [sym__builtin_identifier] = ACTIONS(59),
    [sym__external_identifier] = ACTIONS(61),
    [aux_sym__external_function_name_token1] = ACTIONS(61),
    [sym__set] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [sym_format_specifier] = ACTIONS(61),
    [sym__line_comment] = ACTIONS(67),
    [sym__label] = ACTIONS(67),
  },
  [10] = {
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
    [sym__builtin_identifier] = ACTIONS(71),
    [sym__external_identifier] = ACTIONS(73),
    [aux_sym__external_function_name_token1] = ACTIONS(73),
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
  [11] = {
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
    [sym__builtin_identifier] = ACTIONS(75),
    [sym__external_identifier] = ACTIONS(77),
    [aux_sym__external_function_name_token1] = ACTIONS(77),
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
  [12] = {
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
    [sym__builtin_identifier] = ACTIONS(79),
    [sym__external_identifier] = ACTIONS(81),
    [aux_sym__external_function_name_token1] = ACTIONS(81),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [aux_sym_keyword_token1] = ACTIONS(85),
    [aux_sym_for_statement_token1] = ACTIONS(85),
    [aux_sym_if_statement_token1] = ACTIONS(85),
    [sym__eol_comment] = ACTIONS(83),
    [sym__variable_name] = ACTIONS(85),
    [sym_global_variable] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_STAR_STAR] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_SQUOTE_GT] = ACTIONS(83),
    [anon_sym_SQUOTE_LT] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(83),
    [anon_sym_SQUOTE_EQ] = ACTIONS(83),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(83),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(85),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(83),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(85),
    [aux_sym__write_read_command_token1] = ACTIONS(85),
    [sym__builtin_identifier] = ACTIONS(83),
    [sym__external_identifier] = ACTIONS(85),
    [aux_sym__external_function_name_token1] = ACTIONS(85),
    [sym__set] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_format_specifier] = ACTIONS(85),
    [sym__line_comment] = ACTIONS(83),
    [sym__label] = ACTIONS(83),
  },
  [14] = {
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
    [sym__builtin_identifier] = ACTIONS(67),
    [sym__external_identifier] = ACTIONS(69),
    [aux_sym__external_function_name_token1] = ACTIONS(69),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [aux_sym_keyword_token1] = ACTIONS(89),
    [aux_sym_for_statement_token1] = ACTIONS(89),
    [aux_sym_if_statement_token1] = ACTIONS(89),
    [sym__eol_comment] = ACTIONS(87),
    [sym__variable_name] = ACTIONS(89),
    [sym_global_variable] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_SQUOTE_GT] = ACTIONS(87),
    [anon_sym_SQUOTE_LT] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(87),
    [anon_sym_SQUOTE_EQ] = ACTIONS(87),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(87),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(89),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(87),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(89),
    [aux_sym__write_read_command_token1] = ACTIONS(89),
    [sym__builtin_identifier] = ACTIONS(87),
    [sym__external_identifier] = ACTIONS(89),
    [aux_sym__external_function_name_token1] = ACTIONS(89),
    [sym__set] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(87),
    [sym_string] = ACTIONS(87),
    [sym_format_specifier] = ACTIONS(89),
    [sym__line_comment] = ACTIONS(87),
    [sym__label] = ACTIONS(87),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(97), 7,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
    ACTIONS(91), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      sym_global_variable,
      sym__builtin_identifier,
      sym_float,
      sym_string,
    ACTIONS(95), 13,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      aux_sym__write_read_command_token1,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(93), 17,
      anon_sym_EQ,
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
  [54] = 13,
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
    STATE(18), 1,
      sym_keyword,
    STATE(105), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(125), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
    ACTIONS(99), 21,
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
  [125] = 15,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(21), 1,
      sym_postconditional,
    STATE(120), 1,
      sym_arguments,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(113), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(103), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(105), 5,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym__write_read_command_token1,
      sym__set,
    STATE(35), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [196] = 4,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_array_index,
    ACTIONS(41), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(39), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [243] = 4,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_array_index,
    ACTIONS(53), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(51), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [290] = 13,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(119), 1,
      sym_arguments,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(113), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(117), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(119), 5,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym__write_read_command_token1,
      sym__set,
    STATE(35), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [355] = 4,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__function_arguments,
    ACTIONS(47), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(45), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [402] = 4,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_array_index,
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
  [448] = 4,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_array_index,
    ACTIONS(41), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(39), 32,
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
  [494] = 2,
    ACTIONS(69), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(67), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [535] = 2,
    ACTIONS(65), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(63), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [576] = 2,
    ACTIONS(77), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(75), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [617] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__function_arguments,
    ACTIONS(47), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(45), 31,
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
  [662] = 2,
    ACTIONS(85), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(83), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [703] = 2,
    ACTIONS(81), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(79), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [744] = 2,
    ACTIONS(89), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(87), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [785] = 2,
    ACTIONS(61), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(59), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [826] = 2,
    ACTIONS(73), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(71), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [867] = 2,
    ACTIONS(57), 15,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(55), 21,
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
      sym__builtin_identifier,
      sym_float,
      sym_string,
  [908] = 5,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(99), 21,
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
  [954] = 5,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(131), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(99), 21,
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
  [1000] = 2,
    ACTIONS(85), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(83), 32,
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
  [1040] = 2,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(63), 32,
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
  [1080] = 2,
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
  [1120] = 2,
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
  [1160] = 2,
    ACTIONS(81), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(79), 32,
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
  [1200] = 5,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(135), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(99), 21,
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
  [1246] = 3,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(137), 10,
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
    ACTIONS(99), 21,
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
  [1287] = 2,
    ACTIONS(61), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(59), 31,
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
  [1326] = 2,
    ACTIONS(89), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(87), 31,
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
  [1365] = 2,
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
  [1404] = 2,
    ACTIONS(69), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 31,
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
  [1443] = 3,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(139), 10,
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
    ACTIONS(99), 21,
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
  [1484] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__function_arguments,
    ACTIONS(47), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(45), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1525] = 4,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_array_index,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(51), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1566] = 4,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_array_index,
    ACTIONS(41), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(39), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1607] = 15,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(145), 1,
      aux_sym_keyword_token1,
    ACTIONS(147), 1,
      aux_sym_for_statement_token1,
    ACTIONS(149), 1,
      aux_sym_if_statement_token1,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(155), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(157), 1,
      sym__builtin_identifier,
    ACTIONS(159), 1,
      sym__set,
    STATE(18), 1,
      sym_keyword,
    STATE(105), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(157), 7,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_special_variable,
    STATE(123), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
  [1668] = 2,
    ACTIONS(61), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(59), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1703] = 2,
    ACTIONS(81), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(79), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1738] = 2,
    ACTIONS(89), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(87), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1773] = 2,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(67), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1808] = 2,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(75), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1843] = 2,
    ACTIONS(85), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(83), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1878] = 2,
    ACTIONS(73), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(71), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1913] = 2,
    ACTIONS(65), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(63), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1948] = 2,
    ACTIONS(57), 4,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__builtin_identifier,
    ACTIONS(55), 26,
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
      aux_sym_lvalue_function_call_token1,
  [1983] = 11,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    STATE(161), 1,
      sym_arguments,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(93), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2035] = 11,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    STATE(160), 1,
      sym_arguments,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(93), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2087] = 11,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(121), 1,
      sym_arguments,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(113), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(35), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2139] = 11,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    STATE(162), 1,
      sym_arguments,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(93), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2191] = 11,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(93), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2243] = 11,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    STATE(159), 1,
      sym_arguments,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(93), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2295] = 10,
    ACTIONS(173), 1,
      sym__variable_name,
    ACTIONS(175), 1,
      sym_global_variable,
    ACTIONS(179), 1,
      sym__builtin_identifier,
    STATE(144), 1,
      sym__user_defined_identifier,
    ACTIONS(181), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(187), 2,
      sym_float,
      sym_string,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(9), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2344] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(189), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(191), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(99), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2393] = 10,
    ACTIONS(193), 1,
      sym__variable_name,
    ACTIONS(195), 1,
      sym_global_variable,
    ACTIONS(199), 1,
      sym__builtin_identifier,
    STATE(147), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(207), 2,
      sym_float,
      sym_string,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(32), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2442] = 4,
    ACTIONS(95), 1,
      sym__builtin_identifier,
    ACTIONS(91), 3,
      sym__variable_name,
      sym_global_variable,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [2479] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(215), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(47), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2528] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(219), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(71), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2577] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(223), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(92), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2626] = 10,
    ACTIONS(193), 1,
      sym__variable_name,
    ACTIONS(195), 1,
      sym_global_variable,
    ACTIONS(199), 1,
      sym__builtin_identifier,
    STATE(147), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(225), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(227), 2,
      sym_float,
      sym_string,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(25), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2675] = 10,
    ACTIONS(173), 1,
      sym__variable_name,
    ACTIONS(175), 1,
      sym_global_variable,
    ACTIONS(179), 1,
      sym__builtin_identifier,
    STATE(144), 1,
      sym__user_defined_identifier,
    ACTIONS(181), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(229), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(231), 2,
      sym_float,
      sym_string,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(7), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2724] = 10,
    ACTIONS(193), 1,
      sym__variable_name,
    ACTIONS(195), 1,
      sym_global_variable,
    ACTIONS(199), 1,
      sym__builtin_identifier,
    STATE(147), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(233), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(235), 2,
      sym_float,
      sym_string,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(2), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2773] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(237), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(239), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(42), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2822] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(241), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(243), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(17), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2871] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(245), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(247), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(44), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2920] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(249), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(251), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(48), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [2969] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(253), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(255), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(94), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3018] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(257), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(259), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(95), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3067] = 10,
    ACTIONS(173), 1,
      sym__variable_name,
    ACTIONS(175), 1,
      sym_global_variable,
    ACTIONS(179), 1,
      sym__builtin_identifier,
    STATE(144), 1,
      sym__user_defined_identifier,
    ACTIONS(181), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(261), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(263), 2,
      sym_float,
      sym_string,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(14), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3116] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(265), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(267), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(56), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3165] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(269), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(271), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(97), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3214] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(273), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(275), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(96), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3263] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(279), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(98), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3312] = 10,
    ACTIONS(173), 1,
      sym__variable_name,
    ACTIONS(175), 1,
      sym_global_variable,
    ACTIONS(179), 1,
      sym__builtin_identifier,
    STATE(144), 1,
      sym__user_defined_identifier,
    ACTIONS(181), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(183), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(281), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(283), 2,
      sym_float,
      sym_string,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(16), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3361] = 10,
    ACTIONS(151), 1,
      sym__variable_name,
    ACTIONS(153), 1,
      sym_global_variable,
    ACTIONS(163), 1,
      sym__builtin_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(165), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(287), 2,
      sym_float,
      sym_string,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(53), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3410] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    STATE(148), 1,
      sym__user_defined_identifier,
    ACTIONS(31), 2,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(291), 2,
      sym_float,
      sym_string,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(36), 13,
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
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3459] = 5,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3497] = 5,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3535] = 5,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3573] = 5,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3611] = 5,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3649] = 5,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3687] = 3,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3720] = 3,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(209), 21,
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
  [3753] = 2,
    ACTIONS(309), 12,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      anon_sym_COLON,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym__builtin_identifier,
      sym_float,
      sym_string,
    ACTIONS(311), 12,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__variable_name,
      aux_sym__write_read_command_token1,
      sym__external_identifier,
      aux_sym__external_function_name_token1,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
  [3782] = 12,
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
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_keyword,
    STATE(105), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(102), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      aux_sym_program_repeat1,
  [3829] = 12,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 1,
      aux_sym_keyword_token1,
    ACTIONS(320), 1,
      aux_sym_for_statement_token1,
    ACTIONS(323), 1,
      aux_sym_if_statement_token1,
    ACTIONS(329), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(332), 1,
      sym__set,
    ACTIONS(335), 1,
      sym__label,
    STATE(18), 1,
      sym_keyword,
    STATE(105), 1,
      sym_label,
    ACTIONS(326), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(102), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      aux_sym_program_repeat1,
  [3876] = 11,
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
    STATE(18), 1,
      sym_keyword,
    STATE(105), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(122), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
  [3919] = 8,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(338), 1,
      sym__builtin_identifier,
    STATE(103), 1,
      sym__loop_range,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(340), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(342), 2,
      sym_float,
      sym_string,
    STATE(116), 8,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [3954] = 9,
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
    STATE(18), 1,
      sym_keyword,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(127), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
  [3990] = 7,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(338), 1,
      sym__builtin_identifier,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(344), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(346), 2,
      sym_float,
      sym_string,
    STATE(124), 8,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_special_variable,
      sym__literal,
      sym_boolean,
  [4022] = 7,
    ACTIONS(348), 1,
      anon_sym_COLON,
    ACTIONS(350), 1,
      sym__variable_name,
    ACTIONS(352), 1,
      sym_global_variable,
    ACTIONS(354), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(356), 1,
      sym__builtin_identifier,
    STATE(108), 1,
      sym_postconditional,
    STATE(149), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4050] = 5,
    ACTIONS(350), 1,
      sym__variable_name,
    ACTIONS(352), 1,
      sym_global_variable,
    ACTIONS(354), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(356), 1,
      sym__builtin_identifier,
    STATE(142), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4072] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(358), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4090] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(363), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4108] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(365), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4126] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(370), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4144] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(372), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4162] = 5,
    ACTIONS(350), 1,
      sym__variable_name,
    ACTIONS(352), 1,
      sym_global_variable,
    ACTIONS(354), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(356), 1,
      sym__builtin_identifier,
    STATE(145), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4184] = 3,
    ACTIONS(376), 1,
      anon_sym_COLON,
    STATE(115), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(374), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4201] = 3,
    ACTIONS(381), 1,
      anon_sym_COLON,
    STATE(117), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(379), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4218] = 3,
    ACTIONS(381), 1,
      anon_sym_COLON,
    STATE(115), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(383), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4235] = 1,
    ACTIONS(385), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4247] = 1,
    ACTIONS(387), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4259] = 1,
    ACTIONS(117), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4271] = 1,
    ACTIONS(389), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4283] = 1,
    ACTIONS(391), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4295] = 1,
    ACTIONS(393), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4307] = 1,
    ACTIONS(374), 9,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      aux_sym__write_read_command_token1,
      sym__set,
  [4319] = 1,
    ACTIONS(395), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4331] = 1,
    ACTIONS(397), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4343] = 1,
    ACTIONS(399), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4355] = 1,
    ACTIONS(45), 9,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      aux_sym__write_read_command_token1,
      sym__set,
  [4367] = 1,
    ACTIONS(401), 7,
      sym__line_comment,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4377] = 4,
    ACTIONS(39), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_array_index,
  [4390] = 4,
    ACTIONS(51), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_array_index,
  [4403] = 3,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4413] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4423] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4433] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4443] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4453] = 3,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_arguments_repeat1,
  [4463] = 3,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_arguments_repeat1,
  [4473] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4483] = 2,
    ACTIONS(45), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(47), 1,
      anon_sym_EQ,
  [4490] = 2,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__function_arguments,
  [4497] = 2,
    ACTIONS(423), 1,
      anon_sym_EQ,
    ACTIONS(425), 1,
      anon_sym_EQ_PLUS,
  [4504] = 2,
    ACTIONS(63), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(65), 1,
      anon_sym_EQ,
  [4511] = 2,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__function_arguments,
  [4518] = 2,
    ACTIONS(427), 1,
      anon_sym_EQ,
    ACTIONS(429), 1,
      anon_sym_EQ_PLUS,
  [4525] = 2,
    ACTIONS(71), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(73), 1,
      anon_sym_EQ,
  [4532] = 2,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__function_arguments,
  [4539] = 2,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__function_arguments,
  [4546] = 2,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_EQ_PLUS,
  [4553] = 2,
    ACTIONS(435), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ_PLUS,
  [4560] = 2,
    ACTIONS(79), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(81), 1,
      anon_sym_EQ,
  [4567] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [4574] = 2,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym__function_arguments,
  [4581] = 2,
    ACTIONS(55), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(57), 1,
      anon_sym_EQ,
  [4588] = 1,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [4592] = 1,
    ACTIONS(45), 1,
      anon_sym_EQ,
  [4596] = 1,
    ACTIONS(443), 1,
      anon_sym_EQ,
  [4600] = 1,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
  [4604] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [4608] = 1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [4612] = 1,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [4616] = 1,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 54,
  [SMALL_STATE(18)] = 125,
  [SMALL_STATE(19)] = 196,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 355,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 448,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 535,
  [SMALL_STATE(27)] = 576,
  [SMALL_STATE(28)] = 617,
  [SMALL_STATE(29)] = 662,
  [SMALL_STATE(30)] = 703,
  [SMALL_STATE(31)] = 744,
  [SMALL_STATE(32)] = 785,
  [SMALL_STATE(33)] = 826,
  [SMALL_STATE(34)] = 867,
  [SMALL_STATE(35)] = 908,
  [SMALL_STATE(36)] = 954,
  [SMALL_STATE(37)] = 1000,
  [SMALL_STATE(38)] = 1040,
  [SMALL_STATE(39)] = 1080,
  [SMALL_STATE(40)] = 1120,
  [SMALL_STATE(41)] = 1160,
  [SMALL_STATE(42)] = 1200,
  [SMALL_STATE(43)] = 1246,
  [SMALL_STATE(44)] = 1287,
  [SMALL_STATE(45)] = 1326,
  [SMALL_STATE(46)] = 1365,
  [SMALL_STATE(47)] = 1404,
  [SMALL_STATE(48)] = 1443,
  [SMALL_STATE(49)] = 1484,
  [SMALL_STATE(50)] = 1525,
  [SMALL_STATE(51)] = 1566,
  [SMALL_STATE(52)] = 1607,
  [SMALL_STATE(53)] = 1668,
  [SMALL_STATE(54)] = 1703,
  [SMALL_STATE(55)] = 1738,
  [SMALL_STATE(56)] = 1773,
  [SMALL_STATE(57)] = 1808,
  [SMALL_STATE(58)] = 1843,
  [SMALL_STATE(59)] = 1878,
  [SMALL_STATE(60)] = 1913,
  [SMALL_STATE(61)] = 1948,
  [SMALL_STATE(62)] = 1983,
  [SMALL_STATE(63)] = 2035,
  [SMALL_STATE(64)] = 2087,
  [SMALL_STATE(65)] = 2139,
  [SMALL_STATE(66)] = 2191,
  [SMALL_STATE(67)] = 2243,
  [SMALL_STATE(68)] = 2295,
  [SMALL_STATE(69)] = 2344,
  [SMALL_STATE(70)] = 2393,
  [SMALL_STATE(71)] = 2442,
  [SMALL_STATE(72)] = 2479,
  [SMALL_STATE(73)] = 2528,
  [SMALL_STATE(74)] = 2577,
  [SMALL_STATE(75)] = 2626,
  [SMALL_STATE(76)] = 2675,
  [SMALL_STATE(77)] = 2724,
  [SMALL_STATE(78)] = 2773,
  [SMALL_STATE(79)] = 2822,
  [SMALL_STATE(80)] = 2871,
  [SMALL_STATE(81)] = 2920,
  [SMALL_STATE(82)] = 2969,
  [SMALL_STATE(83)] = 3018,
  [SMALL_STATE(84)] = 3067,
  [SMALL_STATE(85)] = 3116,
  [SMALL_STATE(86)] = 3165,
  [SMALL_STATE(87)] = 3214,
  [SMALL_STATE(88)] = 3263,
  [SMALL_STATE(89)] = 3312,
  [SMALL_STATE(90)] = 3361,
  [SMALL_STATE(91)] = 3410,
  [SMALL_STATE(92)] = 3459,
  [SMALL_STATE(93)] = 3497,
  [SMALL_STATE(94)] = 3535,
  [SMALL_STATE(95)] = 3573,
  [SMALL_STATE(96)] = 3611,
  [SMALL_STATE(97)] = 3649,
  [SMALL_STATE(98)] = 3687,
  [SMALL_STATE(99)] = 3720,
  [SMALL_STATE(100)] = 3753,
  [SMALL_STATE(101)] = 3782,
  [SMALL_STATE(102)] = 3829,
  [SMALL_STATE(103)] = 3876,
  [SMALL_STATE(104)] = 3919,
  [SMALL_STATE(105)] = 3954,
  [SMALL_STATE(106)] = 3990,
  [SMALL_STATE(107)] = 4022,
  [SMALL_STATE(108)] = 4050,
  [SMALL_STATE(109)] = 4072,
  [SMALL_STATE(110)] = 4090,
  [SMALL_STATE(111)] = 4108,
  [SMALL_STATE(112)] = 4126,
  [SMALL_STATE(113)] = 4144,
  [SMALL_STATE(114)] = 4162,
  [SMALL_STATE(115)] = 4184,
  [SMALL_STATE(116)] = 4201,
  [SMALL_STATE(117)] = 4218,
  [SMALL_STATE(118)] = 4235,
  [SMALL_STATE(119)] = 4247,
  [SMALL_STATE(120)] = 4259,
  [SMALL_STATE(121)] = 4271,
  [SMALL_STATE(122)] = 4283,
  [SMALL_STATE(123)] = 4295,
  [SMALL_STATE(124)] = 4307,
  [SMALL_STATE(125)] = 4319,
  [SMALL_STATE(126)] = 4331,
  [SMALL_STATE(127)] = 4343,
  [SMALL_STATE(128)] = 4355,
  [SMALL_STATE(129)] = 4367,
  [SMALL_STATE(130)] = 4377,
  [SMALL_STATE(131)] = 4390,
  [SMALL_STATE(132)] = 4403,
  [SMALL_STATE(133)] = 4413,
  [SMALL_STATE(134)] = 4423,
  [SMALL_STATE(135)] = 4433,
  [SMALL_STATE(136)] = 4443,
  [SMALL_STATE(137)] = 4453,
  [SMALL_STATE(138)] = 4463,
  [SMALL_STATE(139)] = 4473,
  [SMALL_STATE(140)] = 4483,
  [SMALL_STATE(141)] = 4490,
  [SMALL_STATE(142)] = 4497,
  [SMALL_STATE(143)] = 4504,
  [SMALL_STATE(144)] = 4511,
  [SMALL_STATE(145)] = 4518,
  [SMALL_STATE(146)] = 4525,
  [SMALL_STATE(147)] = 4532,
  [SMALL_STATE(148)] = 4539,
  [SMALL_STATE(149)] = 4546,
  [SMALL_STATE(150)] = 4553,
  [SMALL_STATE(151)] = 4560,
  [SMALL_STATE(152)] = 4567,
  [SMALL_STATE(153)] = 4574,
  [SMALL_STATE(154)] = 4581,
  [SMALL_STATE(155)] = 4588,
  [SMALL_STATE(156)] = 4592,
  [SMALL_STATE(157)] = 4596,
  [SMALL_STATE(158)] = 4600,
  [SMALL_STATE(159)] = 4604,
  [SMALL_STATE(160)] = 4608,
  [SMALL_STATE(161)] = 4612,
  [SMALL_STATE(162)] = 4616,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_variable, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_variable, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_array, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_array, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 7),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 5, .production_id = 15),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 8),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(100),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(129),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14), SHIFT_REPEAT(114),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 13),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6), SHIFT_REPEAT(81),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 10),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(106),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_command, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12), SHIFT_REPEAT(69),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6), SHIFT_REPEAT(88),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_function_call, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_function_call, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [445] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
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
