#ifndef OP_MULT_H
#define OP_MULT_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpMult : public Token {
    public:
        OpMult() {}

        token::Type get_id() const override {
            return token::OP_MULT;
        }

        std::string get_repr() const override {
            return "OP_MULT";
        }
    };
}

#endif
