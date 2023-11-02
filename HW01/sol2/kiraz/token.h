#ifndef KIRAZ_TOKEN_H
#define KIRAZ_TOKEN_H

#include <kiraz/token/Base.h>
// TODO: include all token classes here to avoid polluting the lex files
#include "methods/KW_CLASS.h"
#include "methods/KW_FUNC.h"
#include "methods/KW_IF.h"
#include "methods/KW_IMPORT.h"
#include "methods/KW_WHILE.h"
#include "methods/OP_ASSIGN.h"
#include "methods/OP_COLON.h"
#include "methods/OP_COMMA.h"
#include "methods/OP_DIVF.h"
#include "methods/OP_DOT.h"
#include "methods/OP_EQUALS.h"
#include "methods/OP_GE.h"
#include "methods/OP_GT.h"
#include "methods/OP_LBRACE.h"
#include "methods/OP_LE.h"
#include "methods/OP_LPAREN.h"
#include "methods/OP_LT.h"
#include "methods/OP_MINUS.h"
#include "methods/OP_MULT.h"
#include "methods/OP_NEWLINE.h"
#include "methods/OP_PLUS.h"
#include "methods/OP_RBRACE.h"
#include "methods/OP_RETURNS.h"
#include "methods/OP_RPAREN.h"
#include "methods/OP_SCOLON.h"
#include "methods/IDENTIFIER.h"
#include "methods/L_INTEGER.h"
#include "methods/L_STRING.h"
#include "methods/REJECTED.h"

#endif
