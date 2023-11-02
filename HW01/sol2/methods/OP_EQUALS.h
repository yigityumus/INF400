#ifndef OP_EQUALS_H
#define OP_EQUALS_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpEquals : public Token {
    public:
        OpEquals() {}

        token::Type get_id() const override {
            return token::OP_EQUALS;
        }

        std::string get_repr() const override {
            return "OP_EQUALS";
        }
    };
}

#endif
