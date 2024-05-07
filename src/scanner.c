#include "tree_sitter/parser.h"
#include <stdint.h>
#include <stdio.h>
#include <wctype.h>

enum TokenType {
    COMMENT,
    LABEL,
    INDENT,
    DEDENT,
    SAME_INDENTATION,
};

typedef struct {
    int indent_level;
} Scanner;

static void advance(TSLexer * lexer)
{
    lexer->advance(lexer, false);
}

static void skip(TSLexer * lexer)
{
    lexer->advance(lexer, true);
}

static void scan_line(TSLexer * lexer)
{
    while ((lexer->lookahead != '\n') && (lexer->eof(lexer) == false)) {
        advance(lexer);
    }
}

static void scan_non_whitespace(TSLexer * lexer)
{
    while ((iswspace(lexer->lookahead) == 0) && (lexer->eof(lexer) == false)) {
        advance(lexer);
    }
}

static void scan_whitespace(TSLexer * lexer)
{
    while ((iswspace(lexer->lookahead) != 0) && (lexer->eof(lexer) == false)) {
        skip(lexer);
    }
}

static void scan_space(TSLexer * lexer)
{
    while ((lexer->lookahead == ' ') && (lexer->eof(lexer) == false)) {
        skip(lexer);
    }
}

static void scan_label_text(TSLexer * lexer)
{
    // If we arrive at a '(' character, then this label is for a function definition, and we should stop parsing so that 
    // we don't advance through its parameters.
    while ((iswspace(lexer->lookahead) == 0) && (lexer->eof(lexer) == false) && (lexer->lookahead != '(')) {
        advance(lexer);
    }
}

static int get_line_indent(TSLexer * lexer) 
{
    int line_indent_level = 0;
    // Move through any whitespace before an indent or statement starts
    scan_whitespace(lexer);
    // Count up the .s to determine what indent level this line is at
    while (lexer->lookahead == '.' || lexer->lookahead == ' ') {
        if (lexer->lookahead == '.') {
            line_indent_level++; // Spaces are allowed between . indentation markers, but don't increase indentation level
        }
        skip(lexer);
    }
    return line_indent_level;
}

void *tree_sitter_mumps_external_scanner_create() {
    Scanner *scanner = malloc(sizeof(Scanner));
    scanner->indent_level = 0;
    return scanner;
}

void tree_sitter_mumps_external_scanner_destroy(void *payload) {
    free(payload);
}

unsigned tree_sitter_mumps_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = payload;
    int bytes = sprintf(buffer, "%d", scanner->indent_level);
    return bytes + 1;  // Include the null-terminating character // TODO
}

void tree_sitter_mumps_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    scanner->indent_level = 0;
    if (buffer != NULL) { // TODO!
        sscanf(buffer, "%u", &scanner->indent_level);
    }
}

bool tree_sitter_mumps_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {

    // printf("Scanning...\n");
    // Scanner to keep track of indent level
    Scanner *scanner = payload;

    if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
        bool start_of_line = false;
        unsigned int line_indent_level = 0;
        // printf("Scanning for indentation @ %d, %d, (%c)\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead);
        // scan_space(lexer); // For indentation, we do not want to scan through newlines, because we need them to help us confirm that we're at the start of a new line
        // printf("Marked the end @ %d\n", lexer->get_column(lexer));
        lexer->mark_end(lexer); // Indents and dedents shouldn't actually take up any characters
        for (;;) {
            if (lexer->lookahead == '\n') {
                start_of_line = true;
                //printf("At the start of a line");
                skip(lexer);
                if (lexer->get_column(lexer) == 0 && !isspace(lexer->lookahead)) {
                    line_indent_level = 0;
                }
                else {
                    line_indent_level = 1;
                }
                // printf(" @ %d, %d, (%c), line: %d, scan: %d\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead, line_indent_level, scanner->indent_level);
            }
            else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                // printf("space @ %d, %d, (%c), line: %d, scan: %d\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead, line_indent_level, scanner->indent_level);
                skip(lexer);
            }
            else if (lexer->lookahead == '.') {
                line_indent_level++;
                // printf("dot @ %d, %d, (%c), line: %d, scan: %d\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead, line_indent_level, scanner->indent_level);
                skip(lexer);
            }
            else if (lexer->eof(lexer)) {
                line_indent_level++;
                // printf("eof @ %d, %d, (%c), line: %d, scan: %d\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead, line_indent_level, scanner->indent_level);
                start_of_line = true;
                break;
            }
            else {
                // printf("other @ %d, %d, (%c), line: %d, scan: %d\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead, line_indent_level, scanner->indent_level);
                break;
            }
        }

        if (start_of_line) {
            // If this line is at a greater indent level than we were at before, then this is an INDENT
            // int line_indent_level = get_line_indent(lexer);
            // printf("Line: %d, scan: %d\n", line_indent_level, scanner->indent_level);
            if (line_indent_level > scanner->indent_level) {
                scanner->indent_level++;
                lexer->result_symbol = INDENT;
                // printf("Found an INDENT\n");
                return true;
            }
            else if (line_indent_level < scanner->indent_level) {
                scanner->indent_level--;
                // printf("Found a DEDENT\n");
                lexer->result_symbol = DEDENT;
                return true;
            }
        }
    }

    // NAMEs and COMMENTs together, since they both check column 0
    if (valid_symbols[LABEL] || valid_symbols[COMMENT]) {
        scan_whitespace(lexer); // For labels and line comments, we want to scan through newlines, because we don't need them to tell us we're at the start of the line (all we care about is column 0)
        // printf("Scanning for a LABEL or COMMENT @ %d, %d, (%c)\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead);
        // If we're not at the 0th column, then this can't be a label or a comment
        if ((lexer->get_column(lexer) == 0) && (lexer->eof(lexer) == false)){
            if (lexer->lookahead == ';') {
                lexer->result_symbol = COMMENT;
                // This entire line is a comment, advance until we hit \n
                scan_line(lexer);
                // printf("Found a COMMENT!\n");
                return true;
            }
            else if ((isspace(lexer->lookahead) == 0)) {
                lexer->result_symbol = LABEL;
                // Advance through the entire label
                scan_label_text(lexer);
                // printf("Found a LABEL!\n");
                return true;
            }
        }
    }
    // printf("Didn't find anything\n");
    return false;
}
