#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include "../kiraz/token.h"
#include <string>

namespace kiraz::token {
    class Identifier : public Token {
    std::string input;
    public:
        Identifier(const char* yytext) {
        input = std::string(yytext);
        }
        

        token::Type get_id() const override {
            return token::IDENTIFIER;
        }

        std::string get_repr() const override {
            return "IDENTIFIER("+input+")";
        }
    };
}

#endif
