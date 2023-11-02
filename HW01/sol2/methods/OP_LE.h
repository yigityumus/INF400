#ifndef OP_LE_H
#define OP_LE_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpLe : public Token {
    public:
        OpLe() {}

        token::Type get_id() const override {
            return token::OP_LE;
        }

        std::string get_repr() const override {
            return "OP_LE";
        }
    };
}

#endif
