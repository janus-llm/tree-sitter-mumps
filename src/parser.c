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
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 89
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
  sym__builtin_identifier = 39,
  sym__external_identifier = 40,
  sym__user_defined_identifier = 41,
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
  sym_special_variable = 81,
  sym__literal = 82,
  sym_boolean = 83,
  aux_sym_program_repeat1 = 84,
  aux_sym_assignment_repeat1 = 85,
  aux_sym_arguments_repeat1 = 86,
  aux_sym__loop_range_repeat1 = 87,
  aux_sym_array_index_repeat1 = 88,
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
  [sym__user_defined_identifier] = "_user_defined_identifier",
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
  [sym__user_defined_identifier] = sym__user_defined_identifier,
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
  [sym__user_defined_identifier] = {
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
  [sym_special_variable] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 3,
  [20] = 5,
  [21] = 4,
  [22] = 5,
  [23] = 3,
  [24] = 24,
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
  [49] = 5,
  [50] = 3,
  [51] = 4,
  [52] = 13,
  [53] = 53,
  [54] = 7,
  [55] = 12,
  [56] = 15,
  [57] = 14,
  [58] = 11,
  [59] = 10,
  [60] = 8,
  [61] = 6,
  [62] = 62,
  [63] = 62,
  [64] = 62,
  [65] = 16,
  [66] = 66,
  [67] = 62,
  [68] = 62,
  [69] = 69,
  [70] = 70,
  [71] = 69,
  [72] = 69,
  [73] = 69,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 75,
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 75,
  [85] = 75,
  [86] = 76,
  [87] = 74,
  [88] = 35,
  [89] = 82,
  [90] = 69,
  [91] = 76,
  [92] = 92,
  [93] = 93,
  [94] = 74,
  [95] = 81,
  [96] = 76,
  [97] = 76,
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
  [137] = 108,
  [138] = 114,
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
      if (eof) ADVANCE(68);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ';') ADVANCE(153);
      if (lookahead == '<') ADVANCE(288);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(294);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'S') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == 'W') ADVANCE(161);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'w') ADVANCE(198);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(86);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(83);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(92);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(79);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == ';') ADVANCE(339);
      if (lookahead == '<') ADVANCE(288);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(294);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 't') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(303);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(288);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == '_') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 't') ADVANCE(201);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(338);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(223);
      if (lookahead == 'S') ADVANCE(274);
      if (lookahead == 'W') ADVANCE(225);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 'w') ADVANCE(258);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(119);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(115);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(101);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(100);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(274);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(311);
      if (lookahead == 'P') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(290);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(289);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == ']') ADVANCE(298);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(305);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(311);
      if (lookahead == 'P') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(133);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'w') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'O' ||
          lookahead == 'e' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 62:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == ';') ADVANCE(153);
      if (lookahead == '<') ADVANCE(288);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(294);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'S') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == 'W') ADVANCE(161);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'w') ADVANCE(198);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(86);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(83);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(92);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(79);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '!') ADVANCE(303);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '<') ADVANCE(288);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead == 'S') ADVANCE(325);
      if (lookahead == 'W') ADVANCE(307);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == 'w') ADVANCE(309);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(122);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(111);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(104);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(99);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '+') ADVANCE(276);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ';') ADVANCE(153);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'S') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == 'W') ADVANCE(161);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'w') ADVANCE(198);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(86);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(83);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(92);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(79);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(93);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(339);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '%') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(226);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'F') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(142);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'A') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'D') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'E') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'E') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'I') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'k') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'w') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(218);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'O' ||
          lookahead == 'e' ||
          lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'D') ADVANCE(274);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(220);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(224);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(141);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(222);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(267);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(132);
      if (lookahead == 'R') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E' ||
          lookahead == 'O' ||
          lookahead == 'e' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(290);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(289);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(297);
      if (lookahead == ']') ADVANCE(298);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(286);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__write_read_command_token1);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'I') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'X') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'A') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'R') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__external_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__user_defined_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__user_defined_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '_') ADVANCE(332);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '_') ADVANCE(332);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '_') ADVANCE(332);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(337);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(339);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 66, .external_lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 65, .external_lex_state = 1},
  [4] = {.lex_state = 65, .external_lex_state = 1},
  [5] = {.lex_state = 65, .external_lex_state = 1},
  [6] = {.lex_state = 65, .external_lex_state = 1},
  [7] = {.lex_state = 65, .external_lex_state = 1},
  [8] = {.lex_state = 65, .external_lex_state = 1},
  [9] = {.lex_state = 65, .external_lex_state = 1},
  [10] = {.lex_state = 65, .external_lex_state = 1},
  [11] = {.lex_state = 65, .external_lex_state = 1},
  [12] = {.lex_state = 65, .external_lex_state = 1},
  [13] = {.lex_state = 65, .external_lex_state = 1},
  [14] = {.lex_state = 65, .external_lex_state = 1},
  [15] = {.lex_state = 65, .external_lex_state = 1},
  [16] = {.lex_state = 65, .external_lex_state = 1},
  [17] = {.lex_state = 66, .external_lex_state = 1},
  [18] = {.lex_state = 67, .external_lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 66, .external_lex_state = 1},
  [23] = {.lex_state = 66, .external_lex_state = 1},
  [24] = {.lex_state = 67, .external_lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 66, .external_lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 66, .external_lex_state = 1},
  [36] = {.lex_state = 66, .external_lex_state = 1},
  [37] = {.lex_state = 66, .external_lex_state = 1},
  [38] = {.lex_state = 66, .external_lex_state = 1},
  [39] = {.lex_state = 66, .external_lex_state = 1},
  [40] = {.lex_state = 66, .external_lex_state = 1},
  [41] = {.lex_state = 66, .external_lex_state = 1},
  [42] = {.lex_state = 66, .external_lex_state = 1},
  [43] = {.lex_state = 66, .external_lex_state = 1},
  [44] = {.lex_state = 66, .external_lex_state = 1},
  [45] = {.lex_state = 66, .external_lex_state = 1},
  [46] = {.lex_state = 66, .external_lex_state = 1},
  [47] = {.lex_state = 66, .external_lex_state = 1},
  [48] = {.lex_state = 66, .external_lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 5, .external_lex_state = 1},
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
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 66},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 66},
  [72] = {.lex_state = 66},
  [73] = {.lex_state = 66},
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
  [88] = {.lex_state = 66},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 66},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 66},
  [99] = {.lex_state = 66},
  [100] = {.lex_state = 67, .external_lex_state = 1},
  [101] = {.lex_state = 66, .external_lex_state = 1},
  [102] = {.lex_state = 66, .external_lex_state = 1},
  [103] = {.lex_state = 66, .external_lex_state = 1},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 66, .external_lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 66, .external_lex_state = 1},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 66, .external_lex_state = 1},
  [112] = {.lex_state = 66, .external_lex_state = 1},
  [113] = {.lex_state = 66, .external_lex_state = 1},
  [114] = {.lex_state = 66, .external_lex_state = 1},
  [115] = {.lex_state = 66, .external_lex_state = 1},
  [116] = {.lex_state = 66, .external_lex_state = 1},
  [117] = {.lex_state = 66, .external_lex_state = 1},
  [118] = {.lex_state = 66, .external_lex_state = 1},
  [119] = {.lex_state = 66, .external_lex_state = 1},
  [120] = {.lex_state = 66, .external_lex_state = 1},
  [121] = {.lex_state = 66, .external_lex_state = 1},
  [122] = {.lex_state = 66, .external_lex_state = 1},
  [123] = {.lex_state = 66, .external_lex_state = 1},
  [124] = {.lex_state = 66, .external_lex_state = 1},
  [125] = {.lex_state = 66, .external_lex_state = 1},
  [126] = {.lex_state = 66, .external_lex_state = 1},
  [127] = {.lex_state = 66, .external_lex_state = 1},
  [128] = {.lex_state = 66, .external_lex_state = 1},
  [129] = {.lex_state = 66, .external_lex_state = 2},
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
  [156] = {.lex_state = 66},
  [157] = {.lex_state = 66},
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
    [sym__user_defined_identifier] = ACTIONS(1),
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
    [sym__statement] = STATE(102),
    [sym__simple_statement] = STATE(102),
    [sym__compound_statement] = STATE(102),
    [sym_command] = STATE(102),
    [sym_comment] = STATE(102),
    [sym_assignment] = STATE(102),
    [sym__typical_command] = STATE(118),
    [sym_keyword] = STATE(18),
    [sym_for_statement] = STATE(102),
    [sym_if_statement] = STATE(102),
    [sym_label] = STATE(106),
    [sym__write_read_command] = STATE(118),
    [aux_sym_program_repeat1] = STATE(102),
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
    [sym__user_defined_identifier] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_format_specifier] = ACTIONS(37),
  },
  [3] = {
    [sym_array_index] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [aux_sym_keyword_token1] = ACTIONS(43),
    [aux_sym_for_statement_token1] = ACTIONS(43),
    [aux_sym_if_statement_token1] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym__eol_comment] = ACTIONS(41),
    [sym__variable_name] = ACTIONS(43),
    [sym_global_variable] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_STAR_STAR] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_SQUOTE_GT] = ACTIONS(41),
    [anon_sym_SQUOTE_LT] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_EQ] = ACTIONS(41),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(41),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [aux_sym__write_read_command_token1] = ACTIONS(43),
    [sym__builtin_identifier] = ACTIONS(41),
    [sym__external_identifier] = ACTIONS(41),
    [sym__user_defined_identifier] = ACTIONS(43),
    [sym__set] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [sym_format_specifier] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(41),
    [sym__label] = ACTIONS(41),
  },
  [4] = {
    [sym__function_arguments] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [aux_sym_keyword_token1] = ACTIONS(49),
    [aux_sym_for_statement_token1] = ACTIONS(49),
    [aux_sym_if_statement_token1] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
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
    [sym__builtin_identifier] = ACTIONS(47),
    [sym__external_identifier] = ACTIONS(47),
    [sym__user_defined_identifier] = ACTIONS(49),
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
  [5] = {
    [sym_array_index] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [aux_sym_keyword_token1] = ACTIONS(55),
    [aux_sym_for_statement_token1] = ACTIONS(55),
    [aux_sym_if_statement_token1] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym__eol_comment] = ACTIONS(53),
    [sym__variable_name] = ACTIONS(55),
    [sym_global_variable] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_SQUOTE_GT] = ACTIONS(53),
    [anon_sym_SQUOTE_LT] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_QMARK] = ACTIONS(55),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_EQ] = ACTIONS(53),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(55),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(53),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(55),
    [aux_sym__write_read_command_token1] = ACTIONS(55),
    [sym__builtin_identifier] = ACTIONS(53),
    [sym__external_identifier] = ACTIONS(53),
    [sym__user_defined_identifier] = ACTIONS(55),
    [sym__set] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [sym_format_specifier] = ACTIONS(55),
    [sym__line_comment] = ACTIONS(53),
    [sym__label] = ACTIONS(53),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [aux_sym_keyword_token1] = ACTIONS(59),
    [aux_sym_for_statement_token1] = ACTIONS(59),
    [aux_sym_if_statement_token1] = ACTIONS(59),
    [sym__eol_comment] = ACTIONS(57),
    [sym__variable_name] = ACTIONS(59),
    [sym_global_variable] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_SQUOTE_GT] = ACTIONS(57),
    [anon_sym_SQUOTE_LT] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_EQ] = ACTIONS(57),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(57),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(59),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(57),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(57),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(59),
    [aux_sym__write_read_command_token1] = ACTIONS(59),
    [sym__builtin_identifier] = ACTIONS(57),
    [sym__external_identifier] = ACTIONS(57),
    [sym__user_defined_identifier] = ACTIONS(59),
    [sym__set] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_format_specifier] = ACTIONS(59),
    [sym__line_comment] = ACTIONS(57),
    [sym__label] = ACTIONS(57),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [aux_sym_keyword_token1] = ACTIONS(63),
    [aux_sym_for_statement_token1] = ACTIONS(63),
    [aux_sym_if_statement_token1] = ACTIONS(63),
    [sym__eol_comment] = ACTIONS(61),
    [sym__variable_name] = ACTIONS(63),
    [sym_global_variable] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(63),
    [anon_sym_STAR_STAR] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_SQUOTE_GT] = ACTIONS(61),
    [anon_sym_SQUOTE_LT] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(61),
    [anon_sym_SQUOTE_EQ] = ACTIONS(61),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(61),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(61),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(61),
    [anon_sym__] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(63),
    [aux_sym__write_read_command_token1] = ACTIONS(63),
    [sym__builtin_identifier] = ACTIONS(61),
    [sym__external_identifier] = ACTIONS(61),
    [sym__user_defined_identifier] = ACTIONS(63),
    [sym__set] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [sym_format_specifier] = ACTIONS(63),
    [sym__line_comment] = ACTIONS(61),
    [sym__label] = ACTIONS(61),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [aux_sym_keyword_token1] = ACTIONS(67),
    [aux_sym_for_statement_token1] = ACTIONS(67),
    [aux_sym_if_statement_token1] = ACTIONS(67),
    [sym__eol_comment] = ACTIONS(65),
    [sym__variable_name] = ACTIONS(67),
    [sym_global_variable] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_STAR_STAR] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_SQUOTE_GT] = ACTIONS(65),
    [anon_sym_SQUOTE_LT] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_EQ] = ACTIONS(65),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(65),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(65),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(67),
    [aux_sym__write_read_command_token1] = ACTIONS(67),
    [sym__builtin_identifier] = ACTIONS(65),
    [sym__external_identifier] = ACTIONS(65),
    [sym__user_defined_identifier] = ACTIONS(67),
    [sym__set] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_integer] = ACTIONS(67),
    [sym_float] = ACTIONS(65),
    [sym_string] = ACTIONS(65),
    [sym_format_specifier] = ACTIONS(67),
    [sym__line_comment] = ACTIONS(65),
    [sym__label] = ACTIONS(65),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [aux_sym_keyword_token1] = ACTIONS(71),
    [aux_sym_for_statement_token1] = ACTIONS(71),
    [aux_sym_if_statement_token1] = ACTIONS(71),
    [sym__eol_comment] = ACTIONS(69),
    [sym__variable_name] = ACTIONS(63),
    [sym_global_variable] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_STAR_STAR] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_SQUOTE_GT] = ACTIONS(69),
    [anon_sym_SQUOTE_LT] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(69),
    [anon_sym_SQUOTE_EQ] = ACTIONS(69),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(69),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(69),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(71),
    [aux_sym__write_read_command_token1] = ACTIONS(71),
    [sym__builtin_identifier] = ACTIONS(61),
    [sym__external_identifier] = ACTIONS(61),
    [sym__user_defined_identifier] = ACTIONS(63),
    [sym__set] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [sym_format_specifier] = ACTIONS(63),
    [sym__line_comment] = ACTIONS(69),
    [sym__label] = ACTIONS(69),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [aux_sym_keyword_token1] = ACTIONS(75),
    [aux_sym_for_statement_token1] = ACTIONS(75),
    [aux_sym_if_statement_token1] = ACTIONS(75),
    [sym__eol_comment] = ACTIONS(73),
    [sym__variable_name] = ACTIONS(75),
    [sym_global_variable] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_STAR_STAR] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_SQUOTE_GT] = ACTIONS(73),
    [anon_sym_SQUOTE_LT] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(73),
    [anon_sym_SQUOTE_EQ] = ACTIONS(73),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(73),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(73),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(75),
    [aux_sym__write_read_command_token1] = ACTIONS(75),
    [sym__builtin_identifier] = ACTIONS(73),
    [sym__external_identifier] = ACTIONS(73),
    [sym__user_defined_identifier] = ACTIONS(75),
    [sym__set] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [sym_integer] = ACTIONS(75),
    [sym_float] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_format_specifier] = ACTIONS(75),
    [sym__line_comment] = ACTIONS(73),
    [sym__label] = ACTIONS(73),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [aux_sym_keyword_token1] = ACTIONS(79),
    [aux_sym_for_statement_token1] = ACTIONS(79),
    [aux_sym_if_statement_token1] = ACTIONS(79),
    [sym__eol_comment] = ACTIONS(77),
    [sym__variable_name] = ACTIONS(79),
    [sym_global_variable] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_SQUOTE_GT] = ACTIONS(77),
    [anon_sym_SQUOTE_LT] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(77),
    [anon_sym_SQUOTE_EQ] = ACTIONS(77),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(77),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(79),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(77),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(79),
    [aux_sym__write_read_command_token1] = ACTIONS(79),
    [sym__builtin_identifier] = ACTIONS(77),
    [sym__external_identifier] = ACTIONS(77),
    [sym__user_defined_identifier] = ACTIONS(79),
    [sym__set] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_format_specifier] = ACTIONS(79),
    [sym__line_comment] = ACTIONS(77),
    [sym__label] = ACTIONS(77),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [aux_sym_keyword_token1] = ACTIONS(83),
    [aux_sym_for_statement_token1] = ACTIONS(83),
    [aux_sym_if_statement_token1] = ACTIONS(83),
    [sym__eol_comment] = ACTIONS(81),
    [sym__variable_name] = ACTIONS(83),
    [sym_global_variable] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_STAR_STAR] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_SQUOTE_GT] = ACTIONS(81),
    [anon_sym_SQUOTE_LT] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(81),
    [anon_sym_SQUOTE_EQ] = ACTIONS(81),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(81),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(83),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(81),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(83),
    [aux_sym__write_read_command_token1] = ACTIONS(83),
    [sym__builtin_identifier] = ACTIONS(81),
    [sym__external_identifier] = ACTIONS(81),
    [sym__user_defined_identifier] = ACTIONS(83),
    [sym__set] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [sym_float] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [sym_format_specifier] = ACTIONS(83),
    [sym__line_comment] = ACTIONS(81),
    [sym__label] = ACTIONS(81),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [aux_sym_keyword_token1] = ACTIONS(87),
    [aux_sym_for_statement_token1] = ACTIONS(87),
    [aux_sym_if_statement_token1] = ACTIONS(87),
    [sym__eol_comment] = ACTIONS(85),
    [sym__variable_name] = ACTIONS(87),
    [sym_global_variable] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_STAR_STAR] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_SQUOTE_GT] = ACTIONS(85),
    [anon_sym_SQUOTE_LT] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(87),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(85),
    [anon_sym_SQUOTE_EQ] = ACTIONS(85),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(85),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(87),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(85),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(87),
    [aux_sym__write_read_command_token1] = ACTIONS(87),
    [sym__builtin_identifier] = ACTIONS(85),
    [sym__external_identifier] = ACTIONS(85),
    [sym__user_defined_identifier] = ACTIONS(87),
    [sym__set] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(85),
    [sym_string] = ACTIONS(85),
    [sym_format_specifier] = ACTIONS(87),
    [sym__line_comment] = ACTIONS(85),
    [sym__label] = ACTIONS(85),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [aux_sym_keyword_token1] = ACTIONS(71),
    [aux_sym_for_statement_token1] = ACTIONS(71),
    [aux_sym_if_statement_token1] = ACTIONS(71),
    [sym__eol_comment] = ACTIONS(69),
    [sym__variable_name] = ACTIONS(71),
    [sym_global_variable] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_STAR_STAR] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_SQUOTE_GT] = ACTIONS(69),
    [anon_sym_SQUOTE_LT] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(69),
    [anon_sym_SQUOTE_EQ] = ACTIONS(69),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(69),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(71),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(69),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(71),
    [aux_sym__write_read_command_token1] = ACTIONS(71),
    [sym__builtin_identifier] = ACTIONS(69),
    [sym__external_identifier] = ACTIONS(69),
    [sym__user_defined_identifier] = ACTIONS(71),
    [sym__set] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(71),
    [sym_float] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_format_specifier] = ACTIONS(71),
    [sym__line_comment] = ACTIONS(69),
    [sym__label] = ACTIONS(69),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [aux_sym_keyword_token1] = ACTIONS(91),
    [aux_sym_for_statement_token1] = ACTIONS(91),
    [aux_sym_if_statement_token1] = ACTIONS(91),
    [sym__eol_comment] = ACTIONS(89),
    [sym__variable_name] = ACTIONS(91),
    [sym_global_variable] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_BSLASH] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_STAR_STAR] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_SQUOTE_GT] = ACTIONS(89),
    [anon_sym_SQUOTE_LT] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(89),
    [anon_sym_SQUOTE_EQ] = ACTIONS(89),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(89),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(91),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(89),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(91),
    [aux_sym__write_read_command_token1] = ACTIONS(91),
    [sym__builtin_identifier] = ACTIONS(89),
    [sym__external_identifier] = ACTIONS(89),
    [sym__user_defined_identifier] = ACTIONS(91),
    [sym__set] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_format_specifier] = ACTIONS(91),
    [sym__line_comment] = ACTIONS(89),
    [sym__label] = ACTIONS(89),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(95),
    [aux_sym_keyword_token1] = ACTIONS(97),
    [aux_sym_for_statement_token1] = ACTIONS(97),
    [aux_sym_if_statement_token1] = ACTIONS(97),
    [sym__eol_comment] = ACTIONS(93),
    [sym__variable_name] = ACTIONS(97),
    [sym_global_variable] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_STAR_STAR] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_SQUOTE_GT] = ACTIONS(95),
    [anon_sym_SQUOTE_LT] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(95),
    [anon_sym_SQUOTE_EQ] = ACTIONS(95),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(95),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(99),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(95),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(99),
    [aux_sym__write_read_command_token1] = ACTIONS(97),
    [sym__builtin_identifier] = ACTIONS(93),
    [sym__external_identifier] = ACTIONS(93),
    [sym__user_defined_identifier] = ACTIONS(97),
    [sym__set] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [sym_integer] = ACTIONS(97),
    [sym_float] = ACTIONS(93),
    [sym_string] = ACTIONS(93),
    [sym_format_specifier] = ACTIONS(97),
    [sym__line_comment] = ACTIONS(93),
    [sym__label] = ACTIONS(93),
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
    STATE(18), 1,
      sym_keyword,
    STATE(106), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    ACTIONS(103), 3,
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
    ACTIONS(101), 21,
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
  [71] = 15,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    ACTIONS(109), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym_postconditional,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(115), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(105), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(107), 5,
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
  [141] = 4,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_array_index,
    ACTIONS(43), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(41), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [188] = 4,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_array_index,
    ACTIONS(55), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(53), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [235] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__function_arguments,
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
      sym__user_defined_identifier,
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
      sym__builtin_identifier,
      sym__external_identifier,
      sym_float,
      sym_string,
  [282] = 4,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_array_index,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(53), 32,
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
  [328] = 4,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_array_index,
    ACTIONS(43), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(41), 32,
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
  [374] = 13,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    STATE(119), 1,
      sym_arguments,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(115), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(123), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(125), 5,
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
  [438] = 2,
    ACTIONS(71), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(69), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [479] = 2,
    ACTIONS(67), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(65), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [520] = 2,
    ACTIONS(79), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(77), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [561] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__function_arguments,
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
  [606] = 2,
    ACTIONS(87), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(85), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [647] = 2,
    ACTIONS(83), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(81), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [688] = 2,
    ACTIONS(91), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(89), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [729] = 2,
    ACTIONS(63), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(61), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [770] = 2,
    ACTIONS(75), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(73), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [811] = 2,
    ACTIONS(59), 14,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__user_defined_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(57), 22,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [852] = 5,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(103), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(129), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(101), 21,
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
  [898] = 5,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(103), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(133), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(101), 21,
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
  [944] = 2,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(85), 32,
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
  [984] = 2,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(65), 32,
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
  [1024] = 2,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(73), 32,
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
  [1064] = 2,
    ACTIONS(79), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(77), 32,
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
  [1104] = 2,
    ACTIONS(83), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(81), 32,
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
  [1144] = 5,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(103), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(137), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
    ACTIONS(101), 21,
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
  [1190] = 3,
    ACTIONS(103), 3,
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
    ACTIONS(101), 21,
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
  [1231] = 2,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(61), 31,
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
  [1270] = 2,
    ACTIONS(91), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(89), 31,
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
  [1309] = 2,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(57), 31,
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
  [1348] = 2,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(69), 31,
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
  [1387] = 3,
    ACTIONS(103), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(141), 10,
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
    ACTIONS(101), 21,
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
  [1428] = 4,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_array_index,
    ACTIONS(55), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(53), 25,
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
  [1469] = 4,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_array_index,
    ACTIONS(43), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(41), 25,
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
  [1510] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym__function_arguments,
    ACTIONS(49), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [1551] = 2,
    ACTIONS(87), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(85), 25,
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
  [1586] = 15,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(147), 1,
      aux_sym_keyword_token1,
    ACTIONS(149), 1,
      aux_sym_for_statement_token1,
    ACTIONS(151), 1,
      aux_sym_if_statement_token1,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(157), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(159), 1,
      sym__builtin_identifier,
    ACTIONS(161), 1,
      sym__set,
    STATE(18), 1,
      sym_keyword,
    STATE(106), 1,
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
  [1647] = 2,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(61), 25,
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
  [1682] = 2,
    ACTIONS(83), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(81), 25,
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
  [1717] = 2,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(89), 25,
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
  [1752] = 2,
    ACTIONS(71), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(69), 25,
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
  [1787] = 2,
    ACTIONS(79), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(77), 25,
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
  [1822] = 2,
    ACTIONS(75), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(73), 25,
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
  [1857] = 2,
    ACTIONS(67), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(65), 25,
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
  [1892] = 2,
    ACTIONS(59), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(57), 25,
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
  [1927] = 11,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    STATE(161), 1,
      sym_arguments,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(173), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(175), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(88), 13,
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
  [1978] = 11,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    STATE(160), 1,
      sym_arguments,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(173), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(175), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(88), 13,
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
  [2029] = 11,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    STATE(162), 1,
      sym_arguments,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(173), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(175), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(88), 13,
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
  [2080] = 4,
    ACTIONS(93), 2,
      sym__variable_name,
      sym_global_variable,
    ACTIONS(97), 2,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [2117] = 11,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(115), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
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
  [2168] = 11,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    STATE(159), 1,
      sym_arguments,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(173), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(175), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(88), 13,
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
  [2219] = 11,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(173), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(175), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(88), 13,
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
  [2270] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [2308] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(187), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
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
  [2356] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [2394] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [2432] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [2470] = 10,
    ACTIONS(195), 1,
      sym__variable_name,
    ACTIONS(197), 1,
      sym_global_variable,
    ACTIONS(201), 1,
      sym__builtin_identifier,
    ACTIONS(203), 1,
      sym__external_identifier,
    ACTIONS(205), 1,
      sym__user_defined_identifier,
    ACTIONS(207), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(209), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(211), 2,
      sym_float,
      sym_string,
    ACTIONS(199), 3,
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
  [2518] = 10,
    ACTIONS(195), 1,
      sym__variable_name,
    ACTIONS(197), 1,
      sym_global_variable,
    ACTIONS(201), 1,
      sym__builtin_identifier,
    ACTIONS(203), 1,
      sym__external_identifier,
    ACTIONS(205), 1,
      sym__user_defined_identifier,
    ACTIONS(207), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(215), 2,
      sym_float,
      sym_string,
    ACTIONS(199), 3,
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
  [2566] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(219), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
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
  [2614] = 10,
    ACTIONS(195), 1,
      sym__variable_name,
    ACTIONS(197), 1,
      sym_global_variable,
    ACTIONS(201), 1,
      sym__builtin_identifier,
    ACTIONS(203), 1,
      sym__external_identifier,
    ACTIONS(205), 1,
      sym__user_defined_identifier,
    ACTIONS(207), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(223), 2,
      sym_float,
      sym_string,
    ACTIONS(199), 3,
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
  [2662] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(225), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(227), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
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
  [2710] = 10,
    ACTIONS(229), 1,
      sym__variable_name,
    ACTIONS(231), 1,
      sym_global_variable,
    ACTIONS(235), 1,
      sym__builtin_identifier,
    ACTIONS(237), 1,
      sym__external_identifier,
    ACTIONS(239), 1,
      sym__user_defined_identifier,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(243), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(245), 2,
      sym_float,
      sym_string,
    ACTIONS(233), 3,
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
  [2758] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(249), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
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
  [2806] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
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
  [2854] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(255), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(257), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(65), 13,
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
  [2902] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(259), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(261), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
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
  [2950] = 10,
    ACTIONS(229), 1,
      sym__variable_name,
    ACTIONS(231), 1,
      sym_global_variable,
    ACTIONS(235), 1,
      sym__builtin_identifier,
    ACTIONS(237), 1,
      sym__external_identifier,
    ACTIONS(239), 1,
      sym__user_defined_identifier,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(263), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(265), 2,
      sym_float,
      sym_string,
    ACTIONS(233), 3,
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
  [2998] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(267), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(269), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(57), 13,
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
  [3046] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(271), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(273), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(69), 13,
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
  [3094] = 10,
    ACTIONS(229), 1,
      sym__variable_name,
    ACTIONS(231), 1,
      sym_global_variable,
    ACTIONS(235), 1,
      sym__builtin_identifier,
    ACTIONS(237), 1,
      sym__external_identifier,
    ACTIONS(239), 1,
      sym__user_defined_identifier,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(275), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(277), 2,
      sym_float,
      sym_string,
    ACTIONS(233), 3,
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
  [3142] = 5,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [3180] = 10,
    ACTIONS(229), 1,
      sym__variable_name,
    ACTIONS(231), 1,
      sym_global_variable,
    ACTIONS(235), 1,
      sym__builtin_identifier,
    ACTIONS(237), 1,
      sym__external_identifier,
    ACTIONS(239), 1,
      sym__user_defined_identifier,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(281), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(283), 2,
      sym_float,
      sym_string,
    ACTIONS(233), 3,
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
  [3228] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [3266] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(287), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(289), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(73), 13,
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
  [3314] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(291), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(293), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
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
  [3362] = 10,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(29), 1,
      sym__builtin_identifier,
    ACTIONS(31), 1,
      sym__external_identifier,
    ACTIONS(33), 1,
      sym__user_defined_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(297), 2,
      sym_float,
      sym_string,
    ACTIONS(111), 3,
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
  [3410] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(299), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(301), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(54), 13,
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
  [3458] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(303), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(305), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
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
  [3506] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(307), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(309), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(90), 13,
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
  [3554] = 10,
    ACTIONS(153), 1,
      sym__variable_name,
    ACTIONS(155), 1,
      sym_global_variable,
    ACTIONS(165), 1,
      sym__builtin_identifier,
    ACTIONS(167), 1,
      sym__external_identifier,
    ACTIONS(169), 1,
      sym__user_defined_identifier,
    ACTIONS(171), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(311), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(313), 2,
      sym_float,
      sym_string,
    ACTIONS(163), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(72), 13,
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
  [3602] = 3,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [3635] = 3,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(177), 21,
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
  [3668] = 2,
    ACTIONS(319), 11,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__variable_name,
      aux_sym__write_read_command_token1,
      sym__user_defined_identifier,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(317), 13,
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
      sym__external_identifier,
      sym_float,
      sym_string,
  [3697] = 12,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      aux_sym_keyword_token1,
    ACTIONS(326), 1,
      aux_sym_for_statement_token1,
    ACTIONS(329), 1,
      aux_sym_if_statement_token1,
    ACTIONS(335), 1,
      aux_sym__write_read_command_token1,
    ACTIONS(338), 1,
      sym__set,
    ACTIONS(341), 1,
      sym__label,
    STATE(18), 1,
      sym_keyword,
    STATE(106), 1,
      sym_label,
    ACTIONS(332), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(101), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      aux_sym_program_repeat1,
  [3744] = 12,
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
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_keyword,
    STATE(106), 1,
      sym_label,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 2,
      sym__typical_command,
      sym__write_read_command,
    STATE(101), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      aux_sym_program_repeat1,
  [3791] = 11,
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
    STATE(106), 1,
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
  [3834] = 8,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(346), 1,
      sym__builtin_identifier,
    STATE(103), 1,
      sym__loop_range,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(348), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(350), 2,
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
  [3869] = 7,
    ACTIONS(19), 1,
      sym__variable_name,
    ACTIONS(21), 1,
      sym_global_variable,
    ACTIONS(346), 1,
      sym__builtin_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(352), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(354), 2,
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
  [3901] = 9,
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
  [3937] = 7,
    ACTIONS(356), 1,
      anon_sym_COLON,
    ACTIONS(358), 1,
      sym__variable_name,
    ACTIONS(360), 1,
      sym_global_variable,
    ACTIONS(362), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(364), 1,
      sym__builtin_identifier,
    STATE(109), 1,
      sym_postconditional,
    STATE(149), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [3965] = 3,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(366), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [3983] = 5,
    ACTIONS(358), 1,
      sym__variable_name,
    ACTIONS(360), 1,
      sym_global_variable,
    ACTIONS(362), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(364), 1,
      sym__builtin_identifier,
    STATE(142), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4005] = 5,
    ACTIONS(358), 1,
      sym__variable_name,
    ACTIONS(360), 1,
      sym_global_variable,
    ACTIONS(362), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(364), 1,
      sym__builtin_identifier,
    STATE(145), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4027] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_assignment_repeat1,
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
  [4045] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_assignment_repeat1,
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
  [4063] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(378), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4081] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(380), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4099] = 3,
    ACTIONS(384), 1,
      anon_sym_COLON,
    STATE(115), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(382), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4116] = 3,
    ACTIONS(389), 1,
      anon_sym_COLON,
    STATE(117), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(387), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4133] = 3,
    ACTIONS(389), 1,
      anon_sym_COLON,
    STATE(115), 1,
      aux_sym__loop_range_repeat1,
    ACTIONS(391), 8,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4150] = 1,
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
  [4162] = 1,
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
  [4174] = 1,
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
  [4186] = 1,
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
  [4198] = 1,
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
  [4210] = 1,
    ACTIONS(401), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4222] = 1,
    ACTIONS(382), 9,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      aux_sym__write_read_command_token1,
      sym__set,
  [4234] = 1,
    ACTIONS(403), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4246] = 1,
    ACTIONS(405), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4258] = 1,
    ACTIONS(407), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4270] = 1,
    ACTIONS(47), 9,
      sym__line_comment,
      sym__label,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      anon_sym_COLON,
      aux_sym__write_read_command_token1,
      sym__set,
  [4282] = 1,
    ACTIONS(409), 7,
      sym__line_comment,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      aux_sym__write_read_command_token1,
      sym__set,
  [4292] = 4,
    ACTIONS(41), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_array_index,
  [4305] = 4,
    ACTIONS(53), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_array_index,
  [4318] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4328] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4338] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4348] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4358] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4368] = 3,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_arguments_repeat1,
  [4378] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_arguments_repeat1,
  [4388] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
  [4398] = 2,
    ACTIONS(47), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(49), 1,
      anon_sym_EQ,
  [4405] = 2,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym__function_arguments,
  [4412] = 2,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_EQ_PLUS,
  [4419] = 2,
    ACTIONS(65), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(67), 1,
      anon_sym_EQ,
  [4426] = 2,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__function_arguments,
  [4433] = 2,
    ACTIONS(435), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ_PLUS,
  [4440] = 2,
    ACTIONS(73), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(75), 1,
      anon_sym_EQ,
  [4447] = 2,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__function_arguments,
  [4454] = 2,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__function_arguments,
  [4461] = 2,
    ACTIONS(439), 1,
      anon_sym_EQ,
    ACTIONS(441), 1,
      anon_sym_EQ_PLUS,
  [4468] = 2,
    ACTIONS(443), 1,
      anon_sym_EQ,
    ACTIONS(445), 1,
      anon_sym_EQ_PLUS,
  [4475] = 2,
    ACTIONS(81), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(83), 1,
      anon_sym_EQ,
  [4482] = 2,
    ACTIONS(77), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(79), 1,
      anon_sym_EQ,
  [4489] = 2,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym__function_arguments,
  [4496] = 2,
    ACTIONS(57), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(59), 1,
      anon_sym_EQ,
  [4503] = 1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [4507] = 1,
    ACTIONS(47), 1,
      anon_sym_EQ,
  [4511] = 1,
    ACTIONS(451), 1,
      anon_sym_EQ,
  [4515] = 1,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
  [4519] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [4523] = 1,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [4527] = 1,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [4531] = 1,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 71,
  [SMALL_STATE(19)] = 141,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 374,
  [SMALL_STATE(25)] = 438,
  [SMALL_STATE(26)] = 479,
  [SMALL_STATE(27)] = 520,
  [SMALL_STATE(28)] = 561,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 647,
  [SMALL_STATE(31)] = 688,
  [SMALL_STATE(32)] = 729,
  [SMALL_STATE(33)] = 770,
  [SMALL_STATE(34)] = 811,
  [SMALL_STATE(35)] = 852,
  [SMALL_STATE(36)] = 898,
  [SMALL_STATE(37)] = 944,
  [SMALL_STATE(38)] = 984,
  [SMALL_STATE(39)] = 1024,
  [SMALL_STATE(40)] = 1064,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1144,
  [SMALL_STATE(43)] = 1190,
  [SMALL_STATE(44)] = 1231,
  [SMALL_STATE(45)] = 1270,
  [SMALL_STATE(46)] = 1309,
  [SMALL_STATE(47)] = 1348,
  [SMALL_STATE(48)] = 1387,
  [SMALL_STATE(49)] = 1428,
  [SMALL_STATE(50)] = 1469,
  [SMALL_STATE(51)] = 1510,
  [SMALL_STATE(52)] = 1551,
  [SMALL_STATE(53)] = 1586,
  [SMALL_STATE(54)] = 1647,
  [SMALL_STATE(55)] = 1682,
  [SMALL_STATE(56)] = 1717,
  [SMALL_STATE(57)] = 1752,
  [SMALL_STATE(58)] = 1787,
  [SMALL_STATE(59)] = 1822,
  [SMALL_STATE(60)] = 1857,
  [SMALL_STATE(61)] = 1892,
  [SMALL_STATE(62)] = 1927,
  [SMALL_STATE(63)] = 1978,
  [SMALL_STATE(64)] = 2029,
  [SMALL_STATE(65)] = 2080,
  [SMALL_STATE(66)] = 2117,
  [SMALL_STATE(67)] = 2168,
  [SMALL_STATE(68)] = 2219,
  [SMALL_STATE(69)] = 2270,
  [SMALL_STATE(70)] = 2308,
  [SMALL_STATE(71)] = 2356,
  [SMALL_STATE(72)] = 2394,
  [SMALL_STATE(73)] = 2432,
  [SMALL_STATE(74)] = 2470,
  [SMALL_STATE(75)] = 2518,
  [SMALL_STATE(76)] = 2566,
  [SMALL_STATE(77)] = 2614,
  [SMALL_STATE(78)] = 2662,
  [SMALL_STATE(79)] = 2710,
  [SMALL_STATE(80)] = 2758,
  [SMALL_STATE(81)] = 2806,
  [SMALL_STATE(82)] = 2854,
  [SMALL_STATE(83)] = 2902,
  [SMALL_STATE(84)] = 2950,
  [SMALL_STATE(85)] = 2998,
  [SMALL_STATE(86)] = 3046,
  [SMALL_STATE(87)] = 3094,
  [SMALL_STATE(88)] = 3142,
  [SMALL_STATE(89)] = 3180,
  [SMALL_STATE(90)] = 3228,
  [SMALL_STATE(91)] = 3266,
  [SMALL_STATE(92)] = 3314,
  [SMALL_STATE(93)] = 3362,
  [SMALL_STATE(94)] = 3410,
  [SMALL_STATE(95)] = 3458,
  [SMALL_STATE(96)] = 3506,
  [SMALL_STATE(97)] = 3554,
  [SMALL_STATE(98)] = 3602,
  [SMALL_STATE(99)] = 3635,
  [SMALL_STATE(100)] = 3668,
  [SMALL_STATE(101)] = 3697,
  [SMALL_STATE(102)] = 3744,
  [SMALL_STATE(103)] = 3791,
  [SMALL_STATE(104)] = 3834,
  [SMALL_STATE(105)] = 3869,
  [SMALL_STATE(106)] = 3901,
  [SMALL_STATE(107)] = 3937,
  [SMALL_STATE(108)] = 3965,
  [SMALL_STATE(109)] = 3983,
  [SMALL_STATE(110)] = 4005,
  [SMALL_STATE(111)] = 4027,
  [SMALL_STATE(112)] = 4045,
  [SMALL_STATE(113)] = 4063,
  [SMALL_STATE(114)] = 4081,
  [SMALL_STATE(115)] = 4099,
  [SMALL_STATE(116)] = 4116,
  [SMALL_STATE(117)] = 4133,
  [SMALL_STATE(118)] = 4150,
  [SMALL_STATE(119)] = 4162,
  [SMALL_STATE(120)] = 4174,
  [SMALL_STATE(121)] = 4186,
  [SMALL_STATE(122)] = 4198,
  [SMALL_STATE(123)] = 4210,
  [SMALL_STATE(124)] = 4222,
  [SMALL_STATE(125)] = 4234,
  [SMALL_STATE(126)] = 4246,
  [SMALL_STATE(127)] = 4258,
  [SMALL_STATE(128)] = 4270,
  [SMALL_STATE(129)] = 4282,
  [SMALL_STATE(130)] = 4292,
  [SMALL_STATE(131)] = 4305,
  [SMALL_STATE(132)] = 4318,
  [SMALL_STATE(133)] = 4328,
  [SMALL_STATE(134)] = 4338,
  [SMALL_STATE(135)] = 4348,
  [SMALL_STATE(136)] = 4358,
  [SMALL_STATE(137)] = 4368,
  [SMALL_STATE(138)] = 4378,
  [SMALL_STATE(139)] = 4388,
  [SMALL_STATE(140)] = 4398,
  [SMALL_STATE(141)] = 4405,
  [SMALL_STATE(142)] = 4412,
  [SMALL_STATE(143)] = 4419,
  [SMALL_STATE(144)] = 4426,
  [SMALL_STATE(145)] = 4433,
  [SMALL_STATE(146)] = 4440,
  [SMALL_STATE(147)] = 4447,
  [SMALL_STATE(148)] = 4454,
  [SMALL_STATE(149)] = 4461,
  [SMALL_STATE(150)] = 4468,
  [SMALL_STATE(151)] = 4475,
  [SMALL_STATE(152)] = 4482,
  [SMALL_STATE(153)] = 4489,
  [SMALL_STATE(154)] = 4496,
  [SMALL_STATE(155)] = 4503,
  [SMALL_STATE(156)] = 4507,
  [SMALL_STATE(157)] = 4511,
  [SMALL_STATE(158)] = 4515,
  [SMALL_STATE(159)] = 4519,
  [SMALL_STATE(160)] = 4523,
  [SMALL_STATE(161)] = 4527,
  [SMALL_STATE(162)] = 4531,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_variable, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_variable, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_array, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_array, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 9),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 5, .production_id = 15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 8),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(100),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(129),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6), SHIFT_REPEAT(81),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 10),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14), SHIFT_REPEAT(110),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 13),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__loop_range_repeat1, 2), SHIFT_REPEAT(105),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_range, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__write_read_command, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12), SHIFT_REPEAT(70),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6), SHIFT_REPEAT(95),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_function_call, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_function_call, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [453] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
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
