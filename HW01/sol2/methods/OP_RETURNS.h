#ifndef OP_RETURNS_H
#define OP_RETURNS_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpReturns : public Token {
    public:
        OpReturns() {}

        token::Type get_id() const override {
            return token::OP_RETURNS;
        }

        std::string get_repr() const override {
            return "OP_RETURNS";
        }
    };
}

#endif
