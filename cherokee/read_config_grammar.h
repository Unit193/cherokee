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
     T_QUOTE = 258,
     T_DENY = 259,
     T_THREAD_NUM = 260,
     T_SSL_CERT_KEY_FILE = 261,
     T_SSL_CERT_FILE = 262,
     T_KEEPALIVE_MAX_REQUESTS = 263,
     T_ERROR_HANDLER = 264,
     T_TIMEOUT = 265,
     T_KEEPALIVE = 266,
     T_DOCUMENT_ROOT = 267,
     T_LOG = 268,
     T_MIME_FILE = 269,
     T_DIRECTORY = 270,
     T_HANDLER = 271,
     T_USER = 272,
     T_GROUP = 273,
     T_POLICY = 274,
     T_SERVER = 275,
     T_USERDIR = 276,
     T_PIDFILE = 277,
     T_LISTEN = 278,
     T_SERVER_TOKENS = 279,
     T_ENCODER = 280,
     T_ALLOW = 281,
     T_DIRECTORYINDEX = 282,
     T_ICONS = 283,
     T_AUTH = 284,
     T_NAME = 285,
     T_METHOD = 286,
     T_PASSWDFILE = 287,
     T_SSL_CA_LIST_FILE = 288,
     T_FROM = 289,
     T_SOCKET = 290,
     T_LOG_FLUSH_INTERVAL = 291,
     T_HEADERFILE = 292,
     T_PANIC_ACTION = 293,
     T_JUST_ABOUT = 294,
     T_LISTEN_QUEUE_SIZE = 295,
     T_SENDFILE = 296,
     T_MINSIZE = 297,
     T_MAXSIZE = 298,
     T_MAX_FDS = 299,
     T_SHOW = 300,
     T_CHROOT = 301,
     T_ONLY_SECURE = 302,
     T_MAX_CONNECTION_REUSE = 303,
     T_REWRITE = 304,
     T_POLL_METHOD = 305,
     T_EXTENSION = 306,
     T_IPV6 = 307,
     T_ENV = 308,
     T_REQUEST = 309,
     T_MIMETYPE = 310,
     T_MAX_AGE = 311,
     T_NUMBER = 312,
     T_PORT = 313,
     T_PORT_TLS = 314,
     T_QSTRING = 315,
     T_FULLDIR = 316,
     T_ID = 317,
     T_HTTP_URL = 318,
     T_HTTPS_URL = 319,
     T_HOSTNAME = 320,
     T_IP = 321,
     T_DOMAIN_NAME = 322,
     T_ADDRESS_PORT = 323,
     T_MIMETYPE_ID = 324
   };
#endif
/* Tokens.  */
#define T_QUOTE 258
#define T_DENY 259
#define T_THREAD_NUM 260
#define T_SSL_CERT_KEY_FILE 261
#define T_SSL_CERT_FILE 262
#define T_KEEPALIVE_MAX_REQUESTS 263
#define T_ERROR_HANDLER 264
#define T_TIMEOUT 265
#define T_KEEPALIVE 266
#define T_DOCUMENT_ROOT 267
#define T_LOG 268
#define T_MIME_FILE 269
#define T_DIRECTORY 270
#define T_HANDLER 271
#define T_USER 272
#define T_GROUP 273
#define T_POLICY 274
#define T_SERVER 275
#define T_USERDIR 276
#define T_PIDFILE 277
#define T_LISTEN 278
#define T_SERVER_TOKENS 279
#define T_ENCODER 280
#define T_ALLOW 281
#define T_DIRECTORYINDEX 282
#define T_ICONS 283
#define T_AUTH 284
#define T_NAME 285
#define T_METHOD 286
#define T_PASSWDFILE 287
#define T_SSL_CA_LIST_FILE 288
#define T_FROM 289
#define T_SOCKET 290
#define T_LOG_FLUSH_INTERVAL 291
#define T_HEADERFILE 292
#define T_PANIC_ACTION 293
#define T_JUST_ABOUT 294
#define T_LISTEN_QUEUE_SIZE 295
#define T_SENDFILE 296
#define T_MINSIZE 297
#define T_MAXSIZE 298
#define T_MAX_FDS 299
#define T_SHOW 300
#define T_CHROOT 301
#define T_ONLY_SECURE 302
#define T_MAX_CONNECTION_REUSE 303
#define T_REWRITE 304
#define T_POLL_METHOD 305
#define T_EXTENSION 306
#define T_IPV6 307
#define T_ENV 308
#define T_REQUEST 309
#define T_MIMETYPE 310
#define T_MAX_AGE 311
#define T_NUMBER 312
#define T_PORT 313
#define T_PORT_TLS 314
#define T_QSTRING 315
#define T_FULLDIR 316
#define T_ID 317
#define T_HTTP_URL 318
#define T_HTTPS_URL 319
#define T_HOSTNAME 320
#define T_IP 321
#define T_DOMAIN_NAME 322
#define T_ADDRESS_PORT 323
#define T_MIMETYPE_ID 324




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)

typedef union YYSTYPE {
	   int   number;
	   char *string;
	   void *ptr;

	   struct {
			 char *name;
			 void *ptr;
	   } name_ptr;

	   void *list;
} YYSTYPE;
/* Line 1447 of yacc.c.  */

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



