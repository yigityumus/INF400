#ifndef KW_CLASS_H
#define KW_CLASS_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class KwClass : public Token {
    public:
        KwClass() {}

        token::Type get_id() const override {
            return token::KW_CLASS;
        }

        std::string get_repr() const override {
            return "KW_CLASS";
        }
    };
}

#endif
