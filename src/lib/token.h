#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum class TokenType {
    LEFT_PAREN,
    RIGHT_PAREN,
    OPERATOR,
    NUMBER,
    IDENTIFIER,
    ASSIGNMENT,
    BOOLEAN,
    COMMA,
    SEMICOLON,
    LEFT_SQUARE,
    RIGHT_SQUARE
};

struct Token {
    int line;
    int column;      
    std::string text;
    TokenType type;

    Token(int line, int column, const std::string& text, TokenType type)
        : line(line), column(column), text(text), type(type) {}

    Token() : line(0), column(0), text(""), type(TokenType::OPERATOR) {}

    // ADDED FOR ARRAY SUPPORT
    // Helper function
    bool isSquareBracket() const {
        return type == TokenType::LEFT_SQUARE || type == TokenType::RIGHT_SQUARE;
    }

};

#endif 