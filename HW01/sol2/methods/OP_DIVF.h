#ifndef OP_DIVF_H
#define OP_DIVF_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpDivf : public Token {
    public:
        OpDivf() {}

        token::Type get_id() const override {
            return token::OP_DIVF;
        }

        std::string get_repr() const override {
            return "OP_DIVF";
        }
    };
}

#endif
