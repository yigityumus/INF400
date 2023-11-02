#ifndef KW_IMPORT_H
#define KW_IMPORT_H

#include "../kiraz/token.h"

namespace kiraz::token {
    class KwImport : public Token {
    public:
        KwImport() {}

        token::Type get_id() const override {
            return token::KW_IMPORT;
        }

        std::string get_repr() const override {
            return "KW_IMPORT";
        }
    };
}

#endif
