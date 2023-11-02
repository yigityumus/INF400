#ifndef OP_RPAREN_H
#define OP_RPAREN_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpRparen : public Token {
    public:
        OpRparen() {}

        token::Type get_id() const override {
            return token::OP_RPAREN;
        }

        std::string get_repr() const override {
            return "OP_RPAREN";
        }
    };
}

#endif
