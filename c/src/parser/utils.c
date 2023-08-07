#ifndef PARSER_UTILS_C
#define PARSER_UTILS_C

#include "../nodes/node_structs.h"
#include "../nodes/nodes.h"

#include <stdio.h>

/** TODO
 *
 * - Fix the print_bin_expr_2 function
 *
 * - Add more testing functions
 *
 *
 *
 *
 *
 *
 *
 */

/**
 * @brief Builds the padding
 * 
 * @param lPadding The left padding
 * 
 */
char* build_padding(int lPadding)
{
    char* padding = (char*)malloc(sizeof(char) * lPadding);
    for (int i = 0; i < lPadding; i++)
    {
        padding[i] = ' ';
    }
    padding[lPadding] = '\0';
    return padding;
}

/**
 * @brief Prints a binary expression.
 *
 * @param bin_expr The binary expression.
 * @param lPadding The left padding.
 * @return void
 */
void print_bin_expr(BinaryExpr *bin_expr, int lPadding)
{
    char* padding = build_padding(lPadding);
    printf("%sBinaryExpr {\n", padding);
    // While there is a next binary expression, print it
    while (bin_expr->next)
    {
        printf("%s  {\n", padding);
        printf("%s    next: {\n", padding);
        printf("%s      type: %d\n", padding, bin_expr->next->current->type);
        printf("%s      value: \"%s\"\n", padding, bin_expr->next->current->value);
        printf("%s    },\n", padding);
        printf("%s    op: \"%s\"\n", padding, bin_expr->op);
        printf("%s    current: {\n", padding);
        printf("%s      type: %d\n", padding, bin_expr->current->type);
        printf("%s      value: \"%s\"\n", padding, bin_expr->current->value);
        printf("%s    }\n", padding);
        printf("%s  },\n", padding);
        bin_expr = bin_expr->next;
    }
}

/**
 * @brief Prints a program.
 *
 * @param program The program.
 */
void print_program(Program *program)
{
    printf("{\n  type: \"%d\"", program->type);
    printf(",\n  body: [\n");
    for (int i = 0; i < program->body_size; i++)
    {
        // Print the statement
        Stmt *stmt = program->body[i];
        if (stmt->type == NODE_TYPE_REGULAR_EXPRESSION)
        {
            printf("    {\n      stmt_type: %d", stmt->type);
            printf(",\n      expr: {\n        value: \"%s\"\n        type: %d\n      }\n    },\n", stmt->expr->value, stmt->expr->type);
        }
        else if (stmt->type == NODE_TYPE_BINARY_EXPRESSION)
        {
            print_bin_expr(stmt->bin_expr, 4);
            continue;
        }
    }
    printf("  ]\n}\n");
}

#endif // PARSER_UTILS_C