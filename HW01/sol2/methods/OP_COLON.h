#ifndef OP_COLON_H
#define OP_COLON_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpColon : public Token {
    public:
        OpColon() {}

        token::Type get_id() const override {
            return token::OP_COLON;
        }

        std::string get_repr() const override {
            return "OP_COLON";
        }
    };
}

#endif
