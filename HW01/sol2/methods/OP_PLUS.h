#ifndef OP_PLUS_H
#define OP_PLUS_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpPlus : public Token {
    public:
        OpPlus() {}

        token::Type get_id() const override {
            return token::OP_PLUS;
        }

        std::string get_repr() const override {
            return "OP_PLUS";
        }
    };
}

#endif
