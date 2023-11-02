#ifndef OP_NEWLINE_H
#define OP_NEWLINE_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class OpNewline : public Token {
    public:
        OpNewline() {}

        token::Type get_id() const override {
            return token::OP_NEWLINE;
        }

        std::string get_repr() const override {
            return "OP_NEWLINE";
        }
    };
}

#endif
