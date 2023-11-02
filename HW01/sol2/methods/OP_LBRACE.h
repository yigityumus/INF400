#ifndef OP_LBRACE_H
#define OP_LBRACE_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpLbrace : public Token {
    public:
        OpLbrace() {}

        token::Type get_id() const override {
            return token::OP_LBRACE;
        }

        std::string get_repr() const override {
            return "OP_LBRACE";
        }
    };
}

#endif
