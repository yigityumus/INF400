#ifndef OP_ASSIGN_H
#define OP_ASSIGN_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpAssign : public Token {
    public:
        OpAssign() {}

        token::Type get_id() const override {
            return token::OP_ASSIGN;
        }

        std::string get_repr() const override {
            return "OP_ASSIGN";
        }
    };
}

#endif
