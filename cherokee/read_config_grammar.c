/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */


/* Cherokee
 *
 * Authors:
 *      Alvaro Lopez Ortega <alvaro@alobbs.com>
 *
 * Copyright (C) 2001-2006 Alvaro Lopez Ortega
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */

#include "common-internal.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <ctype.h>
#include <strings.h>

#ifdef HAVE_PWD_H
# include <pwd.h>
#endif

#ifdef HAVE_GRP_H
# include <grp.h>
#endif

#include "table.h"
#include "mime.h"
#include "server.h"
#include "server-protected.h"
#include "virtual_server.h"
#include "config_entry.h"
#include "encoder.h"
#include "logger_table.h"
#include "access.h"
#include "list.h"
#include "list_ext.h"
#include "reqs_list.h"
#include "reqs_list_entry.h"
#include "ext_source.h"


/* Define the parameter name of the yyparse() argument
 */
#define YYPARSE_PARAM server



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE

{
	   int   number;
	   char *string;
	   void *ptr;

	   struct {
			 char *name;
			 void *ptr;
	   } name_ptr;

	   void *list;
}
/* Line 193 of yacc.c.  */

	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* What is the right way to import this prototipe?
 */
extern int yylex (void);


extern char *yytext;
extern int   yylineno;

char                                   *current_yacc_file        = NULL;
static cherokee_dirs_table_t           *current_dirs_table       = NULL;
static cherokee_config_entry_t         *current_config_entry     = NULL;
static list_t                          *current_reqs_list        = NULL;
static cherokee_virtual_server_t       *current_virtual_server   = NULL;
static cherokee_encoder_table_entry_t  *current_encoder_entry    = NULL;
static cherokee_module_info_t          *current_module_info      = NULL;
static cherokee_ext_source_t           *current_ext_source       = NULL;
static cherokee_mime_entry_t           *current_mime_entry       = NULL;
static cuint_t                          priority_counter         = CHEROKEE_CONFIG_PRIORITY_DEFAULT + 1;

typedef struct {
	   void *next;
	   char *string;
} linked_list_t;

struct {
	   char                           *handler_name;
	   cherokee_config_entry_t        *entry;
	   cherokee_virtual_server_t      *vserver;
	   cherokee_dirs_table_t          *dirs;
	   char                           *document_root;
	   char                           *directory_name;
} directory_content_tmp;

struct {
	   char                           *handler_name;
	   cherokee_config_entry_t        *entry;
	   cherokee_virtual_server_t      *vserver;
	   cherokee_exts_table_t          *exts;
	   char                           *document_root;
	   linked_list_t                  *exts_list;
} extension_content_tmp;

struct {
	   char                           *handler_name;
	   cherokee_reqs_list_entry_t     *entry;
	   cherokee_virtual_server_t      *vserver;
	   list_t                         *reqs;
	   char                           *document_root;
} request_content_tmp;


#define auto_virtual_server ((current_virtual_server) ? current_virtual_server : SRV(server)->vserver_default)
#define auto_dirs_table     ((current_dirs_table) ? current_dirs_table : &(auto_virtual_server)->dirs)
#define auto_reqs_table     ((current_reqs_list) ? current_reqs_list : &(auto_virtual_server)->reqs)

static void
free_linked_list (linked_list_t *list, void (*free_func) (void *))
{
	   linked_list_t *i = list;

	   while (i != NULL) {
			 linked_list_t *prev = i;

			 if ((free_func) && (i->string)) {
				    free_func (i->string);
			 }

			 prev = i;
			 i = i->next;
			 free (prev);
	   }	   
}

static char *
remove_last_slash (char *str)
{
	   cuint_t len = strlen(str);
	   
	   if (len <= 2)
			 return str;

	   if (str[len-1] == '/') {
			 str[len-1] = '\0';
	   }

	   return str;
}

static char *
make_finish_with_slash (char *string, int *len)
{
	   char *new_entry;
	   int   new_len;

	   if (string[(*len)-1] == '/') {
			 return string;
	   }

	   new_len = (*len) + 2;
	   new_entry  = (char*) malloc (new_len);

	   *len = snprintf (new_entry, new_len, "%s/", string);

	   free (string);
	   return new_entry;
}

static char *
make_slash_end (char *string)
{
	   int len = strlen(string);
	   return make_finish_with_slash (string, &len);
}

static cherokee_config_entry_t *
config_entry_new (void)
{
	   cherokee_config_entry_t *entry;

	   cherokee_config_entry_new (&entry);
	   current_config_entry = entry;

	   /* Assign the priority
	    */
	   entry->priority = priority_counter;
	   priority_counter++;

	   return entry;
}

static cherokee_reqs_list_entry_t *
reqs_list_entry_new (void)
{
	   cherokee_reqs_list_entry_t *entry;

	   cherokee_reqs_list_entry_new (&entry);
	   current_config_entry = (cherokee_config_entry_t *)entry;      /* It is okay! */

	   entry->base_entry.priority = priority_counter;
	   priority_counter++;

	   return entry;
}

static char *
new_string_to_lowercase (const char *in)
{
	   int   i;
	   char *tmp;
	   
	   i = strlen(in);
	   tmp = (char *) malloc (i+1);
	   tmp[i] = '\0';

	   while (i--) {
			 tmp[i] = tolower(in[i]);
	   }

	   return tmp;
}

static int
load_module (cherokee_module_loader_t *loader, char *name, cherokee_module_info_t **info)
{
	   ret_t ret;

	   ret = cherokee_module_loader_load (loader, name);
	   if (ret < ret_ok) {
			 PRINT_MSG("ERROR: Loading module '%s'\n", name);
			 return 1;
	   }
	   
	   ret = cherokee_module_loader_get_info (loader, name, info);
	   if (ret < ret_ok) {
			 PRINT_MSG("ERROR: Loading module '%s'\n", name);
			 return 1;
	   }

	   return 0;
}


static void
handler_redir_add_property (cherokee_config_entry_t *entry, char *regex, char *subs, int show)
{
	   char   *p;
	   char   *serialized;
	   int     regex_len    = 0;
	   int     subs_len     = 0;
	   list_t *plist        = NULL;
	   list_t  nlist        = LIST_HEAD_INIT(nlist);

	   /* Build the string:
	    * [1]show [s]regex \0 [s]subs \0
	    */
	   subs_len = strlen(subs);

	   if (regex != NULL)
			 regex_len = strlen(regex);

	   serialized = (char *) malloc (1 + regex_len + 1 + subs_len + 1);
	   memset (serialized, 0, regex_len + subs_len + 3);

	   p = serialized;

	   *p = show;
	   p++;

	   strncpy (p, regex, regex_len);
	   p += regex_len + 1;
	   
	   strncpy (p, subs, subs_len);
	   
	   /* Add it to the list
	    */
	   if (entry->handler_properties != NULL) {
			 cherokee_typed_table_get_list (entry->handler_properties, "regex_list", &plist);
	   }

	   if (plist == NULL) {
			 cherokee_list_add (&nlist, serialized);
			 cherokee_config_entry_set_handler_prop (entry, "regex_list", typed_list, &nlist, 
												(cherokee_typed_free_func_t) cherokee_list_free_item_simple);
	   } else {
			 cherokee_list_add_tail (plist, serialized);
	   }
}

static void
handler_redir_add_property_simple (cherokee_config_entry_t *entry, char *subs, int show)
{
	   handler_redir_add_property (entry, NULL, subs, show);
}


static void
dirs_table_set_handler_prop (cherokee_config_entry_t *dir_entry, char *prop, char *value)
{
	   cherokee_config_entry_set_handler_prop (dir_entry, prop, typed_str, value, NULL);
}

static void
dirs_table_set_validator_prop (cherokee_config_entry_t *dir_entry, char *prop, char *value)
{
	   cherokee_config_entry_set_validator_prop (dir_entry, prop, typed_str, value, NULL);
}

static int
add_key_val_entry_in_property (cherokee_table_t *properties, char *prop_name, char *key, char *val)
{
	   cuint_t           new_len;
	   char             *new_str;
	   list_t           *plist       = NULL;
	   list_t            nlist       = LIST_HEAD_INIT(nlist);
	   
	   /* Build the string:
	    * VAR \0 VAL \0
	    */
	   new_len = strlen(key) + strlen(val) + 2;
	   new_str = malloc (new_len);
	   if (new_str == NULL) return 1;
	   
	   memset (new_str, 0, new_len);
	   memcpy (new_str, key, strlen(key));
	   memcpy (new_str + strlen(key) + 1, val, strlen(val));

	   /* Add it to the list
	    */
	   if (properties != NULL) {
			 cherokee_typed_table_get_list (properties, prop_name, &plist);
	   }
	   
	   if (plist == NULL) {
			 cherokee_list_add (&nlist, new_str);
			 cherokee_config_entry_set_handler_prop (current_config_entry, prop_name, typed_list, &nlist, 
											 (cherokee_typed_free_func_t) cherokee_list_free_item_simple);
	   } else {
			 cherokee_list_add_tail (plist, new_str);			 
	   }

	   return 0;
}

static ret_t
split_address_or_path (char *str, cherokee_buffer_t *hostname, cint_t *port_num, 
				   cherokee_buffer_t *unix_socket, cherokee_buffer_t *original)
{
	   char    *p;
	   cuint_t  len;

	   len = strlen(str);
	   if (len <= 0) return ret_error;

	   /* Original
	    */
	   cherokee_buffer_add (original, str, len);

	   /* Unix socket
	    */
	   if (str[0] == '/') {
			 cherokee_buffer_add (unix_socket, str, len);
			 return ret_ok;
	   } 

	   /* Host name
	    */
	   p = strchr(str, ':');
	   if (p == NULL) {
			 cherokee_buffer_add (hostname, str, len);
			 return ret_ok;
	   } 

	   /* Host name + port
	    */
	   *p = '\0';
	   *port_num = atoi (p+1);
	   cherokee_buffer_add (hostname, str, p - str);
	   *p = ':';

	   return ret_ok;
}

static char *
fix_win32_path (char *str)
{
#ifdef _WIN32
	   char *i = str;

	   /* Replace '\' by '/'
	    */
	   while (*i) {
			 if (*i == '\\') *i='/';
			 i++;
	   }

	   /* Remove the spaces at the end of the string
	    */
	   i--;
	   while ((i > str) && (*i == ' ')) {
			 *i='\0'; 
			 i--; 			 
	   }
#endif 
	   return str;
}


void
yyerror (char* msg)
{
	   char *config;

	   config = (current_yacc_file) ? current_yacc_file : "";

        PRINT_MSG("Error parsing file %s:%d '%s', symbol '%s'\n", 
			   config, yylineno, msg, yytext);
}



/* Line 216 of yacc.c.  */


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  128
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   288

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    72,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    97,
     100,   101,   104,   105,   108,   109,   112,   113,   116,   117,
     120,   121,   124,   125,   128,   130,   132,   134,   136,   138,
     142,   144,   148,   150,   154,   156,   158,   160,   164,   167,
     170,   173,   176,   179,   182,   183,   188,   189,   193,   194,
     197,   200,   203,   206,   207,   214,   217,   220,   223,   226,
     229,   232,   235,   238,   241,   242,   247,   251,   252,   255,
     258,   261,   264,   267,   272,   275,   278,   281,   284,   287,
     291,   295,   296,   299,   302,   305,   308,   311,   314,   320,
     323,   325,   327,   332,   336,   340,   343,   346,   349,   351,
     353,   355,   357,   359,   361,   364,   367,   370,   374,   377,
     381,   384,   386,   387,   392,   394,   396,   397,   401,   405,
     408,   411,   414,   416,   418,   420,   421,   428,   429,   436,
     437,   444,   445,   452,   454,   457,   458,   465,   469,   471,
     474,   477,   481,   485,   486,   487,   490,   493,   494,   501,
     504,   505,   509,   510
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,    -1,    75,    -1,    77,    -1,    75,    77,
      -1,    79,    -1,    76,    79,    -1,    79,    -1,    78,    -1,
     147,    -1,    95,    -1,    96,    -1,    97,    -1,   106,    -1,
     107,    -1,   108,    -1,   111,    -1,   112,    -1,   113,    -1,
     114,    -1,   122,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   129,    -1,   130,    -1,   133,    -1,    98,    -1,
      99,    -1,   123,    -1,   124,    -1,   125,    -1,   127,    -1,
     128,    -1,   151,    -1,   149,    -1,   153,    -1,   165,    -1,
     100,    -1,   163,    -1,   101,    -1,   118,    -1,   115,    -1,
     116,    -1,   117,    -1,   161,    -1,    -1,    80,   145,    -1,
      -1,    81,   155,    -1,    -1,    82,   126,    -1,    -1,    83,
     140,    -1,    -1,    84,   121,    -1,    -1,    85,   132,    -1,
      -1,    86,   157,    -1,    -1,    87,   151,    -1,    61,    -1,
      60,    -1,    62,    -1,    88,    -1,    89,    -1,    89,    70,
      90,    -1,    62,    -1,    62,    70,    91,    -1,   146,    -1,
     146,    70,    92,    -1,    66,    -1,    62,    -1,    93,    -1,
      93,    70,    94,    -1,    58,    57,    -1,    59,    57,    -1,
      23,   146,    -1,    36,    57,    -1,    50,    62,    -1,    12,
      89,    -1,    -1,    13,    62,   102,   103,    -1,    -1,    71,
     104,    72,    -1,    -1,   104,   105,    -1,    62,    88,    -1,
      24,    62,    -1,    14,    88,    -1,    -1,    55,    69,    71,
     109,   110,    72,    -1,    56,    57,    -1,    51,    91,    -1,
      28,    88,    -1,    10,    57,    -1,    11,    57,    -1,     8,
      57,    -1,     7,    88,    -1,     6,    88,    -1,    33,    88,
      -1,    -1,    25,    62,   119,   120,    -1,    71,    84,    72,
      -1,    -1,    26,    91,    -1,     4,    91,    -1,    22,    88,
      -1,    38,    88,    -1,    40,    57,    -1,    41,    71,    82,
      72,    -1,    42,    57,    -1,    43,    57,    -1,    44,    57,
      -1,    48,    57,    -1,    46,    88,    -1,     5,    57,   131,
      -1,    71,    85,    72,    -1,    -1,    19,    62,    -1,    52,
      57,    -1,    17,    62,    -1,    17,    57,    -1,    18,    62,
      -1,    18,    57,    -1,    16,    62,    71,    83,    72,    -1,
      16,    62,    -1,    63,    -1,    64,    -1,    45,    49,    60,
      60,    -1,    49,    60,    60,    -1,    45,    49,    60,    -1,
      49,    60,    -1,    11,    57,    -1,    35,    57,    -1,    62,
      -1,    88,    -1,    68,    -1,    60,    -1,    63,    -1,    64,
      -1,    62,   141,    -1,    62,    57,    -1,     9,    57,    -1,
      45,    37,    57,    -1,    37,    90,    -1,    53,    62,   141,
      -1,    35,    88,    -1,    39,    -1,    -1,    20,   143,   142,
     144,    -1,    68,    -1,    88,    -1,    -1,    71,    80,    72,
      -1,    53,    62,   141,    -1,    62,   141,    -1,    57,   139,
      -1,    45,    91,    -1,    62,    -1,    66,    -1,    67,    -1,
      -1,    20,    92,    71,   148,    76,    72,    -1,    -1,    51,
      91,    71,   150,    81,    72,    -1,    -1,    15,    88,    71,
     152,    81,    72,    -1,    -1,    54,    60,    71,   154,    81,
      72,    -1,   138,    -1,    12,    88,    -1,    -1,    29,    91,
      71,   156,    86,    72,    -1,    26,    34,    94,    -1,    47,
      -1,    30,    60,    -1,    17,    91,    -1,    31,    62,   158,
      -1,    71,   159,    72,    -1,    -1,    -1,   159,   160,    -1,
      32,    88,    -1,    -1,    21,    62,   162,    71,    87,    72,
      -1,    27,    90,    -1,    -1,    71,    83,    72,    -1,    -1,
       9,    62,   166,   164,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   460,   460,   461,   464,   465,   468,   469,   472,   473,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   518,   519,
     521,   522,   524,   525,   527,   528,   530,   531,   533,   534,
     536,   537,   539,   540,   545,   552,   553,   554,   556,   565,
     577,   586,   598,   607,   619,   619,   621,   630,   639,   649,
     659,   664,   669,   689,   715,   714,   740,   741,   743,   744,
     747,   760,   778,   798,   797,   820,   825,   840,   845,   853,
     858,   863,   880,   897,   916,   915,   946,   947,   949,   970,
     991,   999,  1009,  1014,  1016,  1021,  1026,  1031,  1036,  1041,
    1048,  1049,  1051,  1067,  1072,  1087,  1092,  1107,  1112,  1118,
    1124,  1125,  1129,  1134,  1139,  1144,  1149,  1154,  1159,  1160,
    1161,  1162,  1163,  1164,  1169,  1199,  1212,  1217,  1223,  1243,
    1251,  1254,  1258,  1257,  1301,  1302,  1304,  1305,  1307,  1315,
    1325,  1338,  1368,  1369,  1370,  1376,  1375,  1413,  1412,  1499,
    1498,  1582,  1581,  1627,  1635,  1649,  1648,  1672,  1692,  1701,
    1715,  1736,  1769,  1770,  1773,  1774,  1777,  1782,  1781,  1810,
    1824,  1825,  1828,  1827
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_QUOTE", "T_DENY", "T_THREAD_NUM",
  "T_SSL_CERT_KEY_FILE", "T_SSL_CERT_FILE", "T_KEEPALIVE_MAX_REQUESTS",
  "T_ERROR_HANDLER", "T_TIMEOUT", "T_KEEPALIVE", "T_DOCUMENT_ROOT",
  "T_LOG", "T_MIME_FILE", "T_DIRECTORY", "T_HANDLER", "T_USER", "T_GROUP",
  "T_POLICY", "T_SERVER", "T_USERDIR", "T_PIDFILE", "T_LISTEN",
  "T_SERVER_TOKENS", "T_ENCODER", "T_ALLOW", "T_DIRECTORYINDEX", "T_ICONS",
  "T_AUTH", "T_NAME", "T_METHOD", "T_PASSWDFILE", "T_SSL_CA_LIST_FILE",
  "T_FROM", "T_SOCKET", "T_LOG_FLUSH_INTERVAL", "T_HEADERFILE",
  "T_PANIC_ACTION", "T_JUST_ABOUT", "T_LISTEN_QUEUE_SIZE", "T_SENDFILE",
  "T_MINSIZE", "T_MAXSIZE", "T_MAX_FDS", "T_SHOW", "T_CHROOT",
  "T_ONLY_SECURE", "T_MAX_CONNECTION_REUSE", "T_REWRITE", "T_POLL_METHOD",
  "T_EXTENSION", "T_IPV6", "T_ENV", "T_REQUEST", "T_MIMETYPE", "T_MAX_AGE",
  "T_NUMBER", "T_PORT", "T_PORT_TLS", "T_QSTRING", "T_FULLDIR", "T_ID",
  "T_HTTP_URL", "T_HTTPS_URL", "T_HOSTNAME", "T_IP", "T_DOMAIN_NAME",
  "T_ADDRESS_PORT", "T_MIMETYPE_ID", "','", "'{'", "'}'", "$accept",
  "conffile", "lines", "server_lines", "line", "common_line",
  "server_line", "handler_server_optinal_entries", "directory_options",
  "sendfile_options", "handler_options", "encoder_options",
  "thread_options", "auth_options", "directories", "fulldir", "id_or_path",
  "id_path_list", "id_list", "domain_list", "ip_or_domain", "ip_list",
  "port", "port_tls", "listen", "log_flush_interval", "poll_method",
  "document_root", "log", "@1", "log_optional", "tuple_list", "tuple",
  "server_tokens", "mime", "mime_entry", "@2", "mimetype_options", "icons",
  "timeout", "keepalive", "keepalive_max_requests", "ssl_file",
  "ssl_key_file", "ssl_ca_list_file", "encoder", "@3",
  "maybe_encoder_options", "encoder_option", "pidfile", "panic_action",
  "listen_queue_size", "sendfile", "sendfile_option", "maxfds",
  "maxconnectionreuse", "chroot", "thread_number", "maybe_thread_options",
  "thread_option", "ipv6", "user1", "user2", "group1", "group2", "handler",
  "http_generic", "handler_option", "str_type", "@4", "address_or_path",
  "handler_server_optinal", "handler_server_optinal_entry", "host_name",
  "server", "@5", "extension", "@6", "directory", "@7", "request", "@8",
  "directory_option", "@9", "auth_option", "maybe_auth_option_params",
  "auth_option_params", "auth_option_param", "userdir", "@10",
  "directoryindex", "maybe_handlererror_options", "errorhandler", "@11", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    95,    96,
      97,    98,    99,   100,   102,   101,   103,   103,   104,   104,
     105,   106,   107,   109,   108,   110,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   118,   120,   120,   121,   121,
     122,   123,   124,   125,   126,   126,   127,   128,   129,   130,
     131,   131,   132,   133,   134,   135,   136,   137,   138,   138,
     139,   139,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   140,   140,   140,   140,   140,   140,
     140,   140,   142,   140,   143,   143,   144,   144,   145,   145,
     140,   140,   146,   146,   146,   148,   147,   150,   149,   152,
     151,   154,   153,   155,   155,   156,   155,   155,   155,   157,
     157,   157,   158,   158,   159,   159,   160,   162,   161,   163,
     164,   164,   166,   165
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     0,     4,     0,     3,     0,     2,
       2,     2,     2,     0,     6,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     4,     3,     0,     2,     2,
       2,     2,     2,     4,     2,     2,     2,     2,     2,     3,
       3,     0,     2,     2,     2,     2,     2,     2,     5,     2,
       1,     1,     4,     3,     3,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     2,     3,
       2,     1,     0,     4,     1,     1,     0,     3,     3,     2,
       2,     2,     1,     1,     1,     0,     6,     0,     6,     0,
       6,     0,     6,     1,     2,     0,     6,     3,     1,     2,
       2,     3,     3,     0,     0,     2,     2,     0,     6,     2,
       0,     3,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
       9,     8,    11,    12,    13,    29,    30,    40,    42,    14,
      15,    16,    17,    18,    19,    20,    44,    45,    46,    43,
      21,    31,    32,    33,    34,    35,    26,    27,    28,    22,
      23,    24,    25,    10,    37,    36,    38,    47,    41,    39,
     121,    64,   102,   101,   100,   192,    98,    99,    65,    66,
      67,    83,    84,    92,     0,   125,   124,   127,   126,   162,
     163,   164,     0,    72,   187,   110,    80,    91,   104,    68,
     189,    97,   103,    81,   111,   112,    52,   116,   118,   117,
      82,    70,     0,   123,     0,     0,    78,    79,     1,     5,
      58,   119,   190,    86,   169,   165,     0,     0,   107,     0,
       0,     0,   167,   171,    93,     0,    54,   193,    88,    85,
      50,     0,    73,    62,    56,   105,    69,     0,     0,   113,
      53,    71,    50,    50,     0,     0,   120,    59,     0,     0,
       0,     0,     6,     0,     0,   114,   115,     0,     0,     0,
       0,     0,   122,     0,     0,     0,     0,     0,   151,     0,
       0,     0,     0,     0,   191,    55,     0,    87,    89,     0,
       0,     0,     0,   178,   170,   173,    51,   166,     7,   188,
      63,     0,     0,   106,    57,   168,   172,    96,    95,    94,
     146,   136,   154,   155,   152,   137,   150,   148,     0,     0,
     161,   135,     0,   130,   131,   160,   145,   141,   138,   142,
     143,   140,   139,   144,    90,   174,   129,     0,     0,   109,
     108,   156,   147,   134,   133,   149,    54,    75,    74,    76,
     177,   175,    48,   153,   132,     0,     0,    60,     0,   128,
      77,     0,     0,     0,   157,    49,     0,     0,     0,   176,
      61,     0,   159,   180,   179,   183,   158,   184,   181,     0,
       0,   182,   185,   186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,   171,    39,    40,    41,   268,   170,   140,
     168,   174,   145,   271,   173,    90,   109,   110,   122,   102,
     259,   260,    42,    43,    44,    45,    46,    47,    48,   133,
     149,   169,   198,    49,    50,    51,   164,   181,    52,    53,
      54,    55,    56,    57,    58,    59,   138,   155,   214,    60,
      61,    62,    63,   160,    64,    65,    66,    67,   131,   167,
      68,    69,    70,    71,    72,   205,   235,   195,   243,   251,
     224,   263,   275,   103,    73,   151,    74,   162,    75,   150,
      76,   163,   206,   267,   280,   288,   289,   292,    77,   137,
      78,   147,    79,   132
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -227
static const yytype_int16 yypact[] =
{
     193,   -53,   -40,   -40,   -25,   -24,    -9,    37,    21,    53,
     -40,   -40,    29,    35,    43,    56,   -40,    43,    61,    67,
      21,   -40,   -40,    69,   -40,    75,    63,    81,   -40,    85,
      78,    86,    92,    98,    90,    95,   110,   168,   193,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
     100,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,   103,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,   104,   106,  -227,  -227,  -227,  -227,  -227,   107,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,   108,   109,  -227,   111,   114,  -227,  -227,  -227,  -227,
    -227,  -227,   115,   116,  -227,  -227,    43,   117,   119,    21,
     -31,    86,  -227,  -227,  -227,    -6,  -227,  -227,  -227,  -227,
    -227,   118,  -227,  -227,  -227,  -227,  -227,   122,   124,  -227,
    -227,  -227,  -227,  -227,    57,   127,  -227,  -227,     7,   -55,
      64,    24,  -227,   -10,    -1,  -227,  -227,    72,    88,    86,
     135,   101,  -227,   136,   138,     6,    -3,    21,  -227,    79,
     149,   134,    83,    93,  -227,  -227,   -40,  -227,  -227,   -40,
     150,   185,    86,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,    86,    86,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,   165,   163,
    -227,   164,   102,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,   154,    40,   156,  -227,
    -227,   157,  -227,   172,  -227,  -227,  -227,  -227,  -227,   166,
    -227,  -227,  -227,  -227,  -227,    50,    40,  -227,   -19,  -227,
    -227,    -7,   173,   102,  -227,  -227,    86,   178,   180,  -227,
    -227,   102,  -227,  -227,  -227,   169,  -227,  -227,  -227,    -4,
     -40,  -227,  -227,  -227
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,  -227,  -227,  -227,   208,  -227,  -136,  -227,   -42,  -227,
       0,  -227,  -227,  -227,  -227,    -2,   241,  -110,  -139,   121,
    -227,   -16,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -226,  -227,
    -227,  -227,  -227,   236,  -227,  -227,  -227,  -227,    82,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      82,    83,   161,   211,    80,    11,   255,   196,    93,    94,
     276,   157,   158,   165,   105,   172,   183,   197,   184,   111,
     112,    81,   114,   277,   278,   212,   118,   185,   290,   156,
       2,     3,    84,     5,   272,   208,     8,     9,    85,    11,
     217,   159,   186,   273,   187,    15,   188,   282,    86,    19,
     230,    20,   189,   274,   225,   286,   190,    22,    81,   183,
     191,   184,   209,   248,   192,   279,   166,    81,   291,   193,
     185,   213,   249,   250,   222,    31,   199,   227,    33,   194,
     200,    88,    81,    89,   199,   186,    95,   187,   200,   188,
     201,    96,    97,   202,    87,   189,   207,    98,   201,   190,
     199,   202,   257,   191,   200,    99,   258,   192,   179,   100,
     101,   203,   193,   180,   201,    92,   228,   202,   104,   203,
     177,   178,   269,   107,     2,     3,   113,     5,   229,   108,
       8,     9,   115,    11,   116,   203,   204,   283,   117,    15,
     120,   121,   119,    19,   215,    20,   233,   234,   121,   123,
     236,    22,   126,   237,    81,   238,   239,   240,   124,   125,
     216,   241,   237,    81,   238,   239,   240,   127,   128,    31,
     241,   130,    33,   219,   134,   135,   136,   139,   141,   175,
     142,   176,   143,   223,   226,   144,   146,   148,   153,   182,
     154,   242,   218,   220,   244,   221,   232,   245,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   231,
      12,    13,   246,    14,    15,    16,    17,    18,    19,   247,
      20,    21,   252,   253,   254,   256,    22,   261,   262,    23,
     242,    24,   264,    25,    26,   281,   266,    27,   284,    28,
     287,    29,   285,    30,    31,    32,   129,    33,    34,    91,
     270,    35,    36,   106,     0,   210,   265,   152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,     0,     0,     0,     0,   293
};

static const yytype_int16 yycheck[] =
{
       2,     3,   141,     4,    57,    15,   232,    62,    10,    11,
      17,    42,    43,    19,    16,   151,     9,    72,    11,    21,
      22,    61,    24,    30,    31,    26,    28,    20,    32,   139,
       6,     7,    57,     9,    53,   171,    12,    13,    62,    15,
     179,    72,    35,    62,    37,    21,    39,   273,    57,    25,
     189,    27,    45,    72,    57,   281,    49,    33,    61,     9,
      53,    11,    72,   202,    57,    72,    72,    61,    72,    62,
      20,    72,   211,   212,    68,    51,    12,   187,    54,    72,
      16,    60,    61,    62,    12,    35,    57,    37,    16,    39,
      26,    62,    57,    29,    57,    45,    72,    62,    26,    49,
      12,    29,    62,    53,    16,    62,    66,    57,    51,    66,
      67,    47,    62,    56,    26,    62,    37,    29,    62,    47,
     162,   163,    72,    62,     6,     7,    57,     9,    49,    62,
      12,    13,    57,    15,    71,    47,    72,   276,    57,    21,
      62,    62,    57,    25,    72,    27,    63,    64,    62,    57,
      57,    33,    57,    60,    61,    62,    63,    64,    60,    69,
      72,    68,    60,    61,    62,    63,    64,    57,     0,    51,
      68,    71,    54,    72,    71,    71,    70,    70,    70,    57,
      71,    57,    71,   185,   186,    71,    71,    71,    71,    62,
      71,   193,    57,    57,   196,    57,    62,   199,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    60,
      17,    18,    62,    20,    21,    22,    23,    24,    25,    34,
      27,    28,    57,    60,    60,    71,    33,    71,    71,    36,
     232,    38,    60,    40,    41,    62,    70,    44,    60,    46,
      71,    48,    62,    50,    51,    52,    38,    54,    55,     8,
     266,    58,    59,    17,    -1,   173,   256,   136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    17,    18,    20,    21,    22,    23,    24,    25,
      27,    28,    33,    36,    38,    40,    41,    44,    46,    48,
      50,    51,    52,    54,    55,    58,    59,    74,    75,    77,
      78,    79,    95,    96,    97,    98,    99,   100,   101,   106,
     107,   108,   111,   112,   113,   114,   115,   116,   117,   118,
     122,   123,   124,   125,   127,   128,   129,   130,   133,   134,
     135,   136,   137,   147,   149,   151,   153,   161,   163,   165,
      57,    61,    88,    88,    57,    62,    57,    57,    60,    62,
      88,    89,    62,    88,    88,    57,    62,    57,    62,    62,
      66,    67,    92,   146,    62,    88,   146,    62,    62,    89,
      90,    88,    88,    57,    88,    57,    71,    57,    88,    57,
      62,    62,    91,    57,    60,    69,    57,    57,     0,    77,
      71,   131,   166,   102,    71,    71,    70,   162,   119,    70,
      82,    70,    71,    71,    71,    85,    71,   164,    71,   103,
     152,   148,    92,    71,    71,   120,    90,    42,    43,    72,
     126,    91,   150,   154,   109,    19,    72,   132,    83,   104,
      81,    76,    79,    87,    84,    57,    57,    81,    81,    51,
      56,   110,    62,     9,    11,    20,    35,    37,    39,    45,
      49,    53,    57,    62,    72,   140,    62,    72,   105,    12,
      16,    26,    29,    47,    72,   138,   155,    72,    79,    72,
     151,     4,    26,    72,   121,    72,    72,    91,    57,    72,
      57,    57,    68,    88,   143,    57,    88,    90,    37,    49,
      91,    60,    62,    63,    64,   139,    57,    60,    62,    63,
      64,    68,    88,   141,    88,    88,    62,    34,    91,    91,
      91,   142,    57,    60,    60,   141,    71,    62,    66,    93,
      94,    71,    71,   144,    60,    83,    70,   156,    80,    72,
      94,    86,    53,    62,    72,   145,    17,    30,    31,    72,
     157,    62,   141,    91,    60,    62,   141,    71,   158,   159,
      32,    72,   160,    88
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 64:

    {
	   (yyval.string) = fix_win32_path((yyvsp[(1) - (1)].string));
}
    break;

  case 65:

    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 66:

    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 67:

    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 68:

    {
	   linked_list_t *n = (linked_list_t *) malloc(sizeof(linked_list_t));
	   n->next = NULL;
	   n->string = (yyvsp[(1) - (1)].string);
	   
	   (yyval.list) = n;
}
    break;

  case 69:

    {
	   linked_list_t *n = (linked_list_t *) malloc(sizeof(linked_list_t));
	   n->next = (yyvsp[(3) - (3)].list);
	   n->string = (yyvsp[(1) - (3)].string);

	   (yyval.list) = n;
}
    break;

  case 70:

    {
	   linked_list_t *n = (linked_list_t *) malloc(sizeof(linked_list_t));
	   n->next = NULL;
	   n->string = (yyvsp[(1) - (1)].string);
	   
	   (yyval.list) = n;
}
    break;

  case 71:

    {
	   linked_list_t *n = (linked_list_t *) malloc(sizeof(linked_list_t));
	   n->next = (yyvsp[(3) - (3)].list);
	   n->string = (yyvsp[(1) - (3)].string);

	   (yyval.list) = n;
}
    break;

  case 72:

    {
	   linked_list_t *n = (linked_list_t *) malloc(sizeof(linked_list_t));
	   n->next = NULL;
	   n->string = (yyvsp[(1) - (1)].string);
	   
	   (yyval.list) = n;
}
    break;

  case 73:

    {
	   linked_list_t *n = (linked_list_t *) malloc(sizeof(linked_list_t));
	   n->next = (yyvsp[(3) - (3)].list);
	   n->string = (yyvsp[(1) - (3)].string);

	   (yyval.list) = n;
}
    break;

  case 76:

    {
	   linked_list_t *n = (linked_list_t *) malloc (sizeof(linked_list_t));
	   n->next   = NULL;
	   n->string = (yyvsp[(1) - (1)].string);

	   (yyval.list) = n;
}
    break;

  case 77:

    {
	   linked_list_t *n = (linked_list_t *) malloc (sizeof(linked_list_t));
	   n->next   = (yyvsp[(3) - (3)].list);
	   n->string = (yyvsp[(1) - (3)].string);

	   (yyval.list) = n;
}
    break;

  case 78:

    {
	   if (((yyvsp[(2) - (2)].number) < 0) || ((yyvsp[(2) - (2)].number) > 65535)) {
			 PRINT_ERROR ("Invalid port %d\n", (yyvsp[(2) - (2)].number));
			 return 1;
	   }

	   SRV(server)->port = (yyvsp[(2) - (2)].number);
}
    break;

  case 79:

    {
	   if (((yyvsp[(2) - (2)].number) < 0) || ((yyvsp[(2) - (2)].number) > 65535)) {
			 PRINT_ERROR ("Invalid port %d\n", (yyvsp[(2) - (2)].number));
			 return 1;
	   }

	   SRV(server)->port_tls = (yyvsp[(2) - (2)].number);
}
    break;

  case 80:

    {
	   SRV(server)->listen_to = (yyvsp[(2) - (2)].string);
}
    break;

  case 81:

    {
	   SRV(server)->log_flush_elapse = (yyvsp[(2) - (2)].number);
}
    break;

  case 82:

    {
	   if (strcmp((yyvsp[(2) - (2)].string), "epoll") == 0) {
			 SRV(server)->fdpoll_method = cherokee_poll_epoll;
	   } else if (strcmp((yyvsp[(2) - (2)].string), "port") == 0) {
			 SRV(server)->fdpoll_method = cherokee_poll_port;
	   } else if (strcmp((yyvsp[(2) - (2)].string), "kqueue") == 0) {
			 SRV(server)->fdpoll_method = cherokee_poll_kqueue;
	   } else if (strcmp((yyvsp[(2) - (2)].string), "poll") == 0) {
			 SRV(server)->fdpoll_method = cherokee_poll_poll;
	   } else if (strcmp((yyvsp[(2) - (2)].string), "win32") == 0) {
			 SRV(server)->fdpoll_method = cherokee_poll_win32;
	   } else if (strcmp((yyvsp[(2) - (2)].string), "select") == 0) {
			 SRV(server)->fdpoll_method = cherokee_poll_select;
	   } else {
			 PRINT_MSG ("ERROR: Unknown polling method '%s'\n", (yyvsp[(2) - (2)].string));
			 return 1;
	   }
}
    break;

  case 83:

    {
	   char                      *root;
	   int                        root_len;
	   cherokee_virtual_server_t *vserver;

	   vserver = auto_virtual_server;

	   /* It might need to fix the path
	    */
	   fix_win32_path((yyvsp[(2) - (2)].string));

	   root     = (yyvsp[(2) - (2)].string);
	   root_len = strlen((yyvsp[(2) - (2)].string));

	   /* Check for the endding slash
	    */
	   root = make_finish_with_slash (root, &root_len);

	   /* Add the virtual root path to the virtual server struct
	    */
	   cherokee_buffer_add (vserver->root, root, root_len);
}
    break;

  case 84:

    {
	   ret_t ret;

	   /* Maybe load the module
	    */
	   ret = cherokee_module_loader_load (&SRV(server)->loader, (yyvsp[(2) - (2)].string));
	   if (ret < ret_ok) {
			 PRINT_MSG ("ERROR: Can't load logger module '%s'\n", (yyvsp[(2) - (2)].string));
			 return 1;
	   }

	   cherokee_module_loader_get_info (&SRV(server)->loader, (yyvsp[(2) - (2)].string), &current_module_info);
}
    break;

  case 85:

    {
	   cherokee_virtual_server_t *vserver;
	   vserver = auto_virtual_server;

	   /* Instance the logger object
	    */
	   cherokee_logger_table_new_logger (SRV(server)->loggers, (yyvsp[(2) - (4)].string), current_module_info,
								  vserver->logger_props, &vserver->logger);
	   current_module_info = NULL;
}
    break;

  case 90:

    {
	   cherokee_virtual_server_t *vserver;
	   vserver = auto_virtual_server;

	   if (vserver->logger_props == NULL) {
			 cherokee_table_new (&vserver->logger_props);
	   }

	   cherokee_typed_table_add_str (vserver->logger_props, (yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
}
    break;

  case 91:

    {
	   if (!strncasecmp("Product", (yyvsp[(2) - (2)].string), 7)) {
			 SRV(server)->server_token = cherokee_version_product;
	   } else if (!strncasecmp("Minor", (yyvsp[(2) - (2)].string), 5)) {
			 SRV(server)->server_token = cherokee_version_minor;
	   } else if (!strncasecmp("Minimal", (yyvsp[(2) - (2)].string), 7)) {
			 SRV(server)->server_token = cherokee_version_minimal;
	   } else if (!strncasecmp("OS", (yyvsp[(2) - (2)].string), 2)) {
			 SRV(server)->server_token = cherokee_version_os;
	   } else if (!strncasecmp("Full", (yyvsp[(2) - (2)].string), 4)) {
			 SRV(server)->server_token = cherokee_version_full;
	   } else {
			 PRINT_MSG ("ERROR: Unknown server token '%s'\n", (yyvsp[(2) - (2)].string));
			 return 1;
	   }
}
    break;

  case 92:

    {
	   ret_t ret;

	   if (SRV(server)->mime == NULL) {
			 ret = cherokee_mime_new (&SRV(server)->mime);
			 if (ret != ret_ok) {
				    PRINT_ERROR_S ("Can not get default MIME configuration file\n");
				    return 1;
			 }
	   }

	   ret = cherokee_mime_load_mime_types (SRV(server)->mime, (yyvsp[(2) - (2)].string));
	   if (ret < ret_ok) {
			 PRINT_ERROR ("Can not load MIME configuration file %s\n", (yyvsp[(2) - (2)].string));
			 return 1;
	   }
}
    break;

  case 93:

    {
	   ret_t                  ret;
	   cherokee_mime_entry_t *entry;

	   if (SRV(server)->mime == NULL) {
			 ret = cherokee_mime_new (&SRV(server)->mime);
			 if (ret != ret_ok) return 1;
	   }

	   ret = cherokee_mime_get_by_type (SRV(server)->mime, (yyvsp[(2) - (3)].string), &entry);
	   if (ret != ret_ok) {
			 cherokee_mime_entry_new (&entry);
			 cherokee_mime_add_entry (SRV(server)->mime, entry);
	   }

	   current_mime_entry = entry;
}
    break;

  case 94:

    {
	   current_mime_entry = NULL;
}
    break;

  case 95:

    {
	   cherokee_mime_entry_set_maxage (current_mime_entry, (yyvsp[(2) - (2)].number));
}
    break;

  case 96:

    {
	   ret_t          ret;
	   linked_list_t *i;

	   i = (yyvsp[(2) - (2)].list);
	   while (i != NULL) {			 
			 ret = cherokee_mime_set_by_suffix (SRV(server)->mime, i->string, current_mime_entry);
			 if (ret != ret_ok) return ret;

			 free (i->string);
			 i = i->next;
	   }
}
    break;

  case 97:

    {
	   SRV(server)->icons_file = (yyvsp[(2) - (2)].string);
}
    break;

  case 98:

    {
	   SRV(server)->timeout = (yyvsp[(2) - (2)].number);

	   cherokee_buffer_clean  (SRV(server)->timeout_header);
	   cherokee_buffer_add_va (SRV(server)->timeout_header, "Keep-Alive: timeout=%d"CRLF, (yyvsp[(2) - (2)].number));
}
    break;

  case 99:

    {
	   SRV(server)->keepalive = ((yyvsp[(2) - (2)].number) == 0) ? false : true;
}
    break;

  case 100:

    {
	   SRV(server)->keepalive_max = (yyvsp[(2) - (2)].number);
}
    break;

  case 101:

    {
#ifdef HAVE_TLS
	   cherokee_virtual_server_t *vsrv = auto_virtual_server;

	   if (vsrv->server_cert != NULL) {
			 PRINT_MSG ("ERROR: \"SSLCertificateFile\" overlaps: '%s' <- '%s'\n", vsrv->server_cert, (yyvsp[(2) - (2)].string));
			 free (vsrv->server_cert);
	   }

	   vsrv->server_cert = (yyvsp[(2) - (2)].string);

#else
	   PRINT_MSG_S ("WARNING: Ignoring SSL configuration entry: \"SSLCertificateFile\"\n");
#endif
}
    break;

  case 102:

    {
#ifdef HAVE_TLS
	   cherokee_virtual_server_t *vsrv = auto_virtual_server;

	   if (vsrv->server_key != NULL) {
			 PRINT_MSG ("ERROR: \"SSLCertificateKeyFile\" overlaps: '%s' <- '%s'\n", vsrv->server_key, (yyvsp[(2) - (2)].string));
			 free (vsrv->server_key);
	   }

	   vsrv->server_key = (yyvsp[(2) - (2)].string);

#else
	   PRINT_MSG_S ("WARNING: Ignoring SSL configuration entry: \"SSLCertificateKeyFile\"\n");
#endif
}
    break;

  case 103:

    {
#ifdef HAVE_TLS
	   cherokee_virtual_server_t *vsrv = auto_virtual_server;

	   if (vsrv->ca_cert != NULL) {
			 PRINT_MSG ("ERROR: \"SSLCAListFile\" overlaps: '%s' <- '%s'\n", vsrv->ca_cert, (yyvsp[(2) - (2)].string));
			 free (vsrv->ca_cert);
	   }

	   vsrv->ca_cert = (yyvsp[(2) - (2)].string);

#else
	   PRINT_MSG_S ("WARNING: Ignoring SSL configuration entry: \"SSLCAListFile\"\n");
#endif
}
    break;

  case 104:

    {
	   ret_t ret;
	   cherokee_module_info_t *info;
	   cherokee_encoder_table_entry_t *enc;

	   /* Load the module
	    */
	   ret = cherokee_module_loader_load (&SRV(server)->loader, (yyvsp[(2) - (2)].string));
	   if (ret < ret_ok) {
			 PRINT_MSG ("ERROR: Can't load encoder module '%s'\n", (yyvsp[(2) - (2)].string));
			 return 1;
	   }

	   cherokee_module_loader_get_info  (&SRV(server)->loader, (yyvsp[(2) - (2)].string), &info);

	   /* Set the info in the new entry
	    */
	   cherokee_encoder_table_entry_new (&enc);
	   cherokee_encoder_table_entry_get_info (enc, info);

	   /* Set in the encoders table
	    */
	   cherokee_encoder_table_set (SRV(server)->encoders, (yyvsp[(2) - (2)].string), enc);
	   current_encoder_entry = enc;
}
    break;

  case 105:

    {
	   current_encoder_entry = NULL;
}
    break;

  case 108:

    {
	   linked_list_t            *i;
	   cherokee_matching_list_t *matching;

	   cherokee_matching_list_new (&matching);
	   cherokee_encoder_entry_set_matching_list (current_encoder_entry, matching);

	   i = (yyvsp[(2) - (2)].list);
	   while (i!=NULL) {
			 linked_list_t *prev;

			 cherokee_matching_list_add_allow (matching, i->string);

			 free(i->string);
			 prev = i;
			 i = i->next;
			 free(prev);
	   }
}
    break;

  case 109:

    {
	   linked_list_t            *i;
	   cherokee_matching_list_t *matching;

	   cherokee_matching_list_new (&matching);
	   cherokee_encoder_entry_set_matching_list (current_encoder_entry, matching);

	   i = (yyvsp[(2) - (2)].list);
	   while (i!=NULL) {
			 linked_list_t *prev;

			 cherokee_matching_list_add_deny (matching, i->string);

			 free(i->string);
			 prev = i;
			 i = i->next;
			 free(prev);
	   }
}
    break;

  case 110:

    {
	   cherokee_buffer_clean (&SRV(server)->pidfile);
	   cherokee_buffer_add (&SRV(server)->pidfile, (yyvsp[(2) - (2)].string), strlen((yyvsp[(2) - (2)].string)));

	   free ((yyvsp[(2) - (2)].string));
}
    break;

  case 111:

    {
	   if (SRV(server)->panic_action != NULL) {
			 PRINT_MSG ("WARNING: Overwriting panic action '%s' by '%s'\n", SRV(server)->panic_action, (yyvsp[(2) - (2)].string));
			 free (SRV(server)->panic_action);
	   }

	   SRV(server)->panic_action = (yyvsp[(2) - (2)].string);
}
    break;

  case 112:

    {
	   SRV(server)->listen_queue = (yyvsp[(2) - (2)].number);
}
    break;

  case 114:

    {
	   SRV(server)->sendfile.min = (yyvsp[(2) - (2)].number);
}
    break;

  case 115:

    {
	   SRV(server)->sendfile.max = (yyvsp[(2) - (2)].number);
}
    break;

  case 116:

    {
	   SRV(server)->max_fds = (yyvsp[(2) - (2)].number);
}
    break;

  case 117:

    {
	   SRV(server)->max_conn_reuse = (yyvsp[(2) - (2)].number);
}
    break;

  case 118:

    {
	   SRV(server)->chroot = (yyvsp[(2) - (2)].string);
}
    break;

  case 119:

    {
#ifdef HAVE_PTHREAD
	   SRV(server)->thread_num = (yyvsp[(2) - (3)].number);
#endif
}
    break;

  case 122:

    {
#ifdef HAVE_PTHREAD
	   if (strcasecmp((yyvsp[(2) - (2)].string), "fifo") == 0) {
			 SRV(server)->thread_policy = SCHED_FIFO;
	   } else if (strcasecmp((yyvsp[(2) - (2)].string), "rr") == 0) {
			 SRV(server)->thread_policy = SCHED_RR;
	   } else if (strcasecmp((yyvsp[(2) - (2)].string), "other") == 0) {
			 SRV(server)->thread_policy = SCHED_OTHER;
	   } else {
			 PRINT_MSG ("ERROR: unknown scheduling policy '%s'\n", (yyvsp[(2) - (2)].string));
	   }
#endif
}
    break;

  case 123:

    {
	   SRV(server)->ipv6 = (yyvsp[(2) - (2)].number);
}
    break;

  case 124:

    {
	   struct passwd *pwd;
	   
	   pwd = (struct passwd *) getpwnam ((yyvsp[(2) - (2)].string));
	   if (pwd == NULL) {
			 PRINT_MSG ("ERROR: User '%s' not found in the system", (yyvsp[(2) - (2)].string));
			 return 1;
	   }

	   SRV(server)->user = pwd->pw_uid;

	   free ((yyvsp[(2) - (2)].string));
}
    break;

  case 125:

    {
	   SRV(server)->user = (yyvsp[(2) - (2)].number);
}
    break;

  case 126:

    {
	   struct group *grp;

	   grp = (struct group *) getgrnam ((yyvsp[(2) - (2)].string));
	   if (grp == NULL) {
			 PRINT_MSG ("ERROR: Group '%s' not found in the system", (yyvsp[(2) - (2)].string));
			 return 1;
	   }

	   SRV(server)->group = grp->gr_gid;

	   free ((yyvsp[(2) - (2)].string));
}
    break;

  case 127:

    {
	   SRV(server)->group = (yyvsp[(2) - (2)].number);
}
    break;

  case 128:

    {
	   (yyval.name_ptr).name = (yyvsp[(2) - (5)].string);
	   (yyval.name_ptr).ptr = current_config_entry;
}
    break;

  case 129:

    {
	   (yyval.name_ptr).name = (yyvsp[(2) - (2)].string);
	   (yyval.name_ptr).ptr = current_config_entry;
}
    break;

  case 130:

    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 131:

    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 132:

    {
	   handler_redir_add_property (current_config_entry, (yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].string), 1);
}
    break;

  case 133:

    {
	   handler_redir_add_property (current_config_entry, (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].string), 0);
}
    break;

  case 134:

    {
	   handler_redir_add_property_simple (current_config_entry, (yyvsp[(3) - (3)].string), 1);
}
    break;

  case 135:

    {
	   handler_redir_add_property_simple (current_config_entry, (yyvsp[(2) - (2)].string), 0);
}
    break;

  case 136:

    {
	   cherokee_config_entry_set_handler_prop (current_config_entry, "nkeepalive", typed_int, INT_TO_POINTER((yyvsp[(2) - (2)].number)), NULL);	   
}
    break;

  case 137:

    {
	   cherokee_config_entry_set_handler_prop (current_config_entry, "nsocket", typed_int, INT_TO_POINTER((yyvsp[(2) - (2)].number)), NULL);	   
}
    break;

  case 143:

    { 
	   (yyval.string) = (yyvsp[(1) - (1)].string); 
}
    break;

  case 144:

    {
	   if (!strcasecmp ((yyvsp[(1) - (2)].string), "bgcolor")) {
			 dirs_table_set_handler_prop (current_config_entry, "bgcolor", (yyvsp[(2) - (2)].string));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "background")) {
			 dirs_table_set_handler_prop (current_config_entry, "background", (yyvsp[(2) - (2)].string));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "text")) {
			 dirs_table_set_handler_prop (current_config_entry, "text", (yyvsp[(2) - (2)].string));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "link")) {
			 dirs_table_set_handler_prop (current_config_entry, "link", (yyvsp[(2) - (2)].string));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "vlink")) {
			 dirs_table_set_handler_prop (current_config_entry, "vlink", (yyvsp[(2) - (2)].string));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "alink")) {
			 dirs_table_set_handler_prop (current_config_entry, "alink", (yyvsp[(2) - (2)].string));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "interpreter")) {
			 dirs_table_set_handler_prop (current_config_entry, "interpreter", fix_win32_path((yyvsp[(2) - (2)].string)));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "scriptalias")) {
			 dirs_table_set_handler_prop (current_config_entry, "scriptalias", fix_win32_path((yyvsp[(2) - (2)].string)));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "url")) {
			 dirs_table_set_handler_prop (current_config_entry, "url", (yyvsp[(2) - (2)].string));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "filedir")) {
			 dirs_table_set_handler_prop (current_config_entry, "filedir", fix_win32_path((yyvsp[(2) - (2)].string)));
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "changeuser")) {
			 cherokee_config_entry_set_handler_prop (current_config_entry, "changeuser", typed_int, INT_TO_POINTER((yyvsp[(2) - (2)].string)), NULL);
	   } else {
			 return 1;
	   }
}
    break;

  case 145:

    {
	   if (!strcasecmp ((yyvsp[(1) - (2)].string), "changeuser")) {
			 cherokee_config_entry_set_handler_prop (current_config_entry, "changeuser", typed_int, INT_TO_POINTER((yyvsp[(2) - (2)].number)), NULL);
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "iocache")) {
			 cherokee_config_entry_set_handler_prop (current_config_entry, "cache", typed_int, INT_TO_POINTER((yyvsp[(2) - (2)].number)), NULL);
	   } else if (!strcasecmp ((yyvsp[(1) - (2)].string), "checkfile")) {
			 cherokee_config_entry_set_handler_prop (current_config_entry, "checkfile", typed_int, INT_TO_POINTER((yyvsp[(2) - (2)].number)), NULL);
	   } else {
			 return 1;
	   } 
}
    break;

  case 146:

    {
	   cherokee_config_entry_set_handler_prop (current_config_entry, "errorhandler", typed_int, INT_TO_POINTER((yyvsp[(2) - (2)].number)), NULL);
}
    break;

  case 147:

    {
	   cherokee_config_entry_set_handler_prop (current_config_entry, "show_headerfile", typed_int, INT_TO_POINTER((yyvsp[(3) - (3)].number)), NULL);
}
    break;

  case 148:

    {
	   linked_list_t *i;
	   list_t         nlist = LIST_HEAD_INIT(nlist);

	   i = (yyvsp[(2) - (2)].list);
	   while (i!=NULL) {
			 linked_list_t *prev;

			 cherokee_list_add_tail (&nlist, i->string);

			 prev = i;
			 i = i->next;
			 free(prev);
	   }	   

	   cherokee_config_entry_set_handler_prop (current_config_entry, "headerfile", typed_list, &nlist, 
									   (cherokee_typed_free_func_t) cherokee_list_free_item_simple);
}
    break;

  case 149:

    {
	   int re;

	   re = add_key_val_entry_in_property (current_config_entry->handler_properties, "env", (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].string));
	   if (re != 0) return re;
}
    break;

  case 150:

    { dirs_table_set_handler_prop (current_config_entry, "socket", (yyvsp[(2) - (2)].string)); }
    break;

  case 151:

    { cherokee_config_entry_set_handler_prop (current_config_entry, "about", typed_int, INT_TO_POINTER(1), NULL); }
    break;

  case 152:

    { 
	   ret_t                  ret;
	   list_t                 nlist        = LIST_HEAD_INIT(nlist);
	   list_t                *plist        = NULL;
	   cherokee_table_t      *properties;
	   cherokee_ext_source_t *server_entry = NULL;
	   
	   /* Add the new entry to the list
	    */
	   properties = current_config_entry->handler_properties;

	   if (properties != NULL) {
			 cherokee_typed_table_get_list (properties, "servers", &plist);
	   }

	   /* The list is new
	    */
	   if (plist == NULL) {
			 cherokee_ext_source_head_t *head = NULL;
			 
			 ret = cherokee_ext_source_head_new (&head);
			 if (ret != ret_ok) return 1;

			 server_entry = EXT_SOURCE(head);

			 list_add ((list_t *)server_entry, &nlist);
			 cherokee_config_entry_set_handler_prop (current_config_entry, "servers", typed_list, &nlist, 
											 (cherokee_typed_free_func_t) cherokee_ext_source_free);
	   } 
	   /* Add to an existing list
	    */
	   else {
			 cherokee_ext_source_new (&server_entry);
			 list_add_tail ((list_t *)server_entry, plist);
	   }

	   current_ext_source = server_entry;
	   split_address_or_path ((yyvsp[(2) - (2)].string), &server_entry->host, &server_entry->port,
						 &server_entry->unix_socket, &server_entry->original_server);

}
    break;

  case 154:

    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 155:

    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 158:

    {
	   ret_t ret;

	   ret = cherokee_ext_source_add_env (current_ext_source, (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].string));
	   if (ret != ret_ok) return 1;
}
    break;

  case 159:

    {
	   if (strcasecmp((yyvsp[(1) - (2)].string), "interpreter") == 0) {
			 fix_win32_path((yyvsp[(2) - (2)].string));
			 cherokee_buffer_add (&current_ext_source->interpreter, (yyvsp[(2) - (2)].string), strlen((yyvsp[(2) - (2)].string)));
	   } else {
			 return 1;
	   }
}
    break;

  case 160:

    {
	   char code[4];

	   if (((yyvsp[(1) - (2)].number) < 100) || ((yyvsp[(1) - (2)].number) >= http_type_500_max)) {
			 PRINT_MSG ("ERROR: Incorrect HTTP code number %d\n", (yyvsp[(1) - (2)].number));
			 return 1;
	   }

	   snprintf (code, 4, "%d", (yyvsp[(1) - (2)].number));
	   dirs_table_set_handler_prop (current_config_entry, code, (yyvsp[(2) - (2)].string));
}
    break;

  case 161:

    {
	   linked_list_t *i;

	   i = (yyvsp[(2) - (2)].list);
	   while (i != NULL) {
			 if ((!strncasecmp (i->string, "date",  4)) ||
				(!strncasecmp (i->string, "size",  4)) ||
				(!strncasecmp (i->string, "group", 5)) ||
				(!strncasecmp (i->string, "owner", 5)))
			 {
				    char *lower;

				    lower = new_string_to_lowercase (i->string);
				    free (i->string);
				    i->string = lower;

				    cherokee_config_entry_set_handler_prop (current_config_entry, 
													   i->string, typed_int, INT_TO_POINTER(1), NULL);
			 } else {
				    PRINT_MSG ("ERROR: Unknown parameter '%s' for \"Show\"", i->string);
			 }
				
			 i = i->next;
	   }

	   free_linked_list ((yyvsp[(2) - (2)].list), free);
}
    break;

  case 164:

    {
	   (yyval.string) = (yyvsp[(1) - (1)].string);
}
    break;

  case 165:

    {
	   linked_list_t *i = (yyvsp[(2) - (3)].list);
	   CHEROKEE_NEW(vsrv, virtual_server);

	   current_virtual_server = vsrv;
	   current_dirs_table     = &vsrv->dirs;

	   /* Add the virtual server to the list
	    */
	   list_add ((list_t *)vsrv, &SRV(server)->vservers);

	   /* Add default virtual server name
	    */
	   if (i->string != NULL) {
			 cherokee_buffer_t *name = current_virtual_server->name;

			 if (cherokee_buffer_is_empty (name)) {
				    cherokee_buffer_add_va (name, "%s", i->string);
			 }
	   }

	   /* Add all the alias to the table
	    */
	   while (i != NULL) {
			 cherokee_table_add (SRV(server)->vservers_ref, i->string, vsrv);
			 i = i->next;
	   }
	   free_linked_list ((yyvsp[(2) - (3)].list), NULL);

}
    break;

  case 166:

    {

	   current_virtual_server = NULL;
	   current_dirs_table  = NULL;
}
    break;

  case 167:

    {
	   /* Fill the tmp struct
	    */
	   extension_content_tmp.exts_list      = (yyvsp[(2) - (3)].list);
	   extension_content_tmp.vserver        = auto_virtual_server;
	   extension_content_tmp.entry          = config_entry_new (); /* new! */
	   extension_content_tmp.handler_name   = NULL;
	   extension_content_tmp.document_root  = NULL;

	   /* Extensions table is created under demand
	    */
	   if (extension_content_tmp.vserver->exts == NULL) {
			 ret_t ret;

			 ret = cherokee_exts_table_new (&extension_content_tmp.vserver->exts);
			 if (unlikely (ret != ret_ok)) {
				    PRINT_MSG_S ("ERROR: Couldn't instance a new exts table object\n");
				    return 1;
			 }
	   }
	   extension_content_tmp.exts = extension_content_tmp.vserver->exts;
}
    break;

  case 168:

    {
	   ret_t                   ret;
	   linked_list_t          *i;
	   cherokee_module_info_t *info;

	   /* Does this directory have a handler
	    */
	   if (extension_content_tmp.handler_name != NULL) {
			 int re;
			 re = load_module (&SRV(server)->loader, extension_content_tmp.handler_name, &info);
			 if (re != 0) return 1;
	   
			 cherokee_config_entry_set_handler (extension_content_tmp.entry, info);	   
	   }

	   /* Add "web_dir -> entry" in the dirs table
	    */
	   i = extension_content_tmp.exts_list;
	   while (i != NULL) {
			 ret = cherokee_exts_table_has (extension_content_tmp.exts, i->string);
			 if (ret != ret_not_found) {
				    PRINT_MSG ("ERROR: Extension '%s' was already set\n", i->string);
				    return 1;
			 }

			 ret = cherokee_exts_table_add (extension_content_tmp.exts,
									  i->string,
									  extension_content_tmp.entry);
			 if (ret != ret_ok) {
				    switch (ret) {
				    case ret_file_not_found:
						  PRINT_MSG ("ERROR: Can't load handler '%s': File not found\n",
								   extension_content_tmp.handler_name);
						  break;
				    default:
						  PRINT_MSG ("ERROR: Can't load handler '%s': Unknown error\n",
								   extension_content_tmp.handler_name);
				    }
			 }

			 i = i->next;
	   }

	   /* Clean
	    */
	   if (extension_content_tmp.document_root != NULL) {
			 free (extension_content_tmp.document_root);
			 extension_content_tmp.document_root = NULL;
	   }

	   extension_content_tmp.vserver       = NULL;
	   extension_content_tmp.exts          = NULL;
	   extension_content_tmp.entry         = NULL;
	   extension_content_tmp.handler_name  = NULL;

	   free_linked_list (extension_content_tmp.exts_list, free);
	   extension_content_tmp.exts_list = NULL;

	   current_config_entry = NULL;
}
    break;

  case 169:

    {
	   /* Fill the tmp struct
	    */
	   directory_content_tmp.directory_name = remove_last_slash((yyvsp[(2) - (3)].string));
	   directory_content_tmp.vserver        = auto_virtual_server;
	   directory_content_tmp.dirs           = auto_dirs_table;
	   directory_content_tmp.entry          = config_entry_new (); /* new! */
	   directory_content_tmp.handler_name   = NULL;
	   directory_content_tmp.document_root  = NULL;
}
    break;

  case 170:

    {
	   ret_t                   ret;
	   cherokee_module_info_t *info;

	   /* Set the document_root in the entry
	    */
	   if (directory_content_tmp.document_root != NULL) {
			 if (directory_content_tmp.entry->document_root == NULL)
				    cherokee_buffer_new (&directory_content_tmp.entry->document_root);
			 else 
				    cherokee_buffer_clean (directory_content_tmp.entry->document_root);

			 cherokee_buffer_add_va (directory_content_tmp.entry->document_root, "%s",
								directory_content_tmp.document_root);
	   }

	   /* Does this directory have a handler
	    */
	   if (directory_content_tmp.handler_name != NULL) {
			 int re;
			 re = load_module (&SRV(server)->loader, directory_content_tmp.handler_name, &info);
			 if (re != 0) return 1;
	   
			 cherokee_config_entry_set_handler (directory_content_tmp.entry, info);	   
	   }
	   
	   /* The root directory is treated as a special case, it is the
	    * default handler.  All the rest are going to be added into
	    * the directory table object.
	    */
	   if (strcmp (directory_content_tmp.directory_name, "/") == 0) {
			 directory_content_tmp.vserver->default_handler = 
				    directory_content_tmp.entry;

			 directory_content_tmp.vserver->default_handler->priority = 
				    CHEROKEE_CONFIG_PRIORITY_DEFAULT;
	   } else {
			 ret = cherokee_dirs_table_add (directory_content_tmp.dirs,
									  directory_content_tmp.directory_name,
									  directory_content_tmp.entry);

			 if (ret != ret_ok) {
				    switch (ret) {
				    case ret_file_not_found:
						  PRINT_MSG ("ERROR: Can't load handler '%s': File not found\n",
								   directory_content_tmp.handler_name);
						  break;
				    default:
						  PRINT_MSG ("ERROR: Can't load handler '%s': Unknown error\n",
								   directory_content_tmp.handler_name);
				    }
			 }

			 cherokee_dirs_table_relink (directory_content_tmp.dirs);
	   }

	   /* Clean
	    */
	   if (directory_content_tmp.document_root != NULL) {
			 free (directory_content_tmp.document_root);
			 directory_content_tmp.document_root = NULL;
	   }
	   directory_content_tmp.vserver       = NULL;
	   directory_content_tmp.dirs          = NULL;
	   directory_content_tmp.entry         = NULL;
	   directory_content_tmp.handler_name  = NULL;

	   current_config_entry = NULL;
}
    break;

  case 171:

    {
	   /* Fill the tmp struct
	    */
	   request_content_tmp.vserver        = auto_virtual_server;
	   request_content_tmp.reqs           = auto_reqs_table;
	   request_content_tmp.entry          = reqs_list_entry_new (); /* new! */
	   request_content_tmp.handler_name   = NULL;
	   request_content_tmp.document_root  = NULL;
	   
	   cherokee_buffer_add (&(request_content_tmp.entry->request), (yyvsp[(2) - (3)].string), strlen((yyvsp[(2) - (3)].string)));
}
    break;

  case 172:

    {
	   ret_t                   ret;
	   cherokee_module_info_t *info;

	   /* Does this directory have a handler
	    */
	   if (request_content_tmp.handler_name != NULL) {
			 int re;
			 re = load_module (&SRV(server)->loader, request_content_tmp.handler_name, &info);
			 if (re != 0) return 1;
	   
			 cherokee_config_entry_set_handler ((cherokee_config_entry_t *)request_content_tmp.entry, info);	   
	   }

	   /* Add the new entry
	    */
	   ret = cherokee_reqs_list_add (request_content_tmp.reqs, request_content_tmp.entry, SRV(server)->regexs);
	   if (ret != ret_ok) return 1;

	   /* Clean
	    */
	   if (request_content_tmp.document_root != NULL) {
			 free (request_content_tmp.document_root);
			 request_content_tmp.document_root = NULL;
	   }

	   request_content_tmp.vserver       = NULL;
	   request_content_tmp.reqs          = NULL;
	   request_content_tmp.entry         = NULL;
	   request_content_tmp.handler_name  = NULL;
}
    break;

  case 173:

    {	   
	   directory_content_tmp.handler_name = (yyvsp[(1) - (1)].name_ptr).name;
	   extension_content_tmp.handler_name = (yyvsp[(1) - (1)].name_ptr).name;
	   request_content_tmp.handler_name   = (yyvsp[(1) - (1)].name_ptr).name;
}
    break;

  case 174:

    {
	   if (directory_content_tmp.document_root != NULL) {
			 PRINT_MSG ("WARNING: Overwriting DocumentRoot '%s' by '%s'\n",
					  directory_content_tmp.document_root, (yyvsp[(2) - (2)].string));

			 free (directory_content_tmp.document_root);
	   }

	   directory_content_tmp.document_root = make_slash_end ((yyvsp[(2) - (2)].string));
}
    break;

  case 175:

    {
	   linked_list_t               *i = (yyvsp[(2) - (3)].list);
	   cherokee_config_entry_t *entry = current_config_entry;

	   while (i != NULL) {
			 if (strncasecmp(i->string, "basic", 5) == 0) {
				    entry->authentication |= http_auth_basic;
			 } 
			 else if (strncasecmp(i->string, "digest", 6) == 0) {
				    entry->authentication |= http_auth_digest;			 
			 }
			 else {
				    PRINT_MSG ("ERROR: Unknown authentication type '%s'\n", i->string);
				    return 1;
			 }

			 i = i->next;
	   }

	   free_linked_list ((yyvsp[(2) - (3)].list), free);
}
    break;

  case 177:

    {
	   ret_t ret;
	   linked_list_t *i, *prev;
	   CHEROKEE_NEW(n, access);

	   i = (yyvsp[(3) - (3)].list);
	   while (i != NULL) {
			 ret = cherokee_access_add (n, i->string);
			 if (ret != ret_ok) return 1;

			 free (i->string);
			 prev = i;
			 i = i->next;
			 free (prev);
	   }

	   current_config_entry->access = n;
}
    break;

  case 178:

    {
#ifndef HAVE_TLS
	   PRINT_MSG_S ("WARNING: Ignoring SSL configuration entry: \"OnlySecure\"\n");
#endif

	   current_config_entry->only_secure = true;
}
    break;

  case 179:

    {
	   cherokee_buffer_t *realm;

	   if (current_config_entry->auth_realm == NULL) 
			 cherokee_buffer_new (&current_config_entry->auth_realm);

	   realm = current_config_entry->auth_realm;


	   cherokee_buffer_add (realm, (yyvsp[(2) - (2)].string), strlen((yyvsp[(2) - (2)].string)));
	   free ((yyvsp[(2) - (2)].string));
}
    break;

  case 180:

    {
	   linked_list_t *i;

	   if (current_config_entry->users == NULL) {
			 cherokee_table_new (&current_config_entry->users);
	   }

	   i = (yyvsp[(2) - (2)].list);
	   while (i!=NULL) {
			 linked_list_t *prev;

			 cherokee_table_add (current_config_entry->users, i->string, NULL);

			 free(i->string);
			 prev = i;
			 i = i->next;
			 free(prev);
	   }	   
}
    break;

  case 181:

    {
	   ret_t ret;
	   cherokee_module_info_t           *info;
	   cherokee_module_info_validator_t *vinfo;
	   cherokee_config_entry_t          *entry = current_config_entry;

	   /* Load the module
	    */
	   ret = cherokee_module_loader_load (&SRV(server)->loader, (yyvsp[(2) - (3)].string));
	   if (ret != ret_ok) {
			 PRINT_MSG ("ERROR: Can't load validator module '%s'\n", (yyvsp[(2) - (3)].string));
			 return 1;
	   }

	   cherokee_module_loader_get_info  (&SRV(server)->loader, (yyvsp[(2) - (3)].string), &info);

	   if (info->type != cherokee_validator) {
			 PRINT_MSG ("ERROR: %s is not a validator module!!\n", (yyvsp[(2) - (3)].string));
	   }

	   vinfo = (cherokee_module_info_validator_t *)info;
	   
	   /* Check that the method is supported
	    */
	   if ((entry->authentication & vinfo->valid_methods) != entry->authentication) {
			 PRINT_MSG ("ERROR: The module %s doesn't support all the authentication methods that you configured\n", (yyvsp[(2) - (3)].string));
			 return 1;
	   }

	   entry->validator_new_func = info->new_func;
}
    break;

  case 186:

    { dirs_table_set_validator_prop (current_config_entry, "file", (yyvsp[(2) - (2)].string)); }
    break;

  case 187:

    {
	   int   len;
	   char *tmp;
	   cherokee_virtual_server_t *vsrv = auto_virtual_server;

	   /* Set the users public directory
	    */
	   if (!cherokee_buffer_is_empty (vsrv->userdir)) {
			 PRINT_MSG ("WARNING: Overwriting userdir '%s'\n", vsrv->userdir->buf);
			 cherokee_buffer_clean (vsrv->userdir);
	   }

	   len = strlen((yyvsp[(2) - (2)].string));
	   tmp = make_finish_with_slash ((yyvsp[(2) - (2)].string), &len);
	   cherokee_buffer_add (vsrv->userdir, tmp, len);

	   /* Set the plugin table reference
	    */
	   current_dirs_table = vsrv->userdir_dirs;

}
    break;

  case 188:

    {

	   /* Remove the references
	    */
	   current_dirs_table = NULL;
}
    break;

  case 189:

    {
	   linked_list_t             *i    = (yyvsp[(2) - (2)].list);
	   cherokee_virtual_server_t *vsrv = auto_virtual_server;

	   while (i != NULL) {
			 cherokee_list_add_tail (&vsrv->index_list, i->string);
			 i = i->next;
	   }

	   free_linked_list ((yyvsp[(2) - (2)].list), NULL);
}
    break;

  case 192:

    {
	   ret_t                      ret;
	   cherokee_module_info_t    *info;
	   cherokee_virtual_server_t *vsrv = auto_virtual_server;

	   /* Load the module
	    */
	   ret = cherokee_module_loader_load (&SRV(server)->loader, (yyvsp[(2) - (2)].string));
	   if (ret < ret_ok) {
			 PRINT_MSG ("ERROR: Loading module '%s'\n", (yyvsp[(2) - (2)].string));
			 return 1;
	   }

	   ret = cherokee_module_loader_get_info (&SRV(server)->loader, (yyvsp[(2) - (2)].string), &info);
	   if (ret < ret_ok) {
			 PRINT_MSG ("ERROR: Loading module '%s'\n", (yyvsp[(2) - (2)].string));
			 return 1;
	   }
	   
	   /* Remove the old (by default) error handler and cretate a new one
	    */
	   vsrv->error_handler = config_entry_new();

	   /* Setup the loaded module
	    */
	   cherokee_config_entry_set_handler (vsrv->error_handler, info);
}
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}






