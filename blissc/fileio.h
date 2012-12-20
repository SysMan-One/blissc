//
//  fileio.h
//  blissc
//
//  Created by Matthew Madison on 10/22/12.
//  Copyright (c) 2012 Matthew Madison. All rights reserved.
//

#ifndef blissc_fileio_h
#define blissc_fileio_h

#include <stdio.h>
#include "logging.H"

struct filectx_s;
typedef struct filectx_s *filectx_t;
struct fioctx_s;
typedef struct fioctx_s *fioctx_t;

fioctx_t fileio_init(logctx_t logctx);
void fileio_finish(fioctx_t fio);

filectx_t file_open_input(fioctx_t fio, const char *fname,
                          size_t fnlen, const char *suffix);
void file_close(filectx_t ctx);
char *file_getname(filectx_t ctx);
int file_readline(filectx_t ctx, char *buf, size_t bufsiz, size_t *len);

#endif
