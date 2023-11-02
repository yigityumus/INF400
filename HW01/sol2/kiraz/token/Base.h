#ifndef KIRAZ_TOKEN_BASE_H
#define KIRAZ_TOKEN_BASE_H

#include <cassert>

#include <memory>
#include <string>
#include <vector>

#include <fmt/format.h>

namespace kiraz::token {
enum Type {
    OP_RETURNS,     // ->
    OP_EQUALS,      // ==
    OP_ASSIGN,      // =
    OP_GT,          // >
    OP_LT,          // <
    OP_GE,          // >=
    OP_LE,          // <=
    OP_LPAREN,      // (
    OP_RPAREN,      // )
    OP_LBRACE,      // {
    OP_RBRACE,      // }
    OP_PLUS,        // +
    OP_MINUS,       // -
    OP_MULT,        // *
    OP_DIVF,        // /
    OP_COMMA,       // ,
    OP_NEWLINE,     // \n
    OP_COLON,       // :
    OP_SCOLON,      // ;
    OP_DOT,         // .

    KW_IMPORT,      // import
    KW_FUNC,        // func
    KW_IF,          // if
    KW_WHILE,       // while
    KW_CLASS,       // class

    IDENTIFIER,     // Identifier
    L_INTEGER,      // Integer literal
    L_STRING,       // String literal

    REJECTED,       // Rejected
};
} // namespace kiraz::token

namespace kiraz {

class Token {
public:
    virtual token::Type get_id() const = 0;
    virtual std::string get_repr() const { return fmt::format("{}", get_id()); }
    virtual ~Token();

    static void clear() { s_tokens.clear(); }

    template <typename T>
    static int feed(const T &t) {
        return s_tokens.emplace_back(std::make_unique<T>(t))->get_id();
    }

    static void print() {
        if (s_tokens.empty()) {
            return;
        }

        for (const auto &t : s_tokens) {
            fmt::print("{} ", t->get_repr());
            if (t->get_id() == token::OP_NEWLINE) {
                fmt::print("\n");
            }
        }

        fmt::print("\n");
    }

private:
    static std::vector<std::unique_ptr<Token>> s_tokens;
};
} // namespace kiraz

template <>
struct fmt::formatter<kiraz::token::Type> : fmt::formatter<std::string> {
    format_context::iterator format(kiraz::token::Type id, format_context &ctx) const {
        std::string retval;

        // TODO: for each token type, assing to retval its string representation
        switch (id) {
            case kiraz::token::OP_RETURNS:
                retval = "OP_RETURNS";
                break;
            case kiraz::token::OP_EQUALS:
                retval = "OP_EQUALS";
                break;
            case kiraz::token::OP_ASSIGN:
                retval = "OP_ASSIGN";
                break;
            case kiraz::token::OP_GT:
                retval = "OP_GT";
                break;
            case kiraz::token::OP_LT:
                retval = "OP_LT";
                break;
            case kiraz::token::OP_GE:
                retval = "OP_GE";
                break;
            case kiraz::token::OP_LE:
                retval = "OP_LE";
                break;
            case kiraz::token::OP_LPAREN:
                retval = "OP_LPAREN";
                break;
            case kiraz::token::OP_RPAREN:
                retval = "OP_RPAREN";
                break;
            case kiraz::token::OP_LBRACE:
                retval = "OP_LBRACE";
                break;
            case kiraz::token::OP_RBRACE:
                retval = "OP_RBRACE";
                break;
            case kiraz::token::OP_PLUS:
                retval = "OP_PLUS";
                break;
            case kiraz::token::OP_MINUS:
                retval = "OP_MINUS";
                break;
            case kiraz::token::OP_MULT:
                retval = "OP_MULT";
                break;
            case kiraz::token::OP_DIVF:
                retval = "OP_DIVF";
                break;
            case kiraz::token::OP_COMMA:
                retval = "OP_COMMA";
                break;
            case kiraz::token::OP_NEWLINE:
                retval = "OP_NEWLINE";
                break;
            case kiraz::token::OP_COLON:
                retval = "OP_COLON";
                break;
            case kiraz::token::OP_SCOLON:
                retval = "OP_SCOLON";
                break;
            case kiraz::token::OP_DOT:
                retval = "OP_DOT";
                break;
            case kiraz::token::KW_IMPORT:
                retval = "KW_IMPORT";
                break;
            case kiraz::token::KW_FUNC:
                retval = "KW_FUNC";
                break;
            case kiraz::token::KW_IF:
                retval = "KW_IF";
                break;
            case kiraz::token::KW_WHILE:
                retval = "KW_WHILE";
                break;
            case kiraz::token::KW_CLASS:
                retval = "KW_CLASS";
                break;
            case kiraz::token::IDENTIFIER:
                retval = "IDENTIFIER";
                break;
            case kiraz::token::L_INTEGER:
                retval = "L_INTEGER";
                break;
            case kiraz::token::L_STRING:
                retval = "L_STRING";
                break;
            case kiraz::token::REJECTED:
                retval = "REJECTED";
                break;
        }

        return fmt::formatter<std::string>::format(retval, ctx);
    }
};

#endif
