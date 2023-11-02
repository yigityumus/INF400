#ifndef OP_GT_H
#define OP_GT_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpGt : public Token {
    public:
        OpGt() {}

        token::Type get_id() const override {
            return token::OP_GT;
        }

        std::string get_repr() const override {
            return "OP_GT";
        }
    };
}

#endif
