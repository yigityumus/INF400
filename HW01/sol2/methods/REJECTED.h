#ifndef REJECTED_H
#define REJECTED_H

#include "../kiraz/token.h"
#include <string>

namespace kiraz::token {
    class Rejected : public Token {
    std::string input;
    public:
        Rejected(const char* yytext) {
        input = std::string(yytext);
        }
        

        token::Type get_id() const override {
            return token::REJECTED;
        }

        std::string get_repr() const override {
            return "REJECTED("+input+")";
        }
    };
}

#endif
