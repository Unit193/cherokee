/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_DEFAULT = 258,
     T_DIRECTORY = 259,
     T_PARENT = 260,
     T_SUFFIX = 261,
     T_FILE = 262,
     T_NEWLINE = 263,
     T_FULLDIR = 264,
     T_ID = 265,
     T_ID_WILDCATS = 266
   };
#endif
/* Tokens.  */
#define T_DEFAULT 258
#define T_DIRECTORY 259
#define T_PARENT 260
#define T_SUFFIX 261
#define T_FILE 262
#define T_NEWLINE 263
#define T_FULLDIR 264
#define T_ID 265
#define T_ID_WILDCATS 266




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 34 "icons_grammar.y"
typedef union YYSTYPE {
	   char             *string;
	   struct list_head *list;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 65 "icons_grammar.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yy_icons_lval;



