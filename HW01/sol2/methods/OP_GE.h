#ifndef OP_GE_H
#define OP_GE_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpGe : public Token {
    public:
        OpGe() {}

        token::Type get_id() const override {
            return token::OP_GE;
        }

        std::string get_repr() const override {
            return "OP_GE";
        }
    };
}

#endif
