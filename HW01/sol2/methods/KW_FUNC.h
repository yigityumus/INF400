#ifndef KW_FUNC_H
#define KW_FUNC_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class KwFunc : public Token {
    public:
        KwFunc() {}

        token::Type get_id() const override {
            return token::KW_FUNC;
        }

        std::string get_repr() const override {
            return "KW_FUNC";
        }
    };
}

#endif
