/***
 *
 * Module:      tl/c/stubs.c
 *
 * Copyright (c) 1999 The Thinlisp Group All Rights Reserved.
 *
 * Description: Translation of tl/lisp/stubs.lisp.
 *    by ThinLisp http://www.thinlisp.org
 *
 */

#include "tl.h"
#include "stubs.h"


typedef struct{
  unsigned int type       :  8;
  unsigned int length     : 24;
  unsigned int fill_length: 24;
  unsigned char body[5];
} Str_5;

static const Str_5 str_const
  = { 7, 2, 2, "TL" };

/* Translated from EQ(T T) = T */

Obj eq (Obj x, Obj y)
{
  return (x==y) ? ((Obj)(&T)) : (Obj)NULL;
}

/* Translated from CAR(LIST) = T */

Obj car (Obj x)
{
  return (x!=NULL) ? CAR(x) : (Obj)NULL;
}

/* Translated from CDR(LIST) = T */

Obj cdr (Obj x)
{
  return (x!=NULL) ? CDR(x) : (Obj)NULL;
}

Obj c_native_clock_ticks_per_scnd = (Obj)(&Unbound);

Obj maximum_backtrace_depth = (Obj)(&Unbound);

Obj def_foreign_function = (Obj)(&Unbound);

/* Translated from SYMS-TL-STUBS() = VOID */

void syms_tl_stubs (void)
{
  return;
}


/* Translated from INIT-TL-STUBS() = VOID */

void init_tl_stubs (void)
{
  SpackageS = find_package_1((Obj)(&str_const));    /* "TL" */
  if (c_native_clock_ticks_per_scnd==(Obj)(&Unbound)) 
    c_native_clock_ticks_per_scnd = BOXFIX(60);
  if (maximum_backtrace_depth==(Obj)(&Unbound)) 
    maximum_backtrace_depth = BOXFIX(50);
  if (def_foreign_function==(Obj)(&Unbound)) 
    def_foreign_function = BOXFIX(0);
  return;
}
