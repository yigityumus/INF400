
%{
#include <kiraz/token.h>
using namespace kiraz::token;
using kiraz::Token;
%}

%option noyywrap


OP_RETURNS ->
OP_EQUALS ==
OP_ASSIGN =
OP_GT >
OP_LT <
OP_GE >=
OP_LE <=
OP_LPAREN \(
OP_RPAREN \)
OP_LBRACE \{
OP_RBRACE \}
OP_PLUS \+
OP_MINUS \-
OP_MULT \*
OP_DIVF \/
OP_COMMA ,
OP_NEWLINE \n
OP_COLON :
OP_SCOLON ;
OP_DOT \.

KW_IMPORT import
KW_FUNC func
KW_IF if
KW_WHILE while
KW_CLASS class

IDENTIFIER [_a-zA-Z][_a-zA-Z0-9]*
L_INTEGER (-|\+)?[0-9]+
L_STRING \"([^\\\"]|\\.)*\"
REJECTED .

%%
{OP_RETURNS} { return kiraz::Token::feed(kiraz::token::OpReturns()); }
{OP_EQUALS} { return kiraz::Token::feed(kiraz::token::OpEquals()); }
{OP_ASSIGN} { return kiraz::Token::feed(kiraz::token::OpAssign()); }
{OP_GT} { return kiraz::Token::feed(kiraz::token::OpGt()); }
{OP_LT} { return kiraz::Token::feed(kiraz::token::OpLt()); }
{OP_GE} { return kiraz::Token::feed(kiraz::token::OpGe()); }
{OP_LE} { return kiraz::Token::feed(kiraz::token::OpLe()); }
{OP_LPAREN} { return kiraz::Token::feed(kiraz::token::OpLparen()); }
{OP_RPAREN} { return kiraz::Token::feed(kiraz::token::OpRparen()); }
{OP_LBRACE} { return kiraz::Token::feed(kiraz::token::OpLbrace()); }
{OP_RBRACE} { return kiraz::Token::feed(kiraz::token::OpRbrace()); }
{OP_PLUS} { return kiraz::Token::feed(kiraz::token::OpPlus()); }
{OP_MINUS} { return kiraz::Token::feed(kiraz::token::OpMinus()); }
{OP_MULT} { return kiraz::Token::feed(kiraz::token::OpMult()); }
{OP_DIVF} { return kiraz::Token::feed(kiraz::token::OpDivf()); }
{OP_COMMA} { return kiraz::Token::feed(kiraz::token::OpComma()); }
{OP_NEWLINE} { return kiraz::Token::feed(kiraz::token::OpNewline()); }
{OP_COLON} { return kiraz::Token::feed(kiraz::token::OpColon()); }
{OP_SCOLON} { return kiraz::Token::feed(kiraz::token::OpScolon()); }
{OP_DOT} { return kiraz::Token::feed(kiraz::token::OpDot()); }

{KW_IMPORT} { return kiraz::Token::feed(kiraz::token::KwImport()); }
{KW_FUNC} { return kiraz::Token::feed(kiraz::token::KwFunc()); }
{KW_IF} { return kiraz::Token::feed(kiraz::token::KwIf()); }
{KW_WHILE} { return kiraz::Token::feed(kiraz::token::KwWhile()); }
{KW_CLASS} { return kiraz::Token::feed(kiraz::token::KwClass()); }

{IDENTIFIER} { return kiraz::Token::feed(kiraz::token::Identifier(yytext)); }
{L_INTEGER} { return kiraz::Token::feed(kiraz::token::LInteger(yytext)); }
{L_STRING} { return kiraz::Token::feed(kiraz::token::LString(yytext)); }
[ \t] {}
{REJECTED} { return kiraz::Token::feed(kiraz::token::Rejected(yytext)); }
%%
