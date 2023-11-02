#ifndef OP_DOT_H
#define OP_DOT_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpDot : public Token {
    public:
        OpDot() {}

        token::Type get_id() const override {
            return token::OP_DOT;
        }

        std::string get_repr() const override {
            return "OP_DOT";
        }
    };
}

#endif
