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
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_EQ_PLUS = 2,
  anon_sym_COMMA = 3,
  aux_sym_keyword_token1 = 4,
  aux_sym_if_statement_token1 = 5,
  aux_sym_do_statement_token1 = 6,
  anon_sym_CARET = 7,
  sym__routine_label = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym__eol_comment = 11,
  anon_sym_COLON = 12,
  sym__variable_name = 13,
  sym_global_variable = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_BSLASH = 20,
  anon_sym_POUND = 21,
  anon_sym_STAR_STAR = 22,
  anon_sym_GT = 23,
  anon_sym_LT = 24,
  anon_sym_SQUOTE_GT = 25,
  anon_sym_SQUOTE_LT = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_QMARK = 29,
  anon_sym_RBRACK_RBRACK = 30,
  anon_sym_SQUOTE_EQ = 31,
  anon_sym_SQUOTE_LBRACK = 32,
  anon_sym_SQUOTE_RBRACK = 33,
  anon_sym_SQUOTE_QMARK = 34,
  anon_sym_SQUOTE_RBRACK_RBRACK = 35,
  anon_sym__ = 36,
  anon_sym_AMP = 37,
  anon_sym_BANG = 38,
  aux_sym_lvalue_function_call_token1 = 39,
  sym__builtin_identifier = 40,
  sym__external_identifier = 41,
  aux_sym__user_defined_identifier_token1 = 42,
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
  sym_if_statement = 62,
  sym_do_statement = 63,
  sym__routine_call = 64,
  sym_arguments = 65,
  sym_label = 66,
  sym__function_arguments = 67,
  sym_postconditional = 68,
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
  sym_function_call = 79,
  sym_lvalue_function_call = 80,
  sym_special_variable = 81,
  sym__user_defined_identifier = 82,
  sym__literal = 83,
  sym_boolean = 84,
  aux_sym_program_repeat1 = 85,
  aux_sym_assignment_repeat1 = 86,
  aux_sym_do_statement_repeat1 = 87,
  aux_sym_arguments_repeat1 = 88,
  aux_sym_array_index_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_PLUS] = "=+",
  [anon_sym_COMMA] = ",",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_do_statement_token1] = "do_statement_token1",
  [anon_sym_CARET] = "^",
  [sym__routine_label] = "_routine_label",
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
  [aux_sym_lvalue_function_call_token1] = "lvalue_function_call_token1",
  [sym__builtin_identifier] = "_builtin_identifier",
  [sym__external_identifier] = "_external_identifier",
  [aux_sym__user_defined_identifier_token1] = "_user_defined_identifier_token1",
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
  [sym_if_statement] = "if_statement",
  [sym_do_statement] = "do_statement",
  [sym__routine_call] = "_routine_call",
  [sym_arguments] = "arguments",
  [sym_label] = "label",
  [sym__function_arguments] = "_function_arguments",
  [sym_postconditional] = "postconditional",
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
  [sym_function_call] = "function_call",
  [sym_lvalue_function_call] = "lvalue_function_call",
  [sym_special_variable] = "special_variable",
  [sym__user_defined_identifier] = "_user_defined_identifier",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_do_statement_repeat1] = "do_statement_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_array_index_repeat1] = "array_index_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_PLUS] = anon_sym_EQ_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_do_statement_token1] = aux_sym_do_statement_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym__routine_label] = sym__routine_label,
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
  [aux_sym_lvalue_function_call_token1] = aux_sym_lvalue_function_call_token1,
  [sym__builtin_identifier] = sym__builtin_identifier,
  [sym__external_identifier] = sym__external_identifier,
  [aux_sym__user_defined_identifier_token1] = aux_sym__user_defined_identifier_token1,
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
  [sym_if_statement] = sym_if_statement,
  [sym_do_statement] = sym_do_statement,
  [sym__routine_call] = sym__routine_call,
  [sym_arguments] = sym_arguments,
  [sym_label] = sym_label,
  [sym__function_arguments] = sym__function_arguments,
  [sym_postconditional] = sym_postconditional,
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
  [sym_function_call] = sym_function_call,
  [sym_lvalue_function_call] = sym_lvalue_function_call,
  [sym_special_variable] = sym_special_variable,
  [sym__user_defined_identifier] = sym__user_defined_identifier,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_do_statement_repeat1] = aux_sym_do_statement_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym__routine_label] = {
    .visible = false,
    .named = true,
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
  [aux_sym__user_defined_identifier_token1] = {
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__routine_call] = {
    .visible = false,
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
  [aux_sym_do_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
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
  field_label = 4,
  field_left = 5,
  field_right = 6,
  field_routine = 7,
  field_subscript = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_label] = "label",
  [field_left] = "left",
  [field_right] = "right",
  [field_routine] = "routine",
  [field_subscript] = "subscript",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 4},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 4},
  [17] = {.index = 30, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_argument, 0},
  [2] =
    {field_condition, 1},
    {field_consequence, 2},
  [4] =
    {field_condition, 1},
  [5] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [7] =
    {field_label, 2},
  [8] =
    {field_label, 0},
    {field_routine, 2},
  [10] =
    {field_left, 1},
    {field_right, 3},
  [12] =
    {field_argument, 1},
  [13] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [15] =
    {field_subscript, 1},
  [16] =
    {field_left, 2},
    {field_right, 4},
  [18] =
    {field_left, 1},
    {field_left, 4, .inherited = true},
    {field_right, 3},
    {field_right, 4, .inherited = true},
  [22] =
    {field_subscript, 1},
    {field_subscript, 2, .inherited = true},
  [24] =
    {field_subscript, 0, .inherited = true},
    {field_subscript, 1, .inherited = true},
  [26] =
    {field_left, 2},
    {field_left, 5, .inherited = true},
    {field_right, 4},
    {field_right, 5, .inherited = true},
  [30] =
    {field_left, 0, .inherited = true},
    {field_left, 1, .inherited = true},
    {field_right, 0, .inherited = true},
    {field_right, 1, .inherited = true},
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
  [18] = 3,
  [19] = 2,
  [20] = 4,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 6,
  [26] = 8,
  [27] = 27,
  [28] = 28,
  [29] = 9,
  [30] = 7,
  [31] = 14,
  [32] = 11,
  [33] = 10,
  [34] = 5,
  [35] = 4,
  [36] = 2,
  [37] = 3,
  [38] = 4,
  [39] = 39,
  [40] = 39,
  [41] = 39,
  [42] = 3,
  [43] = 2,
  [44] = 39,
  [45] = 39,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 48,
  [52] = 52,
  [53] = 48,
  [54] = 48,
  [55] = 13,
  [56] = 6,
  [57] = 50,
  [58] = 14,
  [59] = 59,
  [60] = 47,
  [61] = 61,
  [62] = 61,
  [63] = 12,
  [64] = 64,
  [65] = 47,
  [66] = 50,
  [67] = 64,
  [68] = 47,
  [69] = 11,
  [70] = 70,
  [71] = 10,
  [72] = 72,
  [73] = 5,
  [74] = 64,
  [75] = 7,
  [76] = 50,
  [77] = 8,
  [78] = 9,
  [79] = 13,
  [80] = 8,
  [81] = 11,
  [82] = 10,
  [83] = 83,
  [84] = 7,
  [85] = 5,
  [86] = 83,
  [87] = 6,
  [88] = 9,
  [89] = 14,
  [90] = 83,
  [91] = 21,
  [92] = 83,
  [93] = 83,
  [94] = 94,
  [95] = 27,
  [96] = 12,
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
  [125] = 4,
  [126] = 2,
  [127] = 127,
  [128] = 127,
  [129] = 127,
  [130] = 130,
  [131] = 127,
  [132] = 127,
  [133] = 107,
  [134] = 110,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 136,
  [142] = 8,
  [143] = 9,
  [144] = 144,
  [145] = 11,
  [146] = 10,
  [147] = 136,
  [148] = 148,
  [149] = 7,
  [150] = 150,
  [151] = 136,
  [152] = 152,
  [153] = 153,
  [154] = 153,
  [155] = 153,
  [156] = 156,
  [157] = 153,
  [158] = 158,
  [159] = 159,
  [160] = 153,
  [161] = 161,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(136);
      if (lookahead == '!') ADVANCE(427);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '&') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(399);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == '<') ADVANCE(411);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == 'B') ADVANCE(185);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'J') ADVANCE(177);
      if (lookahead == 'K') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(178);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'Q') ADVANCE(192);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(285);
      if (lookahead == 'T') ADVANCE(147);
      if (lookahead == 'U') ADVANCE(191);
      if (lookahead == 'V') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == 'X') ADVANCE(158);
      if (lookahead == 'Z') ADVANCE(274);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(406);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(330);
      if (lookahead == 'g') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'j') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'q') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 'w') ADVANCE(240);
      if (lookahead == 'x') ADVANCE(212);
      if (lookahead == 'z') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(426);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '&') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(399);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '<') ADVANCE(411);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(406);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == '_') ADVANCE(424);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(426);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead == '&') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(399);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '<') ADVANCE(411);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(406);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '_') ADVANCE(424);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '+') ADVANCE(399);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(330);
      if (lookahead == 't') ADVANCE(378);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(456);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == 'E') ADVANCE(429);
      if (lookahead == 'P') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '&') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(419);
      if (lookahead == '>') ADVANCE(412);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '[') ADVANCE(420);
      if (lookahead == ']') ADVANCE(421);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'D') ADVANCE(163);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(175);
      if (lookahead == 'J') ADVANCE(180);
      if (lookahead == 'K') ADVANCE(166);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'Q') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(149);
      if (lookahead == 'W') ADVANCE(187);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(141);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(429);
      if (lookahead == 'P') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'G') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'K') ADVANCE(141);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(141);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(442);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'U') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'W') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'j') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 'q') ADVANCE(247);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(241);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 126:
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 130:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 133:
      if (eof) ADVANCE(136);
      if (lookahead == '!') ADVANCE(427);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '&') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(399);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == '<') ADVANCE(411);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == 'B') ADVANCE(185);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'J') ADVANCE(177);
      if (lookahead == 'K') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(178);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'Q') ADVANCE(192);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(285);
      if (lookahead == 'T') ADVANCE(147);
      if (lookahead == 'U') ADVANCE(191);
      if (lookahead == 'V') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == 'X') ADVANCE(158);
      if (lookahead == 'Z') ADVANCE(274);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(406);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(330);
      if (lookahead == 'g') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'j') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'q') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 'w') ADVANCE(240);
      if (lookahead == 'x') ADVANCE(212);
      if (lookahead == 'z') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 134:
      if (eof) ADVANCE(136);
      if (lookahead == '!') ADVANCE(426);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead == '&') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(399);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '<') ADVANCE(411);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == 'B') ADVANCE(184);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'D') ADVANCE(259);
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == 'H') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(253);
      if (lookahead == 'J') ADVANCE(180);
      if (lookahead == 'K') ADVANCE(166);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(155);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(182);
      if (lookahead == 'Q') ADVANCE(193);
      if (lookahead == 'R') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(443);
      if (lookahead == 'T') ADVANCE(148);
      if (lookahead == 'U') ADVANCE(190);
      if (lookahead == 'V') ADVANCE(168);
      if (lookahead == 'W') ADVANCE(187);
      if (lookahead == 'X') ADVANCE(160);
      if (lookahead == 'Z') ADVANCE(12);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(406);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'q') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(222);
      if (lookahead == 'w') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(214);
      if (lookahead == 'z') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(134)
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '+') ADVANCE(399);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == 'B') ADVANCE(185);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'J') ADVANCE(177);
      if (lookahead == 'K') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(178);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'Q') ADVANCE(192);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(285);
      if (lookahead == 'T') ADVANCE(147);
      if (lookahead == 'U') ADVANCE(191);
      if (lookahead == 'V') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == 'X') ADVANCE(158);
      if (lookahead == 'Z') ADVANCE(274);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(330);
      if (lookahead == 'g') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'j') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'q') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead == 'w') ADVANCE(240);
      if (lookahead == 'x') ADVANCE(212);
      if (lookahead == 'z') ADVANCE(335);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == 'E') ADVANCE(296);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'R') ADVANCE(273);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(290);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(314);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(329);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(318);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(305);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(282);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(308);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(323);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(277);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(278);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(284);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(287);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(290);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(28);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(319);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(57);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(385);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(256);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(251);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(251);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'O') ADVANCE(257);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(294);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(281);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'H') ADVANCE(142);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == 'J') ADVANCE(177);
      if (lookahead == 'K') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(159);
      if (lookahead == 'P') ADVANCE(188);
      if (lookahead == 'Q') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == 'W') ADVANCE(186);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(324);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(300);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'B') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(294);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(328);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(275);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'D') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(329);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(304);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(321);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(316);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(302);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'G') ADVANCE(283);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(322);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(307);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'K') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(312);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(322);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(295);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(311);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(290);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(301);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(294);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(322);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(317);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(280);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'P') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'P') ADVANCE(322);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(315);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(320);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(325);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(271);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(397);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(309);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(286);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'U') ADVANCE(313);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'U') ADVANCE(324);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'W') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'j') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == 'q') ADVANCE(246);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(240);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(344);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(353);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(413);
      if (lookahead == '=') ADVANCE(419);
      if (lookahead == '>') ADVANCE(412);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '[') ADVANCE(420);
      if (lookahead == ']') ADVANCE(421);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'I') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'X') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'A') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'R') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__external_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__user_defined_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(455);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(457);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 134, .external_lex_state = 1},
  [2] = {.lex_state = 133, .external_lex_state = 1},
  [3] = {.lex_state = 133, .external_lex_state = 1},
  [4] = {.lex_state = 133, .external_lex_state = 1},
  [5] = {.lex_state = 133, .external_lex_state = 1},
  [6] = {.lex_state = 133, .external_lex_state = 1},
  [7] = {.lex_state = 133, .external_lex_state = 1},
  [8] = {.lex_state = 133, .external_lex_state = 1},
  [9] = {.lex_state = 133, .external_lex_state = 1},
  [10] = {.lex_state = 133, .external_lex_state = 1},
  [11] = {.lex_state = 133, .external_lex_state = 1},
  [12] = {.lex_state = 133, .external_lex_state = 1},
  [13] = {.lex_state = 133, .external_lex_state = 1},
  [14] = {.lex_state = 133, .external_lex_state = 1},
  [15] = {.lex_state = 134, .external_lex_state = 1},
  [16] = {.lex_state = 135, .external_lex_state = 1},
  [17] = {.lex_state = 135, .external_lex_state = 1},
  [18] = {.lex_state = 134, .external_lex_state = 1},
  [19] = {.lex_state = 134, .external_lex_state = 1},
  [20] = {.lex_state = 134, .external_lex_state = 1},
  [21] = {.lex_state = 134, .external_lex_state = 1},
  [22] = {.lex_state = 134, .external_lex_state = 1},
  [23] = {.lex_state = 134, .external_lex_state = 1},
  [24] = {.lex_state = 134, .external_lex_state = 1},
  [25] = {.lex_state = 134, .external_lex_state = 1},
  [26] = {.lex_state = 134, .external_lex_state = 1},
  [27] = {.lex_state = 134, .external_lex_state = 1},
  [28] = {.lex_state = 134, .external_lex_state = 1},
  [29] = {.lex_state = 134, .external_lex_state = 1},
  [30] = {.lex_state = 134, .external_lex_state = 1},
  [31] = {.lex_state = 134, .external_lex_state = 1},
  [32] = {.lex_state = 134, .external_lex_state = 1},
  [33] = {.lex_state = 134, .external_lex_state = 1},
  [34] = {.lex_state = 134, .external_lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 134},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 134},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 134},
  [91] = {.lex_state = 134},
  [92] = {.lex_state = 134},
  [93] = {.lex_state = 134},
  [94] = {.lex_state = 134},
  [95] = {.lex_state = 134},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 135, .external_lex_state = 1},
  [98] = {.lex_state = 134, .external_lex_state = 1},
  [99] = {.lex_state = 134, .external_lex_state = 1},
  [100] = {.lex_state = 134, .external_lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 134, .external_lex_state = 1},
  [105] = {.lex_state = 134, .external_lex_state = 1},
  [106] = {.lex_state = 134, .external_lex_state = 1},
  [107] = {.lex_state = 134, .external_lex_state = 1},
  [108] = {.lex_state = 134, .external_lex_state = 1},
  [109] = {.lex_state = 134, .external_lex_state = 1},
  [110] = {.lex_state = 134, .external_lex_state = 1},
  [111] = {.lex_state = 134, .external_lex_state = 1},
  [112] = {.lex_state = 134, .external_lex_state = 1},
  [113] = {.lex_state = 134, .external_lex_state = 1},
  [114] = {.lex_state = 134, .external_lex_state = 1},
  [115] = {.lex_state = 134, .external_lex_state = 1},
  [116] = {.lex_state = 134, .external_lex_state = 1},
  [117] = {.lex_state = 134, .external_lex_state = 1},
  [118] = {.lex_state = 134, .external_lex_state = 1},
  [119] = {.lex_state = 134, .external_lex_state = 1},
  [120] = {.lex_state = 134, .external_lex_state = 1},
  [121] = {.lex_state = 134, .external_lex_state = 1},
  [122] = {.lex_state = 134, .external_lex_state = 1},
  [123] = {.lex_state = 134, .external_lex_state = 2},
  [124] = {.lex_state = 2},
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
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
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
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_do_statement_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__eol_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__variable_name] = ACTIONS(1),
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
    [aux_sym_lvalue_function_call_token1] = ACTIONS(1),
    [sym__builtin_identifier] = ACTIONS(1),
    [sym__external_identifier] = ACTIONS(1),
    [aux_sym__user_defined_identifier_token1] = ACTIONS(1),
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
    [sym_program] = STATE(156),
    [sym__statement] = STATE(99),
    [sym__simple_statement] = STATE(99),
    [sym__compound_statement] = STATE(99),
    [sym_command] = STATE(99),
    [sym_comment] = STATE(99),
    [sym_assignment] = STATE(99),
    [sym__typical_command] = STATE(119),
    [sym_keyword] = STATE(16),
    [sym_if_statement] = STATE(99),
    [sym_do_statement] = STATE(99),
    [sym_label] = STATE(100),
    [aux_sym_program_repeat1] = STATE(99),
    [aux_sym_keyword_token1] = ACTIONS(3),
    [aux_sym_if_statement_token1] = ACTIONS(5),
    [aux_sym_do_statement_token1] = ACTIONS(7),
    [sym__eol_comment] = ACTIONS(9),
    [sym__set] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(9),
    [sym__label] = ACTIONS(13),
  },
  [2] = {
    [sym_array_index] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(15),
    [aux_sym_keyword_token1] = ACTIONS(17),
    [aux_sym_if_statement_token1] = ACTIONS(17),
    [aux_sym_do_statement_token1] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(15),
    [sym__variable_name] = ACTIONS(17),
    [sym_global_variable] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_SQUOTE_GT] = ACTIONS(15),
    [anon_sym_SQUOTE_LT] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE_EQ] = ACTIONS(15),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(15),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(15),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [sym__builtin_identifier] = ACTIONS(15),
    [sym__external_identifier] = ACTIONS(15),
    [aux_sym__user_defined_identifier_token1] = ACTIONS(15),
    [sym__set] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [sym_format_specifier] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(15),
    [sym__label] = ACTIONS(15),
  },
  [3] = {
    [sym__function_arguments] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(21),
    [aux_sym_keyword_token1] = ACTIONS(23),
    [aux_sym_if_statement_token1] = ACTIONS(23),
    [aux_sym_do_statement_token1] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym__eol_comment] = ACTIONS(21),
    [sym__variable_name] = ACTIONS(23),
    [sym_global_variable] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_SQUOTE_GT] = ACTIONS(21),
    [anon_sym_SQUOTE_LT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(21),
    [anon_sym_SQUOTE_EQ] = ACTIONS(21),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(21),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(21),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(21),
    [anon_sym__] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [sym__builtin_identifier] = ACTIONS(21),
    [sym__external_identifier] = ACTIONS(21),
    [aux_sym__user_defined_identifier_token1] = ACTIONS(21),
    [sym__set] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_format_specifier] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(21),
    [sym__label] = ACTIONS(21),
  },
  [4] = {
    [sym_array_index] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [aux_sym_keyword_token1] = ACTIONS(29),
    [aux_sym_if_statement_token1] = ACTIONS(29),
    [aux_sym_do_statement_token1] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym__eol_comment] = ACTIONS(27),
    [sym__variable_name] = ACTIONS(29),
    [sym_global_variable] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_SQUOTE_GT] = ACTIONS(27),
    [anon_sym_SQUOTE_LT] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_EQ] = ACTIONS(27),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(27),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [sym__builtin_identifier] = ACTIONS(27),
    [sym__external_identifier] = ACTIONS(27),
    [aux_sym__user_defined_identifier_token1] = ACTIONS(27),
    [sym__set] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
    [sym_float] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_format_specifier] = ACTIONS(29),
    [sym__line_comment] = ACTIONS(27),
    [sym__label] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(33), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(31), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [49] = 2,
    ACTIONS(37), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(35), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [98] = 2,
    ACTIONS(41), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(39), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [147] = 2,
    ACTIONS(45), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(43), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [196] = 2,
    ACTIONS(49), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(47), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [245] = 2,
    ACTIONS(53), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(51), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [294] = 2,
    ACTIONS(57), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(55), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [343] = 4,
    ACTIONS(65), 7,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
    ACTIONS(59), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
      sym_global_variable,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
    ACTIONS(63), 10,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(61), 17,
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
  [396] = 2,
    ACTIONS(69), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(67), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [445] = 2,
    ACTIONS(73), 17,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(71), 27,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [494] = 12,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(7), 1,
      aux_sym_do_statement_token1,
    ACTIONS(11), 1,
      sym__set,
    ACTIONS(13), 1,
      sym__label,
    STATE(16), 1,
      sym_keyword,
    STATE(100), 1,
      sym_label,
    STATE(119), 1,
      sym__typical_command,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(117), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_do_statement,
    ACTIONS(75), 21,
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
  [561] = 16,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(17), 1,
      sym_postconditional,
    STATE(121), 1,
      sym_arguments,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(101), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(79), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(81), 4,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(21), 13,
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
  [633] = 14,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(120), 1,
      sym_arguments,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(101), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(103), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(105), 4,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(21), 13,
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
  [699] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__function_arguments,
    ACTIONS(23), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(21), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [743] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_array_index,
    ACTIONS(17), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(15), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [787] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_array_index,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(27), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [831] = 5,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(111), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(75), 21,
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
  [876] = 5,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(115), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(75), 21,
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
  [921] = 5,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(119), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(75), 21,
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
  [966] = 2,
    ACTIONS(69), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1004] = 2,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(35), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1042] = 2,
    ACTIONS(45), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(43), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1080] = 3,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(121), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(75), 21,
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
  [1120] = 3,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(123), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(75), 21,
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
  [1160] = 2,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(47), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1198] = 2,
    ACTIONS(41), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(39), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1236] = 2,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(71), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1274] = 2,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(55), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1312] = 2,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1350] = 2,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(31), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
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
      sym__set,
  [1388] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_array_index,
    ACTIONS(29), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(27), 23,
      anon_sym_EQ,
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
  [1427] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_array_index,
    ACTIONS(17), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(15), 23,
      anon_sym_EQ,
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
  [1466] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym__function_arguments,
    ACTIONS(23), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(21), 23,
      anon_sym_EQ,
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
  [1505] = 4,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_array_index,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(27), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [1543] = 12,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    STATE(157), 1,
      sym_arguments,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(145), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(91), 13,
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
  [1597] = 12,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(145), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(91), 13,
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
  [1651] = 12,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    STATE(154), 1,
      sym_arguments,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(145), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(91), 13,
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
  [1705] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__function_arguments,
    ACTIONS(23), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(21), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [1743] = 4,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_array_index,
    ACTIONS(17), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(15), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [1781] = 12,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    STATE(160), 1,
      sym_arguments,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(145), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(91), 13,
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
  [1835] = 12,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    STATE(153), 1,
      sym_arguments,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(145), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(91), 13,
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
  [1889] = 11,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(151), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(28), 13,
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
  [1940] = 11,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(155), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(24), 13,
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
  [1991] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(159), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [2042] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(163), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(83), 13,
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
  [2093] = 11,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(167), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(31), 13,
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
  [2144] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(171), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [2195] = 11,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(173), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(175), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(15), 13,
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
  [2246] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(177), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(179), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [2297] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(183), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(86), 13,
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
  [2348] = 2,
    ACTIONS(69), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(67), 23,
      anon_sym_EQ,
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
  [2381] = 2,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(35), 23,
      anon_sym_EQ,
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
  [2414] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(185), 1,
      sym__variable_name,
    ACTIONS(187), 1,
      sym_global_variable,
    ACTIONS(191), 1,
      sym__builtin_identifier,
    ACTIONS(193), 1,
      sym__external_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(199), 2,
      sym_float,
      sym_string,
    ACTIONS(189), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(58), 13,
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
  [2465] = 2,
    ACTIONS(73), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(71), 23,
      anon_sym_EQ,
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
  [2498] = 11,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(203), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(22), 13,
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
  [2549] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(205), 1,
      sym__variable_name,
    ACTIONS(207), 1,
      sym_global_variable,
    ACTIONS(211), 1,
      sym__builtin_identifier,
    ACTIONS(213), 1,
      sym__external_identifier,
    STATE(147), 1,
      sym__user_defined_identifier,
    ACTIONS(215), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(219), 2,
      sym_float,
      sym_string,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(13), 13,
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
  [2600] = 11,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(223), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(27), 13,
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
  [2651] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(225), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(227), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [2702] = 4,
    ACTIONS(59), 2,
      sym__variable_name,
      sym_global_variable,
    ACTIONS(63), 2,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(231), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(229), 21,
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
  [2739] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(205), 1,
      sym__variable_name,
    ACTIONS(207), 1,
      sym_global_variable,
    ACTIONS(211), 1,
      sym__builtin_identifier,
    ACTIONS(213), 1,
      sym__external_identifier,
    STATE(147), 1,
      sym__user_defined_identifier,
    ACTIONS(215), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(233), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(235), 2,
      sym_float,
      sym_string,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(12), 13,
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
  [2790] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(185), 1,
      sym__variable_name,
    ACTIONS(187), 1,
      sym_global_variable,
    ACTIONS(191), 1,
      sym__builtin_identifier,
    ACTIONS(193), 1,
      sym__external_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(237), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(239), 2,
      sym_float,
      sym_string,
    ACTIONS(189), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(55), 13,
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
  [2841] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(241), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(243), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(89), 13,
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
  [2892] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(185), 1,
      sym__variable_name,
    ACTIONS(187), 1,
      sym_global_variable,
    ACTIONS(191), 1,
      sym__builtin_identifier,
    ACTIONS(193), 1,
      sym__external_identifier,
    STATE(141), 1,
      sym__user_defined_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(245), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(247), 2,
      sym_float,
      sym_string,
    ACTIONS(189), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(63), 13,
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
  [2943] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(249), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(251), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(79), 13,
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
  [2994] = 2,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(55), 23,
      anon_sym_EQ,
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
  [3027] = 11,
    ACTIONS(85), 1,
      sym__variable_name,
    ACTIONS(87), 1,
      sym_global_variable,
    ACTIONS(91), 1,
      sym__builtin_identifier,
    ACTIONS(93), 1,
      sym__external_identifier,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(151), 1,
      sym__user_defined_identifier,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(253), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(255), 2,
      sym_float,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(23), 13,
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
  [3078] = 2,
    ACTIONS(53), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(51), 23,
      anon_sym_EQ,
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
  [3111] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(257), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(259), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [3162] = 2,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(31), 23,
      anon_sym_EQ,
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
  [3195] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    STATE(136), 1,
      sym__user_defined_identifier,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(261), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(263), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [3246] = 2,
    ACTIONS(41), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(39), 23,
      anon_sym_EQ,
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
  [3279] = 11,
    ACTIONS(95), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(205), 1,
      sym__variable_name,
    ACTIONS(207), 1,
      sym_global_variable,
    ACTIONS(211), 1,
      sym__builtin_identifier,
    ACTIONS(213), 1,
      sym__external_identifier,
    STATE(147), 1,
      sym__user_defined_identifier,
    ACTIONS(215), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(265), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(267), 2,
      sym_float,
      sym_string,
    ACTIONS(209), 3,
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
  [3330] = 2,
    ACTIONS(45), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(43), 23,
      anon_sym_EQ,
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
  [3363] = 2,
    ACTIONS(49), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(47), 23,
      anon_sym_EQ,
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
  [3396] = 2,
    ACTIONS(69), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3428] = 2,
    ACTIONS(45), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(43), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3460] = 2,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(55), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3492] = 2,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3524] = 5,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3562] = 2,
    ACTIONS(41), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(39), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3594] = 2,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(31), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3626] = 5,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3664] = 2,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(35), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3696] = 2,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(47), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3728] = 2,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(71), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym__routine_label,
      anon_sym_RPAREN,
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
  [3760] = 5,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3798] = 5,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3836] = 5,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3874] = 5,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3912] = 3,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3945] = 3,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [3978] = 3,
    ACTIONS(59), 1,
      sym__routine_label,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 21,
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
  [4010] = 2,
    ACTIONS(291), 9,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(289), 14,
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
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4038] = 11,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      aux_sym_keyword_token1,
    ACTIONS(298), 1,
      aux_sym_if_statement_token1,
    ACTIONS(301), 1,
      aux_sym_do_statement_token1,
    ACTIONS(307), 1,
      sym__set,
    ACTIONS(310), 1,
      sym__label,
    STATE(16), 1,
      sym_keyword,
    STATE(100), 1,
      sym_label,
    STATE(119), 1,
      sym__typical_command,
    ACTIONS(304), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(98), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_do_statement,
      aux_sym_program_repeat1,
  [4081] = 11,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(7), 1,
      aux_sym_do_statement_token1,
    ACTIONS(11), 1,
      sym__set,
    ACTIONS(13), 1,
      sym__label,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_keyword,
    STATE(100), 1,
      sym_label,
    STATE(119), 1,
      sym__typical_command,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(98), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_do_statement,
      aux_sym_program_repeat1,
  [4124] = 8,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(7), 1,
      aux_sym_do_statement_token1,
    ACTIONS(11), 1,
      sym__set,
    STATE(16), 1,
      sym_keyword,
    STATE(119), 1,
      sym__typical_command,
    ACTIONS(9), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(118), 7,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_do_statement,
  [4156] = 7,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      sym__variable_name,
    ACTIONS(319), 1,
      sym_global_variable,
    ACTIONS(321), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(323), 1,
      sym__builtin_identifier,
    STATE(103), 1,
      sym_postconditional,
    STATE(148), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4184] = 5,
    ACTIONS(317), 1,
      sym__variable_name,
    ACTIONS(319), 1,
      sym_global_variable,
    ACTIONS(321), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(323), 1,
      sym__builtin_identifier,
    STATE(140), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4206] = 5,
    ACTIONS(317), 1,
      sym__variable_name,
    ACTIONS(319), 1,
      sym_global_variable,
    ACTIONS(321), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(323), 1,
      sym__builtin_identifier,
    STATE(150), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [4228] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(325), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4245] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(329), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4262] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(329), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4279] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(331), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4296] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(333), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4313] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(338), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4330] = 3,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(340), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4347] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(345), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4364] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(347), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4381] = 2,
    ACTIONS(351), 1,
      anon_sym_CARET,
    ACTIONS(349), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4396] = 3,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(353), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4413] = 1,
    ACTIONS(358), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4425] = 1,
    ACTIONS(333), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4437] = 1,
    ACTIONS(360), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4448] = 1,
    ACTIONS(362), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4459] = 1,
    ACTIONS(364), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4470] = 1,
    ACTIONS(366), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4481] = 1,
    ACTIONS(103), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4492] = 1,
    ACTIONS(368), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4503] = 1,
    ACTIONS(370), 6,
      sym__line_comment,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [4512] = 4,
    ACTIONS(372), 1,
      sym__routine_label,
    ACTIONS(374), 1,
      anon_sym_COLON,
    STATE(104), 1,
      sym__routine_call,
    STATE(137), 1,
      sym_postconditional,
  [4525] = 4,
    ACTIONS(27), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_array_index,
  [4538] = 4,
    ACTIONS(15), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_array_index,
  [4551] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_array_index_repeat1,
  [4561] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_array_index_repeat1,
  [4571] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_array_index_repeat1,
  [4581] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_array_index_repeat1,
  [4591] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_array_index_repeat1,
  [4601] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_array_index_repeat1,
  [4611] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_arguments_repeat1,
  [4621] = 3,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_arguments_repeat1,
  [4631] = 2,
    ACTIONS(21), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(23), 1,
      anon_sym_EQ,
  [4638] = 2,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__function_arguments,
  [4645] = 2,
    ACTIONS(372), 1,
      sym__routine_label,
    STATE(106), 1,
      sym__routine_call,
  [4652] = 2,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym__function_arguments,
  [4659] = 2,
    ACTIONS(372), 1,
      sym__routine_label,
    STATE(116), 1,
      sym__routine_call,
  [4666] = 2,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(400), 1,
      anon_sym_EQ_PLUS,
  [4673] = 2,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym__function_arguments,
  [4680] = 2,
    ACTIONS(43), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(45), 1,
      anon_sym_EQ,
  [4687] = 2,
    ACTIONS(47), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(49), 1,
      anon_sym_EQ,
  [4694] = 2,
    ACTIONS(402), 1,
      anon_sym_CARET,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
  [4701] = 2,
    ACTIONS(55), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(57), 1,
      anon_sym_EQ,
  [4708] = 2,
    ACTIONS(51), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(53), 1,
      anon_sym_EQ,
  [4715] = 2,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__function_arguments,
  [4722] = 2,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_EQ_PLUS,
  [4729] = 2,
    ACTIONS(39), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(41), 1,
      anon_sym_EQ,
  [4736] = 2,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(412), 1,
      anon_sym_EQ_PLUS,
  [4743] = 2,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__function_arguments,
  [4750] = 2,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_EQ_PLUS,
  [4757] = 1,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [4761] = 1,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
  [4765] = 1,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [4769] = 1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
  [4773] = 1,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [4777] = 1,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
  [4781] = 1,
    ACTIONS(430), 1,
      sym__routine_label,
  [4785] = 1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
  [4789] = 1,
    ACTIONS(434), 1,
      sym__routine_label,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 445,
  [SMALL_STATE(15)] = 494,
  [SMALL_STATE(16)] = 561,
  [SMALL_STATE(17)] = 633,
  [SMALL_STATE(18)] = 699,
  [SMALL_STATE(19)] = 743,
  [SMALL_STATE(20)] = 787,
  [SMALL_STATE(21)] = 831,
  [SMALL_STATE(22)] = 876,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 966,
  [SMALL_STATE(25)] = 1004,
  [SMALL_STATE(26)] = 1042,
  [SMALL_STATE(27)] = 1080,
  [SMALL_STATE(28)] = 1120,
  [SMALL_STATE(29)] = 1160,
  [SMALL_STATE(30)] = 1198,
  [SMALL_STATE(31)] = 1236,
  [SMALL_STATE(32)] = 1274,
  [SMALL_STATE(33)] = 1312,
  [SMALL_STATE(34)] = 1350,
  [SMALL_STATE(35)] = 1388,
  [SMALL_STATE(36)] = 1427,
  [SMALL_STATE(37)] = 1466,
  [SMALL_STATE(38)] = 1505,
  [SMALL_STATE(39)] = 1543,
  [SMALL_STATE(40)] = 1597,
  [SMALL_STATE(41)] = 1651,
  [SMALL_STATE(42)] = 1705,
  [SMALL_STATE(43)] = 1743,
  [SMALL_STATE(44)] = 1781,
  [SMALL_STATE(45)] = 1835,
  [SMALL_STATE(46)] = 1889,
  [SMALL_STATE(47)] = 1940,
  [SMALL_STATE(48)] = 1991,
  [SMALL_STATE(49)] = 2042,
  [SMALL_STATE(50)] = 2093,
  [SMALL_STATE(51)] = 2144,
  [SMALL_STATE(52)] = 2195,
  [SMALL_STATE(53)] = 2246,
  [SMALL_STATE(54)] = 2297,
  [SMALL_STATE(55)] = 2348,
  [SMALL_STATE(56)] = 2381,
  [SMALL_STATE(57)] = 2414,
  [SMALL_STATE(58)] = 2465,
  [SMALL_STATE(59)] = 2498,
  [SMALL_STATE(60)] = 2549,
  [SMALL_STATE(61)] = 2600,
  [SMALL_STATE(62)] = 2651,
  [SMALL_STATE(63)] = 2702,
  [SMALL_STATE(64)] = 2739,
  [SMALL_STATE(65)] = 2790,
  [SMALL_STATE(66)] = 2841,
  [SMALL_STATE(67)] = 2892,
  [SMALL_STATE(68)] = 2943,
  [SMALL_STATE(69)] = 2994,
  [SMALL_STATE(70)] = 3027,
  [SMALL_STATE(71)] = 3078,
  [SMALL_STATE(72)] = 3111,
  [SMALL_STATE(73)] = 3162,
  [SMALL_STATE(74)] = 3195,
  [SMALL_STATE(75)] = 3246,
  [SMALL_STATE(76)] = 3279,
  [SMALL_STATE(77)] = 3330,
  [SMALL_STATE(78)] = 3363,
  [SMALL_STATE(79)] = 3396,
  [SMALL_STATE(80)] = 3428,
  [SMALL_STATE(81)] = 3460,
  [SMALL_STATE(82)] = 3492,
  [SMALL_STATE(83)] = 3524,
  [SMALL_STATE(84)] = 3562,
  [SMALL_STATE(85)] = 3594,
  [SMALL_STATE(86)] = 3626,
  [SMALL_STATE(87)] = 3664,
  [SMALL_STATE(88)] = 3696,
  [SMALL_STATE(89)] = 3728,
  [SMALL_STATE(90)] = 3760,
  [SMALL_STATE(91)] = 3798,
  [SMALL_STATE(92)] = 3836,
  [SMALL_STATE(93)] = 3874,
  [SMALL_STATE(94)] = 3912,
  [SMALL_STATE(95)] = 3945,
  [SMALL_STATE(96)] = 3978,
  [SMALL_STATE(97)] = 4010,
  [SMALL_STATE(98)] = 4038,
  [SMALL_STATE(99)] = 4081,
  [SMALL_STATE(100)] = 4124,
  [SMALL_STATE(101)] = 4156,
  [SMALL_STATE(102)] = 4184,
  [SMALL_STATE(103)] = 4206,
  [SMALL_STATE(104)] = 4228,
  [SMALL_STATE(105)] = 4245,
  [SMALL_STATE(106)] = 4262,
  [SMALL_STATE(107)] = 4279,
  [SMALL_STATE(108)] = 4296,
  [SMALL_STATE(109)] = 4313,
  [SMALL_STATE(110)] = 4330,
  [SMALL_STATE(111)] = 4347,
  [SMALL_STATE(112)] = 4364,
  [SMALL_STATE(113)] = 4381,
  [SMALL_STATE(114)] = 4396,
  [SMALL_STATE(115)] = 4413,
  [SMALL_STATE(116)] = 4425,
  [SMALL_STATE(117)] = 4437,
  [SMALL_STATE(118)] = 4448,
  [SMALL_STATE(119)] = 4459,
  [SMALL_STATE(120)] = 4470,
  [SMALL_STATE(121)] = 4481,
  [SMALL_STATE(122)] = 4492,
  [SMALL_STATE(123)] = 4503,
  [SMALL_STATE(124)] = 4512,
  [SMALL_STATE(125)] = 4525,
  [SMALL_STATE(126)] = 4538,
  [SMALL_STATE(127)] = 4551,
  [SMALL_STATE(128)] = 4561,
  [SMALL_STATE(129)] = 4571,
  [SMALL_STATE(130)] = 4581,
  [SMALL_STATE(131)] = 4591,
  [SMALL_STATE(132)] = 4601,
  [SMALL_STATE(133)] = 4611,
  [SMALL_STATE(134)] = 4621,
  [SMALL_STATE(135)] = 4631,
  [SMALL_STATE(136)] = 4638,
  [SMALL_STATE(137)] = 4645,
  [SMALL_STATE(138)] = 4652,
  [SMALL_STATE(139)] = 4659,
  [SMALL_STATE(140)] = 4666,
  [SMALL_STATE(141)] = 4673,
  [SMALL_STATE(142)] = 4680,
  [SMALL_STATE(143)] = 4687,
  [SMALL_STATE(144)] = 4694,
  [SMALL_STATE(145)] = 4701,
  [SMALL_STATE(146)] = 4708,
  [SMALL_STATE(147)] = 4715,
  [SMALL_STATE(148)] = 4722,
  [SMALL_STATE(149)] = 4729,
  [SMALL_STATE(150)] = 4736,
  [SMALL_STATE(151)] = 4743,
  [SMALL_STATE(152)] = 4750,
  [SMALL_STATE(153)] = 4757,
  [SMALL_STATE(154)] = 4761,
  [SMALL_STATE(155)] = 4765,
  [SMALL_STATE(156)] = 4769,
  [SMALL_STATE(157)] = 4773,
  [SMALL_STATE(158)] = 4777,
  [SMALL_STATE(159)] = 4781,
  [SMALL_STATE(160)] = 4785,
  [SMALL_STATE(161)] = 4789,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_variable, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_variable, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4, .production_id = 14),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4, .production_id = 14),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 11),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_array, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_array, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 12),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 4, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 11),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(124),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(101),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2), SHIFT_REPEAT(139),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 10),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 10), SHIFT_REPEAT(61),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 16),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 13),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 1, .production_id = 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 17),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 17), SHIFT_REPEAT(102),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 3, .production_id = 7),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 15), SHIFT_REPEAT(72),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 15),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 10), SHIFT_REPEAT(62),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_identifier, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_function_call, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_function_call, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [424] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_identifier, 3, .production_id = 6),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
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
