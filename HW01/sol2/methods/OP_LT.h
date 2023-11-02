#ifndef OP_LT_H
#define OP_LT_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpLt : public Token {
    public:
        OpLt() {}

        token::Type get_id() const override {
            return token::OP_LT;
        }

        std::string get_repr() const override {
            return "OP_LT";
        }
    };
}

#endif
