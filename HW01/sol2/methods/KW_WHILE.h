#ifndef KW_WHILE_H
#define KW_WHILE_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class KwWhile : public Token {
    public:
        KwWhile() {}

        token::Type get_id() const override {
            return token::KW_WHILE;
        }

        std::string get_repr() const override {
            return "KW_WHILE";
        }
    };
}

#endif
