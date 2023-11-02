#ifndef OP_RBRACE_H
#define OP_RBRACE_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpRbrace : public Token {
    public:
        OpRbrace() {}

        token::Type get_id() const override {
            return token::OP_RBRACE;
        }

        std::string get_repr() const override {
            return "OP_RBRACE";
        }
    };
}

#endif
