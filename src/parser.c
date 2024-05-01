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
#define STATE_COUNT 435
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_EQ_PLUS = 2,
  anon_sym_COMMA = 3,
  aux_sym_new_command_token1 = 4,
  aux_sym_keyword_token1 = 5,
  aux_sym_for_statement_token1 = 6,
  anon_sym_COLON = 7,
  aux_sym_if_statement_token1 = 8,
  aux_sym_if_statement_token2 = 9,
  aux_sym_while_statement_token1 = 10,
  aux_sym_do_statement_token1 = 11,
  anon_sym_CARET = 12,
  sym__routine_label = 13,
  anon_sym_LPAREN_RPAREN = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym__eol_comment = 17,
  sym__variable_name = 18,
  sym_global_variable = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_BSLASH = 25,
  anon_sym_POUND = 26,
  anon_sym_STAR_STAR = 27,
  anon_sym_GT = 28,
  anon_sym_LT = 29,
  anon_sym_SQUOTE_GT = 30,
  anon_sym_SQUOTE_LT = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_QMARK = 34,
  anon_sym_RBRACK_RBRACK = 35,
  anon_sym_SQUOTE_EQ = 36,
  anon_sym_SQUOTE_LBRACK = 37,
  anon_sym_SQUOTE_RBRACK = 38,
  anon_sym_SQUOTE_QMARK = 39,
  anon_sym_SQUOTE_RBRACK_RBRACK = 40,
  anon_sym__ = 41,
  anon_sym_AMP = 42,
  anon_sym_BANG = 43,
  aux_sym_lvalue_function_call_token1 = 44,
  sym__builtin_identifier = 45,
  sym__external_identifier = 46,
  aux_sym__user_defined_identifier_token1 = 47,
  sym__set = 48,
  sym__numeric = 49,
  anon_sym_true = 50,
  anon_sym_false = 51,
  sym_integer = 52,
  sym_float = 53,
  sym_string = 54,
  sym_format_specifier = 55,
  sym__line_comment = 56,
  sym__label = 57,
  sym__indent = 58,
  sym__dedent = 59,
  sym__indentation_marker = 60,
  sym_program = 61,
  sym__statement = 62,
  sym__simple_statement = 63,
  sym__compound_statement = 64,
  sym_block = 65,
  sym_command = 66,
  sym_comment = 67,
  sym_assignment = 68,
  sym__typical_command = 69,
  sym_new_command = 70,
  sym_keyword = 71,
  sym_for_statement = 72,
  sym_loop_control = 73,
  sym_if_statement = 74,
  sym_while_statement = 75,
  sym_do_statement = 76,
  sym_function_definition = 77,
  sym__routine_call = 78,
  sym_arguments = 79,
  sym_argument = 80,
  sym_label = 81,
  sym__function_arguments = 82,
  sym_postconditional = 83,
  sym__expression = 84,
  sym__identifier = 85,
  sym__array = 86,
  sym_local_array = 87,
  sym_global_array = 88,
  sym_array_index = 89,
  sym__variable = 90,
  sym_local_variable = 91,
  sym_unary_expression = 92,
  sym_binary_expression = 93,
  sym_function_call = 94,
  sym_lvalue_function_call = 95,
  sym_special_variable = 96,
  sym__user_defined_identifier = 97,
  sym__literal = 98,
  sym_boolean = 99,
  aux_sym_program_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  aux_sym_block_repeat2 = 102,
  aux_sym_assignment_repeat1 = 103,
  aux_sym_if_statement_repeat1 = 104,
  aux_sym_do_statement_repeat1 = 105,
  aux_sym_arguments_repeat1 = 106,
  aux_sym_array_index_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_PLUS] = "=+",
  [anon_sym_COMMA] = ",",
  [aux_sym_new_command_token1] = "new_command_token1",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_for_statement_token1] = "for_statement_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_if_statement_token2] = "if_statement_token2",
  [aux_sym_while_statement_token1] = "while_statement_token1",
  [aux_sym_do_statement_token1] = "do_statement_token1",
  [anon_sym_CARET] = "^",
  [sym__routine_label] = "_routine_label",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__eol_comment] = "_eol_comment",
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
  [sym_new_command] = "new_command",
  [sym_keyword] = "keyword",
  [sym_for_statement] = "for_statement",
  [sym_loop_control] = "loop_control",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_statement] = "do_statement",
  [sym_function_definition] = "function_definition",
  [sym__routine_call] = "_routine_call",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
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
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_do_statement_repeat1] = "do_statement_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_array_index_repeat1] = "array_index_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_PLUS] = anon_sym_EQ_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_new_command_token1] = aux_sym_new_command_token1,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_for_statement_token1] = aux_sym_for_statement_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_if_statement_token2] = aux_sym_if_statement_token2,
  [aux_sym_while_statement_token1] = aux_sym_while_statement_token1,
  [aux_sym_do_statement_token1] = aux_sym_do_statement_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym__routine_label] = sym__routine_label,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__eol_comment] = sym__eol_comment,
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
  [sym_new_command] = sym_new_command,
  [sym_keyword] = sym_keyword,
  [sym_for_statement] = sym_for_statement,
  [sym_loop_control] = sym_loop_control,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_function_definition] = sym_function_definition,
  [sym__routine_call] = sym__routine_call,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
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
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
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
  [aux_sym_new_command_token1] = {
    .visible = false,
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
  [anon_sym_COLON] = {
    .visible = true,
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
  [anon_sym_LPAREN_RPAREN] = {
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
  [sym_new_command] = {
    .visible = true,
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
  [sym_loop_control] = {
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
  [sym_function_definition] = {
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
  [sym_argument] = {
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
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
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
  [field_alternative] = "alternative",
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
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 4},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 4},
  [18] = {.index = 35, .length = 4},
  [19] = {.index = 39, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_condition, 1},
  [2] =
    {field_condition, 1},
    {field_consequence, 2},
  [4] =
    {field_label, 1},
  [5] =
    {field_label, 2},
  [6] =
    {field_condition, 1},
    {field_condition, 2, .inherited = true},
    {field_consequence, 3},
  [9] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
  [11] =
    {field_label, 0},
    {field_routine, 2},
  [13] =
    {field_left, 1},
    {field_right, 3},
  [15] =
    {field_subscript, 1},
  [16] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [19] =
    {field_label, 1},
    {field_routine, 3},
  [21] =
    {field_left, 2},
    {field_right, 4},
  [23] =
    {field_left, 1},
    {field_left, 4, .inherited = true},
    {field_right, 3},
    {field_right, 4, .inherited = true},
  [27] =
    {field_subscript, 1},
    {field_subscript, 2, .inherited = true},
  [29] =
    {field_subscript, 0, .inherited = true},
    {field_subscript, 1, .inherited = true},
  [31] =
    {field_alternative, 5},
    {field_condition, 1},
    {field_condition, 2, .inherited = true},
    {field_consequence, 3},
  [35] =
    {field_left, 2},
    {field_left, 5, .inherited = true},
    {field_right, 4},
    {field_right, 5, .inherited = true},
  [39] =
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
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 9,
  [14] = 6,
  [15] = 7,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 7,
  [20] = 9,
  [21] = 21,
  [22] = 22,
  [23] = 6,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 18,
  [31] = 25,
  [32] = 24,
  [33] = 28,
  [34] = 21,
  [35] = 9,
  [36] = 7,
  [37] = 29,
  [38] = 22,
  [39] = 17,
  [40] = 27,
  [41] = 26,
  [42] = 18,
  [43] = 29,
  [44] = 21,
  [45] = 24,
  [46] = 28,
  [47] = 25,
  [48] = 26,
  [49] = 22,
  [50] = 27,
  [51] = 17,
  [52] = 27,
  [53] = 21,
  [54] = 17,
  [55] = 18,
  [56] = 29,
  [57] = 28,
  [58] = 24,
  [59] = 22,
  [60] = 26,
  [61] = 25,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 62,
  [66] = 64,
  [67] = 62,
  [68] = 6,
  [69] = 6,
  [70] = 64,
  [71] = 9,
  [72] = 7,
  [73] = 64,
  [74] = 7,
  [75] = 9,
  [76] = 76,
  [77] = 77,
  [78] = 6,
  [79] = 24,
  [80] = 18,
  [81] = 29,
  [82] = 28,
  [83] = 26,
  [84] = 25,
  [85] = 85,
  [86] = 86,
  [87] = 6,
  [88] = 17,
  [89] = 27,
  [90] = 21,
  [91] = 24,
  [92] = 28,
  [93] = 29,
  [94] = 18,
  [95] = 17,
  [96] = 27,
  [97] = 26,
  [98] = 25,
  [99] = 21,
  [100] = 7,
  [101] = 9,
  [102] = 77,
  [103] = 9,
  [104] = 7,
  [105] = 76,
  [106] = 25,
  [107] = 27,
  [108] = 26,
  [109] = 21,
  [110] = 24,
  [111] = 17,
  [112] = 86,
  [113] = 18,
  [114] = 85,
  [115] = 29,
  [116] = 28,
  [117] = 117,
  [118] = 29,
  [119] = 18,
  [120] = 21,
  [121] = 26,
  [122] = 22,
  [123] = 27,
  [124] = 24,
  [125] = 25,
  [126] = 28,
  [127] = 17,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 6,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 135,
  [139] = 135,
  [140] = 135,
  [141] = 141,
  [142] = 135,
  [143] = 9,
  [144] = 135,
  [145] = 135,
  [146] = 136,
  [147] = 135,
  [148] = 7,
  [149] = 135,
  [150] = 135,
  [151] = 141,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 152,
  [157] = 154,
  [158] = 154,
  [159] = 152,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 27,
  [166] = 162,
  [167] = 167,
  [168] = 22,
  [169] = 169,
  [170] = 162,
  [171] = 169,
  [172] = 162,
  [173] = 162,
  [174] = 162,
  [175] = 169,
  [176] = 162,
  [177] = 162,
  [178] = 178,
  [179] = 167,
  [180] = 17,
  [181] = 18,
  [182] = 169,
  [183] = 183,
  [184] = 162,
  [185] = 183,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 183,
  [190] = 169,
  [191] = 191,
  [192] = 187,
  [193] = 183,
  [194] = 24,
  [195] = 195,
  [196] = 187,
  [197] = 160,
  [198] = 183,
  [199] = 21,
  [200] = 187,
  [201] = 160,
  [202] = 178,
  [203] = 183,
  [204] = 169,
  [205] = 187,
  [206] = 163,
  [207] = 169,
  [208] = 153,
  [209] = 178,
  [210] = 161,
  [211] = 211,
  [212] = 183,
  [213] = 183,
  [214] = 25,
  [215] = 26,
  [216] = 29,
  [217] = 28,
  [218] = 178,
  [219] = 160,
  [220] = 183,
  [221] = 169,
  [222] = 169,
  [223] = 187,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 224,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 225,
  [233] = 233,
  [234] = 229,
  [235] = 225,
  [236] = 236,
  [237] = 224,
  [238] = 238,
  [239] = 236,
  [240] = 233,
  [241] = 230,
  [242] = 225,
  [243] = 225,
  [244] = 225,
  [245] = 224,
  [246] = 225,
  [247] = 225,
  [248] = 153,
  [249] = 225,
  [250] = 230,
  [251] = 225,
  [252] = 252,
  [253] = 153,
  [254] = 86,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 257,
  [262] = 258,
  [263] = 263,
  [264] = 264,
  [265] = 259,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 260,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 273,
  [282] = 270,
  [283] = 283,
  [284] = 271,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 272,
  [293] = 266,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 263,
  [298] = 298,
  [299] = 268,
  [300] = 300,
  [301] = 264,
  [302] = 302,
  [303] = 303,
  [304] = 280,
  [305] = 305,
  [306] = 306,
  [307] = 294,
  [308] = 295,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 267,
  [313] = 279,
  [314] = 314,
  [315] = 278,
  [316] = 275,
  [317] = 276,
  [318] = 277,
  [319] = 319,
  [320] = 314,
  [321] = 274,
  [322] = 322,
  [323] = 288,
  [324] = 324,
  [325] = 302,
  [326] = 286,
  [327] = 298,
  [328] = 295,
  [329] = 310,
  [330] = 311,
  [331] = 303,
  [332] = 309,
  [333] = 285,
  [334] = 294,
  [335] = 280,
  [336] = 287,
  [337] = 337,
  [338] = 290,
  [339] = 306,
  [340] = 289,
  [341] = 296,
  [342] = 283,
  [343] = 280,
  [344] = 294,
  [345] = 291,
  [346] = 295,
  [347] = 305,
  [348] = 300,
  [349] = 349,
  [350] = 349,
  [351] = 351,
  [352] = 352,
  [353] = 351,
  [354] = 354,
  [355] = 349,
  [356] = 354,
  [357] = 351,
  [358] = 351,
  [359] = 349,
  [360] = 352,
  [361] = 361,
  [362] = 361,
  [363] = 7,
  [364] = 9,
  [365] = 365,
  [366] = 366,
  [367] = 365,
  [368] = 368,
  [369] = 368,
  [370] = 365,
  [371] = 371,
  [372] = 372,
  [373] = 368,
  [374] = 365,
  [375] = 372,
  [376] = 263,
  [377] = 368,
  [378] = 368,
  [379] = 365,
  [380] = 380,
  [381] = 368,
  [382] = 382,
  [383] = 365,
  [384] = 267,
  [385] = 368,
  [386] = 266,
  [387] = 365,
  [388] = 368,
  [389] = 365,
  [390] = 21,
  [391] = 365,
  [392] = 382,
  [393] = 365,
  [394] = 368,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 29,
  [399] = 21,
  [400] = 400,
  [401] = 401,
  [402] = 26,
  [403] = 25,
  [404] = 277,
  [405] = 405,
  [406] = 406,
  [407] = 395,
  [408] = 401,
  [409] = 409,
  [410] = 28,
  [411] = 397,
  [412] = 405,
  [413] = 413,
  [414] = 414,
  [415] = 414,
  [416] = 416,
  [417] = 306,
  [418] = 413,
  [419] = 419,
  [420] = 419,
  [421] = 421,
  [422] = 413,
  [423] = 413,
  [424] = 409,
  [425] = 425,
  [426] = 416,
  [427] = 413,
  [428] = 413,
  [429] = 413,
  [430] = 430,
  [431] = 413,
  [432] = 413,
  [433] = 413,
  [434] = 413,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(652);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '&') ADVANCE(651);
      if (lookahead == '\'') ADVANCE(631);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(681);
      if (lookahead == '<') ADVANCE(638);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(637);
      if (lookahead == '?') ADVANCE(643);
      if (lookahead == 'B') ADVANCE(236);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'J') ADVANCE(223);
      if (lookahead == 'K') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead == 'Q') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(187);
      if (lookahead == 'S') ADVANCE(501);
      if (lookahead == 'T') ADVANCE(179);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == 'V') ADVANCE(212);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(193);
      if (lookahead == 'Z') ADVANCE(489);
      if (lookahead == '[') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(634);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '^') ADVANCE(361);
      if (lookahead == '_') ADVANCE(650);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == 'z') ADVANCE(557);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(652);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '&') ADVANCE(651);
      if (lookahead == '\'') ADVANCE(631);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(682);
      if (lookahead == '<') ADVANCE(638);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(637);
      if (lookahead == '?') ADVANCE(643);
      if (lookahead == '[') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(634);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == '_') ADVANCE(650);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead == 't') ADVANCE(604);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(652);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '&') ADVANCE(651);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '<') ADVANCE(638);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(637);
      if (lookahead == '?') ADVANCE(643);
      if (lookahead == '[') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(634);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == '_') ADVANCE(650);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead == 't') ADVANCE(604);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(680);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '&') ADVANCE(151);
      if (lookahead == 'E') ADVANCE(654);
      if (lookahead == 'P') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '&') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '^') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 9:
      if (lookahead == '<') ADVANCE(640);
      if (lookahead == '=') ADVANCE(645);
      if (lookahead == '>') ADVANCE(639);
      if (lookahead == '?') ADVANCE(648);
      if (lookahead == '[') ADVANCE(646);
      if (lookahead == ']') ADVANCE(647);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(218);
      if (lookahead == 'D') ADVANCE(200);
      if (lookahead == 'E') ADVANCE(185);
      if (lookahead == 'G') ADVANCE(225);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'I') ADVANCE(221);
      if (lookahead == 'J') ADVANCE(226);
      if (lookahead == 'K') ADVANCE(206);
      if (lookahead == 'L') ADVANCE(207);
      if (lookahead == 'M') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(242);
      if (lookahead == 'Q') ADVANCE(247);
      if (lookahead == 'S') ADVANCE(250);
      if (lookahead == 'T') ADVANCE(181);
      if (lookahead == 'W') ADVANCE(238);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(171);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(235);
      if (lookahead == 'C') ADVANCE(215);
      if (lookahead == 'G') ADVANCE(228);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == 'J') ADVANCE(229);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'Q') ADVANCE(248);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(183);
      if (lookahead == 'U') ADVANCE(244);
      if (lookahead == 'V') ADVANCE(211);
      if (lookahead == 'W') ADVANCE(239);
      if (lookahead == 'X') ADVANCE(197);
      if (lookahead == 'Z') ADVANCE(367);
      if (lookahead == '^') ADVANCE(361);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(255);
      if (lookahead == 'j') ADVANCE(309);
      if (lookahead == 'k') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead == 'q') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == 'v') ADVANCE(291);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == 'x') ADVANCE(277);
      if (lookahead == 'z') ADVANCE(426);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(480);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(171);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(654);
      if (lookahead == 'P') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(353);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'K') ADVANCE(171);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(171);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(171);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(171);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(334);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(667);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 75:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'W') ADVANCE(171);
      END_STATE();
    case 77:
      if (lookahead == 'W') ADVANCE(162);
      END_STATE();
    case 78:
      if (lookahead == '^') ADVANCE(361);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'j') ADVANCE(306);
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == 'q') ADVANCE(327);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(318);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(171);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 143:
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      END_STATE();
    case 148:
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 152:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(652);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '&') ADVANCE(651);
      if (lookahead == '\'') ADVANCE(631);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == ';') ADVANCE(681);
      if (lookahead == '<') ADVANCE(638);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(637);
      if (lookahead == '?') ADVANCE(643);
      if (lookahead == 'B') ADVANCE(236);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'J') ADVANCE(223);
      if (lookahead == 'K') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead == 'Q') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(187);
      if (lookahead == 'S') ADVANCE(501);
      if (lookahead == 'T') ADVANCE(179);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == 'V') ADVANCE(212);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(193);
      if (lookahead == 'Z') ADVANCE(489);
      if (lookahead == '[') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(634);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == '_') ADVANCE(650);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == 'z') ADVANCE(557);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(152)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 153:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(652);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '&') ADVANCE(651);
      if (lookahead == '\'') ADVANCE(631);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == ';') ADVANCE(681);
      if (lookahead == '<') ADVANCE(638);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(637);
      if (lookahead == '?') ADVANCE(643);
      if (lookahead == 'B') ADVANCE(236);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'J') ADVANCE(223);
      if (lookahead == 'K') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead == 'Q') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(187);
      if (lookahead == 'S') ADVANCE(501);
      if (lookahead == 'T') ADVANCE(179);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == 'V') ADVANCE(212);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(193);
      if (lookahead == 'Z') ADVANCE(489);
      if (lookahead == '[') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(634);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == '_') ADVANCE(650);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == 'z') ADVANCE(557);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(153)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 154:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(652);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '&') ADVANCE(651);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(1);
      if (lookahead == '<') ADVANCE(638);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(637);
      if (lookahead == '?') ADVANCE(643);
      if (lookahead == 'B') ADVANCE(234);
      if (lookahead == 'C') ADVANCE(214);
      if (lookahead == 'D') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(349);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == 'G') ADVANCE(225);
      if (lookahead == 'H') ADVANCE(174);
      if (lookahead == 'I') ADVANCE(343);
      if (lookahead == 'J') ADVANCE(226);
      if (lookahead == 'K') ADVANCE(206);
      if (lookahead == 'L') ADVANCE(227);
      if (lookahead == 'M') ADVANCE(195);
      if (lookahead == 'N') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead == 'Q') ADVANCE(247);
      if (lookahead == 'R') ADVANCE(188);
      if (lookahead == 'S') ADVANCE(668);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == 'U') ADVANCE(243);
      if (lookahead == 'V') ADVANCE(210);
      if (lookahead == 'W') ADVANCE(203);
      if (lookahead == 'X') ADVANCE(196);
      if (lookahead == 'Z') ADVANCE(14);
      if (lookahead == '[') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(634);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '^') ADVANCE(361);
      if (lookahead == '_') ADVANCE(650);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(294);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'j') ADVANCE(306);
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'q') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(669);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == 'v') ADVANCE(290);
      if (lookahead == 'w') ADVANCE(283);
      if (lookahead == 'x') ADVANCE(276);
      if (lookahead == 'z') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 155:
      if (eof) ADVANCE(157);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(681);
      if (lookahead == 'B') ADVANCE(236);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'J') ADVANCE(223);
      if (lookahead == 'K') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead == 'Q') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(187);
      if (lookahead == 'S') ADVANCE(501);
      if (lookahead == 'T') ADVANCE(179);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == 'V') ADVANCE(212);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(193);
      if (lookahead == 'Z') ADVANCE(489);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == 'z') ADVANCE(557);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '+') ADVANCE(628);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(681);
      if (lookahead == 'B') ADVANCE(236);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'J') ADVANCE(223);
      if (lookahead == 'K') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead == 'Q') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(187);
      if (lookahead == 'S') ADVANCE(501);
      if (lookahead == 'T') ADVANCE(179);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == 'V') ADVANCE(212);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(193);
      if (lookahead == 'Z') ADVANCE(489);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == 'z') ADVANCE(557);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '/' ||
          lookahead == '?') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(156)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == 'E') ADVANCE(551);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_new_command_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(514);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(515);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(386);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'A') ADVANCE(388);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(528);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(528);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(54);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(400);
      if (lookahead == 'R') ADVANCE(365);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'C') ADVANCE(400);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(507);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'D') ADVANCE(381);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(487);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(364);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(538);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(494);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(371);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(410);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(491);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'H') ADVANCE(510);
      if (lookahead == 'R') ADVANCE(509);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(516);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(524);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(389);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(377);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(502);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(530);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(399);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(390);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(517);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(383);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(508);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(544);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(492);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(493);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(370);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(25);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(374);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'P') ADVANCE(498);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(378);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(503);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(509);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(382);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(384);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(511);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'S') ADVANCE(497);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(507);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'U') ADVANCE(381);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(539);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(66);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'Y') ADVANCE(409);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(441);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(611);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(533);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'F') ADVANCE(341);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'f') ADVANCE(341);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'L') ADVANCE(541);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'O') ADVANCE(360);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'O') ADVANCE(355);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(385);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(403);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'D') ADVANCE(201);
      if (lookahead == 'E') ADVANCE(186);
      if (lookahead == 'G') ADVANCE(228);
      if (lookahead == 'H') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(219);
      if (lookahead == 'J') ADVANCE(229);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(198);
      if (lookahead == 'P') ADVANCE(240);
      if (lookahead == 'Q') ADVANCE(248);
      if (lookahead == 'S') ADVANCE(251);
      if (lookahead == 'T') ADVANCE(182);
      if (lookahead == 'W') ADVANCE(239);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'A') ADVANCE(391);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'B') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'C') ADVANCE(385);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'C') ADVANCE(418);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'D') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(396);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(407);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(419);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(362);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'E') ADVANCE(393);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'G') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(413);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'I') ADVANCE(397);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'K') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(403);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(412);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(402);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'L') ADVANCE(390);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'M') ADVANCE(381);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'M') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'M') ADVANCE(392);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(385);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(412);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'N') ADVANCE(416);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(394);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'O') ADVANCE(372);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'P') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'P') ADVANCE(412);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'R') ADVANCE(380);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'R') ADVANCE(406);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'S') ADVANCE(363);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(401);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(379);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'T') ADVANCE(376);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'U') ADVANCE(404);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'U') ADVANCE(413);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'W') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'W') ADVANCE(170);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'j') ADVANCE(309);
      if (lookahead == 'k') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == 'q') ADVANCE(328);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'k') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'm') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'u') ADVANCE(463);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'w') ADVANCE(333);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__routine_label);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(481);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__eol_comment);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(512);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(506);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(496);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(531);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(217);
      if (lookahead == 'D') ADVANCE(199);
      if (lookahead == 'E') ADVANCE(184);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'J') ADVANCE(223);
      if (lookahead == 'K') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(205);
      if (lookahead == 'M') ADVANCE(191);
      if (lookahead == 'P') ADVANCE(241);
      if (lookahead == 'Q') ADVANCE(246);
      if (lookahead == 'S') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == 'W') ADVANCE(237);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(545);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'A') ADVANCE(518);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(512);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(549);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'C') ADVANCE(490);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'D') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(523);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(352);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(354);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(542);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(550);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(485);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(536);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'E') ADVANCE(521);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'G') ADVANCE(497);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(543);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(526);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(545);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(519);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'I') ADVANCE(525);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'K') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(531);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(543);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(513);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(529);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(517);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'L') ADVANCE(500);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(507);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'M') ADVANCE(520);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(543);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'N') ADVANCE(547);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(522);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(495);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'O') ADVANCE(537);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'P') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'P') ADVANCE(543);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(339);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(506);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'R') ADVANCE(535);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(497);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(540);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(546);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(486);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'S') ADVANCE(499);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(626);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(527);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(497);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(505);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'T') ADVANCE(504);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'U') ADVANCE(532);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'U') ADVANCE(545);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'W') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'W') ADVANCE(169);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'j') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == 'q') ADVANCE(326);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'g') ADVANCE(565);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'k') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'm') ADVANCE(591);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(593);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'p') ADVANCE(616);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(612);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(554);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(567);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(626);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(575);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 't') ADVANCE(574);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'u') ADVANCE(568);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(332);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__variable_name);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_global_variable);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '<') ADVANCE(640);
      if (lookahead == '=') ADVANCE(645);
      if (lookahead == '>') ADVANCE(639);
      if (lookahead == '?') ADVANCE(648);
      if (lookahead == '[') ADVANCE(646);
      if (lookahead == ']') ADVANCE(647);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(636);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_SQUOTE_GT);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LT);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_SQUOTE_EQ);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_SQUOTE_LBRACK);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK);
      if (lookahead == ']') ADVANCE(649);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_SQUOTE_QMARK);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_SQUOTE_RBRACK_RBRACK);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'I') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (lookahead == 'X') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_lvalue_function_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'A') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'C') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'E') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'R') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (lookahead == 'T') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__builtin_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__external_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__user_defined_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__set);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__numeric);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == '_') ADVANCE(674);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == '_') ADVANCE(674);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(678);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(679);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(681);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_format_specifier);
      if (lookahead == '!' ||
          lookahead == '#' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          lookahead == '?') ADVANCE(682);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 154, .external_lex_state = 2},
  [2] = {.lex_state = 154, .external_lex_state = 3},
  [3] = {.lex_state = 154, .external_lex_state = 3},
  [4] = {.lex_state = 154, .external_lex_state = 3},
  [5] = {.lex_state = 154, .external_lex_state = 3},
  [6] = {.lex_state = 152, .external_lex_state = 1},
  [7] = {.lex_state = 152, .external_lex_state = 1},
  [8] = {.lex_state = 153, .external_lex_state = 1},
  [9] = {.lex_state = 152, .external_lex_state = 1},
  [10] = {.lex_state = 154, .external_lex_state = 3},
  [11] = {.lex_state = 154, .external_lex_state = 3},
  [12] = {.lex_state = 154, .external_lex_state = 3},
  [13] = {.lex_state = 153, .external_lex_state = 1},
  [14] = {.lex_state = 152, .external_lex_state = 2},
  [15] = {.lex_state = 153, .external_lex_state = 1},
  [16] = {.lex_state = 154, .external_lex_state = 3},
  [17] = {.lex_state = 152, .external_lex_state = 1},
  [18] = {.lex_state = 152, .external_lex_state = 1},
  [19] = {.lex_state = 152, .external_lex_state = 2},
  [20] = {.lex_state = 152, .external_lex_state = 2},
  [21] = {.lex_state = 152, .external_lex_state = 1},
  [22] = {.lex_state = 152, .external_lex_state = 1},
  [23] = {.lex_state = 153, .external_lex_state = 2},
  [24] = {.lex_state = 152, .external_lex_state = 1},
  [25] = {.lex_state = 152, .external_lex_state = 1},
  [26] = {.lex_state = 152, .external_lex_state = 1},
  [27] = {.lex_state = 152, .external_lex_state = 1},
  [28] = {.lex_state = 152, .external_lex_state = 1},
  [29] = {.lex_state = 152, .external_lex_state = 1},
  [30] = {.lex_state = 153, .external_lex_state = 1},
  [31] = {.lex_state = 153, .external_lex_state = 1},
  [32] = {.lex_state = 153, .external_lex_state = 1},
  [33] = {.lex_state = 153, .external_lex_state = 1},
  [34] = {.lex_state = 153, .external_lex_state = 1},
  [35] = {.lex_state = 153, .external_lex_state = 2},
  [36] = {.lex_state = 153, .external_lex_state = 2},
  [37] = {.lex_state = 153, .external_lex_state = 1},
  [38] = {.lex_state = 153, .external_lex_state = 1},
  [39] = {.lex_state = 153, .external_lex_state = 1},
  [40] = {.lex_state = 153, .external_lex_state = 1},
  [41] = {.lex_state = 153, .external_lex_state = 1},
  [42] = {.lex_state = 152, .external_lex_state = 2},
  [43] = {.lex_state = 152, .external_lex_state = 2},
  [44] = {.lex_state = 152, .external_lex_state = 2},
  [45] = {.lex_state = 152, .external_lex_state = 2},
  [46] = {.lex_state = 152, .external_lex_state = 2},
  [47] = {.lex_state = 152, .external_lex_state = 2},
  [48] = {.lex_state = 152, .external_lex_state = 2},
  [49] = {.lex_state = 152, .external_lex_state = 2},
  [50] = {.lex_state = 152, .external_lex_state = 2},
  [51] = {.lex_state = 152, .external_lex_state = 2},
  [52] = {.lex_state = 153, .external_lex_state = 2},
  [53] = {.lex_state = 153, .external_lex_state = 2},
  [54] = {.lex_state = 153, .external_lex_state = 2},
  [55] = {.lex_state = 153, .external_lex_state = 2},
  [56] = {.lex_state = 153, .external_lex_state = 2},
  [57] = {.lex_state = 153, .external_lex_state = 2},
  [58] = {.lex_state = 153, .external_lex_state = 2},
  [59] = {.lex_state = 153, .external_lex_state = 2},
  [60] = {.lex_state = 153, .external_lex_state = 2},
  [61] = {.lex_state = 153, .external_lex_state = 2},
  [62] = {.lex_state = 155, .external_lex_state = 1},
  [63] = {.lex_state = 156, .external_lex_state = 1},
  [64] = {.lex_state = 155, .external_lex_state = 1},
  [65] = {.lex_state = 155, .external_lex_state = 2},
  [66] = {.lex_state = 156, .external_lex_state = 1},
  [67] = {.lex_state = 156, .external_lex_state = 2},
  [68] = {.lex_state = 154, .external_lex_state = 1},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 155, .external_lex_state = 2},
  [71] = {.lex_state = 154, .external_lex_state = 1},
  [72] = {.lex_state = 154, .external_lex_state = 1},
  [73] = {.lex_state = 156, .external_lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 154, .external_lex_state = 1},
  [77] = {.lex_state = 154, .external_lex_state = 1},
  [78] = {.lex_state = 154, .external_lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 154, .external_lex_state = 1},
  [86] = {.lex_state = 154, .external_lex_state = 1},
  [87] = {.lex_state = 154, .external_lex_state = 3},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 154, .external_lex_state = 1},
  [92] = {.lex_state = 154, .external_lex_state = 1},
  [93] = {.lex_state = 154, .external_lex_state = 1},
  [94] = {.lex_state = 154, .external_lex_state = 1},
  [95] = {.lex_state = 154, .external_lex_state = 1},
  [96] = {.lex_state = 154, .external_lex_state = 1},
  [97] = {.lex_state = 154, .external_lex_state = 1},
  [98] = {.lex_state = 154, .external_lex_state = 1},
  [99] = {.lex_state = 154, .external_lex_state = 1},
  [100] = {.lex_state = 154, .external_lex_state = 2},
  [101] = {.lex_state = 154, .external_lex_state = 2},
  [102] = {.lex_state = 154, .external_lex_state = 2},
  [103] = {.lex_state = 154, .external_lex_state = 3},
  [104] = {.lex_state = 154, .external_lex_state = 3},
  [105] = {.lex_state = 154, .external_lex_state = 2},
  [106] = {.lex_state = 154, .external_lex_state = 2},
  [107] = {.lex_state = 154, .external_lex_state = 2},
  [108] = {.lex_state = 154, .external_lex_state = 2},
  [109] = {.lex_state = 154, .external_lex_state = 2},
  [110] = {.lex_state = 154, .external_lex_state = 2},
  [111] = {.lex_state = 154, .external_lex_state = 2},
  [112] = {.lex_state = 154, .external_lex_state = 2},
  [113] = {.lex_state = 154, .external_lex_state = 2},
  [114] = {.lex_state = 154, .external_lex_state = 2},
  [115] = {.lex_state = 154, .external_lex_state = 2},
  [116] = {.lex_state = 154, .external_lex_state = 2},
  [117] = {.lex_state = 154, .external_lex_state = 3},
  [118] = {.lex_state = 154, .external_lex_state = 3},
  [119] = {.lex_state = 154, .external_lex_state = 3},
  [120] = {.lex_state = 154, .external_lex_state = 3},
  [121] = {.lex_state = 154, .external_lex_state = 3},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 154, .external_lex_state = 3},
  [124] = {.lex_state = 154, .external_lex_state = 3},
  [125] = {.lex_state = 154, .external_lex_state = 3},
  [126] = {.lex_state = 154, .external_lex_state = 3},
  [127] = {.lex_state = 154, .external_lex_state = 3},
  [128] = {.lex_state = 154, .external_lex_state = 3},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 154, .external_lex_state = 1},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 154, .external_lex_state = 1},
  [134] = {.lex_state = 154, .external_lex_state = 1},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 154, .external_lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 154, .external_lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 155, .external_lex_state = 1},
  [154] = {.lex_state = 154, .external_lex_state = 3},
  [155] = {.lex_state = 154, .external_lex_state = 3},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 154, .external_lex_state = 3},
  [158] = {.lex_state = 154, .external_lex_state = 3},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 156, .external_lex_state = 1},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 154, .external_lex_state = 2},
  [225] = {.lex_state = 154},
  [226] = {.lex_state = 154, .external_lex_state = 2},
  [227] = {.lex_state = 154, .external_lex_state = 2},
  [228] = {.lex_state = 154, .external_lex_state = 2},
  [229] = {.lex_state = 154, .external_lex_state = 3},
  [230] = {.lex_state = 154, .external_lex_state = 3},
  [231] = {.lex_state = 154, .external_lex_state = 3},
  [232] = {.lex_state = 154},
  [233] = {.lex_state = 154, .external_lex_state = 3},
  [234] = {.lex_state = 154, .external_lex_state = 3},
  [235] = {.lex_state = 154},
  [236] = {.lex_state = 154, .external_lex_state = 3},
  [237] = {.lex_state = 154, .external_lex_state = 2},
  [238] = {.lex_state = 154, .external_lex_state = 5},
  [239] = {.lex_state = 154, .external_lex_state = 3},
  [240] = {.lex_state = 154, .external_lex_state = 3},
  [241] = {.lex_state = 154, .external_lex_state = 3},
  [242] = {.lex_state = 154},
  [243] = {.lex_state = 154},
  [244] = {.lex_state = 154},
  [245] = {.lex_state = 154, .external_lex_state = 2},
  [246] = {.lex_state = 154},
  [247] = {.lex_state = 154},
  [248] = {.lex_state = 155, .external_lex_state = 2},
  [249] = {.lex_state = 154},
  [250] = {.lex_state = 154, .external_lex_state = 3},
  [251] = {.lex_state = 154},
  [252] = {.lex_state = 154},
  [253] = {.lex_state = 156, .external_lex_state = 2},
  [254] = {.lex_state = 154},
  [255] = {.lex_state = 154},
  [256] = {.lex_state = 154},
  [257] = {.lex_state = 154, .external_lex_state = 1},
  [258] = {.lex_state = 154, .external_lex_state = 1},
  [259] = {.lex_state = 154, .external_lex_state = 1},
  [260] = {.lex_state = 154, .external_lex_state = 1},
  [261] = {.lex_state = 154, .external_lex_state = 2},
  [262] = {.lex_state = 154, .external_lex_state = 2},
  [263] = {.lex_state = 154, .external_lex_state = 1},
  [264] = {.lex_state = 154, .external_lex_state = 1},
  [265] = {.lex_state = 154, .external_lex_state = 2},
  [266] = {.lex_state = 154, .external_lex_state = 1},
  [267] = {.lex_state = 154, .external_lex_state = 1},
  [268] = {.lex_state = 154, .external_lex_state = 1},
  [269] = {.lex_state = 154, .external_lex_state = 2},
  [270] = {.lex_state = 154, .external_lex_state = 1},
  [271] = {.lex_state = 154, .external_lex_state = 1},
  [272] = {.lex_state = 154, .external_lex_state = 1},
  [273] = {.lex_state = 154, .external_lex_state = 1},
  [274] = {.lex_state = 154, .external_lex_state = 1},
  [275] = {.lex_state = 154, .external_lex_state = 1},
  [276] = {.lex_state = 154, .external_lex_state = 1},
  [277] = {.lex_state = 154, .external_lex_state = 1},
  [278] = {.lex_state = 154, .external_lex_state = 1},
  [279] = {.lex_state = 154, .external_lex_state = 1},
  [280] = {.lex_state = 154, .external_lex_state = 1},
  [281] = {.lex_state = 154, .external_lex_state = 2},
  [282] = {.lex_state = 154, .external_lex_state = 2},
  [283] = {.lex_state = 154, .external_lex_state = 1},
  [284] = {.lex_state = 154, .external_lex_state = 2},
  [285] = {.lex_state = 154, .external_lex_state = 1},
  [286] = {.lex_state = 154, .external_lex_state = 1},
  [287] = {.lex_state = 154, .external_lex_state = 1},
  [288] = {.lex_state = 154, .external_lex_state = 1},
  [289] = {.lex_state = 154, .external_lex_state = 1},
  [290] = {.lex_state = 154, .external_lex_state = 1},
  [291] = {.lex_state = 154, .external_lex_state = 1},
  [292] = {.lex_state = 154, .external_lex_state = 2},
  [293] = {.lex_state = 154, .external_lex_state = 2},
  [294] = {.lex_state = 154, .external_lex_state = 1},
  [295] = {.lex_state = 154, .external_lex_state = 1},
  [296] = {.lex_state = 154, .external_lex_state = 1},
  [297] = {.lex_state = 154, .external_lex_state = 2},
  [298] = {.lex_state = 154, .external_lex_state = 1},
  [299] = {.lex_state = 154, .external_lex_state = 2},
  [300] = {.lex_state = 154, .external_lex_state = 1},
  [301] = {.lex_state = 154, .external_lex_state = 2},
  [302] = {.lex_state = 154, .external_lex_state = 1},
  [303] = {.lex_state = 154, .external_lex_state = 1},
  [304] = {.lex_state = 154, .external_lex_state = 1},
  [305] = {.lex_state = 154, .external_lex_state = 1},
  [306] = {.lex_state = 154, .external_lex_state = 1},
  [307] = {.lex_state = 154, .external_lex_state = 1},
  [308] = {.lex_state = 154, .external_lex_state = 1},
  [309] = {.lex_state = 154, .external_lex_state = 1},
  [310] = {.lex_state = 154, .external_lex_state = 1},
  [311] = {.lex_state = 154, .external_lex_state = 1},
  [312] = {.lex_state = 154, .external_lex_state = 2},
  [313] = {.lex_state = 154, .external_lex_state = 2},
  [314] = {.lex_state = 3},
  [315] = {.lex_state = 154, .external_lex_state = 2},
  [316] = {.lex_state = 154, .external_lex_state = 2},
  [317] = {.lex_state = 154, .external_lex_state = 2},
  [318] = {.lex_state = 154, .external_lex_state = 2},
  [319] = {.lex_state = 154, .external_lex_state = 3},
  [320] = {.lex_state = 3},
  [321] = {.lex_state = 154, .external_lex_state = 2},
  [322] = {.lex_state = 154, .external_lex_state = 1},
  [323] = {.lex_state = 154, .external_lex_state = 2},
  [324] = {.lex_state = 154, .external_lex_state = 5},
  [325] = {.lex_state = 154, .external_lex_state = 2},
  [326] = {.lex_state = 154, .external_lex_state = 2},
  [327] = {.lex_state = 154, .external_lex_state = 2},
  [328] = {.lex_state = 154, .external_lex_state = 2},
  [329] = {.lex_state = 154, .external_lex_state = 2},
  [330] = {.lex_state = 154, .external_lex_state = 2},
  [331] = {.lex_state = 154, .external_lex_state = 2},
  [332] = {.lex_state = 154, .external_lex_state = 2},
  [333] = {.lex_state = 154, .external_lex_state = 2},
  [334] = {.lex_state = 154, .external_lex_state = 2},
  [335] = {.lex_state = 154, .external_lex_state = 2},
  [336] = {.lex_state = 154, .external_lex_state = 2},
  [337] = {.lex_state = 154, .external_lex_state = 2},
  [338] = {.lex_state = 154, .external_lex_state = 2},
  [339] = {.lex_state = 154, .external_lex_state = 2},
  [340] = {.lex_state = 154, .external_lex_state = 2},
  [341] = {.lex_state = 154, .external_lex_state = 2},
  [342] = {.lex_state = 154, .external_lex_state = 2},
  [343] = {.lex_state = 154, .external_lex_state = 2},
  [344] = {.lex_state = 154, .external_lex_state = 2},
  [345] = {.lex_state = 154, .external_lex_state = 2},
  [346] = {.lex_state = 154, .external_lex_state = 2},
  [347] = {.lex_state = 154, .external_lex_state = 2},
  [348] = {.lex_state = 154, .external_lex_state = 2},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 18, .external_lex_state = 6},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 18, .external_lex_state = 6},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 3},
  [357] = {.lex_state = 18, .external_lex_state = 6},
  [358] = {.lex_state = 18, .external_lex_state = 6},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 0, .external_lex_state = 7},
  [362] = {.lex_state = 0, .external_lex_state = 7},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 78},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0, .external_lex_state = 7},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 78},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0, .external_lex_state = 6},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0, .external_lex_state = 6},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 78},
  [415] = {.lex_state = 78},
  [416] = {.lex_state = 78},
  [417] = {.lex_state = 0, .external_lex_state = 6},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 78},
  [420] = {.lex_state = 78},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 154},
  [425] = {.lex_state = 154},
  [426] = {.lex_state = 78},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 78},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_new_command_token1] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [aux_sym_for_statement_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_while_statement_token1] = ACTIONS(1),
    [aux_sym_do_statement_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__eol_comment] = ACTIONS(1),
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
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__indentation_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(421),
    [sym__statement] = STATE(228),
    [sym__simple_statement] = STATE(228),
    [sym__compound_statement] = STATE(228),
    [sym_command] = STATE(228),
    [sym_comment] = STATE(228),
    [sym_assignment] = STATE(228),
    [sym__typical_command] = STATE(330),
    [sym_new_command] = STATE(330),
    [sym_keyword] = STATE(67),
    [sym_for_statement] = STATE(228),
    [sym_if_statement] = STATE(228),
    [sym_while_statement] = STATE(228),
    [sym_do_statement] = STATE(228),
    [sym_function_definition] = STATE(228),
    [sym_label] = STATE(227),
    [aux_sym_program_repeat1] = STATE(228),
    [aux_sym_new_command_token1] = ACTIONS(3),
    [aux_sym_keyword_token1] = ACTIONS(5),
    [aux_sym_for_statement_token1] = ACTIONS(7),
    [aux_sym_if_statement_token1] = ACTIONS(9),
    [aux_sym_while_statement_token1] = ACTIONS(11),
    [aux_sym_do_statement_token1] = ACTIONS(13),
    [sym__eol_comment] = ACTIONS(15),
    [sym__set] = ACTIONS(17),
    [sym__line_comment] = ACTIONS(15),
    [sym__label] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(29), 1,
      aux_sym_for_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_while_statement_token1,
    ACTIONS(35), 1,
      aux_sym_do_statement_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(158), 1,
      aux_sym_if_statement_repeat1,
    STATE(245), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(295), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [90] = 18,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    ACTIONS(49), 1,
      aux_sym_if_statement_token1,
    ACTIONS(51), 1,
      aux_sym_while_statement_token1,
    ACTIONS(53), 1,
      aux_sym_do_statement_token1,
    ACTIONS(55), 1,
      sym__indent,
    STATE(65), 1,
      sym_keyword,
    STATE(155), 1,
      aux_sym_if_statement_repeat1,
    STATE(237), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(346), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [180] = 18,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    ACTIONS(49), 1,
      aux_sym_if_statement_token1,
    ACTIONS(51), 1,
      aux_sym_while_statement_token1,
    ACTIONS(53), 1,
      aux_sym_do_statement_token1,
    ACTIONS(55), 1,
      sym__indent,
    STATE(65), 1,
      sym_keyword,
    STATE(154), 1,
      aux_sym_if_statement_repeat1,
    STATE(237), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(328), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [270] = 18,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(29), 1,
      aux_sym_for_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_while_statement_token1,
    ACTIONS(35), 1,
      aux_sym_do_statement_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(157), 1,
      aux_sym_if_statement_repeat1,
    STATE(245), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(308), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [360] = 5,
    ACTIONS(61), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_arguments,
    ACTIONS(59), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(57), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [424] = 4,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_array_index,
    ACTIONS(67), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(65), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [485] = 5,
    ACTIONS(71), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym__function_arguments,
    ACTIONS(59), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(57), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [548] = 4,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_array_index,
    ACTIONS(77), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(75), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [609] = 16,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(29), 1,
      aux_sym_for_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_while_statement_token1,
    ACTIONS(35), 1,
      aux_sym_do_statement_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(245), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(309), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [693] = 16,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      aux_sym_for_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym_while_statement_token1,
    ACTIONS(13), 1,
      aux_sym_do_statement_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(55), 1,
      sym__indent,
    STATE(67), 1,
      sym_keyword,
    STATE(227), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(332), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [777] = 16,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(309), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [861] = 4,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_array_index,
    ACTIONS(77), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(75), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [921] = 5,
    ACTIONS(91), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym__function_arguments,
    ACTIONS(59), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(57), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [983] = 4,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_array_index,
    ACTIONS(67), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(65), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1043] = 16,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    ACTIONS(49), 1,
      aux_sym_if_statement_token1,
    ACTIONS(51), 1,
      aux_sym_while_statement_token1,
    ACTIONS(53), 1,
      aux_sym_do_statement_token1,
    ACTIONS(55), 1,
      sym__indent,
    STATE(65), 1,
      sym_keyword,
    STATE(237), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    STATE(332), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
    ACTIONS(21), 21,
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
  [1127] = 2,
    ACTIONS(97), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(95), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1182] = 2,
    ACTIONS(101), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(99), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1237] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_array_index,
    ACTIONS(67), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(65), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1296] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_array_index,
    ACTIONS(77), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(75), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1355] = 2,
    ACTIONS(107), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(105), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1410] = 4,
    ACTIONS(115), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(113), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
      sym_global_variable,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
    ACTIONS(111), 14,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
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
    ACTIONS(109), 21,
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
  [1469] = 5,
    ACTIONS(117), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym__function_arguments,
    ACTIONS(59), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(57), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1530] = 2,
    ACTIONS(123), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(121), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1585] = 2,
    ACTIONS(127), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(125), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1640] = 2,
    ACTIONS(131), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(129), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1695] = 2,
    ACTIONS(135), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(133), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1750] = 2,
    ACTIONS(139), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(137), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1805] = 2,
    ACTIONS(143), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(141), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1860] = 2,
    ACTIONS(101), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(99), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1914] = 2,
    ACTIONS(127), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(125), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [1968] = 2,
    ACTIONS(123), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(121), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2022] = 2,
    ACTIONS(139), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(137), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2076] = 2,
    ACTIONS(107), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(105), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2130] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_array_index,
    ACTIONS(77), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(75), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2188] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_array_index,
    ACTIONS(67), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(65), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2246] = 2,
    ACTIONS(143), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(141), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2300] = 4,
    ACTIONS(149), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(113), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
      sym_global_variable,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
    ACTIONS(111), 13,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
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
  [2358] = 2,
    ACTIONS(97), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(95), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2412] = 2,
    ACTIONS(135), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(133), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2466] = 2,
    ACTIONS(131), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(129), 33,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2520] = 2,
    ACTIONS(101), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(99), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2573] = 2,
    ACTIONS(143), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(141), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2626] = 2,
    ACTIONS(107), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(105), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2679] = 2,
    ACTIONS(123), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(121), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2732] = 2,
    ACTIONS(139), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(137), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2785] = 2,
    ACTIONS(127), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(125), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2838] = 2,
    ACTIONS(131), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(129), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [2891] = 4,
    ACTIONS(153), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(113), 10,
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
    ACTIONS(111), 14,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
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
    ACTIONS(151), 21,
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
  [2948] = 2,
    ACTIONS(135), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(133), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3001] = 2,
    ACTIONS(97), 17,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(95), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3054] = 2,
    ACTIONS(135), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(133), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3106] = 2,
    ACTIONS(107), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(105), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3158] = 2,
    ACTIONS(97), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(95), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3210] = 2,
    ACTIONS(101), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(99), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3262] = 2,
    ACTIONS(143), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(141), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3314] = 2,
    ACTIONS(139), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(137), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3366] = 2,
    ACTIONS(123), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(121), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3418] = 4,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(113), 10,
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
    ACTIONS(111), 13,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
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
    ACTIONS(155), 21,
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
  [3474] = 2,
    ACTIONS(131), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(129), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3526] = 2,
    ACTIONS(127), 16,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(125), 31,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym__eol_comment,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [3578] = 17,
    ACTIONS(161), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(64), 1,
      sym_postconditional,
    STATE(267), 1,
      sym_argument,
    STATE(305), 1,
      sym_arguments,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(163), 6,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    ACTIONS(159), 8,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
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
  [3659] = 17,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(183), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym_postconditional,
    STATE(267), 1,
      sym_argument,
    STATE(305), 1,
      sym_arguments,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(163), 6,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    ACTIONS(159), 7,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
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
  [3739] = 15,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(267), 1,
      sym_argument,
    STATE(287), 1,
      sym_arguments,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(187), 6,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    ACTIONS(185), 8,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
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
  [3814] = 17,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(70), 1,
      sym_postconditional,
    STATE(312), 1,
      sym_argument,
    STATE(347), 1,
      sym_arguments,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(205), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(163), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(159), 8,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(112), 13,
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
  [3893] = 15,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(267), 1,
      sym_argument,
    STATE(287), 1,
      sym_arguments,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(187), 6,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      sym__eol_comment,
    ACTIONS(185), 7,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
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
  [3967] = 17,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    ACTIONS(207), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_postconditional,
    STATE(312), 1,
      sym_argument,
    STATE(347), 1,
      sym_arguments,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(205), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(163), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(159), 7,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(112), 13,
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
  [4045] = 5,
    ACTIONS(209), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym__function_arguments,
    ACTIONS(59), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(57), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [4098] = 5,
    ACTIONS(213), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym__function_arguments,
    ACTIONS(59), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(57), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4151] = 15,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(312), 1,
      sym_argument,
    STATE(336), 1,
      sym_arguments,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(205), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(187), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(185), 8,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(112), 13,
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
  [4224] = 4,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_array_index,
    ACTIONS(77), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [4274] = 4,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_array_index,
    ACTIONS(67), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(65), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [4324] = 15,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(312), 1,
      sym_argument,
    STATE(336), 1,
      sym_arguments,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(205), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    ACTIONS(187), 4,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      sym__eol_comment,
    ACTIONS(185), 7,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__set,
    STATE(112), 13,
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
  [4396] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_array_index,
    ACTIONS(67), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(65), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4446] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_array_index,
    ACTIONS(77), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(75), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4496] = 6,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(227), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(229), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(225), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(221), 21,
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
  [4549] = 6,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(233), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(229), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(231), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(221), 21,
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
  [4602] = 5,
    ACTIONS(235), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym__function_arguments,
    ACTIONS(59), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(57), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [4653] = 2,
    ACTIONS(123), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(121), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4697] = 2,
    ACTIONS(101), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(99), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4741] = 2,
    ACTIONS(143), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(141), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4785] = 2,
    ACTIONS(139), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(137), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4829] = 2,
    ACTIONS(131), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(129), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4873] = 2,
    ACTIONS(127), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(125), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [4917] = 4,
    ACTIONS(241), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(229), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(239), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(221), 21,
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
  [4965] = 4,
    ACTIONS(245), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(229), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(243), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(221), 21,
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
  [5013] = 5,
    ACTIONS(247), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym__function_arguments,
    ACTIONS(59), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(57), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5063] = 2,
    ACTIONS(97), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(95), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [5107] = 2,
    ACTIONS(135), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(133), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [5151] = 2,
    ACTIONS(107), 9,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(105), 30,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
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
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [5195] = 2,
    ACTIONS(123), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(121), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5239] = 2,
    ACTIONS(139), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(137), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5283] = 2,
    ACTIONS(143), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(141), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5327] = 2,
    ACTIONS(101), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(99), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5371] = 2,
    ACTIONS(97), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(95), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5415] = 2,
    ACTIONS(135), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(133), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5459] = 2,
    ACTIONS(131), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(129), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5503] = 2,
    ACTIONS(127), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(125), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5547] = 2,
    ACTIONS(107), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(105), 34,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5591] = 4,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_array_index,
    ACTIONS(67), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(65), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5639] = 4,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_array_index,
    ACTIONS(77), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5687] = 6,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(233), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(231), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(253), 21,
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
  [5738] = 4,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_array_index,
    ACTIONS(77), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(75), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5785] = 4,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_array_index,
    ACTIONS(67), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(65), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5832] = 6,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(227), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(225), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(253), 21,
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
  [5883] = 2,
    ACTIONS(127), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(125), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5925] = 2,
    ACTIONS(135), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(133), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [5967] = 2,
    ACTIONS(131), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(129), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6009] = 2,
    ACTIONS(107), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(105), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6051] = 2,
    ACTIONS(123), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(121), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6093] = 2,
    ACTIONS(97), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(95), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6135] = 4,
    ACTIONS(245), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(243), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(253), 21,
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
  [6181] = 2,
    ACTIONS(101), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(99), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6223] = 4,
    ACTIONS(241), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(239), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(253), 21,
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
  [6269] = 2,
    ACTIONS(143), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(141), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6311] = 2,
    ACTIONS(139), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(137), 32,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6353] = 4,
    ACTIONS(263), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(261), 10,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(21), 21,
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
  [6398] = 2,
    ACTIONS(143), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(141), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6439] = 2,
    ACTIONS(101), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(99), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6480] = 2,
    ACTIONS(107), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(105), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6521] = 2,
    ACTIONS(131), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(129), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6562] = 4,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(111), 6,
      sym__variable_name,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(113), 6,
      sym_global_variable,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
    ACTIONS(265), 21,
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
  [6607] = 2,
    ACTIONS(135), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(133), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6648] = 2,
    ACTIONS(123), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(121), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6689] = 2,
    ACTIONS(127), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(125), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6730] = 2,
    ACTIONS(139), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(137), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6771] = 2,
    ACTIONS(97), 5,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(95), 31,
      sym__line_comment,
      sym__label,
      sym__indent,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
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
  [6812] = 4,
    ACTIONS(271), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(269), 9,
      sym__line_comment,
      sym__label,
      sym__indent,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
    ACTIONS(21), 21,
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
  [6856] = 15,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(273), 1,
      anon_sym_COLON,
    STATE(146), 1,
      sym_postconditional,
    STATE(267), 1,
      sym_argument,
    STATE(302), 1,
      sym_arguments,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
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
  [6919] = 15,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    ACTIONS(273), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_postconditional,
    STATE(312), 1,
      sym_argument,
    STATE(325), 1,
      sym_arguments,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(205), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(112), 13,
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
  [6982] = 17,
    ACTIONS(275), 1,
      aux_sym_new_command_token1,
    ACTIONS(278), 1,
      aux_sym_keyword_token1,
    ACTIONS(281), 1,
      aux_sym_for_statement_token1,
    ACTIONS(284), 1,
      aux_sym_if_statement_token1,
    ACTIONS(287), 1,
      aux_sym_while_statement_token1,
    ACTIONS(290), 1,
      aux_sym_do_statement_token1,
    ACTIONS(296), 1,
      sym__set,
    ACTIONS(299), 1,
      sym__label,
    ACTIONS(302), 1,
      sym__indent,
    ACTIONS(305), 1,
      sym__dedent,
    ACTIONS(307), 1,
      sym__indentation_marker,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(238), 1,
      aux_sym_block_repeat1,
    ACTIONS(293), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(131), 13,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
      aux_sym_block_repeat2,
  [7048] = 5,
    ACTIONS(310), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym__function_arguments,
    ACTIONS(59), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(57), 23,
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
  [7090] = 17,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    ACTIONS(314), 1,
      sym__dedent,
    ACTIONS(316), 1,
      sym__indentation_marker,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(238), 1,
      aux_sym_block_repeat1,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(131), 13,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
      aux_sym_block_repeat2,
  [7156] = 17,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    ACTIONS(316), 1,
      sym__indentation_marker,
    ACTIONS(318), 1,
      sym__dedent,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(238), 1,
      aux_sym_block_repeat1,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(131), 13,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
      aux_sym_block_repeat2,
  [7222] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(427), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7279] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(312), 1,
      sym_argument,
    STATE(342), 1,
      sym_arguments,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(205), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(112), 13,
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
  [7336] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(423), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7393] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(418), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7450] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(429), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7507] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(434), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7564] = 16,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    ACTIONS(316), 1,
      sym__indentation_marker,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(238), 1,
      aux_sym_block_repeat1,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(133), 13,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
      aux_sym_block_repeat2,
  [7627] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(413), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7684] = 4,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_array_index,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(75), 23,
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
  [7723] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(428), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7780] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(432), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7837] = 13,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(267), 1,
      sym_argument,
    STATE(283), 1,
      sym_arguments,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
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
  [7894] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(431), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [7951] = 4,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_array_index,
    ACTIONS(67), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(65), 23,
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
  [7990] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(433), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [8047] = 13,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(384), 1,
      sym_argument,
    STATE(422), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [8104] = 16,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    ACTIONS(316), 1,
      sym__indentation_marker,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(238), 1,
      aux_sym_block_repeat1,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(134), 13,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
      aux_sym_block_repeat2,
  [8167] = 12,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    STATE(404), 1,
      sym_argument,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(332), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(334), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(254), 13,
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
  [8221] = 2,
    ACTIONS(338), 13,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
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
    ACTIONS(340), 16,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COLON,
      sym__eol_comment,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [8255] = 17,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    ACTIONS(49), 1,
      aux_sym_if_statement_token1,
    ACTIONS(51), 1,
      aux_sym_while_statement_token1,
    ACTIONS(53), 1,
      aux_sym_do_statement_token1,
    ACTIONS(55), 1,
      sym__indent,
    STATE(65), 1,
      sym_keyword,
    STATE(237), 1,
      sym_label,
    STATE(319), 1,
      aux_sym_if_statement_repeat1,
    STATE(343), 1,
      sym_block,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(344), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [8319] = 17,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    ACTIONS(49), 1,
      aux_sym_if_statement_token1,
    ACTIONS(51), 1,
      aux_sym_while_statement_token1,
    ACTIONS(53), 1,
      aux_sym_do_statement_token1,
    ACTIONS(55), 1,
      sym__indent,
    STATE(65), 1,
      sym_keyword,
    STATE(237), 1,
      sym_label,
    STATE(319), 1,
      aux_sym_if_statement_repeat1,
    STATE(335), 1,
      sym_block,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(334), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [8383] = 12,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(318), 1,
      sym_argument,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(205), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(112), 13,
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
  [8437] = 17,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(29), 1,
      aux_sym_for_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_while_statement_token1,
    ACTIONS(35), 1,
      aux_sym_do_statement_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(245), 1,
      sym_label,
    STATE(304), 1,
      sym_block,
    STATE(319), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(307), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [8501] = 17,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(29), 1,
      aux_sym_for_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_while_statement_token1,
    ACTIONS(35), 1,
      aux_sym_do_statement_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(245), 1,
      sym_label,
    STATE(280), 1,
      sym_block,
    STATE(319), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(294), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [8565] = 12,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(277), 1,
      sym_argument,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(181), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
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
  [8619] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(356), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
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
  [8670] = 11,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(358), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(360), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
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
  [8721] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(362), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(364), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(232), 13,
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
  [8772] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(366), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(368), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(114), 13,
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
  [8823] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(370), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(372), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(235), 13,
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
  [8874] = 2,
    ACTIONS(135), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(133), 23,
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
  [8907] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(374), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(376), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(242), 13,
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
  [8958] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(378), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(380), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
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
  [9009] = 4,
    ACTIONS(111), 2,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(113), 2,
      sym__variable_name,
      sym_global_variable,
    ACTIONS(384), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(382), 21,
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
  [9046] = 11,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(386), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(388), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
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
  [9097] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(390), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(392), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(243), 13,
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
  [9148] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(394), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(396), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(123), 13,
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
  [9199] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(398), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(400), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(246), 13,
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
  [9250] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(402), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(404), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(249), 13,
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
  [9301] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(406), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(408), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(251), 13,
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
  [9352] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(410), 1,
      sym__variable_name,
    ACTIONS(412), 1,
      sym_global_variable,
    ACTIONS(416), 1,
      sym__builtin_identifier,
    ACTIONS(418), 1,
      sym__external_identifier,
    STATE(368), 1,
      sym__user_defined_identifier,
    ACTIONS(420), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(422), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(424), 2,
      sym_float,
      sym_string,
    ACTIONS(414), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(165), 13,
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
  [9403] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(426), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(428), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(247), 13,
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
  [9454] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(430), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(432), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(244), 13,
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
  [9505] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(434), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(436), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(3), 13,
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
  [9556] = 11,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(438), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(440), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
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
  [9607] = 2,
    ACTIONS(97), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(95), 23,
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
  [9640] = 2,
    ACTIONS(101), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(99), 23,
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
  [9673] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(442), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(444), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(107), 13,
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
  [9724] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(446), 1,
      sym__variable_name,
    ACTIONS(448), 1,
      sym_global_variable,
    ACTIONS(452), 1,
      sym__builtin_identifier,
    ACTIONS(454), 1,
      sym__external_identifier,
    STATE(388), 1,
      sym__user_defined_identifier,
    ACTIONS(456), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(458), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(460), 2,
      sym_float,
      sym_string,
    ACTIONS(450), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(18), 13,
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
  [9775] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(462), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(464), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(225), 13,
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
  [9826] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(466), 1,
      sym__variable_name,
    ACTIONS(468), 1,
      sym_global_variable,
    ACTIONS(472), 1,
      sym__builtin_identifier,
    ACTIONS(474), 1,
      sym__external_identifier,
    STATE(385), 1,
      sym__user_defined_identifier,
    ACTIONS(476), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(478), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(480), 2,
      sym_float,
      sym_string,
    ACTIONS(470), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(30), 13,
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
  [9877] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(482), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(484), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(256), 13,
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
  [9928] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(446), 1,
      sym__variable_name,
    ACTIONS(448), 1,
      sym_global_variable,
    ACTIONS(452), 1,
      sym__builtin_identifier,
    ACTIONS(454), 1,
      sym__external_identifier,
    STATE(388), 1,
      sym__user_defined_identifier,
    ACTIONS(456), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(486), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(488), 2,
      sym_float,
      sym_string,
    ACTIONS(450), 3,
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
  [9979] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(490), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(492), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(117), 13,
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
  [10030] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(494), 1,
      sym__variable_name,
    ACTIONS(496), 1,
      sym_global_variable,
    ACTIONS(500), 1,
      sym__builtin_identifier,
    ACTIONS(502), 1,
      sym__external_identifier,
    STATE(381), 1,
      sym__user_defined_identifier,
    ACTIONS(504), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(506), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(508), 2,
      sym_float,
      sym_string,
    ACTIONS(498), 3,
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
  [10081] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(510), 1,
      sym__variable_name,
    ACTIONS(512), 1,
      sym_global_variable,
    ACTIONS(516), 1,
      sym__builtin_identifier,
    ACTIONS(518), 1,
      sym__external_identifier,
    STATE(373), 1,
      sym__user_defined_identifier,
    ACTIONS(520), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(522), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(524), 2,
      sym_float,
      sym_string,
    ACTIONS(514), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(52), 13,
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
  [10132] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(526), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(528), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(252), 13,
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
  [10183] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(466), 1,
      sym__variable_name,
    ACTIONS(468), 1,
      sym_global_variable,
    ACTIONS(472), 1,
      sym__builtin_identifier,
    ACTIONS(474), 1,
      sym__external_identifier,
    STATE(385), 1,
      sym__user_defined_identifier,
    ACTIONS(476), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(530), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(532), 2,
      sym_float,
      sym_string,
    ACTIONS(470), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(38), 13,
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
  [10234] = 11,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(534), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(536), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
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
  [10285] = 2,
    ACTIONS(123), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(121), 23,
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
  [10318] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(538), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(540), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(128), 13,
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
  [10369] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(494), 1,
      sym__variable_name,
    ACTIONS(496), 1,
      sym_global_variable,
    ACTIONS(500), 1,
      sym__builtin_identifier,
    ACTIONS(502), 1,
      sym__external_identifier,
    STATE(381), 1,
      sym__user_defined_identifier,
    ACTIONS(504), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(542), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(544), 2,
      sym_float,
      sym_string,
    ACTIONS(498), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(49), 13,
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
  [10420] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(546), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(548), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(10), 13,
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
  [10471] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(510), 1,
      sym__variable_name,
    ACTIONS(512), 1,
      sym_global_variable,
    ACTIONS(516), 1,
      sym__builtin_identifier,
    ACTIONS(518), 1,
      sym__external_identifier,
    STATE(373), 1,
      sym__user_defined_identifier,
    ACTIONS(520), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(550), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(552), 2,
      sym_float,
      sym_string,
    ACTIONS(514), 3,
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
  [10522] = 2,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(105), 23,
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
  [10555] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(510), 1,
      sym__variable_name,
    ACTIONS(512), 1,
      sym_global_variable,
    ACTIONS(516), 1,
      sym__builtin_identifier,
    ACTIONS(518), 1,
      sym__external_identifier,
    STATE(373), 1,
      sym__user_defined_identifier,
    ACTIONS(520), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(554), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(556), 2,
      sym_float,
      sym_string,
    ACTIONS(514), 3,
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
  [10606] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(558), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(560), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
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
  [10657] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(562), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(564), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
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
  [10708] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(410), 1,
      sym__variable_name,
    ACTIONS(412), 1,
      sym_global_variable,
    ACTIONS(416), 1,
      sym__builtin_identifier,
    ACTIONS(418), 1,
      sym__external_identifier,
    STATE(368), 1,
      sym__user_defined_identifier,
    ACTIONS(420), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(566), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(568), 2,
      sym_float,
      sym_string,
    ACTIONS(414), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(181), 13,
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
  [10759] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(494), 1,
      sym__variable_name,
    ACTIONS(496), 1,
      sym_global_variable,
    ACTIONS(500), 1,
      sym__builtin_identifier,
    ACTIONS(502), 1,
      sym__external_identifier,
    STATE(381), 1,
      sym__user_defined_identifier,
    ACTIONS(504), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(570), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(572), 2,
      sym_float,
      sym_string,
    ACTIONS(498), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(50), 13,
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
  [10810] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(410), 1,
      sym__variable_name,
    ACTIONS(412), 1,
      sym_global_variable,
    ACTIONS(416), 1,
      sym__builtin_identifier,
    ACTIONS(418), 1,
      sym__external_identifier,
    STATE(368), 1,
      sym__user_defined_identifier,
    ACTIONS(420), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(574), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(576), 2,
      sym_float,
      sym_string,
    ACTIONS(414), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(168), 13,
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
  [10861] = 11,
    ACTIONS(165), 1,
      sym__variable_name,
    ACTIONS(167), 1,
      sym_global_variable,
    ACTIONS(171), 1,
      sym__builtin_identifier,
    ACTIONS(173), 1,
      sym__external_identifier,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    STATE(377), 1,
      sym__user_defined_identifier,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(578), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(580), 2,
      sym_float,
      sym_string,
    ACTIONS(169), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(85), 13,
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
  [10912] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(466), 1,
      sym__variable_name,
    ACTIONS(468), 1,
      sym_global_variable,
    ACTIONS(472), 1,
      sym__builtin_identifier,
    ACTIONS(474), 1,
      sym__external_identifier,
    STATE(385), 1,
      sym__user_defined_identifier,
    ACTIONS(476), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(582), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(584), 2,
      sym_float,
      sym_string,
    ACTIONS(470), 3,
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
  [10963] = 2,
    ACTIONS(338), 12,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(340), 16,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COLON,
      sym__eol_comment,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [10996] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(586), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(588), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(5), 13,
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
  [11047] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(590), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(592), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(105), 13,
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
  [11098] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(594), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(596), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(255), 13,
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
  [11149] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(191), 1,
      sym__variable_name,
    ACTIONS(193), 1,
      sym_global_variable,
    ACTIONS(197), 1,
      sym__builtin_identifier,
    ACTIONS(199), 1,
      sym__external_identifier,
    STATE(394), 1,
      sym__user_defined_identifier,
    ACTIONS(201), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(598), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(600), 2,
      sym_float,
      sym_string,
    ACTIONS(195), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(113), 13,
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
  [11200] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(602), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(604), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(80), 13,
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
  [11251] = 2,
    ACTIONS(127), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(125), 23,
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
  [11284] = 2,
    ACTIONS(131), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(129), 23,
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
  [11317] = 2,
    ACTIONS(143), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(141), 23,
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
  [11350] = 2,
    ACTIONS(139), 5,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
      aux_sym_lvalue_function_call_token1,
      sym__builtin_identifier,
    ACTIONS(137), 23,
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
  [11383] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(606), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(608), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(4), 13,
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
  [11434] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(610), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(612), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
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
  [11485] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(342), 1,
      sym__variable_name,
    ACTIONS(344), 1,
      sym_global_variable,
    ACTIONS(348), 1,
      sym__builtin_identifier,
    ACTIONS(350), 1,
      sym__external_identifier,
    STATE(378), 1,
      sym__user_defined_identifier,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(614), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(616), 2,
      sym_float,
      sym_string,
    ACTIONS(346), 3,
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
  [11536] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(446), 1,
      sym__variable_name,
    ACTIONS(448), 1,
      sym_global_variable,
    ACTIONS(452), 1,
      sym__builtin_identifier,
    ACTIONS(454), 1,
      sym__external_identifier,
    STATE(388), 1,
      sym__user_defined_identifier,
    ACTIONS(456), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(618), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(620), 2,
      sym_float,
      sym_string,
    ACTIONS(450), 3,
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
  [11587] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(622), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(624), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
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
  [11638] = 11,
    ACTIONS(175), 1,
      aux_sym__user_defined_identifier_token1,
    ACTIONS(320), 1,
      sym__variable_name,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(326), 1,
      sym__builtin_identifier,
    ACTIONS(328), 1,
      sym__external_identifier,
    STATE(369), 1,
      sym__user_defined_identifier,
    ACTIONS(330), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(626), 2,
      sym_integer,
      sym_format_specifier,
    ACTIONS(628), 2,
      sym_float,
      sym_string,
    ACTIONS(324), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
    STATE(122), 13,
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
  [11689] = 16,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    ACTIONS(630), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym__label,
    STATE(63), 1,
      sym_keyword,
    STATE(361), 1,
      sym__function_arguments,
    STATE(375), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(310), 10,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [11749] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [11787] = 14,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    ACTIONS(642), 1,
      aux_sym_new_command_token1,
    ACTIONS(645), 1,
      aux_sym_keyword_token1,
    ACTIONS(648), 1,
      aux_sym_for_statement_token1,
    ACTIONS(651), 1,
      aux_sym_if_statement_token1,
    ACTIONS(654), 1,
      aux_sym_while_statement_token1,
    ACTIONS(657), 1,
      aux_sym_do_statement_token1,
    ACTIONS(663), 1,
      sym__set,
    ACTIONS(666), 1,
      sym__label,
    STATE(67), 1,
      sym_keyword,
    STATE(227), 1,
      sym_label,
    ACTIONS(660), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(226), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [11843] = 16,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      aux_sym_for_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym_while_statement_token1,
    ACTIONS(13), 1,
      aux_sym_do_statement_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym__label,
    ACTIONS(669), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(67), 1,
      sym_keyword,
    STATE(362), 1,
      sym__function_arguments,
    STATE(372), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(329), 10,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [11903] = 14,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      aux_sym_for_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym_while_statement_token1,
    ACTIONS(13), 1,
      aux_sym_do_statement_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_keyword,
    STATE(227), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(226), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [11959] = 14,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      aux_sym_for_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym_while_statement_token1,
    ACTIONS(13), 1,
      aux_sym_do_statement_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(55), 1,
      sym__indent,
    STATE(67), 1,
      sym_keyword,
    STATE(227), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(326), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12015] = 14,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    ACTIONS(49), 1,
      aux_sym_if_statement_token1,
    ACTIONS(51), 1,
      aux_sym_while_statement_token1,
    ACTIONS(53), 1,
      aux_sym_do_statement_token1,
    ACTIONS(55), 1,
      sym__indent,
    STATE(65), 1,
      sym_keyword,
    STATE(237), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(341), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12071] = 14,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(296), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12127] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12165] = 15,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      aux_sym_for_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym_while_statement_token1,
    ACTIONS(13), 1,
      aux_sym_do_statement_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(55), 1,
      sym__indent,
    STATE(67), 1,
      sym_keyword,
    STATE(227), 1,
      sym_label,
    STATE(345), 1,
      sym_block,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(338), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12223] = 14,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(286), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12279] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12317] = 15,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      aux_sym_for_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym_while_statement_token1,
    ACTIONS(13), 1,
      aux_sym_do_statement_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(55), 1,
      sym__indent,
    STATE(67), 1,
      sym_keyword,
    STATE(227), 1,
      sym_label,
    STATE(340), 1,
      sym_block,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(323), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12375] = 16,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    ACTIONS(49), 1,
      aux_sym_if_statement_token1,
    ACTIONS(51), 1,
      aux_sym_while_statement_token1,
    ACTIONS(53), 1,
      aux_sym_do_statement_token1,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym__label,
    ACTIONS(669), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(65), 1,
      sym_keyword,
    STATE(362), 1,
      sym__function_arguments,
    STATE(372), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(329), 10,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12435] = 15,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    ACTIONS(677), 1,
      sym__indentation_marker,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(324), 1,
      aux_sym_block_repeat1,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(322), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12493] = 15,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(289), 1,
      sym_block,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(288), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12551] = 15,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    ACTIONS(83), 1,
      aux_sym_if_statement_token1,
    ACTIONS(85), 1,
      aux_sym_while_statement_token1,
    ACTIONS(87), 1,
      aux_sym_do_statement_token1,
    STATE(63), 1,
      sym_keyword,
    STATE(224), 1,
      sym_label,
    STATE(291), 1,
      sym_block,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(290), 11,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12609] = 14,
    ACTIONS(3), 1,
      aux_sym_new_command_token1,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      aux_sym_for_statement_token1,
    ACTIONS(9), 1,
      aux_sym_if_statement_token1,
    ACTIONS(11), 1,
      aux_sym_while_statement_token1,
    ACTIONS(13), 1,
      aux_sym_do_statement_token1,
    ACTIONS(17), 1,
      sym__set,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(55), 1,
      sym__indent,
    STATE(67), 1,
      sym_keyword,
    STATE(227), 1,
      sym_label,
    ACTIONS(15), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
    STATE(341), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12665] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12703] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12741] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12779] = 16,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(29), 1,
      aux_sym_for_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_while_statement_token1,
    ACTIONS(35), 1,
      aux_sym_do_statement_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(630), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      sym__label,
    STATE(62), 1,
      sym_keyword,
    STATE(361), 1,
      sym__function_arguments,
    STATE(375), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(310), 10,
      sym__simple_statement,
      sym__compound_statement,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [12839] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12877] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12915] = 2,
    ACTIONS(338), 13,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
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
    ACTIONS(340), 14,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym__eol_comment,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [12947] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [12985] = 14,
    ACTIONS(19), 1,
      sym__label,
    ACTIONS(25), 1,
      aux_sym_new_command_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(29), 1,
      aux_sym_for_statement_token1,
    ACTIONS(31), 1,
      aux_sym_if_statement_token1,
    ACTIONS(33), 1,
      aux_sym_while_statement_token1,
    ACTIONS(35), 1,
      aux_sym_do_statement_token1,
    ACTIONS(41), 1,
      sym__set,
    ACTIONS(43), 1,
      sym__indent,
    STATE(62), 1,
      sym_keyword,
    STATE(245), 1,
      sym_label,
    ACTIONS(37), 2,
      sym__line_comment,
      sym__eol_comment,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
    STATE(296), 12,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_block,
      sym_command,
      sym_comment,
      sym_assignment,
      sym_for_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_function_definition,
  [13041] = 5,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      aux_sym_array_index_repeat1,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [13079] = 3,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [13112] = 2,
    ACTIONS(338), 12,
      aux_sym_new_command_token1,
      aux_sym_keyword_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      aux_sym_do_statement_token1,
      sym__variable_name,
      sym__set,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_format_specifier,
    ACTIONS(340), 14,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym__eol_comment,
      sym_global_variable,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym__builtin_identifier,
      sym__external_identifier,
      aux_sym__user_defined_identifier_token1,
      sym_float,
      sym_string,
  [13143] = 3,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [13176] = 3,
    ACTIONS(695), 1,
      anon_sym_COLON,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [13208] = 3,
    ACTIONS(697), 1,
      anon_sym_COLON,
    ACTIONS(267), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_SQUOTE_RBRACK,
    ACTIONS(265), 21,
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
  [13240] = 6,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      anon_sym_CARET,
    ACTIONS(705), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(276), 1,
      sym__function_arguments,
    ACTIONS(701), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(699), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13272] = 6,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      anon_sym_CARET,
    ACTIONS(713), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(274), 1,
      sym__function_arguments,
    ACTIONS(709), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(707), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13304] = 5,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(719), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(275), 1,
      sym__function_arguments,
    ACTIONS(717), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(715), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13333] = 5,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(725), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(279), 1,
      sym__function_arguments,
    ACTIONS(723), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(721), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13362] = 6,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(727), 1,
      anon_sym_CARET,
    ACTIONS(729), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(317), 1,
      sym__function_arguments,
    ACTIONS(701), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(699), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13392] = 6,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      anon_sym_CARET,
    ACTIONS(733), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(321), 1,
      sym__function_arguments,
    ACTIONS(709), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(707), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13422] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(739), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(737), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13447] = 4,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(745), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(743), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13472] = 5,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(316), 1,
      sym__function_arguments,
    ACTIONS(717), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(715), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13499] = 4,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(754), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(752), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13524] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(758), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(756), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13549] = 4,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(762), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(760), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13574] = 5,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(313), 1,
      sym__function_arguments,
    ACTIONS(723), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(721), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13601] = 4,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(771), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(769), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13626] = 4,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(775), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(773), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13651] = 4,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(779), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(777), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13676] = 4,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(786), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(784), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13701] = 2,
    ACTIONS(790), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(788), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13721] = 2,
    ACTIONS(794), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(792), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13741] = 2,
    ACTIONS(798), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(796), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13761] = 2,
    ACTIONS(754), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(752), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13781] = 2,
    ACTIONS(786), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(784), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13801] = 2,
    ACTIONS(802), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(800), 13,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13821] = 2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13840] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(786), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(784), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13863] = 4,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(771), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(769), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13886] = 2,
    ACTIONS(816), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(814), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13905] = 4,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(775), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(773), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13928] = 2,
    ACTIONS(820), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(818), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13947] = 2,
    ACTIONS(824), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(822), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13966] = 2,
    ACTIONS(828), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(826), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [13985] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14004] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14023] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14042] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14061] = 4,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(779), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(777), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14084] = 4,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(754), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(752), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14107] = 2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14126] = 2,
    ACTIONS(839), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(837), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14145] = 2,
    ACTIONS(843), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(841), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14164] = 4,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(739), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(737), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14187] = 2,
    ACTIONS(745), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(743), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14206] = 4,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(762), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(760), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14229] = 2,
    ACTIONS(851), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(849), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14248] = 4,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_do_statement_repeat1,
    ACTIONS(745), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(743), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14271] = 2,
    ACTIONS(855), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(853), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14290] = 2,
    ACTIONS(859), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(857), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14309] = 3,
    ACTIONS(861), 1,
      aux_sym_if_statement_token2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 11,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14330] = 2,
    ACTIONS(185), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(187), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14349] = 2,
    ACTIONS(865), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(863), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14368] = 3,
    ACTIONS(867), 1,
      aux_sym_if_statement_token2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 11,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14389] = 3,
    ACTIONS(869), 1,
      aux_sym_if_statement_token2,
    ACTIONS(839), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(837), 11,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14410] = 2,
    ACTIONS(873), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(871), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14429] = 2,
    ACTIONS(877), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(875), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14448] = 2,
    ACTIONS(881), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(879), 12,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14467] = 4,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(758), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(756), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14490] = 2,
    ACTIONS(802), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(800), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14508] = 7,
    ACTIONS(883), 1,
      anon_sym_COLON,
    ACTIONS(885), 1,
      sym__variable_name,
    ACTIONS(887), 1,
      sym_global_variable,
    ACTIONS(889), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(891), 1,
      sym__builtin_identifier,
    STATE(360), 1,
      sym_postconditional,
    STATE(395), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [14536] = 2,
    ACTIONS(786), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(784), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14554] = 2,
    ACTIONS(794), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(792), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14572] = 2,
    ACTIONS(798), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(796), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14590] = 2,
    ACTIONS(754), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(752), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14608] = 4,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(898), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(896), 9,
      sym__line_comment,
      sym__label,
      sym__indent,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14630] = 7,
    ACTIONS(883), 1,
      anon_sym_COLON,
    ACTIONS(885), 1,
      sym__variable_name,
    ACTIONS(887), 1,
      sym_global_variable,
    ACTIONS(889), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(891), 1,
      sym__builtin_identifier,
    STATE(352), 1,
      sym_postconditional,
    STATE(407), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [14658] = 2,
    ACTIONS(790), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(788), 11,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14676] = 2,
    ACTIONS(900), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(305), 11,
      sym__line_comment,
      sym__label,
      sym__indent,
      sym__dedent,
      sym__indentation_marker,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14694] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14711] = 4,
    ACTIONS(906), 1,
      sym__indentation_marker,
    STATE(324), 1,
      aux_sym_block_repeat1,
    ACTIONS(904), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(902), 8,
      sym__line_comment,
      sym__label,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14732] = 2,
    ACTIONS(855), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(853), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14749] = 2,
    ACTIONS(824), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(822), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14766] = 2,
    ACTIONS(745), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(743), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14783] = 3,
    ACTIONS(909), 1,
      aux_sym_if_statement_token2,
    ACTIONS(839), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(837), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14802] = 2,
    ACTIONS(877), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(875), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14819] = 2,
    ACTIONS(881), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(879), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14836] = 2,
    ACTIONS(859), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(857), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14853] = 2,
    ACTIONS(873), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(871), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14870] = 2,
    ACTIONS(820), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(818), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14887] = 2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14904] = 2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14921] = 2,
    ACTIONS(828), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(826), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14938] = 2,
    ACTIONS(913), 3,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
      anon_sym_LPAREN,
    ACTIONS(911), 9,
      sym__line_comment,
      sym__label,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      anon_sym_LPAREN_RPAREN,
      sym__eol_comment,
      sym__set,
  [14955] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14972] = 2,
    ACTIONS(865), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(863), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [14989] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15006] = 2,
    ACTIONS(843), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(841), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15023] = 2,
    ACTIONS(816), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(814), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15040] = 3,
    ACTIONS(915), 1,
      aux_sym_if_statement_token2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15059] = 3,
    ACTIONS(917), 1,
      aux_sym_if_statement_token2,
    ACTIONS(806), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(804), 9,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15078] = 2,
    ACTIONS(832), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(830), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15095] = 2,
    ACTIONS(839), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(837), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15112] = 2,
    ACTIONS(185), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(187), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15129] = 2,
    ACTIONS(851), 2,
      aux_sym_keyword_token1,
      aux_sym_while_statement_token1,
    ACTIONS(849), 10,
      sym__line_comment,
      sym__label,
      ts_builtin_sym_end,
      aux_sym_new_command_token1,
      aux_sym_for_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_do_statement_token1,
      sym__eol_comment,
      sym__set,
  [15146] = 5,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(919), 1,
      sym__variable_name,
    ACTIONS(921), 1,
      sym__builtin_identifier,
    STATE(241), 1,
      sym_loop_control,
    STATE(425), 7,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_special_variable,
  [15168] = 5,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(919), 1,
      sym__variable_name,
    ACTIONS(921), 1,
      sym__builtin_identifier,
    STATE(230), 1,
      sym_loop_control,
    STATE(425), 7,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_special_variable,
  [15190] = 9,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(79), 1,
      aux_sym_keyword_token1,
    ACTIONS(923), 1,
      aux_sym_new_command_token1,
    ACTIONS(925), 1,
      anon_sym_CARET,
    ACTIONS(927), 1,
      sym__routine_label,
    STATE(63), 1,
      sym_keyword,
    STATE(264), 1,
      sym__routine_call,
    STATE(298), 2,
      sym_block,
      sym_command,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
  [15220] = 5,
    ACTIONS(885), 1,
      sym__variable_name,
    ACTIONS(887), 1,
      sym_global_variable,
    ACTIONS(889), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(891), 1,
      sym__builtin_identifier,
    STATE(397), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [15242] = 9,
    ACTIONS(27), 1,
      aux_sym_keyword_token1,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(923), 1,
      aux_sym_new_command_token1,
    ACTIONS(925), 1,
      anon_sym_CARET,
    ACTIONS(927), 1,
      sym__routine_label,
    STATE(62), 1,
      sym_keyword,
    STATE(264), 1,
      sym__routine_call,
    STATE(298), 2,
      sym_block,
      sym_command,
    STATE(311), 2,
      sym__typical_command,
      sym_new_command,
  [15272] = 5,
    ACTIONS(885), 1,
      sym__variable_name,
    ACTIONS(887), 1,
      sym_global_variable,
    ACTIONS(889), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(891), 1,
      sym__builtin_identifier,
    STATE(412), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [15294] = 5,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(919), 1,
      sym__variable_name,
    ACTIONS(921), 1,
      sym__builtin_identifier,
    STATE(231), 1,
      sym_loop_control,
    STATE(425), 7,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_special_variable,
  [15316] = 5,
    ACTIONS(885), 1,
      sym__variable_name,
    ACTIONS(887), 1,
      sym_global_variable,
    ACTIONS(889), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(891), 1,
      sym__builtin_identifier,
    STATE(405), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [15338] = 9,
    ACTIONS(45), 1,
      aux_sym_keyword_token1,
    ACTIONS(55), 1,
      sym__indent,
    ACTIONS(929), 1,
      aux_sym_new_command_token1,
    ACTIONS(931), 1,
      anon_sym_CARET,
    ACTIONS(933), 1,
      sym__routine_label,
    STATE(65), 1,
      sym_keyword,
    STATE(301), 1,
      sym__routine_call,
    STATE(327), 2,
      sym_block,
      sym_command,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
  [15368] = 9,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(55), 1,
      sym__indent,
    ACTIONS(929), 1,
      aux_sym_new_command_token1,
    ACTIONS(931), 1,
      anon_sym_CARET,
    ACTIONS(933), 1,
      sym__routine_label,
    STATE(67), 1,
      sym_keyword,
    STATE(301), 1,
      sym__routine_call,
    STATE(327), 2,
      sym_block,
      sym_command,
    STATE(330), 2,
      sym__typical_command,
      sym_new_command,
  [15398] = 5,
    ACTIONS(322), 1,
      sym_global_variable,
    ACTIONS(919), 1,
      sym__variable_name,
    ACTIONS(921), 1,
      sym__builtin_identifier,
    STATE(250), 1,
      sym_loop_control,
    STATE(425), 7,
      sym__identifier,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_special_variable,
  [15420] = 5,
    ACTIONS(885), 1,
      sym__variable_name,
    ACTIONS(887), 1,
      sym_global_variable,
    ACTIONS(889), 1,
      aux_sym_lvalue_function_call_token1,
    ACTIONS(891), 1,
      sym__builtin_identifier,
    STATE(411), 7,
      sym__array,
      sym_local_array,
      sym_global_array,
      sym__variable,
      sym_local_variable,
      sym_lvalue_function_call,
      sym_special_variable,
  [15442] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(303), 1,
      sym_block,
    STATE(401), 1,
      sym_comment,
    ACTIONS(935), 2,
      sym__line_comment,
      sym__eol_comment,
  [15456] = 4,
    ACTIONS(55), 1,
      sym__indent,
    STATE(331), 1,
      sym_block,
    STATE(408), 1,
      sym_comment,
    ACTIONS(935), 2,
      sym__line_comment,
      sym__eol_comment,
  [15470] = 4,
    ACTIONS(65), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
    STATE(398), 1,
      sym_array_index,
  [15483] = 4,
    ACTIONS(75), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
    STATE(410), 1,
      sym_array_index,
  [15496] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15506] = 3,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15516] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15526] = 3,
    ACTIONS(310), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym__function_arguments,
  [15536] = 3,
    ACTIONS(213), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym__function_arguments,
  [15546] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15556] = 3,
    ACTIONS(950), 1,
      anon_sym_CARET,
    ACTIONS(952), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(954), 1,
      anon_sym_LPAREN,
  [15566] = 3,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(362), 1,
      sym__function_arguments,
  [15576] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym__function_arguments,
  [15586] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15596] = 3,
    ACTIONS(630), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym__function_arguments,
  [15606] = 3,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_arguments_repeat1,
  [15616] = 3,
    ACTIONS(209), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym__function_arguments,
  [15626] = 3,
    ACTIONS(247), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym__function_arguments,
  [15636] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15646] = 3,
    ACTIONS(962), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(964), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym__function_arguments,
  [15656] = 3,
    ACTIONS(91), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym__function_arguments,
  [15666] = 3,
    ACTIONS(931), 1,
      anon_sym_CARET,
    ACTIONS(966), 1,
      sym__routine_label,
    STATE(315), 1,
      sym__routine_call,
  [15676] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15686] = 3,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_arguments_repeat1,
  [15696] = 3,
    ACTIONS(71), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym__function_arguments,
  [15706] = 3,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_arguments_repeat1,
  [15716] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15726] = 3,
    ACTIONS(61), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_arguments,
  [15736] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15746] = 1,
    ACTIONS(105), 3,
      sym__line_comment,
      sym__indent,
      sym__eol_comment,
  [15752] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15762] = 3,
    ACTIONS(925), 1,
      anon_sym_CARET,
    ACTIONS(979), 1,
      sym__routine_label,
    STATE(278), 1,
      sym__routine_call,
  [15772] = 3,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_array_index_repeat1,
  [15782] = 3,
    ACTIONS(235), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym__function_arguments,
  [15792] = 2,
    ACTIONS(983), 1,
      anon_sym_EQ,
    ACTIONS(985), 1,
      anon_sym_EQ_PLUS,
  [15799] = 2,
    ACTIONS(987), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
  [15806] = 2,
    ACTIONS(991), 1,
      anon_sym_EQ,
    ACTIONS(993), 1,
      anon_sym_EQ_PLUS,
  [15813] = 2,
    ACTIONS(141), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [15820] = 2,
    ACTIONS(105), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(107), 1,
      anon_sym_EQ,
  [15827] = 2,
    ACTIONS(995), 1,
      anon_sym_EQ,
    ACTIONS(997), 1,
      anon_sym_EQ_PLUS,
  [15834] = 2,
    ACTIONS(43), 1,
      sym__indent,
    STATE(285), 1,
      sym_block,
  [15841] = 2,
    ACTIONS(129), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(131), 1,
      anon_sym_EQ,
  [15848] = 2,
    ACTIONS(125), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(127), 1,
      anon_sym_EQ,
  [15855] = 1,
    ACTIONS(752), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15860] = 2,
    ACTIONS(999), 1,
      anon_sym_EQ,
    ACTIONS(1001), 1,
      anon_sym_EQ_PLUS,
  [15867] = 2,
    ACTIONS(911), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
  [15874] = 2,
    ACTIONS(1003), 1,
      anon_sym_EQ,
    ACTIONS(1005), 1,
      anon_sym_EQ_PLUS,
  [15881] = 2,
    ACTIONS(55), 1,
      sym__indent,
    STATE(333), 1,
      sym_block,
  [15888] = 2,
    ACTIONS(57), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(59), 1,
      anon_sym_EQ,
  [15895] = 2,
    ACTIONS(137), 1,
      anon_sym_EQ_PLUS,
    ACTIONS(139), 1,
      anon_sym_EQ,
  [15902] = 2,
    ACTIONS(1007), 1,
      anon_sym_EQ,
    ACTIONS(1009), 1,
      anon_sym_EQ_PLUS,
  [15909] = 2,
    ACTIONS(1011), 1,
      anon_sym_EQ,
    ACTIONS(1013), 1,
      anon_sym_EQ_PLUS,
  [15916] = 1,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
  [15920] = 1,
    ACTIONS(1017), 1,
      sym__routine_label,
  [15924] = 1,
    ACTIONS(1019), 1,
      sym__routine_label,
  [15928] = 1,
    ACTIONS(1021), 1,
      sym__routine_label,
  [15932] = 1,
    ACTIONS(863), 1,
      sym__indent,
  [15936] = 1,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
  [15940] = 1,
    ACTIONS(1025), 1,
      sym__routine_label,
  [15944] = 1,
    ACTIONS(1027), 1,
      sym__routine_label,
  [15948] = 1,
    ACTIONS(1029), 1,
      ts_builtin_sym_end,
  [15952] = 1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
  [15956] = 1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
  [15960] = 1,
    ACTIONS(57), 1,
      anon_sym_EQ,
  [15964] = 1,
    ACTIONS(1035), 1,
      anon_sym_EQ,
  [15968] = 1,
    ACTIONS(1037), 1,
      sym__routine_label,
  [15972] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [15976] = 1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
  [15980] = 1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [15984] = 1,
    ACTIONS(1045), 1,
      sym__routine_label,
  [15988] = 1,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
  [15992] = 1,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [15996] = 1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [16000] = 1,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 424,
  [SMALL_STATE(8)] = 485,
  [SMALL_STATE(9)] = 548,
  [SMALL_STATE(10)] = 609,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 777,
  [SMALL_STATE(13)] = 861,
  [SMALL_STATE(14)] = 921,
  [SMALL_STATE(15)] = 983,
  [SMALL_STATE(16)] = 1043,
  [SMALL_STATE(17)] = 1127,
  [SMALL_STATE(18)] = 1182,
  [SMALL_STATE(19)] = 1237,
  [SMALL_STATE(20)] = 1296,
  [SMALL_STATE(21)] = 1355,
  [SMALL_STATE(22)] = 1410,
  [SMALL_STATE(23)] = 1469,
  [SMALL_STATE(24)] = 1530,
  [SMALL_STATE(25)] = 1585,
  [SMALL_STATE(26)] = 1640,
  [SMALL_STATE(27)] = 1695,
  [SMALL_STATE(28)] = 1750,
  [SMALL_STATE(29)] = 1805,
  [SMALL_STATE(30)] = 1860,
  [SMALL_STATE(31)] = 1914,
  [SMALL_STATE(32)] = 1968,
  [SMALL_STATE(33)] = 2022,
  [SMALL_STATE(34)] = 2076,
  [SMALL_STATE(35)] = 2130,
  [SMALL_STATE(36)] = 2188,
  [SMALL_STATE(37)] = 2246,
  [SMALL_STATE(38)] = 2300,
  [SMALL_STATE(39)] = 2358,
  [SMALL_STATE(40)] = 2412,
  [SMALL_STATE(41)] = 2466,
  [SMALL_STATE(42)] = 2520,
  [SMALL_STATE(43)] = 2573,
  [SMALL_STATE(44)] = 2626,
  [SMALL_STATE(45)] = 2679,
  [SMALL_STATE(46)] = 2732,
  [SMALL_STATE(47)] = 2785,
  [SMALL_STATE(48)] = 2838,
  [SMALL_STATE(49)] = 2891,
  [SMALL_STATE(50)] = 2948,
  [SMALL_STATE(51)] = 3001,
  [SMALL_STATE(52)] = 3054,
  [SMALL_STATE(53)] = 3106,
  [SMALL_STATE(54)] = 3158,
  [SMALL_STATE(55)] = 3210,
  [SMALL_STATE(56)] = 3262,
  [SMALL_STATE(57)] = 3314,
  [SMALL_STATE(58)] = 3366,
  [SMALL_STATE(59)] = 3418,
  [SMALL_STATE(60)] = 3474,
  [SMALL_STATE(61)] = 3526,
  [SMALL_STATE(62)] = 3578,
  [SMALL_STATE(63)] = 3659,
  [SMALL_STATE(64)] = 3739,
  [SMALL_STATE(65)] = 3814,
  [SMALL_STATE(66)] = 3893,
  [SMALL_STATE(67)] = 3967,
  [SMALL_STATE(68)] = 4045,
  [SMALL_STATE(69)] = 4098,
  [SMALL_STATE(70)] = 4151,
  [SMALL_STATE(71)] = 4224,
  [SMALL_STATE(72)] = 4274,
  [SMALL_STATE(73)] = 4324,
  [SMALL_STATE(74)] = 4396,
  [SMALL_STATE(75)] = 4446,
  [SMALL_STATE(76)] = 4496,
  [SMALL_STATE(77)] = 4549,
  [SMALL_STATE(78)] = 4602,
  [SMALL_STATE(79)] = 4653,
  [SMALL_STATE(80)] = 4697,
  [SMALL_STATE(81)] = 4741,
  [SMALL_STATE(82)] = 4785,
  [SMALL_STATE(83)] = 4829,
  [SMALL_STATE(84)] = 4873,
  [SMALL_STATE(85)] = 4917,
  [SMALL_STATE(86)] = 4965,
  [SMALL_STATE(87)] = 5013,
  [SMALL_STATE(88)] = 5063,
  [SMALL_STATE(89)] = 5107,
  [SMALL_STATE(90)] = 5151,
  [SMALL_STATE(91)] = 5195,
  [SMALL_STATE(92)] = 5239,
  [SMALL_STATE(93)] = 5283,
  [SMALL_STATE(94)] = 5327,
  [SMALL_STATE(95)] = 5371,
  [SMALL_STATE(96)] = 5415,
  [SMALL_STATE(97)] = 5459,
  [SMALL_STATE(98)] = 5503,
  [SMALL_STATE(99)] = 5547,
  [SMALL_STATE(100)] = 5591,
  [SMALL_STATE(101)] = 5639,
  [SMALL_STATE(102)] = 5687,
  [SMALL_STATE(103)] = 5738,
  [SMALL_STATE(104)] = 5785,
  [SMALL_STATE(105)] = 5832,
  [SMALL_STATE(106)] = 5883,
  [SMALL_STATE(107)] = 5925,
  [SMALL_STATE(108)] = 5967,
  [SMALL_STATE(109)] = 6009,
  [SMALL_STATE(110)] = 6051,
  [SMALL_STATE(111)] = 6093,
  [SMALL_STATE(112)] = 6135,
  [SMALL_STATE(113)] = 6181,
  [SMALL_STATE(114)] = 6223,
  [SMALL_STATE(115)] = 6269,
  [SMALL_STATE(116)] = 6311,
  [SMALL_STATE(117)] = 6353,
  [SMALL_STATE(118)] = 6398,
  [SMALL_STATE(119)] = 6439,
  [SMALL_STATE(120)] = 6480,
  [SMALL_STATE(121)] = 6521,
  [SMALL_STATE(122)] = 6562,
  [SMALL_STATE(123)] = 6607,
  [SMALL_STATE(124)] = 6648,
  [SMALL_STATE(125)] = 6689,
  [SMALL_STATE(126)] = 6730,
  [SMALL_STATE(127)] = 6771,
  [SMALL_STATE(128)] = 6812,
  [SMALL_STATE(129)] = 6856,
  [SMALL_STATE(130)] = 6919,
  [SMALL_STATE(131)] = 6982,
  [SMALL_STATE(132)] = 7048,
  [SMALL_STATE(133)] = 7090,
  [SMALL_STATE(134)] = 7156,
  [SMALL_STATE(135)] = 7222,
  [SMALL_STATE(136)] = 7279,
  [SMALL_STATE(137)] = 7336,
  [SMALL_STATE(138)] = 7393,
  [SMALL_STATE(139)] = 7450,
  [SMALL_STATE(140)] = 7507,
  [SMALL_STATE(141)] = 7564,
  [SMALL_STATE(142)] = 7627,
  [SMALL_STATE(143)] = 7684,
  [SMALL_STATE(144)] = 7723,
  [SMALL_STATE(145)] = 7780,
  [SMALL_STATE(146)] = 7837,
  [SMALL_STATE(147)] = 7894,
  [SMALL_STATE(148)] = 7951,
  [SMALL_STATE(149)] = 7990,
  [SMALL_STATE(150)] = 8047,
  [SMALL_STATE(151)] = 8104,
  [SMALL_STATE(152)] = 8167,
  [SMALL_STATE(153)] = 8221,
  [SMALL_STATE(154)] = 8255,
  [SMALL_STATE(155)] = 8319,
  [SMALL_STATE(156)] = 8383,
  [SMALL_STATE(157)] = 8437,
  [SMALL_STATE(158)] = 8501,
  [SMALL_STATE(159)] = 8565,
  [SMALL_STATE(160)] = 8619,
  [SMALL_STATE(161)] = 8670,
  [SMALL_STATE(162)] = 8721,
  [SMALL_STATE(163)] = 8772,
  [SMALL_STATE(164)] = 8823,
  [SMALL_STATE(165)] = 8874,
  [SMALL_STATE(166)] = 8907,
  [SMALL_STATE(167)] = 8958,
  [SMALL_STATE(168)] = 9009,
  [SMALL_STATE(169)] = 9046,
  [SMALL_STATE(170)] = 9097,
  [SMALL_STATE(171)] = 9148,
  [SMALL_STATE(172)] = 9199,
  [SMALL_STATE(173)] = 9250,
  [SMALL_STATE(174)] = 9301,
  [SMALL_STATE(175)] = 9352,
  [SMALL_STATE(176)] = 9403,
  [SMALL_STATE(177)] = 9454,
  [SMALL_STATE(178)] = 9505,
  [SMALL_STATE(179)] = 9556,
  [SMALL_STATE(180)] = 9607,
  [SMALL_STATE(181)] = 9640,
  [SMALL_STATE(182)] = 9673,
  [SMALL_STATE(183)] = 9724,
  [SMALL_STATE(184)] = 9775,
  [SMALL_STATE(185)] = 9826,
  [SMALL_STATE(186)] = 9877,
  [SMALL_STATE(187)] = 9928,
  [SMALL_STATE(188)] = 9979,
  [SMALL_STATE(189)] = 10030,
  [SMALL_STATE(190)] = 10081,
  [SMALL_STATE(191)] = 10132,
  [SMALL_STATE(192)] = 10183,
  [SMALL_STATE(193)] = 10234,
  [SMALL_STATE(194)] = 10285,
  [SMALL_STATE(195)] = 10318,
  [SMALL_STATE(196)] = 10369,
  [SMALL_STATE(197)] = 10420,
  [SMALL_STATE(198)] = 10471,
  [SMALL_STATE(199)] = 10522,
  [SMALL_STATE(200)] = 10555,
  [SMALL_STATE(201)] = 10606,
  [SMALL_STATE(202)] = 10657,
  [SMALL_STATE(203)] = 10708,
  [SMALL_STATE(204)] = 10759,
  [SMALL_STATE(205)] = 10810,
  [SMALL_STATE(206)] = 10861,
  [SMALL_STATE(207)] = 10912,
  [SMALL_STATE(208)] = 10963,
  [SMALL_STATE(209)] = 10996,
  [SMALL_STATE(210)] = 11047,
  [SMALL_STATE(211)] = 11098,
  [SMALL_STATE(212)] = 11149,
  [SMALL_STATE(213)] = 11200,
  [SMALL_STATE(214)] = 11251,
  [SMALL_STATE(215)] = 11284,
  [SMALL_STATE(216)] = 11317,
  [SMALL_STATE(217)] = 11350,
  [SMALL_STATE(218)] = 11383,
  [SMALL_STATE(219)] = 11434,
  [SMALL_STATE(220)] = 11485,
  [SMALL_STATE(221)] = 11536,
  [SMALL_STATE(222)] = 11587,
  [SMALL_STATE(223)] = 11638,
  [SMALL_STATE(224)] = 11689,
  [SMALL_STATE(225)] = 11749,
  [SMALL_STATE(226)] = 11787,
  [SMALL_STATE(227)] = 11843,
  [SMALL_STATE(228)] = 11903,
  [SMALL_STATE(229)] = 11959,
  [SMALL_STATE(230)] = 12015,
  [SMALL_STATE(231)] = 12071,
  [SMALL_STATE(232)] = 12127,
  [SMALL_STATE(233)] = 12165,
  [SMALL_STATE(234)] = 12223,
  [SMALL_STATE(235)] = 12279,
  [SMALL_STATE(236)] = 12317,
  [SMALL_STATE(237)] = 12375,
  [SMALL_STATE(238)] = 12435,
  [SMALL_STATE(239)] = 12493,
  [SMALL_STATE(240)] = 12551,
  [SMALL_STATE(241)] = 12609,
  [SMALL_STATE(242)] = 12665,
  [SMALL_STATE(243)] = 12703,
  [SMALL_STATE(244)] = 12741,
  [SMALL_STATE(245)] = 12779,
  [SMALL_STATE(246)] = 12839,
  [SMALL_STATE(247)] = 12877,
  [SMALL_STATE(248)] = 12915,
  [SMALL_STATE(249)] = 12947,
  [SMALL_STATE(250)] = 12985,
  [SMALL_STATE(251)] = 13041,
  [SMALL_STATE(252)] = 13079,
  [SMALL_STATE(253)] = 13112,
  [SMALL_STATE(254)] = 13143,
  [SMALL_STATE(255)] = 13176,
  [SMALL_STATE(256)] = 13208,
  [SMALL_STATE(257)] = 13240,
  [SMALL_STATE(258)] = 13272,
  [SMALL_STATE(259)] = 13304,
  [SMALL_STATE(260)] = 13333,
  [SMALL_STATE(261)] = 13362,
  [SMALL_STATE(262)] = 13392,
  [SMALL_STATE(263)] = 13422,
  [SMALL_STATE(264)] = 13447,
  [SMALL_STATE(265)] = 13472,
  [SMALL_STATE(266)] = 13499,
  [SMALL_STATE(267)] = 13524,
  [SMALL_STATE(268)] = 13549,
  [SMALL_STATE(269)] = 13574,
  [SMALL_STATE(270)] = 13601,
  [SMALL_STATE(271)] = 13626,
  [SMALL_STATE(272)] = 13651,
  [SMALL_STATE(273)] = 13676,
  [SMALL_STATE(274)] = 13701,
  [SMALL_STATE(275)] = 13721,
  [SMALL_STATE(276)] = 13741,
  [SMALL_STATE(277)] = 13761,
  [SMALL_STATE(278)] = 13781,
  [SMALL_STATE(279)] = 13801,
  [SMALL_STATE(280)] = 13821,
  [SMALL_STATE(281)] = 13840,
  [SMALL_STATE(282)] = 13863,
  [SMALL_STATE(283)] = 13886,
  [SMALL_STATE(284)] = 13905,
  [SMALL_STATE(285)] = 13928,
  [SMALL_STATE(286)] = 13947,
  [SMALL_STATE(287)] = 13966,
  [SMALL_STATE(288)] = 13985,
  [SMALL_STATE(289)] = 14004,
  [SMALL_STATE(290)] = 14023,
  [SMALL_STATE(291)] = 14042,
  [SMALL_STATE(292)] = 14061,
  [SMALL_STATE(293)] = 14084,
  [SMALL_STATE(294)] = 14107,
  [SMALL_STATE(295)] = 14126,
  [SMALL_STATE(296)] = 14145,
  [SMALL_STATE(297)] = 14164,
  [SMALL_STATE(298)] = 14187,
  [SMALL_STATE(299)] = 14206,
  [SMALL_STATE(300)] = 14229,
  [SMALL_STATE(301)] = 14248,
  [SMALL_STATE(302)] = 14271,
  [SMALL_STATE(303)] = 14290,
  [SMALL_STATE(304)] = 14309,
  [SMALL_STATE(305)] = 14330,
  [SMALL_STATE(306)] = 14349,
  [SMALL_STATE(307)] = 14368,
  [SMALL_STATE(308)] = 14389,
  [SMALL_STATE(309)] = 14410,
  [SMALL_STATE(310)] = 14429,
  [SMALL_STATE(311)] = 14448,
  [SMALL_STATE(312)] = 14467,
  [SMALL_STATE(313)] = 14490,
  [SMALL_STATE(314)] = 14508,
  [SMALL_STATE(315)] = 14536,
  [SMALL_STATE(316)] = 14554,
  [SMALL_STATE(317)] = 14572,
  [SMALL_STATE(318)] = 14590,
  [SMALL_STATE(319)] = 14608,
  [SMALL_STATE(320)] = 14630,
  [SMALL_STATE(321)] = 14658,
  [SMALL_STATE(322)] = 14676,
  [SMALL_STATE(323)] = 14694,
  [SMALL_STATE(324)] = 14711,
  [SMALL_STATE(325)] = 14732,
  [SMALL_STATE(326)] = 14749,
  [SMALL_STATE(327)] = 14766,
  [SMALL_STATE(328)] = 14783,
  [SMALL_STATE(329)] = 14802,
  [SMALL_STATE(330)] = 14819,
  [SMALL_STATE(331)] = 14836,
  [SMALL_STATE(332)] = 14853,
  [SMALL_STATE(333)] = 14870,
  [SMALL_STATE(334)] = 14887,
  [SMALL_STATE(335)] = 14904,
  [SMALL_STATE(336)] = 14921,
  [SMALL_STATE(337)] = 14938,
  [SMALL_STATE(338)] = 14955,
  [SMALL_STATE(339)] = 14972,
  [SMALL_STATE(340)] = 14989,
  [SMALL_STATE(341)] = 15006,
  [SMALL_STATE(342)] = 15023,
  [SMALL_STATE(343)] = 15040,
  [SMALL_STATE(344)] = 15059,
  [SMALL_STATE(345)] = 15078,
  [SMALL_STATE(346)] = 15095,
  [SMALL_STATE(347)] = 15112,
  [SMALL_STATE(348)] = 15129,
  [SMALL_STATE(349)] = 15146,
  [SMALL_STATE(350)] = 15168,
  [SMALL_STATE(351)] = 15190,
  [SMALL_STATE(352)] = 15220,
  [SMALL_STATE(353)] = 15242,
  [SMALL_STATE(354)] = 15272,
  [SMALL_STATE(355)] = 15294,
  [SMALL_STATE(356)] = 15316,
  [SMALL_STATE(357)] = 15338,
  [SMALL_STATE(358)] = 15368,
  [SMALL_STATE(359)] = 15398,
  [SMALL_STATE(360)] = 15420,
  [SMALL_STATE(361)] = 15442,
  [SMALL_STATE(362)] = 15456,
  [SMALL_STATE(363)] = 15470,
  [SMALL_STATE(364)] = 15483,
  [SMALL_STATE(365)] = 15496,
  [SMALL_STATE(366)] = 15506,
  [SMALL_STATE(367)] = 15516,
  [SMALL_STATE(368)] = 15526,
  [SMALL_STATE(369)] = 15536,
  [SMALL_STATE(370)] = 15546,
  [SMALL_STATE(371)] = 15556,
  [SMALL_STATE(372)] = 15566,
  [SMALL_STATE(373)] = 15576,
  [SMALL_STATE(374)] = 15586,
  [SMALL_STATE(375)] = 15596,
  [SMALL_STATE(376)] = 15606,
  [SMALL_STATE(377)] = 15616,
  [SMALL_STATE(378)] = 15626,
  [SMALL_STATE(379)] = 15636,
  [SMALL_STATE(380)] = 15646,
  [SMALL_STATE(381)] = 15656,
  [SMALL_STATE(382)] = 15666,
  [SMALL_STATE(383)] = 15676,
  [SMALL_STATE(384)] = 15686,
  [SMALL_STATE(385)] = 15696,
  [SMALL_STATE(386)] = 15706,
  [SMALL_STATE(387)] = 15716,
  [SMALL_STATE(388)] = 15726,
  [SMALL_STATE(389)] = 15736,
  [SMALL_STATE(390)] = 15746,
  [SMALL_STATE(391)] = 15752,
  [SMALL_STATE(392)] = 15762,
  [SMALL_STATE(393)] = 15772,
  [SMALL_STATE(394)] = 15782,
  [SMALL_STATE(395)] = 15792,
  [SMALL_STATE(396)] = 15799,
  [SMALL_STATE(397)] = 15806,
  [SMALL_STATE(398)] = 15813,
  [SMALL_STATE(399)] = 15820,
  [SMALL_STATE(400)] = 15827,
  [SMALL_STATE(401)] = 15834,
  [SMALL_STATE(402)] = 15841,
  [SMALL_STATE(403)] = 15848,
  [SMALL_STATE(404)] = 15855,
  [SMALL_STATE(405)] = 15860,
  [SMALL_STATE(406)] = 15867,
  [SMALL_STATE(407)] = 15874,
  [SMALL_STATE(408)] = 15881,
  [SMALL_STATE(409)] = 15888,
  [SMALL_STATE(410)] = 15895,
  [SMALL_STATE(411)] = 15902,
  [SMALL_STATE(412)] = 15909,
  [SMALL_STATE(413)] = 15916,
  [SMALL_STATE(414)] = 15920,
  [SMALL_STATE(415)] = 15924,
  [SMALL_STATE(416)] = 15928,
  [SMALL_STATE(417)] = 15932,
  [SMALL_STATE(418)] = 15936,
  [SMALL_STATE(419)] = 15940,
  [SMALL_STATE(420)] = 15944,
  [SMALL_STATE(421)] = 15948,
  [SMALL_STATE(422)] = 15952,
  [SMALL_STATE(423)] = 15956,
  [SMALL_STATE(424)] = 15960,
  [SMALL_STATE(425)] = 15964,
  [SMALL_STATE(426)] = 15968,
  [SMALL_STATE(427)] = 15972,
  [SMALL_STATE(428)] = 15976,
  [SMALL_STATE(429)] = 15980,
  [SMALL_STATE(430)] = 15984,
  [SMALL_STATE(431)] = 15988,
  [SMALL_STATE(432)] = 15992,
  [SMALL_STATE(433)] = 15996,
  [SMALL_STATE(434)] = 16000,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_variable, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_variable, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postconditional, 2, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postconditional, 2, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4, .production_id = 15),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4, .production_id = 15),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 3, .production_id = 10),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 3, .production_id = 10),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_array, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_array, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 13),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 13),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 9),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 9),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 4, .production_id = 9),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 4, .production_id = 9),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_control, 7),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_control, 7),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(129),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(208),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(355),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(209),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(201),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(351),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(306),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(314),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(337),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(141),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(238),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(130),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(253),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(349),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(218),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(219),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(358),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(339),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(320),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(337),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 10),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 1, .production_id = 1),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 1, .production_id = 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 2, .production_id = 4),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 2, .production_id = 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 4, .production_id = 12),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 4, .production_id = 12),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 3, .production_id = 8),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 3, .production_id = 8),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 2),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(159),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 19), SHIFT_REPEAT(354),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 19),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 19),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 18),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 6, .production_id = 18),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 14),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 14),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2), SHIFT_REPEAT(392),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_do_statement_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 3, .production_id = 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 3, .production_id = 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 5, .production_id = 12),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 5, .production_id = 12),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 2, .production_id = 1),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 2, .production_id = 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routine_call, 4, .production_id = 8),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__routine_call, 4, .production_id = 8),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 6),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 6),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2), SHIFT_REPEAT(382),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 19), SHIFT_REPEAT(356),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_command, 3),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_command, 3),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 11),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 11),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typical_command, 3),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typical_command, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 17),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 17),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(156),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_command, 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_command, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7), SHIFT_REPEAT(188),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(324),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 16), SHIFT_REPEAT(191),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_index_repeat1, 2, .production_id = 16),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_identifier, 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_defined_identifier, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(152),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_defined_identifier, 3, .production_id = 5),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_defined_identifier, 3, .production_id = 5),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lvalue_function_call, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_function_call, 2),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1029] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
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
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__indentation_marker] = true,
  },
  [5] = {
    [ts_external_token__line_comment] = true,
    [ts_external_token__label] = true,
    [ts_external_token__indentation_marker] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
  },
  [7] = {
    [ts_external_token__line_comment] = true,
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
