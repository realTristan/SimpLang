#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>

#include "lexer/lexer.h"

int main(void)
{
    // The source code
    char *src = "let x = 45 * ( 10 - 2 )";

    // Tokenize the source
    size_t tokens_size = 0;
    Token *tokens = tokenize(src, &tokens_size);

    // Print the tokens
    for (int i = 0; i < tokens_size; i++)
    {
        printf("Token (%d): [%s]\n", tokens[i].type, tokens[i].value);
    }
}

#endif // MAIN