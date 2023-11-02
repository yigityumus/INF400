#ifndef OP_MINUS_H
#define OP_MINUS_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpMinus : public Token {
    public:
        OpMinus() {}

        token::Type get_id() const override {
            return token::OP_MINUS;
        }

        std::string get_repr() const override {
            return "OP_MINUS";
        }
    };
}

#endif
