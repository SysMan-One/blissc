//
//  macros.h
//  blissc
//
//  Created by Matthew Madison on 11/6/12.
//  Copyright (c) 2012 Matthew Madison. All rights reserved.
//

#ifndef blissc_macros_h
#define blissc_macros_h

#include "nametable.h"
#include "parser.h"
#include "lexeme.h"

void macros_init(scopectx_t scope);
int declare_macro(parse_ctx_t pctx, scopectx_t scope, lextype_t curlt);

#endif
