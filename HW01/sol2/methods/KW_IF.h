#ifndef KW_IF_H
#define KW_IF_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class KwIf : public Token {
    public:
        KwIf() {}

        token::Type get_id() const override {
            return token::KW_IF;
        }

        std::string get_repr() const override {
            return "KW_IF";
        }
    };
}

#endif
