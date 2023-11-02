#ifndef OP_SCOLON_H
#define OP_SCOLON_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpScolon : public Token {
    public:
        OpScolon() {}

        token::Type get_id() const override {
            return token::OP_SCOLON;
        }

        std::string get_repr() const override {
            return "OP_SCOLON";
        }
    };
}

#endif
