/***
 *
 * Module:      tl/c/tl-time.h
 *
 * Copyright (c) 2000 The Thinlisp Group All Rights Reserved.
 *
 * Description: Translation of tl/lisp/tl-time.lisp.
 *    by ThinLisp http://www.thinlisp.org
 *
 */


typedef struct {
  unsigned int type       :  8;
  unsigned int length     : 24;
  unsigned int fill_length: 24;
  unsigned char body[5];
} Str_5;

extern Obj SpackageS;

extern Obj find_package_1(Obj);