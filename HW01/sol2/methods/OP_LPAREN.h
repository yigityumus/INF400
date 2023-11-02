#ifndef OP_LPAREN_H
#define OP_LPAREN_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpLparen : public Token {
    public:
        OpLparen() {}

        token::Type get_id() const override {
            return token::OP_LPAREN;
        }

        std::string get_repr() const override {
            return "OP_LPAREN";
        }
    };
}

#endif
