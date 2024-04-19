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
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_EQ_PLUS = 2,
  anon_sym_COMMA = 3,
  aux_sym_keyword_token1 = 4,
  aux_sym_if_statement_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym__eol_comment = 8,
  anon_sym_COLON = 9,
  sym__variable_name = 10,
  sym_global_variable = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_SQUOTE = 14,
  anon_sym_STAR = 15,
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
  aux_sym_lvalue_function_call_token1 = 36,
  sym__builtin_identifier = 37,
  sym__external_identifier = 38,
  sym__user_defined_identifier = 39,
  sym__set = 40,
  sym__numeric = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  sym_integer = 44,
  sym_float = 45,
  sym_string = 46,
  sym_format_specifier = 47,
  sym__line_comment = 48,
  sym__label = 49,
  sym_program = 50,
  sym__statement = 51,
  sym__simple_statement = 52,
  sym__compound_statement = 53,
  sym_command = 54,
  sym_comment = 55,
  sym_assignment = 56,
  sym__typical_command = 57,
  sym_keyword = 58,
  sym_if_statement = 59,
  sym_arguments = 60,
  sym_label = 61,
  sym__function_arguments = 62,
  sym_postconditional = 63,
  sym__expression = 64,
  sym__identifier = 65,
  sym__array = 66,
  sym_local_array = 67,
  sym_global_array = 68,
  sym_array_index = 69,
  sym__variable = 70,
  sym_local_variable = 71,
  sym_unary_expression = 72,
  sym_binary_expression = 73,
  sym_function_call = 74,
  sym_lvalue_function_call = 75,
  sym_special_variable = 76,
  sym__literal = 77,
  sym_boolean = 78,
  aux_sym_program_repeat1 = 79,
  aux_sym_assignment_repeat1 = 80,
  aux_sym_arguments_repeat1 = 81,
  aux_sym_array_index_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_PLUS] = "=+",
  [anon_sym_COMMA] = ",",
  [aux_sym_keyword_token1] = "keyword_token1",
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
  [sym_if_statement] = "if_statement",
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
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
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
  [sym_if_statement] = sym_if_statement,
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
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
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
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 4},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 4},
  [14] = {.index = 26, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 0},
  [1] =
    {field_condition, 1},
    {field_consequence, 2},
  [3] =
    {field_condition, 1},
  [4] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [6] =
    {field_left, 1},
    {field_right, 3},
  [8] =
    {field_argument, 1},
  [9] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
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
  [18] = 4,
  [19] = 2,
  [20] = 3,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 9,
  [25] = 5,
  [26] = 4,
  [27] = 27,
  [28] = 28,
  [29] = 11,
  [30] = 7,
  [31] = 6,
  [32] = 10,
  [33] = 14,
  [34] = 3,
  [35] = 12,
  [36] = 2,
  [37] = 8,
  [38] = 10,
  [39] = 9,
  [40] = 11,
  [41] = 12,
  [42] = 8,
  [43] = 14,
  [44] = 7,
  [45] = 6,
  [46] = 5,
  [47] = 13,
  [48] = 48,
  [49] = 48,
  [50] = 48,
  [51] = 48,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 55,
  [59] = 53,
  [60] = 53,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 55,
  [65] = 65,
  [66] = 65,
  [67] = 61,
  [68] = 68,
  [69] = 62,
  [70] = 70,
  [71] = 61,
  [72] = 23,
  [73] = 73,
  [74] = 73,
  [75] = 65,
  [76] = 27,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 3,
  [98] = 2,
  [99] = 99,
  [100] = 99,
  [101] = 86,
  [102] = 99,
  [103] = 87,
  [104] = 99,
  [105] = 105,
  [106] = 106,
  [107] = 6,
  [108] = 7,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 106,
  [113] = 113,
  [114] = 8,
  [115] = 115,
  [116] = 10,
  [117] = 106,
  [118] = 9,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 120,
  [123] = 123,
  [124] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == '&') ADVANCE(420);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(260);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(400);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'B') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead == 'G') ADVANCE(158);
      if (lookahead == 'H') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'K') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == 'Q') ADVANCE(166);
      if (lookahead == 'R') ADVANCE(147);
      if (lookahead == 'S') ADVANCE(279);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(153);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == 'X') ADVANCE(148);
      if (lookahead == 'Z') ADVANCE(268);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == ']') ADVANCE(410);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(187);
      if (lookahead == 'k') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'q') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == 'z') ADVANCE(329);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(421);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '&') ADVANCE(420);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(260);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == ']') ADVANCE(410);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '_') ADVANCE(419);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 't') ADVANCE(372);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(452);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead == 'P') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(408);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '[') ADVANCE(415);
      if (lookahead == ']') ADVANCE(416);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(212);
      if (lookahead == 'D') ADVANCE(207);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(198);
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'J') ADVANCE(216);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(206);
      if (lookahead == 'P') ADVANCE(221);
      if (lookahead == 'Q') ADVANCE(223);
      if (lookahead == 'S') ADVANCE(224);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == 'W') ADVANCE(220);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(139);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead == 'P') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'G') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'K') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'L') ADVANCE(139);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(139);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(139);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'S') ADVANCE(8);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(438);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 65:
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'W') ADVANCE(139);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'j') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'q') ADVANCE(251);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(248);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 129:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 131:
      if (eof) ADVANCE(134);
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == '&') ADVANCE(420);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(400);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'B') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead == 'G') ADVANCE(158);
      if (lookahead == 'H') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'K') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == 'Q') ADVANCE(166);
      if (lookahead == 'R') ADVANCE(147);
      if (lookahead == 'S') ADVANCE(279);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(153);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == 'X') ADVANCE(148);
      if (lookahead == 'Z') ADVANCE(268);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == ']') ADVANCE(410);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(187);
      if (lookahead == 'k') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'q') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == 'z') ADVANCE(329);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131)
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 132:
      if (eof) ADVANCE(134);
      if (lookahead == '!') ADVANCE(421);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '&') ADVANCE(420);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(260);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ';') ADVANCE(262);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == 'B') ADVANCE(219);
      if (lookahead == 'C') ADVANCE(211);
      if (lookahead == 'D') ADVANCE(214);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(197);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'J') ADVANCE(216);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(202);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == 'O') ADVANCE(218);
      if (lookahead == 'Q') ADVANCE(223);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'V') ADVANCE(210);
      if (lookahead == 'W') ADVANCE(220);
      if (lookahead == 'X') ADVANCE(205);
      if (lookahead == 'Z') ADVANCE(11);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == ']') ADVANCE(410);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'j') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 'q') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == 'v') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(248);
      if (lookahead == 'x') ADVANCE(233);
      if (lookahead == 'z') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(132)
      END_STATE();
    case 133:
      if (eof) ADVANCE(134);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == 'B') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead == 'G') ADVANCE(158);
      if (lookahead == 'H') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'K') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == 'Q') ADVANCE(166);
      if (lookahead == 'R') ADVANCE(147);
      if (lookahead == 'S') ADVANCE(279);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(153);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == 'X') ADVANCE(148);
      if (lookahead == 'Z') ADVANCE(268);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(187);
      if (lookahead == 'k') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'q') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == 'z') ADVANCE(329);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(453);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133)
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead == 'E') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'C') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'C') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'D') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'N') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'P') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'S') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'U') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'Y') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'd') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 's') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'y') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(56);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'F') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'f') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(253);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(253);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(144);
      if (lookahead == 'G') ADVANCE(158);
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == 'I') ADVANCE(156);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'K') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(164);
      if (lookahead == 'Q') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(167);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == 'W') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'B') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'C') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'C') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'C') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'D') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'G') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'K') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'L') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'M') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'M') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'M') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'N') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'N') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'N') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'N') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'O') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'P') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'P') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'S') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'S') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'S') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'S') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'U') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'U') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'W') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'j') ADVANCE(187);
      if (lookahead == 'k') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 'q') ADVANCE(194);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'b') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'd') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'g') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'k') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 's') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 's') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (lookahead == 'w') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(408);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '[') ADVANCE(415);
      if (lookahead == ']') ADVANCE(416);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(413);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'I') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'X') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'A') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'R') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__external_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__user_defined_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__user_defined_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '_') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '_') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '_') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(451);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(453);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 132, .external_lex_state = 1},
  [2] = {.lex_state = 131, .external_lex_state = 1},
  [3] = {.lex_state = 131, .external_lex_state = 1},
  [4] = {.lex_state = 131, .external_lex_state = 1},
  [5] = {.lex_state = 131, .external_lex_state = 1},
  [6] = {.lex_state = 131, .external_lex_state = 1},
  [7] = {.lex_state = 131, .external_lex_state = 1},
  [8] = {.lex_state = 131, .external_lex_state = 1},
  [9] = {.lex_state = 131, .external_lex_state = 1},
  [10] = {.lex_state = 131, .external_lex_state = 1},
  [11] = {.lex_state = 131, .external_lex_state = 1},
  [12] = {.lex_state = 131, .external_lex_state = 1},
  [13] = {.lex_state = 131, .external_lex_state = 1},
  [14] = {.lex_state = 131, .external_lex_state = 1},
  [15] = {.lex_state = 132, .external_lex_state = 1},
  [16] = {.lex_state = 133, .external_lex_state = 1},
  [17] = {.lex_state = 133, .external_lex_state = 1},
  [18] = {.lex_state = 132, .external_lex_state = 1},
  [19] = {.lex_state = 132, .external_lex_state = 1},
  [20] = {.lex_state = 132, .external_lex_state = 1},
  [21] = {.lex_state = 132, .external_lex_state = 1},
  [22] = {.lex_state = 132, .external_lex_state = 1},
  [23] = {.lex_state = 132, .external_lex_state = 1},
  [24] = {.lex_state = 132, .external_lex_state = 1},
  [25] = {.lex_state = 132, .external_lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 132, .external_lex_state = 1},
  [28] = {.lex_state = 132, .external_lex_state = 1},
  [29] = {.lex_state = 132, .external_lex_state = 1},
  [30] = {.lex_state = 132, .external_lex_state = 1},
  [31] = {.lex_state = 132, .external_lex_state = 1},
  [32] = {.lex_state = 132, .external_lex_state = 1},
  [33] = {.lex_state = 132, .external_lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 132, .external_lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 132, .external_lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 132},
  [54] = {.lex_state = 132},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 132},
  [60] = {.lex_state = 132},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 132},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 132},
  [77] = {.lex_state = 132},
  [78] = {.lex_state = 133, .external_lex_state = 1},
  [79] = {.lex_state = 132, .external_lex_state = 1},
  [80] = {.lex_state = 132, .external_lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 132, .external_lex_state = 2},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 132, .external_lex_state = 1},
  [86] = {.lex_state = 132, .external_lex_state = 1},
  [87] = {.lex_state = 132, .external_lex_state = 1},
  [88] = {.lex_state = 132, .external_lex_state = 1},
  [89] = {.lex_state = 132, .external_lex_state = 1},
  [90] = {.lex_state = 132, .external_lex_state = 1},
  [91] = {.lex_state = 132, .external_lex_state = 1},
  [92] = {.lex_state = 132, .external_lex_state = 1},
  [93] = {.lex_state = 132, .external_lex_state = 1},
  [94] = {.lex_state = 132, .external_lex_state = 1},
  [95] = {.lex_state = 132, .external_lex_state = 1},
  [96] = {.lex_state = 132, .external_lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
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
    [sym_program] = STATE(123),
    [sym__statement] = STATE(79),
    [sym__simple_statement] = STATE(79),
    [sym__compound_statement] = STATE(79),
    [sym_command] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_assignment] = STATE(79),
    [sym__typical_command] = STATE(92),
    [sym_keyword] = STATE(16),
    [sym_if_statement] = STATE(79),
    [sym_label] = STATE(82),
    [aux_sym_program_repeat1] = STATE(79),
    [aux_sym_keyword_token1] = ACTIONS(3),
    [aux_sym_if_statement_token1] = ACTIONS(5),
    [sym__eol_comment] = ACTIONS(7),
    [sym__set] = ACTIONS(9),
    [sym__line_comment] = ACTIONS(7),
    [sym__label] = ACTIONS(11),
  },
  [2] = {
    [sym_array_index] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [aux_sym_keyword_token1] = ACTIONS(15),
    [aux_sym_if_statement_token1] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym__eol_comment] = ACTIONS(13),
    [sym__variable_name] = ACTIONS(15),
    [sym_global_variable] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_STAR_STAR] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_SQUOTE_GT] = ACTIONS(13),
    [anon_sym_SQUOTE_LT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(13),
    [anon_sym_SQUOTE_EQ] = ACTIONS(13),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(13),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(13),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(13),
    [anon_sym__] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [sym__builtin_identifier] = ACTIONS(13),
    [sym__external_identifier] = ACTIONS(13),
    [sym__user_defined_identifier] = ACTIONS(15),
    [sym__set] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_float] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_format_specifier] = ACTIONS(15),
    [sym__line_comment] = ACTIONS(13),
    [sym__label] = ACTIONS(13),
  },
  [3] = {
    [sym_array_index] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [aux_sym_keyword_token1] = ACTIONS(21),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym__eol_comment] = ACTIONS(19),
    [sym__variable_name] = ACTIONS(21),
    [sym_global_variable] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_SQUOTE_GT] = ACTIONS(19),
    [anon_sym_SQUOTE_LT] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_EQ] = ACTIONS(19),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(21),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(19),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [sym__builtin_identifier] = ACTIONS(19),
    [sym__external_identifier] = ACTIONS(19),
    [sym__user_defined_identifier] = ACTIONS(21),
    [sym__set] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym_format_specifier] = ACTIONS(21),
    [sym__line_comment] = ACTIONS(19),
    [sym__label] = ACTIONS(19),
  },
  [4] = {
    [sym__function_arguments] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [aux_sym_keyword_token1] = ACTIONS(25),
    [aux_sym_if_statement_token1] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
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
    [sym__builtin_identifier] = ACTIONS(23),
    [sym__external_identifier] = ACTIONS(23),
    [sym__user_defined_identifier] = ACTIONS(25),
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
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [aux_sym_keyword_token1] = ACTIONS(31),
    [aux_sym_if_statement_token1] = ACTIONS(31),
    [sym__eol_comment] = ACTIONS(29),
    [sym__variable_name] = ACTIONS(31),
    [sym_global_variable] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_STAR_STAR] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_SQUOTE_GT] = ACTIONS(29),
    [anon_sym_SQUOTE_LT] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_EQ] = ACTIONS(29),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(29),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [sym__builtin_identifier] = ACTIONS(29),
    [sym__external_identifier] = ACTIONS(29),
    [sym__user_defined_identifier] = ACTIONS(31),
    [sym__set] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_format_specifier] = ACTIONS(31),
    [sym__line_comment] = ACTIONS(29),
    [sym__label] = ACTIONS(29),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(33),
    [aux_sym_keyword_token1] = ACTIONS(35),
    [aux_sym_if_statement_token1] = ACTIONS(35),
    [sym__eol_comment] = ACTIONS(33),
    [sym__variable_name] = ACTIONS(35),
    [sym_global_variable] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_STAR_STAR] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_SQUOTE_GT] = ACTIONS(33),
    [anon_sym_SQUOTE_LT] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_EQ] = ACTIONS(33),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(33),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(35),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(33),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [sym__builtin_identifier] = ACTIONS(33),
    [sym__external_identifier] = ACTIONS(33),
    [sym__user_defined_identifier] = ACTIONS(35),
    [sym__set] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_format_specifier] = ACTIONS(35),
    [sym__line_comment] = ACTIONS(33),
    [sym__label] = ACTIONS(33),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [aux_sym_keyword_token1] = ACTIONS(39),
    [aux_sym_if_statement_token1] = ACTIONS(39),
    [sym__eol_comment] = ACTIONS(37),
    [sym__variable_name] = ACTIONS(39),
    [sym_global_variable] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_SQUOTE_GT] = ACTIONS(37),
    [anon_sym_SQUOTE_LT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_EQ] = ACTIONS(37),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(39),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(37),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(37),
    [anon_sym__] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [sym__builtin_identifier] = ACTIONS(37),
    [sym__external_identifier] = ACTIONS(37),
    [sym__user_defined_identifier] = ACTIONS(39),
    [sym__set] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_format_specifier] = ACTIONS(39),
    [sym__line_comment] = ACTIONS(37),
    [sym__label] = ACTIONS(37),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [aux_sym_keyword_token1] = ACTIONS(43),
    [aux_sym_if_statement_token1] = ACTIONS(43),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(45),
    [aux_sym_keyword_token1] = ACTIONS(47),
    [aux_sym_if_statement_token1] = ACTIONS(47),
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
    [sym__builtin_identifier] = ACTIONS(45),
    [sym__external_identifier] = ACTIONS(45),
    [sym__user_defined_identifier] = ACTIONS(47),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [aux_sym_keyword_token1] = ACTIONS(51),
    [aux_sym_if_statement_token1] = ACTIONS(51),
    [sym__eol_comment] = ACTIONS(49),
    [sym__variable_name] = ACTIONS(51),
    [sym_global_variable] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_SQUOTE_GT] = ACTIONS(49),
    [anon_sym_SQUOTE_LT] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(49),
    [anon_sym_SQUOTE_EQ] = ACTIONS(49),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(49),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(51),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(49),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(51),
    [sym__builtin_identifier] = ACTIONS(49),
    [sym__external_identifier] = ACTIONS(49),
    [sym__user_defined_identifier] = ACTIONS(51),
    [sym__set] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [sym_format_specifier] = ACTIONS(51),
    [sym__line_comment] = ACTIONS(49),
    [sym__label] = ACTIONS(49),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [aux_sym_keyword_token1] = ACTIONS(55),
    [aux_sym_if_statement_token1] = ACTIONS(55),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(57),
    [aux_sym_keyword_token1] = ACTIONS(59),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_keyword_token1] = ACTIONS(65),
    [aux_sym_if_statement_token1] = ACTIONS(65),
    [sym__eol_comment] = ACTIONS(61),
    [sym__variable_name] = ACTIONS(65),
    [sym_global_variable] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_STAR_STAR] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_SQUOTE_GT] = ACTIONS(63),
    [anon_sym_SQUOTE_LT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_EQ] = ACTIONS(63),
    [anon_sym_SQUOTE_LBRACK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK] = ACTIONS(67),
    [anon_sym_SQUOTE_QMARK] = ACTIONS(63),
    [anon_sym_SQUOTE_RBRACK_RBRACK] = ACTIONS(63),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(67),
    [sym__builtin_identifier] = ACTIONS(61),
    [sym__external_identifier] = ACTIONS(61),
    [sym__user_defined_identifier] = ACTIONS(65),
    [sym__set] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [sym_format_specifier] = ACTIONS(65),
    [sym__line_comment] = ACTIONS(61),
    [sym__label] = ACTIONS(61),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [aux_sym_keyword_token1] = ACTIONS(71),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__label,
    STATE(16), 1,
      sym_keyword,
    STATE(82), 1,
      sym_label,
    STATE(92), 1,
      sym__typical_command,
    ACTIONS(7), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(91), 7,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
    ACTIONS(73), 21,
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
  [63] = 15,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    STATE(17), 1,
      sym_postconditional,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(99), 2,
      sym_float,
      sym_string,
    ACTIONS(79), 3,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__set,
    ACTIONS(87), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(77), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
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
  [131] = 13,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    STATE(90), 1,
      sym_arguments,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(99), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(103), 3,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__set,
    ACTIONS(101), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
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
  [193] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__function_arguments,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(23), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [236] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_array_index,
    ACTIONS(15), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(13), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [279] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_array_index,
    ACTIONS(21), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(19), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [322] = 5,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(109), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(73), 21,
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
  [366] = 5,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(113), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(73), 21,
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
  [410] = 5,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(115), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(73), 21,
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
  [454] = 2,
    ACTIONS(47), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(45), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [491] = 2,
    ACTIONS(31), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(29), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [528] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__function_arguments,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [569] = 3,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(121), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(73), 21,
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
  [608] = 3,
    ACTIONS(75), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(123), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(73), 21,
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
  [647] = 2,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(53), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [684] = 2,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(37), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [721] = 2,
    ACTIONS(35), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(33), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [758] = 2,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(49), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [795] = 2,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(69), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [832] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_array_index,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(19), 25,
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
  [873] = 2,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(57), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [910] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_array_index,
    ACTIONS(15), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(13), 25,
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
  [951] = 2,
    ACTIONS(43), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(41), 29,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_keyword_token1,
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
      sym__set,
  [988] = 2,
    ACTIONS(51), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(49), 25,
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
  [1023] = 2,
    ACTIONS(47), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(45), 25,
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
  [1058] = 2,
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
  [1093] = 2,
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
  [1128] = 2,
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
  [1163] = 2,
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
  [1198] = 2,
    ACTIONS(39), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(37), 25,
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
  [1233] = 2,
    ACTIONS(35), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(33), 25,
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
  [1268] = 2,
    ACTIONS(31), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(29), 25,
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
  [1303] = 4,
    ACTIONS(61), 2,
      sym__variable_name,
      sym_global_variable,
    ACTIONS(65), 2,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [1340] = 11,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    STATE(121), 1,
      sym_arguments,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(147), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [1391] = 11,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    STATE(124), 1,
      sym_arguments,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(147), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [1442] = 11,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(147), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [1493] = 11,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    STATE(122), 1,
      sym_arguments,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(147), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [1544] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(151), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(77), 13,
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
  [1592] = 5,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [1630] = 5,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [1668] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(159), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(161), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(59), 13,
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
  [1716] = 10,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(165), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
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
  [1764] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(167), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(169), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(60), 13,
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
  [1812] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(171), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(173), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [1860] = 5,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [1898] = 5,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [1936] = 10,
    ACTIONS(179), 1,
      sym__variable_name,
    ACTIONS(181), 1,
      sym_global_variable,
    ACTIONS(185), 1,
      sym__builtin_identifier,
    ACTIONS(187), 1,
      sym__external_identifier,
    ACTIONS(189), 1,
      sym__user_defined_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(195), 2,
      sym_float,
      sym_string,
    ACTIONS(183), 3,
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
  [1984] = 10,
    ACTIONS(179), 1,
      sym__variable_name,
    ACTIONS(181), 1,
      sym_global_variable,
    ACTIONS(185), 1,
      sym__builtin_identifier,
    ACTIONS(187), 1,
      sym__external_identifier,
    ACTIONS(189), 1,
      sym__user_defined_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(199), 2,
      sym_float,
      sym_string,
    ACTIONS(183), 3,
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
  [2032] = 10,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(203), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
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
  [2080] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(207), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
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
  [2128] = 10,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(209), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(211), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(29), 13,
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
  [2176] = 10,
    ACTIONS(179), 1,
      sym__variable_name,
    ACTIONS(181), 1,
      sym_global_variable,
    ACTIONS(185), 1,
      sym__builtin_identifier,
    ACTIONS(187), 1,
      sym__external_identifier,
    ACTIONS(189), 1,
      sym__user_defined_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(215), 2,
      sym_float,
      sym_string,
    ACTIONS(183), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(11), 13,
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
  [2224] = 10,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(219), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(33), 13,
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
  [2272] = 10,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(223), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
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
  [2320] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
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
  [2368] = 10,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(229), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(231), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
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
  [2416] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(233), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(235), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(43), 13,
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
  [2464] = 5,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [2502] = 10,
    ACTIONS(83), 1,
      sym__variable_name,
    ACTIONS(85), 1,
      sym_global_variable,
    ACTIONS(89), 1,
      sym__builtin_identifier,
    ACTIONS(91), 1,
      sym__external_identifier,
    ACTIONS(93), 1,
      sym__user_defined_identifier,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(239), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(241), 2,
      sym_float,
      sym_string,
    ACTIONS(87), 3,
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
  [2550] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(243), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(245), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(76), 13,
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
  [2598] = 10,
    ACTIONS(131), 1,
      sym__variable_name,
    ACTIONS(133), 1,
      sym_global_variable,
    ACTIONS(137), 1,
      sym__builtin_identifier,
    ACTIONS(139), 1,
      sym__external_identifier,
    ACTIONS(141), 1,
      sym__user_defined_identifier,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(249), 2,
      sym_float,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(40), 13,
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
  [2646] = 3,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [2679] = 3,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(129), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(127), 21,
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
  [2712] = 2,
    ACTIONS(255), 9,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__variable_name,
      sym__user_defined_identifier,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 13,
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
  [2739] = 10,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(9), 1,
      sym__set,
    ACTIONS(11), 1,
      sym__label,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_keyword,
    STATE(82), 1,
      sym_label,
    STATE(92), 1,
      sym__typical_command,
    ACTIONS(7), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(80), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      aux_sym_program_repeat1,
  [2778] = 10,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      aux_sym_keyword_token1,
    ACTIONS(264), 1,
      aux_sym_if_statement_token1,
    ACTIONS(270), 1,
      sym__set,
    ACTIONS(273), 1,
      sym__label,
    STATE(16), 1,
      sym_keyword,
    STATE(82), 1,
      sym_label,
    STATE(92), 1,
      sym__typical_command,
    ACTIONS(267), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(80), 8,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      aux_sym_program_repeat1,
  [2817] = 7,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      sym__variable_name,
    ACTIONS(280), 1,
      sym_global_variable,
    ACTIONS(282), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(284), 1,
      sym__builtin_identifier,
    STATE(84), 1,
      sym_postconditional,
    STATE(119), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [2845] = 7,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(9), 1,
      sym__set,
    STATE(16), 1,
      sym_keyword,
    STATE(92), 1,
      sym__typical_command,
    ACTIONS(7), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(95), 6,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
  [2873] = 5,
    ACTIONS(278), 1,
      sym__variable_name,
    ACTIONS(280), 1,
      sym_global_variable,
    ACTIONS(282), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(284), 1,
      sym__builtin_identifier,
    STATE(113), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [2895] = 5,
    ACTIONS(278), 1,
      sym__variable_name,
    ACTIONS(280), 1,
      sym_global_variable,
    ACTIONS(282), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(284), 1,
      sym__builtin_identifier,
    STATE(109), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [2917] = 3,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(286), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [2933] = 3,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(288), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [2949] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [2965] = 3,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(295), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [2981] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(297), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [2997] = 1,
    ACTIONS(302), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [3007] = 1,
    ACTIONS(304), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [3017] = 1,
    ACTIONS(306), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [3027] = 1,
    ACTIONS(101), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [3037] = 1,
    ACTIONS(308), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [3047] = 1,
    ACTIONS(310), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [3057] = 1,
    ACTIONS(312), 5,
      sym__line_comment,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      sym__eol_comment,
      sym__set,
  [3065] = 4,
    ACTIONS(19), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_array_index,
  [3078] = 4,
    ACTIONS(13), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_array_index,
  [3091] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_array_index_repeat1,
  [3101] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_array_index_repeat1,
  [3111] = 3,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_arguments_repeat1,
  [3121] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_array_index_repeat1,
  [3131] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_arguments_repeat1,
  [3141] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_array_index_repeat1,
  [3151] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_array_index_repeat1,
  [3161] = 2,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__function_arguments,
  [3168] = 2,
    ACTIONS(33), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(35), 1,
      anon_sym_EQ,
  [3175] = 2,
    ACTIONS(37), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(39), 1,
      anon_sym_EQ,
  [3182] = 2,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(334), 1,
      anon_sym_EQ_PLUS,
  [3189] = 2,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym__function_arguments,
  [3196] = 2,
    ACTIONS(338), 1,
      anon_sym_EQ,
    ACTIONS(340), 1,
      anon_sym_EQ_PLUS,
  [3203] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__function_arguments,
  [3210] = 2,
    ACTIONS(342), 1,
      anon_sym_EQ,
    ACTIONS(344), 1,
      anon_sym_EQ_PLUS,
  [3217] = 2,
    ACTIONS(41), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(43), 1,
      anon_sym_EQ,
  [3224] = 2,
    ACTIONS(23), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(25), 1,
      anon_sym_EQ,
  [3231] = 2,
    ACTIONS(49), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(51), 1,
      anon_sym_EQ,
  [3238] = 2,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__function_arguments,
  [3245] = 2,
    ACTIONS(45), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(47), 1,
      anon_sym_EQ,
  [3252] = 2,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      anon_sym_EQ_PLUS,
  [3259] = 1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [3263] = 1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
  [3267] = 1,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [3271] = 1,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
  [3275] = 1,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 63,
  [SMALL_STATE(17)] = 131,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 454,
  [SMALL_STATE(25)] = 491,
  [SMALL_STATE(26)] = 528,
  [SMALL_STATE(27)] = 569,
  [SMALL_STATE(28)] = 608,
  [SMALL_STATE(29)] = 647,
  [SMALL_STATE(30)] = 684,
  [SMALL_STATE(31)] = 721,
  [SMALL_STATE(32)] = 758,
  [SMALL_STATE(33)] = 795,
  [SMALL_STATE(34)] = 832,
  [SMALL_STATE(35)] = 873,
  [SMALL_STATE(36)] = 910,
  [SMALL_STATE(37)] = 951,
  [SMALL_STATE(38)] = 988,
  [SMALL_STATE(39)] = 1023,
  [SMALL_STATE(40)] = 1058,
  [SMALL_STATE(41)] = 1093,
  [SMALL_STATE(42)] = 1128,
  [SMALL_STATE(43)] = 1163,
  [SMALL_STATE(44)] = 1198,
  [SMALL_STATE(45)] = 1233,
  [SMALL_STATE(46)] = 1268,
  [SMALL_STATE(47)] = 1303,
  [SMALL_STATE(48)] = 1340,
  [SMALL_STATE(49)] = 1391,
  [SMALL_STATE(50)] = 1442,
  [SMALL_STATE(51)] = 1493,
  [SMALL_STATE(52)] = 1544,
  [SMALL_STATE(53)] = 1592,
  [SMALL_STATE(54)] = 1630,
  [SMALL_STATE(55)] = 1668,
  [SMALL_STATE(56)] = 1716,
  [SMALL_STATE(57)] = 1764,
  [SMALL_STATE(58)] = 1812,
  [SMALL_STATE(59)] = 1860,
  [SMALL_STATE(60)] = 1898,
  [SMALL_STATE(61)] = 1936,
  [SMALL_STATE(62)] = 1984,
  [SMALL_STATE(63)] = 2032,
  [SMALL_STATE(64)] = 2080,
  [SMALL_STATE(65)] = 2128,
  [SMALL_STATE(66)] = 2176,
  [SMALL_STATE(67)] = 2224,
  [SMALL_STATE(68)] = 2272,
  [SMALL_STATE(69)] = 2320,
  [SMALL_STATE(70)] = 2368,
  [SMALL_STATE(71)] = 2416,
  [SMALL_STATE(72)] = 2464,
  [SMALL_STATE(73)] = 2502,
  [SMALL_STATE(74)] = 2550,
  [SMALL_STATE(75)] = 2598,
  [SMALL_STATE(76)] = 2646,
  [SMALL_STATE(77)] = 2679,
  [SMALL_STATE(78)] = 2712,
  [SMALL_STATE(79)] = 2739,
  [SMALL_STATE(80)] = 2778,
  [SMALL_STATE(81)] = 2817,
  [SMALL_STATE(82)] = 2845,
  [SMALL_STATE(83)] = 2873,
  [SMALL_STATE(84)] = 2895,
  [SMALL_STATE(85)] = 2917,
  [SMALL_STATE(86)] = 2933,
  [SMALL_STATE(87)] = 2949,
  [SMALL_STATE(88)] = 2965,
  [SMALL_STATE(89)] = 2981,
  [SMALL_STATE(90)] = 2997,
  [SMALL_STATE(91)] = 3007,
  [SMALL_STATE(92)] = 3017,
  [SMALL_STATE(93)] = 3027,
  [SMALL_STATE(94)] = 3037,
  [SMALL_STATE(95)] = 3047,
  [SMALL_STATE(96)] = 3057,
  [SMALL_STATE(97)] = 3065,
  [SMALL_STATE(98)] = 3078,
  [SMALL_STATE(99)] = 3091,
  [SMALL_STATE(100)] = 3101,
  [SMALL_STATE(101)] = 3111,
  [SMALL_STATE(102)] = 3121,
  [SMALL_STATE(103)] = 3131,
  [SMALL_STATE(104)] = 3141,
  [SMALL_STATE(105)] = 3151,
  [SMALL_STATE(106)] = 3161,
  [SMALL_STATE(107)] = 3168,
  [SMALL_STATE(108)] = 3175,
  [SMALL_STATE(109)] = 3182,
  [SMALL_STATE(110)] = 3189,
  [SMALL_STATE(111)] = 3196,
  [SMALL_STATE(112)] = 3203,
  [SMALL_STATE(113)] = 3210,
  [SMALL_STATE(114)] = 3217,
  [SMALL_STATE(115)] = 3224,
  [SMALL_STATE(116)] = 3231,
  [SMALL_STATE(117)] = 3238,
  [SMALL_STATE(118)] = 3245,
  [SMALL_STATE(119)] = 3252,
  [SMALL_STATE(120)] = 3259,
  [SMALL_STATE(121)] = 3263,
  [SMALL_STATE(122)] = 3267,
  [SMALL_STATE(123)] = 3271,
  [SMALL_STATE(124)] = 3275,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_variable, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_variable, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4, .production_id = 11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_array, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_array, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postconditional, 2, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postconditional, 2, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 4, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 8),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 13),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 7),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 7), SHIFT_REPEAT(73),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 10),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 14), SHIFT_REPEAT(83),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 7), SHIFT_REPEAT(74),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12), SHIFT_REPEAT(52),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_function_call, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_function_call, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [356] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
