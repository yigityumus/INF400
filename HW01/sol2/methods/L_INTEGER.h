#ifndef L_INTEGER_H
#define L_INTEGER_H

#include "../kiraz/token.h"
#include <string>

namespace kiraz::token {
    class LInteger : public Token {
    std::string input;
    public:
        LInteger(const char* yytext) {
        input = std::string(yytext);
        }
        

        token::Type get_id() const override {
            return token::L_INTEGER;
        }

        std::string get_repr() const override {
            return "L_INTEGER("+input+", 10)";
        }
    };
}

#endif
