#ifndef OP_COMMA_H
#define OP_COMMA_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpComma : public Token {
    public:
        OpComma() {}

        token::Type get_id() const override {
            return token::OP_COMMA;
        }

        std::string get_repr() const override {
            return "OP_COMMA";
        }
    };
}

#endif
