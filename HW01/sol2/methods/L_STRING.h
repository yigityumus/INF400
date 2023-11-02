#ifndef L_STRING_H
#define L_STRING_H

#include "../kiraz/token.h"
#include <string>

namespace kiraz::token {
    class LString : public Token {
    std::string input;
    public:
        LString(const char* yytext) {
        input = std::string(yytext);
        }
        

        token::Type get_id() const override {
            return token::L_STRING;
        }

        std::string get_repr() const override {
            return "L_STRING("+input+")";
        }
    };
}

#endif
