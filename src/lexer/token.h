#ifndef TOKEN_H
#define TOKEN_H

#include "../common/types.h"

/**
 * @brief The type of a token.
 * 
 * @details
 * The type of a token is used to determine how to interpret the value of a token.
 * For example, if the type of a token is TOKEN_TYPE_NUMBER, then the value of the
 * token is a string representation of a number. If the type of a token is
 * TOKEN_TYPE_PLUS, then the value of the token is the string "+".
 * 
*/
typedef enum TokenType
{
    TOKEN_TYPE_LET,
    TOKEN_TYPE_NUMBER,
    TOKEN_TYPE_PLUS,
    TOKEN_TYPE_MINUS,
    TOKEN_TYPE_MULTIPLY,
    TOKEN_TYPE_DIVIDE,
    TOKEN_TYPE_LEFT_PAREN,
    TOKEN_TYPE_RIGHT_PAREN,
    TOKEN_TYPE_LEFT_BRACE,
    TOKEN_TYPE_RIGHT_BRACE,
    TOKEN_TYPE_LEFT_BRACKET,
    TOKEN_TYPE_RIGHT_BRACKET,
    TOKEN_TYPE_COMMA,
    TOKEN_TYPE_SEMICOLON,
    TOKEN_TYPE_COLON,
    TOKEN_TYPE_DOT,
    TOKEN_TYPE_EQUAL,
    TOKEN_TYPE_NOT_EQUAL,
    TOKEN_TYPE_LESS_THAN,
    TOKEN_TYPE_LESS_THAN_EQUAL,
    TOKEN_TYPE_GREATER_THAN,
    TOKEN_TYPE_GREATER_THAN_EQUAL,
    TOKEN_TYPE_ASSIGN,
    TOKEN_TYPE_PLUS_ASSIGN,
    TOKEN_TYPE_MINUS_ASSIGN,
    TOKEN_TYPE_MULTIPLY_ASSIGN,
    TOKEN_TYPE_DIVIDE_ASSIGN,
    TOKEN_TYPE_MODULO_ASSIGN,
    TOKEN_TYPE_BITWISE_AND_ASSIGN,
    TOKEN_TYPE_BITWISE_OR_ASSIGN,
    TOKEN_TYPE_BITWISE_XOR_ASSIGN,
    TOKEN_TYPE_BITWISE_NOT_ASSIGN,
    TOKEN_TYPE_LOGICAL_AND,
    TOKEN_TYPE_LOGICAL_OR,
    TOKEN_TYPE_LOGICAL_NOT,
    TOKEN_TYPE_BITWISE_AND,
    TOKEN_TYPE_BITWISE_OR,
    TOKEN_TYPE_BITWISE_XOR,
    TOKEN_TYPE_BITWISE_NOT,
    TOKEN_TYPE_MODULO,
    TOKEN_TYPE_INCREMENT,
    TOKEN_TYPE_DECREMENT,
    TOKEN_TYPE_KEYWORD,
    TOKEN_TYPE_IDENTIFIER,
    TOKEN_TYPE_STRING,
    TOKEN_TYPE_CHARACTER,
    TOKEN_TYPE_COMMENT,
    TOKEN_TYPE_NEWLINE,
    TOKEN_TYPE_WHITESPACE,
    TOKEN_TYPE_UNKNOWN
} TokenType;

/**
 * @brief A token is a pair of a token type and a value.
 * 
 * @param type The type of the token.
 * @param value The value of the token.
 */
typedef struct Token
{
    TokenType type;
    string value;
} Token;

//////////////////////////////////////
//   The value of each token type   //
//////////////////////////////////////

#define TOKEN_TYPE_PLUS_VALUE '+'
#define TOKEN_TYPE_MINUS_VALUE '-'
#define TOKEN_TYPE_MULTIPLY_VALUE '*'
#define TOKEN_TYPE_DIVIDE_VALUE '/'
#define TOKEN_TYPE_LEFT_PAREN_VALUE '('
#define TOKEN_TYPE_RIGHT_PAREN_VALUE ')'
#define TOKEN_TYPE_LEFT_BRACE_VALUE '{'
#define TOKEN_TYPE_RIGHT_BRACE_VALUE '}'
#define TOKEN_TYPE_LEFT_BRACKET_VALUE '['
#define TOKEN_TYPE_RIGHT_BRACKET_VALUE ']'
#define TOKEN_TYPE_COMMA_VALUE ','
#define TOKEN_TYPE_SEMICOLON_VALUE ';'
#define TOKEN_TYPE_COLON_VALUE ':'
#define TOKEN_TYPE_DOT_VALUE '.'
#define TOKEN_TYPE_EQUAL_VALUE '=='
#define TOKEN_TYPE_NOT_EQUAL_VALUE '!='
#define TOKEN_TYPE_LESS_THAN_VALUE '<'
#define TOKEN_TYPE_LESS_THAN_EQUAL_VALUE '<='
#define TOKEN_TYPE_GREATER_THAN_VALUE '>'
#define TOKEN_TYPE_GREATER_THAN_EQUAL_VALUE '>='
#define TOKEN_TYPE_ASSIGN_VALUE '='
#define TOKEN_TYPE_PLUS_ASSIGN_VALUE '+='
#define TOKEN_TYPE_MINUS_ASSIGN_VALUE '-='
#define TOKEN_TYPE_MULTIPLY_ASSIGN_VALUE '*='
#define TOKEN_TYPE_DIVIDE_ASSIGN_VALUE '/='
#define TOKEN_TYPE_MODULO_ASSIGN_VALUE '%='
#define TOKEN_TYPE_BITWISE_AND_ASSIGN_VALUE '&='
#define TOKEN_TYPE_BITWISE_OR_ASSIGN_VALUE '|='
#define TOKEN_TYPE_BITWISE_XOR_ASSIGN_VALUE '^='
#define TOKEN_TYPE_BITWISE_NOT_ASSIGN_VALUE '~='
#define TOKEN_TYPE_LOGICAL_AND_VALUE '&&'
#define TOKEN_TYPE_LOGICAL_OR_VALUE '||'
#define TOKEN_TYPE_LOGICAL_NOT_VALUE '!'
#define TOKEN_TYPE_BITWISE_AND_VALUE '&'
#define TOKEN_TYPE_BITWISE_OR_VALUE '|'
#define TOKEN_TYPE_BITWISE_XOR_VALUE '^'
#define TOKEN_TYPE_BITWISE_NOT_VALUE '~'
#define TOKEN_TYPE_MODULO_VALUE '%'
#define TOKEN_TYPE_INCREMENT_VALUE '++'
#define TOKEN_TYPE_DECREMENT_VALUE '--'
#define TOKEN_TYPE_COMMENT_VALUE '//'
#define TOKEN_TYPE_NEWLINE_VALUE '\n'
#define TOKEN_TYPE_WHITESPACE_VALUE ' '

//////////////////
//   Keywords   //
//////////////////

#define TOKEN_KEYWORD_LET "let"

#endif // TOKEN_H