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
#define STATE_COUNT 333
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 21

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_EQ_PLUS = 2,
  anon_sym_COMMA = 3,
  aux_sym_keyword_token1 = 4,
  aux_sym_for_statement_token1 = 5,
  aux_sym_if_statement_token1 = 6,
  aux_sym_if_statement_token2 = 7,
  aux_sym_while_statement_token1 = 8,
  aux_sym_do_statement_token1 = 9,
  anon_sym_CARET = 10,
  sym__routine_label = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym__eol_comment = 14,
  anon_sym_COLON = 15,
  sym__variable_name = 16,
  sym_global_variable = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_SQUOTE = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_BSLASH = 23,
  anon_sym_POUND = 24,
  anon_sym_STAR_STAR = 25,
  anon_sym_GT = 26,
  anon_sym_LT = 27,
  anon_sym_SQUOTE_GT = 28,
  anon_sym_SQUOTE_LT = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_QMARK = 32,
  anon_sym_RBRACK_RBRACK = 33,
  anon_sym_SQUOTE_EQ = 34,
  anon_sym_SQUOTE_LBRACK = 35,
  anon_sym_SQUOTE_RBRACK = 36,
  anon_sym_SQUOTE_QMARK = 37,
  anon_sym_SQUOTE_RBRACK_RBRACK = 38,
  anon_sym__ = 39,
  anon_sym_AMP = 40,
  anon_sym_BANG = 41,
  aux_sym_lvalue_function_call_token1 = 42,
  sym__builtin_identifier = 43,
  sym__external_identifier = 44,
  aux_sym__user_defined_identifier_token1 = 45,
  sym__set = 46,
  sym__numeric = 47,
  anon_sym_true = 48,
  anon_sym_false = 49,
  sym_integer = 50,
  sym_float = 51,
  sym_string = 52,
  sym_format_specifier = 53,
  sym__line_comment = 54,
  sym__label = 55,
  sym__indent = 56,
  sym__dedent = 57,
  sym__indentation_marker = 58,
  sym_program = 59,
  sym__statement = 60,
  sym__simple_statement = 61,
  sym__compound_statement = 62,
  sym_block = 63,
  sym_command = 64,
  sym_comment = 65,
  sym_assignment = 66,
  sym__typical_command = 67,
  sym_keyword = 68,
  sym_if_statement = 69,
  sym_while_statement = 70,
  sym_do_statement = 71,
  sym__routine_call = 72,
  sym_arguments = 73,
  sym_label = 74,
  sym__function_arguments = 75,
  sym_postconditional = 76,
  sym__expression = 77,
  sym__identifier = 78,
  sym__array = 79,
  sym_local_array = 80,
  sym_global_array = 81,
  sym_array_index = 82,
  sym__variable = 83,
  sym_local_variable = 84,
  sym_unary_expression = 85,
  sym_binary_expression = 86,
  sym_function_call = 87,
  sym_lvalue_function_call = 88,
  sym_special_variable = 89,
  sym__user_defined_identifier = 90,
  sym__literal = 91,
  sym_boolean = 92,
  aux_sym_program_repeat1 = 93,
  aux_sym_block_repeat1 = 94,
  aux_sym_assignment_repeat1 = 95,
  aux_sym_do_statement_repeat1 = 96,
  aux_sym_arguments_repeat1 = 97,
  aux_sym_array_index_repeat1 = 98,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_PLUS] = "=+",
  [anon_sym_COMMA] = ",",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_for_statement_token1] = "for_statement_token1",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_if_statement_token2] = "if_statement_token2",
  [aux_sym_while_statement_token1] = "while_statement_token1",
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
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__indentation_marker] = "_indentation_marker",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_block] = "block",
  [sym_command] = "command",
  [sym_comment] = "comment",
  [sym_assignment] = "assignment",
  [sym__typical_command] = "_typical_command",
  [sym_keyword] = "keyword",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
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
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [aux_sym_for_statement_token1] = aux_sym_for_statement_token1,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_if_statement_token2] = aux_sym_if_statement_token2,
  [aux_sym_while_statement_token1] = aux_sym_while_statement_token1,
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
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__indentation_marker] = sym__indentation_marker,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_block] = sym_block,
  [sym_command] = sym_command,
  [sym_comment] = sym_comment,
  [sym_assignment] = sym_assignment,
  [sym__typical_command] = sym__typical_command,
  [sym_keyword] = sym_keyword,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
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
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [aux_sym_for_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_statement_token1] = {
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
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__indentation_marker] = {
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
  [sym_block] = {
    .visible = true,
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
  [sym_while_statement] = {
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
  [aux_sym_block_repeat1] = {
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
  field_alternative = 1,
  field_argument = 2,
  field_condition = 3,
  field_consequence = 4,
  field_label = 5,
  field_left = 6,
  field_right = 7,
  field_routine = 8,
  field_subscript = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
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
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 4},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 4},
  [20] = {.index = 36, .length = 4},
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
    {field_label, 1},
  [6] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [8] =
    {field_label, 2},
  [9] =
    {field_label, 0},
    {field_routine, 2},
  [11] =
    {field_left, 1},
    {field_right, 3},
  [13] =
    {field_argument, 1},
  [14] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [16] =
    {field_subscript, 1},
  [17] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [20] =
    {field_label, 1},
    {field_routine, 3},
  [22] =
    {field_left, 2},
    {field_right, 4},
  [24] =
    {field_left, 1},
    {field_left, 4, .inherited = true},
    {field_right, 3},
    {field_right, 4, .inherited = true},
  [28] =
    {field_subscript, 1},
    {field_subscript, 2, .inherited = true},
  [30] =
    {field_subscript, 0, .inherited = true},
    {field_subscript, 1, .inherited = true},
  [32] =
    {field_left, 2},
    {field_left, 5, .inherited = true},
    {field_right, 4},
    {field_right, 5, .inherited = true},
  [36] =
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
  [5] = 3,
  [6] = 2,
  [7] = 4,
  [8] = 4,
  [9] = 2,
  [10] = 3,
  [11] = 11,
  [12] = 12,
  [13] = 2,
  [14] = 3,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 4,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 24,
  [27] = 27,
  [28] = 20,
  [29] = 23,
  [30] = 16,
  [31] = 24,
  [32] = 19,
  [33] = 17,
  [34] = 18,
  [35] = 11,
  [36] = 27,
  [37] = 24,
  [38] = 20,
  [39] = 12,
  [40] = 15,
  [41] = 19,
  [42] = 18,
  [43] = 11,
  [44] = 27,
  [45] = 16,
  [46] = 17,
  [47] = 21,
  [48] = 27,
  [49] = 21,
  [50] = 12,
  [51] = 15,
  [52] = 20,
  [53] = 19,
  [54] = 18,
  [55] = 21,
  [56] = 23,
  [57] = 11,
  [58] = 17,
  [59] = 12,
  [60] = 15,
  [61] = 16,
  [62] = 62,
  [63] = 62,
  [64] = 62,
  [65] = 65,
  [66] = 62,
  [67] = 65,
  [68] = 65,
  [69] = 2,
  [70] = 3,
  [71] = 65,
  [72] = 4,
  [73] = 4,
  [74] = 74,
  [75] = 75,
  [76] = 2,
  [77] = 3,
  [78] = 78,
  [79] = 11,
  [80] = 18,
  [81] = 19,
  [82] = 20,
  [83] = 83,
  [84] = 12,
  [85] = 15,
  [86] = 86,
  [87] = 75,
  [88] = 74,
  [89] = 16,
  [90] = 17,
  [91] = 21,
  [92] = 78,
  [93] = 21,
  [94] = 16,
  [95] = 18,
  [96] = 19,
  [97] = 17,
  [98] = 4,
  [99] = 83,
  [100] = 15,
  [101] = 2,
  [102] = 86,
  [103] = 3,
  [104] = 11,
  [105] = 12,
  [106] = 20,
  [107] = 18,
  [108] = 19,
  [109] = 21,
  [110] = 15,
  [111] = 12,
  [112] = 20,
  [113] = 16,
  [114] = 17,
  [115] = 11,
  [116] = 4,
  [117] = 2,
  [118] = 3,
  [119] = 11,
  [120] = 18,
  [121] = 19,
  [122] = 12,
  [123] = 15,
  [124] = 16,
  [125] = 17,
  [126] = 20,
  [127] = 21,
  [128] = 128,
  [129] = 128,
  [130] = 128,
  [131] = 128,
  [132] = 128,
  [133] = 128,
  [134] = 128,
  [135] = 128,
  [136] = 128,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 143,
  [146] = 137,
  [147] = 142,
  [148] = 140,
  [149] = 149,
  [150] = 138,
  [151] = 151,
  [152] = 139,
  [153] = 142,
  [154] = 139,
  [155] = 140,
  [156] = 142,
  [157] = 143,
  [158] = 137,
  [159] = 143,
  [160] = 143,
  [161] = 144,
  [162] = 151,
  [163] = 139,
  [164] = 137,
  [165] = 139,
  [166] = 166,
  [167] = 139,
  [168] = 151,
  [169] = 166,
  [170] = 151,
  [171] = 137,
  [172] = 143,
  [173] = 139,
  [174] = 138,
  [175] = 151,
  [176] = 140,
  [177] = 139,
  [178] = 139,
  [179] = 23,
  [180] = 137,
  [181] = 137,
  [182] = 149,
  [183] = 137,
  [184] = 143,
  [185] = 143,
  [186] = 186,
  [187] = 75,
  [188] = 186,
  [189] = 186,
  [190] = 186,
  [191] = 186,
  [192] = 186,
  [193] = 186,
  [194] = 186,
  [195] = 186,
  [196] = 196,
  [197] = 197,
  [198] = 83,
  [199] = 196,
  [200] = 196,
  [201] = 196,
  [202] = 202,
  [203] = 203,
  [204] = 202,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 208,
  [209] = 208,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 212,
  [214] = 212,
  [215] = 212,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 217,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 219,
  [229] = 227,
  [230] = 230,
  [231] = 224,
  [232] = 218,
  [233] = 220,
  [234] = 216,
  [235] = 226,
  [236] = 236,
  [237] = 223,
  [238] = 222,
  [239] = 225,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 242,
  [250] = 250,
  [251] = 251,
  [252] = 244,
  [253] = 253,
  [254] = 236,
  [255] = 240,
  [256] = 230,
  [257] = 253,
  [258] = 258,
  [259] = 259,
  [260] = 246,
  [261] = 243,
  [262] = 251,
  [263] = 245,
  [264] = 244,
  [265] = 247,
  [266] = 250,
  [267] = 241,
  [268] = 258,
  [269] = 244,
  [270] = 248,
  [271] = 271,
  [272] = 271,
  [273] = 271,
  [274] = 271,
  [275] = 275,
  [276] = 3,
  [277] = 2,
  [278] = 278,
  [279] = 278,
  [280] = 278,
  [281] = 278,
  [282] = 282,
  [283] = 278,
  [284] = 278,
  [285] = 278,
  [286] = 286,
  [287] = 282,
  [288] = 226,
  [289] = 278,
  [290] = 278,
  [291] = 220,
  [292] = 292,
  [293] = 293,
  [294] = 292,
  [295] = 21,
  [296] = 17,
  [297] = 292,
  [298] = 292,
  [299] = 16,
  [300] = 292,
  [301] = 301,
  [302] = 292,
  [303] = 303,
  [304] = 292,
  [305] = 292,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 12,
  [310] = 15,
  [311] = 306,
  [312] = 312,
  [313] = 303,
  [314] = 307,
  [315] = 315,
  [316] = 315,
  [317] = 315,
  [318] = 315,
  [319] = 319,
  [320] = 315,
  [321] = 315,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 324,
  [326] = 326,
  [327] = 315,
  [328] = 315,
  [329] = 322,
  [330] = 330,
  [331] = 315,
  [332] = 319,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(641);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '&') ADVANCE(639);
      if (lookahead == '\'') ADVANCE(616);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == '*') ADVANCE(617);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(619);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == ';') ADVANCE(471);
      if (lookahead == '<') ADVANCE(625);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(624);
      if (lookahead == '?') ADVANCE(631);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == 'D') ADVANCE(346);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'G') ADVANCE(212);
      if (lookahead == 'H') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'K') ADVANCE(194);
      if (lookahead == 'L') ADVANCE(214);
      if (lookahead == 'M') ADVANCE(183);
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(221);
      if (lookahead == 'Q') ADVANCE(236);
      if (lookahead == 'R') ADVANCE(175);
      if (lookahead == 'S') ADVANCE(657);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'V') ADVANCE(200);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == 'X') ADVANCE(184);
      if (lookahead == 'Z') ADVANCE(11);
      if (lookahead == '[') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(620);
      if (lookahead == ']') ADVANCE(629);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'f') ADVANCE(330);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'j') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'q') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(276);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == 'z') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(659);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(640);
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '&') ADVANCE(639);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == '*') ADVANCE(617);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '/') ADVANCE(618);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == '<') ADVANCE(625);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(624);
      if (lookahead == '?') ADVANCE(630);
      if (lookahead == '[') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(620);
      if (lookahead == ']') ADVANCE(629);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == '_') ADVANCE(638);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(615);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 't') ADVANCE(591);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(671);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '&') ADVANCE(147);
      if (lookahead == 'E') ADVANCE(643);
      if (lookahead == 'P') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '&') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(627);
      if (lookahead == '=') ADVANCE(633);
      if (lookahead == '>') ADVANCE(626);
      if (lookahead == '?') ADVANCE(636);
      if (lookahead == '[') ADVANCE(634);
      if (lookahead == ']') ADVANCE(635);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(189);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'G') ADVANCE(212);
      if (lookahead == 'H') ADVANCE(160);
      if (lookahead == 'I') ADVANCE(210);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'K') ADVANCE(194);
      if (lookahead == 'L') ADVANCE(195);
      if (lookahead == 'M') ADVANCE(182);
      if (lookahead == 'P') ADVANCE(231);
      if (lookahead == 'Q') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(239);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == 'W') ADVANCE(227);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(158);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(225);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'G') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == 'J') ADVANCE(219);
      if (lookahead == 'K') ADVANCE(198);
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'M') ADVANCE(179);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(222);
      if (lookahead == 'Q') ADVANCE(238);
      if (lookahead == 'R') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == 'V') ADVANCE(201);
      if (lookahead == 'W') ADVANCE(229);
      if (lookahead == 'X') ADVANCE(187);
      if (lookahead == 'Z') ADVANCE(357);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'q') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == 'v') ADVANCE(285);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(271);
      if (lookahead == 'z') ADVANCE(415);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(468);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(158);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(643);
      if (lookahead == 'P') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'G') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'K') ADVANCE(158);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(158);
      END_STATE();
    case 45:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(158);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'P') ADVANCE(158);
      END_STATE();
    case 55:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(328);
      END_STATE();
    case 57:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(8);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(656);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 71:
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'W') ADVANCE(158);
      END_STATE();
    case 74:
      if (lookahead == '^') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'h') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'j') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead == 'q') ADVANCE(320);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == 'w') ADVANCE(311);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 141:
      if (lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 142:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 145:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 148:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(641);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '&') ADVANCE(639);
      if (lookahead == '\'') ADVANCE(616);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == '*') ADVANCE(617);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(619);
      if (lookahead == ';') ADVANCE(471);
      if (lookahead == '<') ADVANCE(625);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(624);
      if (lookahead == '?') ADVANCE(631);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(204);
      if (lookahead == 'D') ADVANCE(347);
      if (lookahead == 'E') ADVANCE(339);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(162);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'J') ADVANCE(216);
      if (lookahead == 'K') ADVANCE(196);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(176);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'Q') ADVANCE(237);
      if (lookahead == 'R') ADVANCE(178);
      if (lookahead == 'S') ADVANCE(491);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(202);
      if (lookahead == 'W') ADVANCE(193);
      if (lookahead == 'X') ADVANCE(186);
      if (lookahead == 'Z') ADVANCE(478);
      if (lookahead == '[') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(620);
      if (lookahead == ']') ADVANCE(629);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'j') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'q') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(277);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == 'z') ADVANCE(544);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(148)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 149:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(641);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '&') ADVANCE(639);
      if (lookahead == '\'') ADVANCE(616);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == '*') ADVANCE(617);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(619);
      if (lookahead == ';') ADVANCE(471);
      if (lookahead == '<') ADVANCE(625);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(624);
      if (lookahead == '?') ADVANCE(631);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(204);
      if (lookahead == 'D') ADVANCE(347);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(162);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'J') ADVANCE(216);
      if (lookahead == 'K') ADVANCE(196);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(176);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'Q') ADVANCE(237);
      if (lookahead == 'R') ADVANCE(178);
      if (lookahead == 'S') ADVANCE(491);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(202);
      if (lookahead == 'W') ADVANCE(193);
      if (lookahead == 'X') ADVANCE(186);
      if (lookahead == 'Z') ADVANCE(478);
      if (lookahead == '[') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(620);
      if (lookahead == ']') ADVANCE(629);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'j') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'q') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(277);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == 'z') ADVANCE(544);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(149)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 150:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(640);
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '&') ADVANCE(639);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == '*') ADVANCE(617);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '/') ADVANCE(618);
      if (lookahead == ';') ADVANCE(472);
      if (lookahead == '<') ADVANCE(625);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(624);
      if (lookahead == '?') ADVANCE(630);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == 'D') ADVANCE(346);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == 'G') ADVANCE(212);
      if (lookahead == 'H') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'K') ADVANCE(194);
      if (lookahead == 'L') ADVANCE(214);
      if (lookahead == 'M') ADVANCE(183);
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(221);
      if (lookahead == 'Q') ADVANCE(236);
      if (lookahead == 'R') ADVANCE(175);
      if (lookahead == 'S') ADVANCE(657);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'V') ADVANCE(200);
      if (lookahead == 'W') ADVANCE(192);
      if (lookahead == 'X') ADVANCE(184);
      if (lookahead == 'Z') ADVANCE(11);
      if (lookahead == '[') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(620);
      if (lookahead == ']') ADVANCE(629);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'j') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'q') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(276);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == 'z') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(150)
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(615);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == ';') ADVANCE(471);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(204);
      if (lookahead == 'D') ADVANCE(347);
      if (lookahead == 'E') ADVANCE(339);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(162);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'J') ADVANCE(216);
      if (lookahead == 'K') ADVANCE(196);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(176);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'Q') ADVANCE(237);
      if (lookahead == 'R') ADVANCE(178);
      if (lookahead == 'S') ADVANCE(491);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(202);
      if (lookahead == 'W') ADVANCE(193);
      if (lookahead == 'X') ADVANCE(186);
      if (lookahead == 'Z') ADVANCE(478);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'j') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'q') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(277);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == 'z') ADVANCE(544);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(151)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(615);
      if (lookahead == '+') ADVANCE(613);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == ';') ADVANCE(471);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(204);
      if (lookahead == 'D') ADVANCE(347);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(162);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'J') ADVANCE(216);
      if (lookahead == 'K') ADVANCE(196);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(176);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'Q') ADVANCE(237);
      if (lookahead == 'R') ADVANCE(178);
      if (lookahead == 'S') ADVANCE(491);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(202);
      if (lookahead == 'W') ADVANCE(193);
      if (lookahead == 'X') ADVANCE(186);
      if (lookahead == 'Z') ADVANCE(478);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'j') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'q') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(277);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == 'z') ADVANCE(544);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(152)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(504);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(504);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'E') ADVANCE(376);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(517);
      if (lookahead == 'R') ADVANCE(477);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(517);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(355);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(390);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(496);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(371);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(522);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(538);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(395);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(354);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(526);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(483);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(361);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(400);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(480);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'H') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(498);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(505);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(513);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(385);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(486);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(519);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(389);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(506);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(373);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(532);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(481);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(482);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(359);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(360);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(365);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(488);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(368);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(493);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(498);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(372);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(374);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(500);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(366);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(487);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(496);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(371);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(63);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(527);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(399);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(564);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(588);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(573);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(462);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(423);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(561);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(567);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(553);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(598);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(457);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'L') ADVANCE(529);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'O') ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'O') ADVANCE(350);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(370);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(393);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(403);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(206);
      if (lookahead == 'D') ADVANCE(191);
      if (lookahead == 'E') ADVANCE(173);
      if (lookahead == 'G') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(163);
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead == 'J') ADVANCE(219);
      if (lookahead == 'K') ADVANCE(198);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'P') ADVANCE(230);
      if (lookahead == 'Q') ADVANCE(238);
      if (lookahead == 'S') ADVANCE(241);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(229);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(381);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'B') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'C') ADVANCE(408);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'C') ADVANCE(356);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(386);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(352);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(383);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'G') ADVANCE(366);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(402);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(403);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(387);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'K') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(402);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(377);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(392);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'M') ADVANCE(371);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'M') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'M') ADVANCE(382);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(402);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(406);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(398);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(384);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(362);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'P') ADVANCE(402);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'R') ADVANCE(407);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'R') ADVANCE(396);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(366);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(401);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(353);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(366);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(369);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'U') ADVANCE(394);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'U') ADVANCE(403);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'W') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'q') ADVANCE(322);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'b') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'k') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'm') ADVANCE(429);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'm') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'u') ADVANCE(452);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'w') ADVANCE(327);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__eol_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(501);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(495);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(485);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(208);
      if (lookahead == 'D') ADVANCE(190);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'G') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(161);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead == 'J') ADVANCE(216);
      if (lookahead == 'K') ADVANCE(196);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == 'M') ADVANCE(185);
      if (lookahead == 'P') ADVANCE(232);
      if (lookahead == 'Q') ADVANCE(237);
      if (lookahead == 'S') ADVANCE(240);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == 'W') ADVANCE(228);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(533);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(507);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'B') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(501);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(537);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(479);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'D') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(538);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(512);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(342);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(344);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(530);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(524);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(474);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(510);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'G') ADVANCE(487);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(531);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(515);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(533);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(508);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(514);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'K') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(520);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(531);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(502);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(518);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(506);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(490);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(496);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(509);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(501);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(531);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(535);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(511);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(484);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(525);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'P') ADVANCE(531);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(495);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(536);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(523);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(487);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(534);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(475);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(489);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(516);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(487);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(494);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'U') ADVANCE(521);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'U') ADVANCE(533);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'W') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(569);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'j') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'q') ADVANCE(321);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(545);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(553);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(573);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(564);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(578);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'p') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'p') ADVANCE(602);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(553);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(555);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(604);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(556);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(326);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(627);
      if (lookahead == '=') ADVANCE(633);
      if (lookahead == '>') ADVANCE(626);
      if (lookahead == '?') ADVANCE(636);
      if (lookahead == '[') ADVANCE(634);
      if (lookahead == ']') ADVANCE(635);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(623);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(632);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(637);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'I') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'X') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'A') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'R') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__external_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__user_defined_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(670);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(672);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 150, .external_lex_state = 2},
  [2] = {.lex_state = 148, .external_lex_state = 3},
  [3] = {.lex_state = 148, .external_lex_state = 3},
  [4] = {.lex_state = 148, .external_lex_state = 3},
  [5] = {.lex_state = 149, .external_lex_state = 3},
  [6] = {.lex_state = 149, .external_lex_state = 3},
  [7] = {.lex_state = 148, .external_lex_state = 2},
  [8] = {.lex_state = 149, .external_lex_state = 3},
  [9] = {.lex_state = 148, .external_lex_state = 2},
  [10] = {.lex_state = 148, .external_lex_state = 2},
  [11] = {.lex_state = 148, .external_lex_state = 3},
  [12] = {.lex_state = 148, .external_lex_state = 3},
  [13] = {.lex_state = 149, .external_lex_state = 2},
  [14] = {.lex_state = 149, .external_lex_state = 2},
  [15] = {.lex_state = 148, .external_lex_state = 3},
  [16] = {.lex_state = 148, .external_lex_state = 3},
  [17] = {.lex_state = 148, .external_lex_state = 3},
  [18] = {.lex_state = 148, .external_lex_state = 3},
  [19] = {.lex_state = 148, .external_lex_state = 3},
  [20] = {.lex_state = 148, .external_lex_state = 3},
  [21] = {.lex_state = 148, .external_lex_state = 3},
  [22] = {.lex_state = 149, .external_lex_state = 2},
  [23] = {.lex_state = 148, .external_lex_state = 3},
  [24] = {.lex_state = 150, .external_lex_state = 4},
  [25] = {.lex_state = 149, .external_lex_state = 3},
  [26] = {.lex_state = 150, .external_lex_state = 4},
  [27] = {.lex_state = 150, .external_lex_state = 4},
  [28] = {.lex_state = 148, .external_lex_state = 2},
  [29] = {.lex_state = 148, .external_lex_state = 2},
  [30] = {.lex_state = 149, .external_lex_state = 3},
  [31] = {.lex_state = 150, .external_lex_state = 4},
  [32] = {.lex_state = 148, .external_lex_state = 2},
  [33] = {.lex_state = 149, .external_lex_state = 3},
  [34] = {.lex_state = 148, .external_lex_state = 2},
  [35] = {.lex_state = 148, .external_lex_state = 2},
  [36] = {.lex_state = 150, .external_lex_state = 4},
  [37] = {.lex_state = 150, .external_lex_state = 4},
  [38] = {.lex_state = 149, .external_lex_state = 3},
  [39] = {.lex_state = 148, .external_lex_state = 2},
  [40] = {.lex_state = 148, .external_lex_state = 2},
  [41] = {.lex_state = 149, .external_lex_state = 3},
  [42] = {.lex_state = 149, .external_lex_state = 3},
  [43] = {.lex_state = 149, .external_lex_state = 3},
  [44] = {.lex_state = 150, .external_lex_state = 4},
  [45] = {.lex_state = 148, .external_lex_state = 2},
  [46] = {.lex_state = 148, .external_lex_state = 2},
  [47] = {.lex_state = 148, .external_lex_state = 2},
  [48] = {.lex_state = 150, .external_lex_state = 4},
  [49] = {.lex_state = 149, .external_lex_state = 3},
  [50] = {.lex_state = 149, .external_lex_state = 3},
  [51] = {.lex_state = 149, .external_lex_state = 3},
  [52] = {.lex_state = 149, .external_lex_state = 2},
  [53] = {.lex_state = 149, .external_lex_state = 2},
  [54] = {.lex_state = 149, .external_lex_state = 2},
  [55] = {.lex_state = 149, .external_lex_state = 2},
  [56] = {.lex_state = 149, .external_lex_state = 2},
  [57] = {.lex_state = 149, .external_lex_state = 2},
  [58] = {.lex_state = 149, .external_lex_state = 2},
  [59] = {.lex_state = 149, .external_lex_state = 2},
  [60] = {.lex_state = 149, .external_lex_state = 2},
  [61] = {.lex_state = 149, .external_lex_state = 2},
  [62] = {.lex_state = 151, .external_lex_state = 3},
  [63] = {.lex_state = 151, .external_lex_state = 2},
  [64] = {.lex_state = 152, .external_lex_state = 3},
  [65] = {.lex_state = 151, .external_lex_state = 3},
  [66] = {.lex_state = 152, .external_lex_state = 2},
  [67] = {.lex_state = 151, .external_lex_state = 2},
  [68] = {.lex_state = 152, .external_lex_state = 3},
  [69] = {.lex_state = 150, .external_lex_state = 3},
  [70] = {.lex_state = 150, .external_lex_state = 3},
  [71] = {.lex_state = 152, .external_lex_state = 2},
  [72] = {.lex_state = 150, .external_lex_state = 3},
  [73] = {.lex_state = 150, .external_lex_state = 2},
  [74] = {.lex_state = 150, .external_lex_state = 3},
  [75] = {.lex_state = 150, .external_lex_state = 3},
  [76] = {.lex_state = 150, .external_lex_state = 2},
  [77] = {.lex_state = 150, .external_lex_state = 2},
  [78] = {.lex_state = 150, .external_lex_state = 3},
  [79] = {.lex_state = 150, .external_lex_state = 3},
  [80] = {.lex_state = 150, .external_lex_state = 3},
  [81] = {.lex_state = 150, .external_lex_state = 3},
  [82] = {.lex_state = 150, .external_lex_state = 3},
  [83] = {.lex_state = 150, .external_lex_state = 3},
  [84] = {.lex_state = 150, .external_lex_state = 3},
  [85] = {.lex_state = 150, .external_lex_state = 3},
  [86] = {.lex_state = 150, .external_lex_state = 3},
  [87] = {.lex_state = 150, .external_lex_state = 2},
  [88] = {.lex_state = 150, .external_lex_state = 2},
  [89] = {.lex_state = 150, .external_lex_state = 3},
  [90] = {.lex_state = 150, .external_lex_state = 3},
  [91] = {.lex_state = 150, .external_lex_state = 3},
  [92] = {.lex_state = 150, .external_lex_state = 2},
  [93] = {.lex_state = 150, .external_lex_state = 2},
  [94] = {.lex_state = 150, .external_lex_state = 2},
  [95] = {.lex_state = 150, .external_lex_state = 2},
  [96] = {.lex_state = 150, .external_lex_state = 2},
  [97] = {.lex_state = 150, .external_lex_state = 2},
  [98] = {.lex_state = 150, .external_lex_state = 4},
  [99] = {.lex_state = 150, .external_lex_state = 2},
  [100] = {.lex_state = 150, .external_lex_state = 2},
  [101] = {.lex_state = 150, .external_lex_state = 4},
  [102] = {.lex_state = 150, .external_lex_state = 2},
  [103] = {.lex_state = 150, .external_lex_state = 4},
  [104] = {.lex_state = 150, .external_lex_state = 2},
  [105] = {.lex_state = 150, .external_lex_state = 2},
  [106] = {.lex_state = 150, .external_lex_state = 2},
  [107] = {.lex_state = 150, .external_lex_state = 4},
  [108] = {.lex_state = 150, .external_lex_state = 4},
  [109] = {.lex_state = 150, .external_lex_state = 4},
  [110] = {.lex_state = 150, .external_lex_state = 4},
  [111] = {.lex_state = 150, .external_lex_state = 4},
  [112] = {.lex_state = 150, .external_lex_state = 4},
  [113] = {.lex_state = 150, .external_lex_state = 4},
  [114] = {.lex_state = 150, .external_lex_state = 4},
  [115] = {.lex_state = 150, .external_lex_state = 4},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 150},
  [187] = {.lex_state = 150},
  [188] = {.lex_state = 150},
  [189] = {.lex_state = 150},
  [190] = {.lex_state = 150},
  [191] = {.lex_state = 150},
  [192] = {.lex_state = 150},
  [193] = {.lex_state = 150},
  [194] = {.lex_state = 150},
  [195] = {.lex_state = 150},
  [196] = {.lex_state = 151, .external_lex_state = 3},
  [197] = {.lex_state = 150},
  [198] = {.lex_state = 150},
  [199] = {.lex_state = 151, .external_lex_state = 2},
  [200] = {.lex_state = 152, .external_lex_state = 3},
  [201] = {.lex_state = 152, .external_lex_state = 2},
  [202] = {.lex_state = 150, .external_lex_state = 3},
  [203] = {.lex_state = 150, .external_lex_state = 3},
  [204] = {.lex_state = 150, .external_lex_state = 3},
  [205] = {.lex_state = 150, .external_lex_state = 4},
  [206] = {.lex_state = 150, .external_lex_state = 2},
  [207] = {.lex_state = 150, .external_lex_state = 4},
  [208] = {.lex_state = 150, .external_lex_state = 5},
  [209] = {.lex_state = 150, .external_lex_state = 5},
  [210] = {.lex_state = 150, .external_lex_state = 2},
  [211] = {.lex_state = 150, .external_lex_state = 2},
  [212] = {.lex_state = 150, .external_lex_state = 6},
  [213] = {.lex_state = 150, .external_lex_state = 6},
  [214] = {.lex_state = 150, .external_lex_state = 6},
  [215] = {.lex_state = 150, .external_lex_state = 6},
  [216] = {.lex_state = 150, .external_lex_state = 3},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 150, .external_lex_state = 3},
  [219] = {.lex_state = 150, .external_lex_state = 3},
  [220] = {.lex_state = 150, .external_lex_state = 3},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 150, .external_lex_state = 3},
  [223] = {.lex_state = 150, .external_lex_state = 3},
  [224] = {.lex_state = 150, .external_lex_state = 3},
  [225] = {.lex_state = 150, .external_lex_state = 3},
  [226] = {.lex_state = 150, .external_lex_state = 3},
  [227] = {.lex_state = 150, .external_lex_state = 3},
  [228] = {.lex_state = 150, .external_lex_state = 2},
  [229] = {.lex_state = 150, .external_lex_state = 2},
  [230] = {.lex_state = 150, .external_lex_state = 3},
  [231] = {.lex_state = 150, .external_lex_state = 2},
  [232] = {.lex_state = 150, .external_lex_state = 2},
  [233] = {.lex_state = 150, .external_lex_state = 2},
  [234] = {.lex_state = 150, .external_lex_state = 2},
  [235] = {.lex_state = 150, .external_lex_state = 2},
  [236] = {.lex_state = 150, .external_lex_state = 3},
  [237] = {.lex_state = 150, .external_lex_state = 2},
  [238] = {.lex_state = 150, .external_lex_state = 2},
  [239] = {.lex_state = 150, .external_lex_state = 2},
  [240] = {.lex_state = 150, .external_lex_state = 3},
  [241] = {.lex_state = 150, .external_lex_state = 3},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 150, .external_lex_state = 3},
  [244] = {.lex_state = 150, .external_lex_state = 3},
  [245] = {.lex_state = 150, .external_lex_state = 3},
  [246] = {.lex_state = 150, .external_lex_state = 3},
  [247] = {.lex_state = 150, .external_lex_state = 3},
  [248] = {.lex_state = 150, .external_lex_state = 3},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 150, .external_lex_state = 3},
  [251] = {.lex_state = 150, .external_lex_state = 3},
  [252] = {.lex_state = 150, .external_lex_state = 3},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 150, .external_lex_state = 2},
  [255] = {.lex_state = 150, .external_lex_state = 2},
  [256] = {.lex_state = 150, .external_lex_state = 2},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 150, .external_lex_state = 3},
  [259] = {.lex_state = 150, .external_lex_state = 3},
  [260] = {.lex_state = 150, .external_lex_state = 2},
  [261] = {.lex_state = 150, .external_lex_state = 2},
  [262] = {.lex_state = 150, .external_lex_state = 2},
  [263] = {.lex_state = 150, .external_lex_state = 2},
  [264] = {.lex_state = 150, .external_lex_state = 2},
  [265] = {.lex_state = 150, .external_lex_state = 2},
  [266] = {.lex_state = 150, .external_lex_state = 2},
  [267] = {.lex_state = 150, .external_lex_state = 2},
  [268] = {.lex_state = 150, .external_lex_state = 2},
  [269] = {.lex_state = 150, .external_lex_state = 2},
  [270] = {.lex_state = 150, .external_lex_state = 2},
  [271] = {.lex_state = 15, .external_lex_state = 7},
  [272] = {.lex_state = 15, .external_lex_state = 7},
  [273] = {.lex_state = 15, .external_lex_state = 7},
  [274] = {.lex_state = 15, .external_lex_state = 7},
  [275] = {.lex_state = 150, .external_lex_state = 6},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 74},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 74},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 74},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 74},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 74},
  [325] = {.lex_state = 74},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 74},
  [330] = {.lex_state = 74},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 74},
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
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_while_statement_token1] = ACTIONS(1),
    [aux_sym_do_statement_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__eol_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_format_specifier] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(1),
    [sym__label] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__indentation_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(326),
    [sym__statement] = STATE(210),
    [sym__simple_statement] = STATE(210),
    [sym__compound_statement] = STATE(210),
    [sym_command] = STATE(210),
    [sym_comment] = STATE(210),
    [sym_assignment] = STATE(210),
    [sym__typical_command] = STATE(263),
    [sym_keyword] = STATE(66),
    [sym_if_statement] = STATE(210),
    [sym_while_statement] = STATE(210),
    [sym_do_statement] = STATE(210),
    [sym_label] = STATE(215),
    [aux_sym_program_repeat1] = STATE(210),
    [aux_sym_keyword_token1] = ACTIONS(3),
    [aux_sym_if_statement_token1] = ACTIONS(5),
    [aux_sym_while_statement_token1] = ACTIONS(7),
    [aux_sym_do_statement_token1] = ACTIONS(9),
    [sym__eol_comment] = ACTIONS(11),
    [sym__set] = ACTIONS(13),
    [sym__line_comment] = ACTIONS(11),
    [sym__label] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_array_index,
    ACTIONS(19), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(17), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [58] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_array_index,
    ACTIONS(25), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(23), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [116] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_arguments,
    ACTIONS(29), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(27), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [174] = 4,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_array_index,
    ACTIONS(25), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(23), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [231] = 4,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_array_index,
    ACTIONS(19), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(17), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [288] = 4,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym__function_arguments,
    ACTIONS(29), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(27), 27,
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
  [345] = 4,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym__function_arguments,
    ACTIONS(29), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(27), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [402] = 4,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_array_index,
    ACTIONS(19), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(17), 27,
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
  [459] = 4,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_array_index,
    ACTIONS(25), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(23), 27,
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
  [516] = 2,
    ACTIONS(43), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(41), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [568] = 2,
    ACTIONS(47), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(45), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [620] = 4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_array_index,
    ACTIONS(19), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(17), 27,
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
  [676] = 4,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_array_index,
    ACTIONS(25), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(23), 27,
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
  [732] = 2,
    ACTIONS(53), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(51), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [784] = 2,
    ACTIONS(57), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(55), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [836] = 2,
    ACTIONS(61), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(59), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [888] = 2,
    ACTIONS(65), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(63), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [940] = 2,
    ACTIONS(69), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(67), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [992] = 2,
    ACTIONS(73), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(71), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [1044] = 2,
    ACTIONS(77), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(75), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [1096] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym__function_arguments,
    ACTIONS(29), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(27), 27,
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
  [1152] = 4,
    ACTIONS(87), 7,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
    ACTIONS(85), 11,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
      sym_global_variable,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
    ACTIONS(83), 12,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(81), 17,
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
  [1208] = 14,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(91), 1,
      aux_sym_keyword_token1,
    ACTIONS(93), 1,
      aux_sym_if_statement_token1,
    ACTIONS(95), 1,
      aux_sym_while_statement_token1,
    ACTIONS(97), 1,
      aux_sym_do_statement_token1,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(105), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(212), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(251), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [1283] = 4,
    ACTIONS(109), 7,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
    ACTIONS(83), 11,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(85), 11,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
      sym_global_variable,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
    ACTIONS(107), 17,
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
  [1338] = 14,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(7), 1,
      aux_sym_while_statement_token1,
    ACTIONS(9), 1,
      aux_sym_do_statement_token1,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(111), 1,
      sym__indent,
    STATE(66), 1,
      sym_keyword,
    STATE(215), 1,
      sym_label,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(262), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [1413] = 14,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(111), 1,
      sym__indent,
    ACTIONS(113), 1,
      aux_sym_keyword_token1,
    ACTIONS(115), 1,
      aux_sym_if_statement_token1,
    ACTIONS(117), 1,
      aux_sym_while_statement_token1,
    ACTIONS(119), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(213), 1,
      sym_label,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(269), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [1488] = 2,
    ACTIONS(73), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
  [1539] = 4,
    ACTIONS(123), 7,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
    ACTIONS(85), 10,
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
    ACTIONS(83), 12,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(121), 17,
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
  [1594] = 2,
    ACTIONS(57), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(55), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [1645] = 14,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(105), 1,
      sym__indent,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(251), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [1720] = 2,
    ACTIONS(69), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
  [1771] = 2,
    ACTIONS(61), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(59), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [1822] = 2,
    ACTIONS(65), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(63), 27,
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
  [1873] = 2,
    ACTIONS(43), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(41), 27,
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
  [1924] = 14,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(91), 1,
      aux_sym_keyword_token1,
    ACTIONS(93), 1,
      aux_sym_if_statement_token1,
    ACTIONS(95), 1,
      aux_sym_while_statement_token1,
    ACTIONS(97), 1,
      aux_sym_do_statement_token1,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(105), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(212), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(252), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [1999] = 14,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(111), 1,
      sym__indent,
    ACTIONS(113), 1,
      aux_sym_keyword_token1,
    ACTIONS(115), 1,
      aux_sym_if_statement_token1,
    ACTIONS(117), 1,
      aux_sym_while_statement_token1,
    ACTIONS(119), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(213), 1,
      sym_label,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(262), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [2074] = 2,
    ACTIONS(73), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(71), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [2125] = 2,
    ACTIONS(47), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(45), 27,
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
  [2176] = 2,
    ACTIONS(53), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
  [2227] = 2,
    ACTIONS(69), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(67), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [2278] = 2,
    ACTIONS(65), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(63), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [2329] = 2,
    ACTIONS(43), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(41), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [2380] = 14,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(91), 1,
      aux_sym_keyword_token1,
    ACTIONS(93), 1,
      aux_sym_if_statement_token1,
    ACTIONS(95), 1,
      aux_sym_while_statement_token1,
    ACTIONS(97), 1,
      aux_sym_do_statement_token1,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(105), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(212), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(244), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [2455] = 2,
    ACTIONS(57), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
  [2506] = 2,
    ACTIONS(61), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(59), 27,
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
  [2557] = 2,
    ACTIONS(77), 19,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
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
    ACTIONS(75), 27,
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
  [2608] = 14,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(111), 1,
      sym__indent,
    ACTIONS(113), 1,
      aux_sym_keyword_token1,
    ACTIONS(115), 1,
      aux_sym_if_statement_token1,
    ACTIONS(117), 1,
      aux_sym_while_statement_token1,
    ACTIONS(119), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(213), 1,
      sym_label,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(264), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
    ACTIONS(89), 21,
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
  [2683] = 2,
    ACTIONS(77), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(75), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [2734] = 2,
    ACTIONS(47), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(45), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [2785] = 2,
    ACTIONS(53), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(51), 28,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [2836] = 2,
    ACTIONS(73), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
  [2886] = 2,
    ACTIONS(69), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
  [2936] = 2,
    ACTIONS(65), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(63), 27,
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
  [2986] = 2,
    ACTIONS(77), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(75), 27,
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
  [3036] = 4,
    ACTIONS(135), 7,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_BANG,
    ACTIONS(85), 10,
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
    ACTIONS(83), 11,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(133), 17,
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
  [3090] = 2,
    ACTIONS(43), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(41), 27,
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
  [3140] = 2,
    ACTIONS(61), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(59), 27,
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
  [3190] = 2,
    ACTIONS(47), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
    ACTIONS(45), 27,
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
  [3240] = 2,
    ACTIONS(53), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
  [3290] = 2,
    ACTIONS(57), 18,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
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
  [3340] = 16,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(65), 1,
      sym_postconditional,
    STATE(246), 1,
      sym_arguments,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(159), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(139), 5,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(75), 13,
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
  [3415] = 16,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(161), 1,
      anon_sym_COLON,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(67), 1,
      sym_postconditional,
    STATE(260), 1,
      sym_arguments,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(177), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(139), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(137), 6,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(87), 13,
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
  [3489] = 16,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(179), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym_postconditional,
    STATE(246), 1,
      sym_arguments,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(159), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(137), 5,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    ACTIONS(139), 5,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    STATE(75), 13,
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
  [3563] = 14,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(258), 1,
      sym_arguments,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(159), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(183), 5,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    ACTIONS(181), 6,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(75), 13,
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
  [3632] = 16,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    ACTIONS(185), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_postconditional,
    STATE(260), 1,
      sym_arguments,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(177), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(139), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(137), 5,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(87), 13,
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
  [3705] = 14,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(268), 1,
      sym_arguments,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(177), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(183), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(181), 6,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(87), 13,
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
  [3773] = 14,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(258), 1,
      sym_arguments,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(159), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(181), 5,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    ACTIONS(183), 5,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    STATE(75), 13,
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
  [3841] = 4,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_array_index,
    ACTIONS(19), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(17), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [3888] = 4,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_array_index,
    ACTIONS(25), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(23), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [3935] = 14,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(268), 1,
      sym_arguments,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(177), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(183), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(181), 5,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(87), 13,
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
  [4002] = 4,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__function_arguments,
    ACTIONS(29), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(27), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4049] = 4,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym__function_arguments,
    ACTIONS(29), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(27), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4095] = 6,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(197), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(199), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(193), 21,
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
  [4145] = 6,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(205), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(207), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(193), 21,
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
  [4195] = 4,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_array_index,
    ACTIONS(19), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(17), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4241] = 4,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_array_index,
    ACTIONS(25), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(23), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4287] = 6,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(211), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(213), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(193), 21,
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
  [4337] = 2,
    ACTIONS(43), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(41), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4378] = 2,
    ACTIONS(65), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(63), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4419] = 2,
    ACTIONS(69), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4460] = 2,
    ACTIONS(73), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(71), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4501] = 4,
    ACTIONS(217), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(215), 10,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(193), 21,
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
  [4546] = 2,
    ACTIONS(47), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(45), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4587] = 2,
    ACTIONS(53), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4628] = 4,
    ACTIONS(221), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(219), 10,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(193), 21,
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
  [4673] = 6,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(205), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(227), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(207), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(223), 21,
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
  [4722] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(197), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(227), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(199), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(223), 21,
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
  [4771] = 2,
    ACTIONS(57), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(55), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4812] = 2,
    ACTIONS(61), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(59), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4853] = 2,
    ACTIONS(77), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 31,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4894] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(211), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(227), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(213), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(223), 21,
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
  [4943] = 2,
    ACTIONS(77), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [4983] = 2,
    ACTIONS(57), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(55), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5023] = 2,
    ACTIONS(65), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(63), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5063] = 2,
    ACTIONS(69), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5103] = 2,
    ACTIONS(61), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(59), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5143] = 4,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym__function_arguments,
    ACTIONS(29), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(27), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5187] = 4,
    ACTIONS(217), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(227), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(215), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(223), 21,
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
  [5231] = 2,
    ACTIONS(53), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5271] = 4,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_array_index,
    ACTIONS(19), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(17), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5315] = 4,
    ACTIONS(221), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(227), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(219), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(223), 21,
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
  [5359] = 4,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_array_index,
    ACTIONS(25), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(23), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5403] = 2,
    ACTIONS(43), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(41), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5443] = 2,
    ACTIONS(47), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(45), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5483] = 2,
    ACTIONS(73), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(71), 30,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
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
  [5523] = 2,
    ACTIONS(65), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(63), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5561] = 2,
    ACTIONS(69), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(67), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5599] = 2,
    ACTIONS(77), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5637] = 2,
    ACTIONS(53), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(51), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5675] = 2,
    ACTIONS(47), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(45), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5713] = 2,
    ACTIONS(73), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(71), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5751] = 2,
    ACTIONS(57), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(55), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5789] = 2,
    ACTIONS(61), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(59), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5827] = 2,
    ACTIONS(43), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(41), 28,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
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
  [5865] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym__function_arguments,
    ACTIONS(29), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(27), 25,
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
  [5906] = 4,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_array_index,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [5947] = 4,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_array_index,
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
  [5988] = 2,
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
  [6023] = 2,
    ACTIONS(65), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [6058] = 2,
    ACTIONS(69), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [6093] = 2,
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
  [6128] = 2,
    ACTIONS(53), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [6163] = 2,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [6198] = 2,
    ACTIONS(61), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [6233] = 2,
    ACTIONS(73), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [6268] = 2,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
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
  [6303] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(317), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6357] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(320), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6411] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(321), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6465] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(328), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6519] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(315), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6573] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(316), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6627] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(331), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6681] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(318), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6735] = 12,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    STATE(327), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(187), 13,
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
  [6789] = 11,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(255), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(257), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(81), 13,
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
  [6840] = 11,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(259), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(261), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
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
  [6891] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(263), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(265), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(192), 13,
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
  [6942] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(279), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(281), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
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
  [6993] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(283), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(285), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(197), 13,
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
  [7044] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(287), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(289), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
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
  [7095] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(291), 1,
      sym__variable_name,
    ACTIONS(293), 1,
      sym_global_variable,
    ACTIONS(297), 1,
      sym__builtin_identifier,
    ACTIONS(299), 1,
      sym__external_identifier,
    STATE(294), 1,
      sym__user_defined_identifier,
    ACTIONS(301), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(303), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(305), 2,
      sym_float,
      sym_string,
    ACTIONS(295), 3,
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
  [7146] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(307), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(309), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
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
  [7197] = 11,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(311), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(313), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
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
  [7248] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(315), 1,
      sym__variable_name,
    ACTIONS(317), 1,
      sym_global_variable,
    ACTIONS(321), 1,
      sym__builtin_identifier,
    ACTIONS(323), 1,
      sym__external_identifier,
    STATE(302), 1,
      sym__user_defined_identifier,
    ACTIONS(325), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(327), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(329), 2,
      sym_float,
      sym_string,
    ACTIONS(319), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(19), 13,
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
  [7299] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(331), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(333), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
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
  [7350] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(335), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(337), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(37), 13,
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
  [7401] = 11,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(339), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(341), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(74), 13,
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
  [7452] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(343), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(345), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(198), 13,
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
  [7503] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(347), 1,
      sym__variable_name,
    ACTIONS(349), 1,
      sym_global_variable,
    ACTIONS(353), 1,
      sym__builtin_identifier,
    ACTIONS(355), 1,
      sym__external_identifier,
    STATE(305), 1,
      sym__user_defined_identifier,
    ACTIONS(357), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(359), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(361), 2,
      sym_float,
      sym_string,
    ACTIONS(351), 3,
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
  [7554] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(363), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(365), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(194), 13,
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
  [7605] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(367), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(369), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
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
  [7656] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(371), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(373), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(191), 13,
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
  [7707] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(375), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(377), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(26), 13,
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
  [7758] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(381), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
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
  [7809] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(383), 1,
      sym__variable_name,
    ACTIONS(385), 1,
      sym_global_variable,
    ACTIONS(389), 1,
      sym__builtin_identifier,
    ACTIONS(391), 1,
      sym__external_identifier,
    STATE(292), 1,
      sym__user_defined_identifier,
    ACTIONS(393), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(395), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(397), 2,
      sym_float,
      sym_string,
    ACTIONS(387), 3,
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
  [7860] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(399), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(401), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(121), 13,
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
  [7911] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(403), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(405), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(115), 13,
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
  [7962] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(407), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(409), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(119), 13,
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
  [8013] = 11,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(411), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(413), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(78), 13,
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
  [8064] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(415), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(417), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(179), 13,
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
  [8115] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(419), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(421), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(193), 13,
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
  [8166] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(291), 1,
      sym__variable_name,
    ACTIONS(293), 1,
      sym_global_variable,
    ACTIONS(297), 1,
      sym__builtin_identifier,
    ACTIONS(299), 1,
      sym__external_identifier,
    STATE(294), 1,
      sym__user_defined_identifier,
    ACTIONS(301), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(423), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(425), 2,
      sym_float,
      sym_string,
    ACTIONS(295), 3,
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
  [8217] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(427), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(429), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(195), 13,
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
  [8268] = 11,
    ACTIONS(143), 1,
      sym__variable_name,
    ACTIONS(145), 1,
      sym_global_variable,
    ACTIONS(149), 1,
      sym__builtin_identifier,
    ACTIONS(151), 1,
      sym__external_identifier,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(298), 1,
      sym__user_defined_identifier,
    ACTIONS(155), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(431), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(433), 2,
      sym_float,
      sym_string,
    ACTIONS(147), 3,
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
  [8319] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(435), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(437), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(186), 13,
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
  [8370] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(315), 1,
      sym__variable_name,
    ACTIONS(317), 1,
      sym_global_variable,
    ACTIONS(321), 1,
      sym__builtin_identifier,
    ACTIONS(323), 1,
      sym__external_identifier,
    STATE(302), 1,
      sym__user_defined_identifier,
    ACTIONS(325), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(439), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(441), 2,
      sym_float,
      sym_string,
    ACTIONS(319), 3,
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
  [8421] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(443), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(445), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(102), 13,
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
  [8472] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(291), 1,
      sym__variable_name,
    ACTIONS(293), 1,
      sym_global_variable,
    ACTIONS(297), 1,
      sym__builtin_identifier,
    ACTIONS(299), 1,
      sym__external_identifier,
    STATE(294), 1,
      sym__user_defined_identifier,
    ACTIONS(301), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(447), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(449), 2,
      sym_float,
      sym_string,
    ACTIONS(295), 3,
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
  [8523] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(451), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(453), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
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
  [8574] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(455), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(457), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(104), 13,
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
  [8625] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(459), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(461), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(188), 13,
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
  [8676] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(463), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(465), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
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
  [8727] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(383), 1,
      sym__variable_name,
    ACTIONS(385), 1,
      sym_global_variable,
    ACTIONS(389), 1,
      sym__builtin_identifier,
    ACTIONS(391), 1,
      sym__external_identifier,
    STATE(292), 1,
      sym__user_defined_identifier,
    ACTIONS(393), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(467), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(469), 2,
      sym_float,
      sym_string,
    ACTIONS(387), 3,
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
  [8778] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(471), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(473), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
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
  [8829] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(475), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(477), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(190), 13,
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
  [8880] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(239), 1,
      sym__variable_name,
    ACTIONS(241), 1,
      sym_global_variable,
    ACTIONS(245), 1,
      sym__builtin_identifier,
    ACTIONS(247), 1,
      sym__external_identifier,
    STATE(304), 1,
      sym__user_defined_identifier,
    ACTIONS(249), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(479), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(481), 2,
      sym_float,
      sym_string,
    ACTIONS(243), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(189), 13,
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
  [8931] = 4,
    ACTIONS(83), 2,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(85), 2,
      sym__variable_name,
      sym_global_variable,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [8968] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(347), 1,
      sym__variable_name,
    ACTIONS(349), 1,
      sym_global_variable,
    ACTIONS(353), 1,
      sym__builtin_identifier,
    ACTIONS(355), 1,
      sym__external_identifier,
    STATE(305), 1,
      sym__user_defined_identifier,
    ACTIONS(357), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(487), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(489), 2,
      sym_float,
      sym_string,
    ACTIONS(351), 3,
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
  [9019] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(383), 1,
      sym__variable_name,
    ACTIONS(385), 1,
      sym_global_variable,
    ACTIONS(389), 1,
      sym__builtin_identifier,
    ACTIONS(391), 1,
      sym__external_identifier,
    STATE(292), 1,
      sym__user_defined_identifier,
    ACTIONS(393), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(491), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(493), 2,
      sym_float,
      sym_string,
    ACTIONS(387), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(41), 13,
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
  [9070] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(163), 1,
      sym__variable_name,
    ACTIONS(165), 1,
      sym_global_variable,
    ACTIONS(169), 1,
      sym__builtin_identifier,
    ACTIONS(171), 1,
      sym__external_identifier,
    STATE(297), 1,
      sym__user_defined_identifier,
    ACTIONS(173), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(495), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(497), 2,
      sym_float,
      sym_string,
    ACTIONS(167), 3,
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
  [9121] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(267), 1,
      sym__variable_name,
    ACTIONS(269), 1,
      sym_global_variable,
    ACTIONS(273), 1,
      sym__builtin_identifier,
    ACTIONS(275), 1,
      sym__external_identifier,
    STATE(300), 1,
      sym__user_defined_identifier,
    ACTIONS(277), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(499), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(501), 2,
      sym_float,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(108), 13,
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
  [9172] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(315), 1,
      sym__variable_name,
    ACTIONS(317), 1,
      sym_global_variable,
    ACTIONS(321), 1,
      sym__builtin_identifier,
    ACTIONS(323), 1,
      sym__external_identifier,
    STATE(302), 1,
      sym__user_defined_identifier,
    ACTIONS(325), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(503), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(505), 2,
      sym_float,
      sym_string,
    ACTIONS(319), 3,
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
  [9223] = 11,
    ACTIONS(153), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(347), 1,
      sym__variable_name,
    ACTIONS(349), 1,
      sym_global_variable,
    ACTIONS(353), 1,
      sym__builtin_identifier,
    ACTIONS(355), 1,
      sym__external_identifier,
    STATE(305), 1,
      sym__user_defined_identifier,
    ACTIONS(357), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(507), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(509), 2,
      sym_float,
      sym_string,
    ACTIONS(351), 3,
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
  [9274] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9312] = 5,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9350] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9388] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9426] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9464] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9502] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9540] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9578] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9616] = 5,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9654] = 2,
    ACTIONS(533), 11,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(535), 15,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [9685] = 3,
    ACTIONS(537), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9718] = 3,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(483), 21,
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
  [9751] = 2,
    ACTIONS(533), 11,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(535), 14,
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
  [9781] = 2,
    ACTIONS(533), 10,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(535), 15,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
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
  [9811] = 2,
    ACTIONS(533), 10,
      aux_sym_keyword_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(535), 14,
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
  [9840] = 13,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    ACTIONS(539), 1,
      sym__dedent,
    ACTIONS(541), 1,
      sym__indentation_marker,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(203), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      aux_sym_block_repeat1,
  [9890] = 13,
    ACTIONS(543), 1,
      aux_sym_keyword_token1,
    ACTIONS(546), 1,
      aux_sym_if_statement_token1,
    ACTIONS(549), 1,
      aux_sym_while_statement_token1,
    ACTIONS(552), 1,
      aux_sym_do_statement_token1,
    ACTIONS(558), 1,
      sym__set,
    ACTIONS(561), 1,
      sym__label,
    ACTIONS(564), 1,
      sym__dedent,
    ACTIONS(566), 1,
      sym__indentation_marker,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(555), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(203), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      aux_sym_block_repeat1,
  [9940] = 13,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    ACTIONS(541), 1,
      sym__indentation_marker,
    ACTIONS(569), 1,
      sym__dedent,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(203), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      aux_sym_block_repeat1,
  [9990] = 12,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(105), 1,
      sym__indent,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(243), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
  [10037] = 12,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 1,
      aux_sym_keyword_token1,
    ACTIONS(576), 1,
      aux_sym_if_statement_token1,
    ACTIONS(579), 1,
      aux_sym_while_statement_token1,
    ACTIONS(582), 1,
      aux_sym_do_statement_token1,
    ACTIONS(588), 1,
      sym__set,
    ACTIONS(591), 1,
      sym__label,
    STATE(66), 1,
      sym_keyword,
    STATE(215), 1,
      sym_label,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(585), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(206), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      aux_sym_program_repeat1,
  [10084] = 12,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(7), 1,
      aux_sym_while_statement_token1,
    ACTIONS(9), 1,
      aux_sym_do_statement_token1,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(111), 1,
      sym__indent,
    STATE(66), 1,
      sym_keyword,
    STATE(215), 1,
      sym_label,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(261), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
  [10131] = 12,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    ACTIONS(541), 1,
      sym__indentation_marker,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(204), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      aux_sym_block_repeat1,
  [10178] = 12,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    ACTIONS(541), 1,
      sym__indentation_marker,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(202), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      aux_sym_block_repeat1,
  [10225] = 12,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(7), 1,
      aux_sym_while_statement_token1,
    ACTIONS(9), 1,
      aux_sym_do_statement_token1,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_keyword,
    STATE(215), 1,
      sym_label,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(206), 10,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      aux_sym_program_repeat1,
  [10272] = 11,
    ACTIONS(15), 1,
      sym__label,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    STATE(64), 1,
      sym_keyword,
    STATE(214), 1,
      sym_label,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(259), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
  [10315] = 9,
    ACTIONS(91), 1,
      aux_sym_keyword_token1,
    ACTIONS(93), 1,
      aux_sym_if_statement_token1,
    ACTIONS(95), 1,
      aux_sym_while_statement_token1,
    ACTIONS(97), 1,
      aux_sym_do_statement_token1,
    ACTIONS(103), 1,
      sym__set,
    STATE(62), 1,
      sym_keyword,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(248), 8,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
  [10351] = 9,
    ACTIONS(13), 1,
      sym__set,
    ACTIONS(113), 1,
      aux_sym_keyword_token1,
    ACTIONS(115), 1,
      aux_sym_if_statement_token1,
    ACTIONS(117), 1,
      aux_sym_while_statement_token1,
    ACTIONS(119), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(270), 8,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
  [10387] = 9,
    ACTIONS(103), 1,
      sym__set,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(127), 1,
      aux_sym_if_statement_token1,
    ACTIONS(129), 1,
      aux_sym_while_statement_token1,
    ACTIONS(131), 1,
      aux_sym_do_statement_token1,
    STATE(64), 1,
      sym_keyword,
    STATE(245), 1,
      sym__typical_command,
    ACTIONS(99), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(248), 8,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
  [10423] = 9,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(5), 1,
      aux_sym_if_statement_token1,
    ACTIONS(7), 1,
      aux_sym_while_statement_token1,
    ACTIONS(9), 1,
      aux_sym_do_statement_token1,
    ACTIONS(13), 1,
      sym__set,
    STATE(66), 1,
      sym_keyword,
    STATE(263), 1,
      sym__typical_command,
    ACTIONS(11), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(270), 8,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
  [10459] = 4,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(596), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(598), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10481] = 7,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      sym__variable_name,
    ACTIONS(604), 1,
      sym_global_variable,
    ACTIONS(606), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(608), 1,
      sym__builtin_identifier,
    STATE(242), 1,
      sym_postconditional,
    STATE(311), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [10509] = 4,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(610), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(612), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10531] = 4,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(616), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(618), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10553] = 4,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(623), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(625), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10575] = 7,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      sym__variable_name,
    ACTIONS(604), 1,
      sym_global_variable,
    ACTIONS(606), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(608), 1,
      sym__builtin_identifier,
    STATE(249), 1,
      sym_postconditional,
    STATE(306), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [10603] = 4,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(627), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(629), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10625] = 4,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(634), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(636), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10647] = 4,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(641), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(643), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10669] = 3,
    ACTIONS(649), 1,
      anon_sym_CARET,
    ACTIONS(647), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(645), 10,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10689] = 4,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(651), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(653), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10711] = 3,
    ACTIONS(659), 1,
      anon_sym_CARET,
    ACTIONS(657), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(655), 10,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10731] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(616), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(618), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10752] = 3,
    ACTIONS(663), 1,
      anon_sym_CARET,
    ACTIONS(657), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(655), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10771] = 2,
    ACTIONS(641), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(643), 10,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10788] = 4,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(641), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(643), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10809] = 4,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(610), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(612), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10830] = 4,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(623), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(625), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10851] = 4,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(596), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(598), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10872] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(651), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(653), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10893] = 2,
    ACTIONS(673), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(671), 10,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10910] = 4,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(634), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(636), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10931] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(627), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(629), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10952] = 3,
    ACTIONS(678), 1,
      anon_sym_CARET,
    ACTIONS(647), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(645), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10971] = 2,
    ACTIONS(682), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(680), 10,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [10988] = 2,
    ACTIONS(616), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(618), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11004] = 5,
    ACTIONS(602), 1,
      sym__variable_name,
    ACTIONS(604), 1,
      sym_global_variable,
    ACTIONS(606), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(608), 1,
      sym__builtin_identifier,
    STATE(314), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [11026] = 2,
    ACTIONS(684), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(686), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11042] = 3,
    ACTIONS(692), 1,
      aux_sym_if_statement_token2,
    ACTIONS(688), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(690), 8,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11060] = 2,
    ACTIONS(694), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(696), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11076] = 2,
    ACTIONS(181), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(183), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11092] = 2,
    ACTIONS(698), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(700), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11108] = 2,
    ACTIONS(702), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(704), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11124] = 5,
    ACTIONS(602), 1,
      sym__variable_name,
    ACTIONS(604), 1,
      sym_global_variable,
    ACTIONS(606), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(608), 1,
      sym__builtin_identifier,
    STATE(307), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [11146] = 2,
    ACTIONS(706), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(708), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11162] = 2,
    ACTIONS(710), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(712), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11178] = 2,
    ACTIONS(688), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(690), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11194] = 5,
    ACTIONS(602), 1,
      sym__variable_name,
    ACTIONS(604), 1,
      sym_global_variable,
    ACTIONS(606), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(608), 1,
      sym__builtin_identifier,
    STATE(303), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [11216] = 2,
    ACTIONS(673), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(671), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11232] = 2,
    ACTIONS(682), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(680), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11248] = 2,
    ACTIONS(641), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(643), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11264] = 5,
    ACTIONS(602), 1,
      sym__variable_name,
    ACTIONS(604), 1,
      sym_global_variable,
    ACTIONS(606), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(608), 1,
      sym__builtin_identifier,
    STATE(313), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [11286] = 2,
    ACTIONS(714), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(716), 9,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11302] = 2,
    ACTIONS(718), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(564), 8,
      sym__line_comment,
      sym__label,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11317] = 2,
    ACTIONS(181), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(183), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11332] = 2,
    ACTIONS(684), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(686), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11347] = 2,
    ACTIONS(710), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(712), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11362] = 2,
    ACTIONS(694), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(696), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11377] = 3,
    ACTIONS(720), 1,
      aux_sym_if_statement_token2,
    ACTIONS(688), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(690), 7,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11394] = 2,
    ACTIONS(698), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(700), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11409] = 2,
    ACTIONS(706), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(708), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11424] = 2,
    ACTIONS(616), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(618), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11439] = 2,
    ACTIONS(714), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(716), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11454] = 2,
    ACTIONS(688), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(690), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11469] = 2,
    ACTIONS(702), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(704), 8,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11484] = 8,
    ACTIONS(105), 1,
      sym__indent,
    ACTIONS(125), 1,
      aux_sym_keyword_token1,
    ACTIONS(722), 1,
      anon_sym_CARET,
    ACTIONS(724), 1,
      sym__routine_label,
    STATE(64), 1,
      sym_keyword,
    STATE(219), 1,
      sym__routine_call,
    STATE(245), 1,
      sym__typical_command,
    STATE(241), 2,
      sym_block,
      sym_command,
  [11510] = 8,
    ACTIONS(3), 1,
      aux_sym_keyword_token1,
    ACTIONS(111), 1,
      sym__indent,
    ACTIONS(726), 1,
      anon_sym_CARET,
    ACTIONS(728), 1,
      sym__routine_label,
    STATE(66), 1,
      sym_keyword,
    STATE(228), 1,
      sym__routine_call,
    STATE(263), 1,
      sym__typical_command,
    STATE(267), 2,
      sym_block,
      sym_command,
  [11536] = 8,
    ACTIONS(111), 1,
      sym__indent,
    ACTIONS(113), 1,
      aux_sym_keyword_token1,
    ACTIONS(726), 1,
      anon_sym_CARET,
    ACTIONS(728), 1,
      sym__routine_label,
    STATE(63), 1,
      sym_keyword,
    STATE(228), 1,
      sym__routine_call,
    STATE(263), 1,
      sym__typical_command,
    STATE(267), 2,
      sym_block,
      sym_command,
  [11562] = 8,
    ACTIONS(91), 1,
      aux_sym_keyword_token1,
    ACTIONS(105), 1,
      sym__indent,
    ACTIONS(722), 1,
      anon_sym_CARET,
    ACTIONS(724), 1,
      sym__routine_label,
    STATE(62), 1,
      sym_keyword,
    STATE(219), 1,
      sym__routine_call,
    STATE(245), 1,
      sym__typical_command,
    STATE(241), 2,
      sym_block,
      sym_command,
  [11588] = 2,
    ACTIONS(730), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(732), 5,
      sym__line_comment,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [11600] = 4,
    ACTIONS(23), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym_array_index,
  [11613] = 4,
    ACTIONS(17), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    STATE(310), 1,
      sym_array_index,
  [11626] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11636] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11646] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11656] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11666] = 3,
    ACTIONS(726), 1,
      anon_sym_CARET,
    ACTIONS(744), 1,
      sym__routine_label,
    STATE(256), 1,
      sym__routine_call,
  [11676] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11686] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11696] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11706] = 3,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11716] = 3,
    ACTIONS(722), 1,
      anon_sym_CARET,
    ACTIONS(757), 1,
      sym__routine_label,
    STATE(230), 1,
      sym__routine_call,
  [11726] = 3,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_arguments_repeat1,
  [11736] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11746] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_array_index_repeat1,
  [11756] = 3,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_arguments_repeat1,
  [11766] = 2,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym__function_arguments,
  [11773] = 2,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__function_arguments,
  [11780] = 2,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym__function_arguments,
  [11787] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [11794] = 2,
    ACTIONS(59), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(61), 1,
      anon_sym_EQ,
  [11801] = 2,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym__function_arguments,
  [11808] = 2,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__function_arguments,
  [11815] = 2,
    ACTIONS(55), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(57), 1,
      anon_sym_EQ,
  [11822] = 2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym__function_arguments,
  [11829] = 2,
    ACTIONS(768), 1,
      anon_sym_CARET,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [11836] = 2,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_arguments,
  [11843] = 2,
    ACTIONS(772), 1,
      anon_sym_EQ,
    ACTIONS(774), 1,
      anon_sym_EQ_PLUS,
  [11850] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym__function_arguments,
  [11857] = 2,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym__function_arguments,
  [11864] = 2,
    ACTIONS(776), 1,
      anon_sym_EQ,
    ACTIONS(778), 1,
      anon_sym_EQ_PLUS,
  [11871] = 2,
    ACTIONS(780), 1,
      anon_sym_EQ,
    ACTIONS(782), 1,
      anon_sym_EQ_PLUS,
  [11878] = 2,
    ACTIONS(784), 1,
      anon_sym_EQ,
    ACTIONS(786), 1,
      anon_sym_EQ_PLUS,
  [11885] = 2,
    ACTIONS(45), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(47), 1,
      anon_sym_EQ,
  [11892] = 2,
    ACTIONS(51), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(53), 1,
      anon_sym_EQ,
  [11899] = 2,
    ACTIONS(788), 1,
      anon_sym_EQ,
    ACTIONS(790), 1,
      anon_sym_EQ_PLUS,
  [11906] = 2,
    ACTIONS(27), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(29), 1,
      anon_sym_EQ,
  [11913] = 2,
    ACTIONS(792), 1,
      anon_sym_EQ,
    ACTIONS(794), 1,
      anon_sym_EQ_PLUS,
  [11920] = 2,
    ACTIONS(796), 1,
      anon_sym_EQ,
    ACTIONS(798), 1,
      anon_sym_EQ_PLUS,
  [11927] = 1,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
  [11931] = 1,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [11935] = 1,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
  [11939] = 1,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [11943] = 1,
    ACTIONS(808), 1,
      sym__routine_label,
  [11947] = 1,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [11951] = 1,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
  [11955] = 1,
    ACTIONS(814), 1,
      sym__routine_label,
  [11959] = 1,
    ACTIONS(816), 1,
      anon_sym_LPAREN,
  [11963] = 1,
    ACTIONS(818), 1,
      sym__routine_label,
  [11967] = 1,
    ACTIONS(820), 1,
      sym__routine_label,
  [11971] = 1,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
  [11975] = 1,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [11979] = 1,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
  [11983] = 1,
    ACTIONS(828), 1,
      sym__routine_label,
  [11987] = 1,
    ACTIONS(830), 1,
      sym__routine_label,
  [11991] = 1,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [11995] = 1,
    ACTIONS(834), 1,
      sym__routine_label,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 345,
  [SMALL_STATE(9)] = 402,
  [SMALL_STATE(10)] = 459,
  [SMALL_STATE(11)] = 516,
  [SMALL_STATE(12)] = 568,
  [SMALL_STATE(13)] = 620,
  [SMALL_STATE(14)] = 676,
  [SMALL_STATE(15)] = 732,
  [SMALL_STATE(16)] = 784,
  [SMALL_STATE(17)] = 836,
  [SMALL_STATE(18)] = 888,
  [SMALL_STATE(19)] = 940,
  [SMALL_STATE(20)] = 992,
  [SMALL_STATE(21)] = 1044,
  [SMALL_STATE(22)] = 1096,
  [SMALL_STATE(23)] = 1152,
  [SMALL_STATE(24)] = 1208,
  [SMALL_STATE(25)] = 1283,
  [SMALL_STATE(26)] = 1338,
  [SMALL_STATE(27)] = 1413,
  [SMALL_STATE(28)] = 1488,
  [SMALL_STATE(29)] = 1539,
  [SMALL_STATE(30)] = 1594,
  [SMALL_STATE(31)] = 1645,
  [SMALL_STATE(32)] = 1720,
  [SMALL_STATE(33)] = 1771,
  [SMALL_STATE(34)] = 1822,
  [SMALL_STATE(35)] = 1873,
  [SMALL_STATE(36)] = 1924,
  [SMALL_STATE(37)] = 1999,
  [SMALL_STATE(38)] = 2074,
  [SMALL_STATE(39)] = 2125,
  [SMALL_STATE(40)] = 2176,
  [SMALL_STATE(41)] = 2227,
  [SMALL_STATE(42)] = 2278,
  [SMALL_STATE(43)] = 2329,
  [SMALL_STATE(44)] = 2380,
  [SMALL_STATE(45)] = 2455,
  [SMALL_STATE(46)] = 2506,
  [SMALL_STATE(47)] = 2557,
  [SMALL_STATE(48)] = 2608,
  [SMALL_STATE(49)] = 2683,
  [SMALL_STATE(50)] = 2734,
  [SMALL_STATE(51)] = 2785,
  [SMALL_STATE(52)] = 2836,
  [SMALL_STATE(53)] = 2886,
  [SMALL_STATE(54)] = 2936,
  [SMALL_STATE(55)] = 2986,
  [SMALL_STATE(56)] = 3036,
  [SMALL_STATE(57)] = 3090,
  [SMALL_STATE(58)] = 3140,
  [SMALL_STATE(59)] = 3190,
  [SMALL_STATE(60)] = 3240,
  [SMALL_STATE(61)] = 3290,
  [SMALL_STATE(62)] = 3340,
  [SMALL_STATE(63)] = 3415,
  [SMALL_STATE(64)] = 3489,
  [SMALL_STATE(65)] = 3563,
  [SMALL_STATE(66)] = 3632,
  [SMALL_STATE(67)] = 3705,
  [SMALL_STATE(68)] = 3773,
  [SMALL_STATE(69)] = 3841,
  [SMALL_STATE(70)] = 3888,
  [SMALL_STATE(71)] = 3935,
  [SMALL_STATE(72)] = 4002,
  [SMALL_STATE(73)] = 4049,
  [SMALL_STATE(74)] = 4095,
  [SMALL_STATE(75)] = 4145,
  [SMALL_STATE(76)] = 4195,
  [SMALL_STATE(77)] = 4241,
  [SMALL_STATE(78)] = 4287,
  [SMALL_STATE(79)] = 4337,
  [SMALL_STATE(80)] = 4378,
  [SMALL_STATE(81)] = 4419,
  [SMALL_STATE(82)] = 4460,
  [SMALL_STATE(83)] = 4501,
  [SMALL_STATE(84)] = 4546,
  [SMALL_STATE(85)] = 4587,
  [SMALL_STATE(86)] = 4628,
  [SMALL_STATE(87)] = 4673,
  [SMALL_STATE(88)] = 4722,
  [SMALL_STATE(89)] = 4771,
  [SMALL_STATE(90)] = 4812,
  [SMALL_STATE(91)] = 4853,
  [SMALL_STATE(92)] = 4894,
  [SMALL_STATE(93)] = 4943,
  [SMALL_STATE(94)] = 4983,
  [SMALL_STATE(95)] = 5023,
  [SMALL_STATE(96)] = 5063,
  [SMALL_STATE(97)] = 5103,
  [SMALL_STATE(98)] = 5143,
  [SMALL_STATE(99)] = 5187,
  [SMALL_STATE(100)] = 5231,
  [SMALL_STATE(101)] = 5271,
  [SMALL_STATE(102)] = 5315,
  [SMALL_STATE(103)] = 5359,
  [SMALL_STATE(104)] = 5403,
  [SMALL_STATE(105)] = 5443,
  [SMALL_STATE(106)] = 5483,
  [SMALL_STATE(107)] = 5523,
  [SMALL_STATE(108)] = 5561,
  [SMALL_STATE(109)] = 5599,
  [SMALL_STATE(110)] = 5637,
  [SMALL_STATE(111)] = 5675,
  [SMALL_STATE(112)] = 5713,
  [SMALL_STATE(113)] = 5751,
  [SMALL_STATE(114)] = 5789,
  [SMALL_STATE(115)] = 5827,
  [SMALL_STATE(116)] = 5865,
  [SMALL_STATE(117)] = 5906,
  [SMALL_STATE(118)] = 5947,
  [SMALL_STATE(119)] = 5988,
  [SMALL_STATE(120)] = 6023,
  [SMALL_STATE(121)] = 6058,
  [SMALL_STATE(122)] = 6093,
  [SMALL_STATE(123)] = 6128,
  [SMALL_STATE(124)] = 6163,
  [SMALL_STATE(125)] = 6198,
  [SMALL_STATE(126)] = 6233,
  [SMALL_STATE(127)] = 6268,
  [SMALL_STATE(128)] = 6303,
  [SMALL_STATE(129)] = 6357,
  [SMALL_STATE(130)] = 6411,
  [SMALL_STATE(131)] = 6465,
  [SMALL_STATE(132)] = 6519,
  [SMALL_STATE(133)] = 6573,
  [SMALL_STATE(134)] = 6627,
  [SMALL_STATE(135)] = 6681,
  [SMALL_STATE(136)] = 6735,
  [SMALL_STATE(137)] = 6789,
  [SMALL_STATE(138)] = 6840,
  [SMALL_STATE(139)] = 6891,
  [SMALL_STATE(140)] = 6942,
  [SMALL_STATE(141)] = 6993,
  [SMALL_STATE(142)] = 7044,
  [SMALL_STATE(143)] = 7095,
  [SMALL_STATE(144)] = 7146,
  [SMALL_STATE(145)] = 7197,
  [SMALL_STATE(146)] = 7248,
  [SMALL_STATE(147)] = 7299,
  [SMALL_STATE(148)] = 7350,
  [SMALL_STATE(149)] = 7401,
  [SMALL_STATE(150)] = 7452,
  [SMALL_STATE(151)] = 7503,
  [SMALL_STATE(152)] = 7554,
  [SMALL_STATE(153)] = 7605,
  [SMALL_STATE(154)] = 7656,
  [SMALL_STATE(155)] = 7707,
  [SMALL_STATE(156)] = 7758,
  [SMALL_STATE(157)] = 7809,
  [SMALL_STATE(158)] = 7860,
  [SMALL_STATE(159)] = 7911,
  [SMALL_STATE(160)] = 7962,
  [SMALL_STATE(161)] = 8013,
  [SMALL_STATE(162)] = 8064,
  [SMALL_STATE(163)] = 8115,
  [SMALL_STATE(164)] = 8166,
  [SMALL_STATE(165)] = 8217,
  [SMALL_STATE(166)] = 8268,
  [SMALL_STATE(167)] = 8319,
  [SMALL_STATE(168)] = 8370,
  [SMALL_STATE(169)] = 8421,
  [SMALL_STATE(170)] = 8472,
  [SMALL_STATE(171)] = 8523,
  [SMALL_STATE(172)] = 8574,
  [SMALL_STATE(173)] = 8625,
  [SMALL_STATE(174)] = 8676,
  [SMALL_STATE(175)] = 8727,
  [SMALL_STATE(176)] = 8778,
  [SMALL_STATE(177)] = 8829,
  [SMALL_STATE(178)] = 8880,
  [SMALL_STATE(179)] = 8931,
  [SMALL_STATE(180)] = 8968,
  [SMALL_STATE(181)] = 9019,
  [SMALL_STATE(182)] = 9070,
  [SMALL_STATE(183)] = 9121,
  [SMALL_STATE(184)] = 9172,
  [SMALL_STATE(185)] = 9223,
  [SMALL_STATE(186)] = 9274,
  [SMALL_STATE(187)] = 9312,
  [SMALL_STATE(188)] = 9350,
  [SMALL_STATE(189)] = 9388,
  [SMALL_STATE(190)] = 9426,
  [SMALL_STATE(191)] = 9464,
  [SMALL_STATE(192)] = 9502,
  [SMALL_STATE(193)] = 9540,
  [SMALL_STATE(194)] = 9578,
  [SMALL_STATE(195)] = 9616,
  [SMALL_STATE(196)] = 9654,
  [SMALL_STATE(197)] = 9685,
  [SMALL_STATE(198)] = 9718,
  [SMALL_STATE(199)] = 9751,
  [SMALL_STATE(200)] = 9781,
  [SMALL_STATE(201)] = 9811,
  [SMALL_STATE(202)] = 9840,
  [SMALL_STATE(203)] = 9890,
  [SMALL_STATE(204)] = 9940,
  [SMALL_STATE(205)] = 9990,
  [SMALL_STATE(206)] = 10037,
  [SMALL_STATE(207)] = 10084,
  [SMALL_STATE(208)] = 10131,
  [SMALL_STATE(209)] = 10178,
  [SMALL_STATE(210)] = 10225,
  [SMALL_STATE(211)] = 10272,
  [SMALL_STATE(212)] = 10315,
  [SMALL_STATE(213)] = 10351,
  [SMALL_STATE(214)] = 10387,
  [SMALL_STATE(215)] = 10423,
  [SMALL_STATE(216)] = 10459,
  [SMALL_STATE(217)] = 10481,
  [SMALL_STATE(218)] = 10509,
  [SMALL_STATE(219)] = 10531,
  [SMALL_STATE(220)] = 10553,
  [SMALL_STATE(221)] = 10575,
  [SMALL_STATE(222)] = 10603,
  [SMALL_STATE(223)] = 10625,
  [SMALL_STATE(224)] = 10647,
  [SMALL_STATE(225)] = 10669,
  [SMALL_STATE(226)] = 10689,
  [SMALL_STATE(227)] = 10711,
  [SMALL_STATE(228)] = 10731,
  [SMALL_STATE(229)] = 10752,
  [SMALL_STATE(230)] = 10771,
  [SMALL_STATE(231)] = 10788,
  [SMALL_STATE(232)] = 10809,
  [SMALL_STATE(233)] = 10830,
  [SMALL_STATE(234)] = 10851,
  [SMALL_STATE(235)] = 10872,
  [SMALL_STATE(236)] = 10893,
  [SMALL_STATE(237)] = 10910,
  [SMALL_STATE(238)] = 10931,
  [SMALL_STATE(239)] = 10952,
  [SMALL_STATE(240)] = 10971,
  [SMALL_STATE(241)] = 10988,
  [SMALL_STATE(242)] = 11004,
  [SMALL_STATE(243)] = 11026,
  [SMALL_STATE(244)] = 11042,
  [SMALL_STATE(245)] = 11060,
  [SMALL_STATE(246)] = 11076,
  [SMALL_STATE(247)] = 11092,
  [SMALL_STATE(248)] = 11108,
  [SMALL_STATE(249)] = 11124,
  [SMALL_STATE(250)] = 11146,
  [SMALL_STATE(251)] = 11162,
  [SMALL_STATE(252)] = 11178,
  [SMALL_STATE(253)] = 11194,
  [SMALL_STATE(254)] = 11216,
  [SMALL_STATE(255)] = 11232,
  [SMALL_STATE(256)] = 11248,
  [SMALL_STATE(257)] = 11264,
  [SMALL_STATE(258)] = 11286,
  [SMALL_STATE(259)] = 11302,
  [SMALL_STATE(260)] = 11317,
  [SMALL_STATE(261)] = 11332,
  [SMALL_STATE(262)] = 11347,
  [SMALL_STATE(263)] = 11362,
  [SMALL_STATE(264)] = 11377,
  [SMALL_STATE(265)] = 11394,
  [SMALL_STATE(266)] = 11409,
  [SMALL_STATE(267)] = 11424,
  [SMALL_STATE(268)] = 11439,
  [SMALL_STATE(269)] = 11454,
  [SMALL_STATE(270)] = 11469,
  [SMALL_STATE(271)] = 11484,
  [SMALL_STATE(272)] = 11510,
  [SMALL_STATE(273)] = 11536,
  [SMALL_STATE(274)] = 11562,
  [SMALL_STATE(275)] = 11588,
  [SMALL_STATE(276)] = 11600,
  [SMALL_STATE(277)] = 11613,
  [SMALL_STATE(278)] = 11626,
  [SMALL_STATE(279)] = 11636,
  [SMALL_STATE(280)] = 11646,
  [SMALL_STATE(281)] = 11656,
  [SMALL_STATE(282)] = 11666,
  [SMALL_STATE(283)] = 11676,
  [SMALL_STATE(284)] = 11686,
  [SMALL_STATE(285)] = 11696,
  [SMALL_STATE(286)] = 11706,
  [SMALL_STATE(287)] = 11716,
  [SMALL_STATE(288)] = 11726,
  [SMALL_STATE(289)] = 11736,
  [SMALL_STATE(290)] = 11746,
  [SMALL_STATE(291)] = 11756,
  [SMALL_STATE(292)] = 11766,
  [SMALL_STATE(293)] = 11773,
  [SMALL_STATE(294)] = 11780,
  [SMALL_STATE(295)] = 11787,
  [SMALL_STATE(296)] = 11794,
  [SMALL_STATE(297)] = 11801,
  [SMALL_STATE(298)] = 11808,
  [SMALL_STATE(299)] = 11815,
  [SMALL_STATE(300)] = 11822,
  [SMALL_STATE(301)] = 11829,
  [SMALL_STATE(302)] = 11836,
  [SMALL_STATE(303)] = 11843,
  [SMALL_STATE(304)] = 11850,
  [SMALL_STATE(305)] = 11857,
  [SMALL_STATE(306)] = 11864,
  [SMALL_STATE(307)] = 11871,
  [SMALL_STATE(308)] = 11878,
  [SMALL_STATE(309)] = 11885,
  [SMALL_STATE(310)] = 11892,
  [SMALL_STATE(311)] = 11899,
  [SMALL_STATE(312)] = 11906,
  [SMALL_STATE(313)] = 11913,
  [SMALL_STATE(314)] = 11920,
  [SMALL_STATE(315)] = 11927,
  [SMALL_STATE(316)] = 11931,
  [SMALL_STATE(317)] = 11935,
  [SMALL_STATE(318)] = 11939,
  [SMALL_STATE(319)] = 11943,
  [SMALL_STATE(320)] = 11947,
  [SMALL_STATE(321)] = 11951,
  [SMALL_STATE(322)] = 11955,
  [SMALL_STATE(323)] = 11959,
  [SMALL_STATE(324)] = 11963,
  [SMALL_STATE(325)] = 11967,
  [SMALL_STATE(326)] = 11971,
  [SMALL_STATE(327)] = 11975,
  [SMALL_STATE(328)] = 11979,
  [SMALL_STATE(329)] = 11983,
  [SMALL_STATE(330)] = 11987,
  [SMALL_STATE(331)] = 11991,
  [SMALL_STATE(332)] = 11995,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_variable, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_variable, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_array, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_array, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 12),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 12),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4, .production_id = 17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4, .production_id = 17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postconditional, 2, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 9),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 15),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 10),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 10),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 4, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 4, .production_id = 9),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 12),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(200),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(156),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(140),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(271),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(247),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(217),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(275),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(211),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(201),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(272),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(265),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(221),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(275),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 6, .production_id = 19),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 19),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 16),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 16),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 11), SHIFT_REPEAT(138),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 11),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 11),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 20), SHIFT_REPEAT(257),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 20),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 20),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2), SHIFT_REPEAT(287),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_do_statement_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 1, .production_id = 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 1, .production_id = 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, .production_id = 6),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 2, .production_id = 5),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 2, .production_id = 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2), SHIFT_REPEAT(282),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 11), SHIFT_REPEAT(174),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 3, .production_id = 8),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 3, .production_id = 8),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 20), SHIFT_REPEAT(253),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 4, .production_id = 14),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 4, .production_id = 14),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 13),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 13),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 18), SHIFT_REPEAT(141),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 18),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 11), SHIFT_REPEAT(150),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_identifier, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_function_call, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_function_call, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_identifier, 3, .production_id = 7),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [822] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__line_comment = 0,
  ts_external_token__label = 1,
  ts_external_token__indent = 2,
  ts_external_token__dedent = 3,
  ts_external_token__indentation_marker = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_comment] = sym__line_comment,
  [ts_external_token__label] = sym__label,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__indentation_marker] = sym__indentation_marker,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__indentation_marker] = true,
  },
  [2] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
  },
  [3] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__indentation_marker] = true,
  },
  [4] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
    [ts_external_token__indentation_marker] = true,
  },
  [6] = {
    [ts_external_token__line_comment] = true,
  },
  [7] = {
    [ts_external_token__indent] = true,
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
