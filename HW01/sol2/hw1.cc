
#include <kiraz/lexer/hw1.hpp>
#include <kiraz/token.h>

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        fmt::print("Usage: {} <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "rb");
    if (! yyin) {
        perror(argv[1]);
        return 2;
    }

    while (auto tok = yylex()) {
        fmt::print("{}\n", tok);
    }

    kiraz::Token::print();

    return 0;
}
