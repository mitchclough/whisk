
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"

/*
 * Author: Nathan Clack <clackn@janelia.hhmi.org>
 * Date  : June 2010
 * 
 * Copyright 2010 Howard Hughes Medical Institute.
 * All rights reserved.
 * Use is subject to Janelia Farm Research Campus Software Copyright 1.1
 * license terms (http://license.janelia.org/license/jfrc_copyright_1_1.html).
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include "param.h"

#define ASRT(e) do {size_t v = (size_t)(e); assert(v); } while(0)

#define YYPRINT
#if 0
#define DEBUG_LEXER
#define DEBUG_GRAMMAR
#endif

#ifdef DEBUG_LEXER
  #define debug_lexer(...) printf(__VA_ARGS__)
#else
  #define debug_lexer(...)
#endif

#ifdef DEBUG_GRAMMAR
  #define debug_grammar(...) printf(__VA_ARGS__)
#else
  #define debug_grammar(...)
#endif

int  yylex  (void);
void yyerror(char const *);

int g_nparse_errors = 0;
#define MAX_PARSE_ERRORS (10)
#define PARSER_INCERR \
if(++g_nparse_errors>MAX_PARSE_ERRORS)\
{ fprintf(stderr,"Too many problems parsing parameter file. Aborting.\n");\
  YYABORT;\
}
t_params g_param;
enum eParamTrackingIndexes {
	indexMIN_LENPRJ,
	indexMIN_LENSQR,
	indexMIN_LENGTH,
	indexDUPLICATE_THRESHOLD,
	indexFRAME_DELTA,
	indexHALF_SPACE_TUNNELING_MAX_MOVES,
	indexHALF_SPACE_ASSYMETRY_THRESH,
	indexMAX_DELTA_OFFSET,
	indexMAX_DELTA_WIDTH,
	indexMAX_DELTA_ANGLE,
	indexMIN_SIGNAL,
	indexWIDTH_MAX,
	indexWIDTH_MIN,
	indexWIDTH_STEP,
	indexANGLE_STEP,
	indexOFFSET_STEP,
	indexTLEN,
	indexMIN_SIZE,
	indexMIN_LEVEL,
	indexHAT_RADIUS,
	indexSEED_THRESH,
	indexSEED_ACCUM_THRESH,
	indexSEED_ITERATION_THRESH,
	indexSEED_ITERATIONS,
	indexSEED_SIZE_PX,
	indexSEED_ON_GRID_LATTICE_SPACING,
	indexSEED_METHOD,
	indexIDENTITY_SOLVER_SHAPE_NBINS,
	indexIDENTITY_SOLVER_VELOCITY_NBINS,
	indexCOMPARE_IDENTITIES_DISTS_NBINS,
	indexHMM_RECLASSIFY_BASELINE_LOG2,
	indexHMM_RECLASSIFY_VEL_DISTS_NBINS,
	indexHMM_RECLASSIFY_SHP_DISTS_NBINS,
	indexSHOW_PROGRESS_MESSAGES,
	indexSHOW_DEBUG_MESSAGES,
	indexMAX
};
int g_found_parameters[indexMAX];
char *g_param_string_table[] = {
	"MIN_LENPRJ",
	"MIN_LENSQR",
	"MIN_LENGTH",
	"DUPLICATE_THRESHOLD",
	"FRAME_DELTA",
	"HALF_SPACE_TUNNELING_MAX_MOVES",
	"HALF_SPACE_ASSYMETRY_THRESH",
	"MAX_DELTA_OFFSET",
	"MAX_DELTA_WIDTH",
	"MAX_DELTA_ANGLE",
	"MIN_SIGNAL",
	"WIDTH_MAX",
	"WIDTH_MIN",
	"WIDTH_STEP",
	"ANGLE_STEP",
	"OFFSET_STEP",
	"TLEN",
	"MIN_SIZE",
	"MIN_LEVEL",
	"HAT_RADIUS",
	"SEED_THRESH",
	"SEED_ACCUM_THRESH",
	"SEED_ITERATION_THRESH",
	"SEED_ITERATIONS",
	"SEED_SIZE_PX",
	"SEED_ON_GRID_LATTICE_SPACING",
	"SEED_METHOD",
	"IDENTITY_SOLVER_SHAPE_NBINS",
	"IDENTITY_SOLVER_VELOCITY_NBINS",
	"COMPARE_IDENTITIES_DISTS_NBINS",
	"HMM_RECLASSIFY_BASELINE_LOG2",
	"HMM_RECLASSIFY_VEL_DISTS_NBINS",
	"HMM_RECLASSIFY_SHP_DISTS_NBINS",
	"SHOW_PROGRESS_MESSAGES",
	"SHOW_DEBUG_MESSAGES"};


/* Line 189 of yacc.c  */
#line 199 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.tab.c"

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
# define YYTOKEN_TABLE 1
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMENT = 258,
     INTEGRAL = 259,
     DECIMAL = 260,
     TOK_SEED_EVERYWHERE = 261,
     TOK_SEED_ON_MHAT_CONTOURS = 262,
     TOK_SEED_ON_GRID = 263
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 126 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
 int integral;
        float decimal;
        enumSEED_METHOD valSEED_METHOD;
       


/* Line 214 of yacc.c  */
#line 250 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 275 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
//void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
//void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  262

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       9,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    10,    12,    17,    22,
      27,    32,    37,    42,    47,    52,    57,    62,    67,    72,
      77,    82,    87,    92,    97,   102,   107,   112,   117,   122,
     127,   132,   137,   142,   147,   152,   157,   162,   167,   172,
     177,   182,   187,   192,   197,   202,   207,   212,   217,   222,
     227,   232,   237,   242,   247,   252,   257,   262,   267,   272,
     277,   282,   287,   292,   297,   302,   307,   312,   317,   322,
     327,   332,   337,   342,   347,   352,   357,   362,   365,   368,
     370,   372,   374,   376,   378,   380
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    -1,    46,    48,    -1,    -1,     3,    -1,
       9,    -1,    10,     4,    47,     9,    -1,    10,     1,    47,
       9,    -1,    11,     4,    47,     9,    -1,    11,     1,    47,
       9,    -1,    12,     4,    47,     9,    -1,    12,     1,    47,
       9,    -1,    13,    49,    47,     9,    -1,    13,     1,    47,
       9,    -1,    14,     4,    47,     9,    -1,    14,     1,    47,
       9,    -1,    15,     4,    47,     9,    -1,    15,     1,    47,
       9,    -1,    16,    49,    47,     9,    -1,    16,     1,    47,
       9,    -1,    17,    49,    47,     9,    -1,    17,     1,    47,
       9,    -1,    18,    49,    47,     9,    -1,    18,     1,    47,
       9,    -1,    19,    49,    47,     9,    -1,    19,     1,    47,
       9,    -1,    20,    49,    47,     9,    -1,    20,     1,    47,
       9,    -1,    21,    49,    47,     9,    -1,    21,     1,    47,
       9,    -1,    22,    49,    47,     9,    -1,    22,     1,    47,
       9,    -1,    23,    49,    47,     9,    -1,    23,     1,    47,
       9,    -1,    24,    49,    47,     9,    -1,    24,     1,    47,
       9,    -1,    25,    49,    47,     9,    -1,    25,     1,    47,
       9,    -1,    26,     4,    47,     9,    -1,    26,     1,    47,
       9,    -1,    27,     4,    47,     9,    -1,    27,     1,    47,
       9,    -1,    28,     4,    47,     9,    -1,    28,     1,    47,
       9,    -1,    29,    49,    47,     9,    -1,    29,     1,    47,
       9,    -1,    30,    49,    47,     9,    -1,    30,     1,    47,
       9,    -1,    31,    49,    47,     9,    -1,    31,     1,    47,
       9,    -1,    32,    49,    47,     9,    -1,    32,     1,    47,
       9,    -1,    33,     4,    47,     9,    -1,    33,     1,    47,
       9,    -1,    34,     4,    47,     9,    -1,    34,     1,    47,
       9,    -1,    35,     4,    47,     9,    -1,    35,     1,    47,
       9,    -1,    36,    50,    47,     9,    -1,    36,     1,    47,
       9,    -1,    37,     4,    47,     9,    -1,    37,     1,    47,
       9,    -1,    38,     4,    47,     9,    -1,    38,     1,    47,
       9,    -1,    39,     4,    47,     9,    -1,    39,     1,    47,
       9,    -1,    40,    49,    47,     9,    -1,    40,     1,    47,
       9,    -1,    41,     4,    47,     9,    -1,    41,     1,    47,
       9,    -1,    42,     4,    47,     9,    -1,    42,     1,    47,
       9,    -1,    43,     4,    47,     9,    -1,    43,     1,    47,
       9,    -1,    44,     4,    47,     9,    -1,    44,     1,    47,
       9,    -1,    47,     9,    -1,     1,     9,    -1,     4,    -1,
       5,    -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   140,   140,   141,   143,   144,   146,   147,   148,   159,
     160,   171,   172,   183,   184,   195,   196,   207,   208,   219,
     220,   231,   232,   243,   244,   255,   256,   267,   268,   279,
     280,   291,   292,   303,   304,   315,   316,   327,   328,   339,
     340,   351,   352,   363,   364,   375,   376,   387,   388,   399,
     400,   411,   412,   423,   424,   435,   436,   447,   448,   459,
     460,   471,   472,   483,   484,   495,   496,   507,   508,   519,
     520,   531,   532,   543,   544,   555,   556,   567,   568,   576,
     577,   578,   579,   580,   581,   582
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "INTEGRAL", "DECIMAL",
  "\"SEED_EVERYWHERE\"", "\"SEED_ON_MHAT_CONTOURS\"", "\"SEED_ON_GRID\"",
  "'\\n'", "\"MIN_LENPRJ\"", "\"MIN_LENSQR\"", "\"MIN_LENGTH\"",
  "\"DUPLICATE_THRESHOLD\"", "\"FRAME_DELTA\"",
  "\"HALF_SPACE_TUNNELING_MAX_MOVES\"", "\"HALF_SPACE_ASSYMETRY_THRESH\"",
  "\"MAX_DELTA_OFFSET\"", "\"MAX_DELTA_WIDTH\"", "\"MAX_DELTA_ANGLE\"",
  "\"MIN_SIGNAL\"", "\"WIDTH_MAX\"", "\"WIDTH_MIN\"", "\"WIDTH_STEP\"",
  "\"ANGLE_STEP\"", "\"OFFSET_STEP\"", "\"TLEN\"", "\"MIN_SIZE\"",
  "\"MIN_LEVEL\"", "\"HAT_RADIUS\"", "\"SEED_THRESH\"",
  "\"SEED_ACCUM_THRESH\"", "\"SEED_ITERATION_THRESH\"",
  "\"SEED_ITERATIONS\"", "\"SEED_SIZE_PX\"",
  "\"SEED_ON_GRID_LATTICE_SPACING\"", "\"SEED_METHOD\"",
  "\"IDENTITY_SOLVER_SHAPE_NBINS\"", "\"IDENTITY_SOLVER_VELOCITY_NBINS\"",
  "\"COMPARE_IDENTITIES_DISTS_NBINS\"", "\"HMM_RECLASSIFY_BASELINE_LOG2\"",
  "\"HMM_RECLASSIFY_VEL_DISTS_NBINS\"",
  "\"HMM_RECLASSIFY_SHP_DISTS_NBINS\"", "\"SHOW_PROGRESS_MESSAGES\"",
  "\"SHOW_DEBUG_MESSAGES\"", "$accept", "input", "comment", "line",
  "decimal", "value", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    10,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    50,    50,    50
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     2,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     5,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,    78,     4,     4,     4,     4,     4,     4,
       4,    79,    80,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,    81,
      82,    83,    84,    85,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     7,    10,     9,    12,    11,    14,    13,
      16,    15,    18,    17,    20,    19,    22,    21,    24,    23,
      26,    25,    28,    27,    30,    29,    32,    31,    34,    33,
      36,    35,    38,    37,    40,    39,    42,    41,    44,    43,
      46,    45,    48,    47,    50,    49,    52,    51,    54,    53,
      56,    55,    58,    57,    60,    59,    62,    61,    64,    63,
      66,    65,    68,    67,    70,    69,    72,    71,    74,    73,
      76,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    41,    42,    53,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const yytype_int16 yypact[] =
{
     -45,    77,   -45,    -2,   -45,   -45,   193,   194,   195,    54,
     199,   200,    78,    80,   138,   151,   153,   158,   160,   165,
     167,   172,   201,   205,   206,   174,   179,   181,   186,   207,
     211,   212,   143,   213,   217,   218,   188,   219,   223,   224,
     225,    -1,   -45,   -45,    53,    53,    53,    53,    53,    53,
      53,   -45,   -45,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,   -45,
     -45,   -45,   -45,   -45,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,   -45,    48,   123,   124,   125,   131,   132,   136,   144,
     221,   222,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -44,   -45,   110,   -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     122,   123,   124,   125,   126,   127,   128,    43,   121,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,    50,     4,   192,    51,    52,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,     2,     3,    58,
       4,    60,    51,    52,    51,    52,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    59,    61,    63,    65,    67,    69,    71,    73,
      75,    77,   193,   194,   195,    85,    87,    89,    91,    62,
     196,   197,    51,    52,    98,   198,   112,    99,   100,   101,
     102,   103,    64,   199,    66,    51,    52,    51,    52,    68,
       0,    70,    51,    52,    51,    52,    72,     0,    74,    51,
      52,    51,    52,    76,     0,    84,    51,    52,    51,    52,
      86,     0,    88,    51,    52,    51,    52,    90,     0,   111,
      51,    52,    51,    52,    44,    46,    48,    45,    47,    49,
      54,    56,    78,    55,    57,    79,    80,    82,    92,    81,
      83,    93,    94,    96,   105,    95,    97,   106,   107,   109,
     113,   108,   110,   114,   115,   117,   119,   116,   118,   120,
     200,   201,     0,     0,     0,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261
};

static const yytype_int8 yycheck[] =
{
      44,    45,    46,    47,    48,    49,    50,     9,     9,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     1,     3,     9,     4,     5,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,     0,     1,     1,
       3,     1,     4,     5,     4,     5,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     9,     9,     9,    25,    26,    27,    28,     1,
       9,     9,     4,     5,     1,     9,    36,     4,     5,     6,
       7,     8,     1,     9,     1,     4,     5,     4,     5,     1,
      -1,     1,     4,     5,     4,     5,     1,    -1,     1,     4,
       5,     4,     5,     1,    -1,     1,     4,     5,     4,     5,
       1,    -1,     1,     4,     5,     4,     5,     1,    -1,     1,
       4,     5,     4,     5,     1,     1,     1,     4,     4,     4,
       1,     1,     1,     4,     4,     4,     1,     1,     1,     4,
       4,     4,     1,     1,     1,     4,     4,     4,     1,     1,
       1,     4,     4,     4,     1,     1,     1,     4,     4,     4,
       9,     9,    -1,    -1,    -1,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,     0,     1,     3,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    47,    48,     9,     1,     4,     1,     4,     1,     4,
       1,     4,     5,    49,     1,     4,     1,     4,     1,    49,
       1,    49,     1,    49,     1,    49,     1,    49,     1,    49,
       1,    49,     1,    49,     1,    49,     1,    49,     1,     4,
       1,     4,     1,     4,     1,    49,     1,    49,     1,    49,
       1,    49,     1,     4,     1,     4,     1,     4,     1,     4,
       5,     6,     7,     8,    50,     1,     4,     1,     4,     1,
       4,     1,    49,     1,     4,     1,     4,     1,     4,     1,
       4,     9,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 140 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    { debug_grammar("EMPTY INPUT\n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 141 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    { debug_grammar("LINE\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 143 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    { debug_grammar("\t\tCOMMENT EMPTY\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 144 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    { debug_grammar("\t\tCOMMENT TAIL\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 146 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    { debug_grammar("\tEMPTY LINE\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 147 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMIN_LENPRJ=(yyvsp[(2) - (4)].integral);g_found_parameters[indexMIN_LENPRJ]=1; debug_grammar("\tMIN_LENPRJ\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 148 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MIN_LENPRJ.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 159 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMIN_LENSQR=(yyvsp[(2) - (4)].integral);g_found_parameters[indexMIN_LENSQR]=1; debug_grammar("\tMIN_LENSQR\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 160 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MIN_LENSQR.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 171 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMIN_LENGTH=(yyvsp[(2) - (4)].integral);g_found_parameters[indexMIN_LENGTH]=1; debug_grammar("\tMIN_LENGTH\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 172 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MIN_LENGTH.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 183 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramDUPLICATE_THRESHOLD=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexDUPLICATE_THRESHOLD]=1; debug_grammar("\tDUPLICATE_THRESHOLD\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 184 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for DUPLICATE_THRESHOLD.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 195 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramFRAME_DELTA=(yyvsp[(2) - (4)].integral);g_found_parameters[indexFRAME_DELTA]=1; debug_grammar("\tFRAME_DELTA\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 196 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for FRAME_DELTA.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 207 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramHALF_SPACE_TUNNELING_MAX_MOVES=(yyvsp[(2) - (4)].integral);g_found_parameters[indexHALF_SPACE_TUNNELING_MAX_MOVES]=1; debug_grammar("\tHALF_SPACE_TUNNELING_MAX_MOVES\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 208 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for HALF_SPACE_TUNNELING_MAX_MOVES.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 219 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramHALF_SPACE_ASSYMETRY_THRESH=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexHALF_SPACE_ASSYMETRY_THRESH]=1; debug_grammar("\tHALF_SPACE_ASSYMETRY_THRESH\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 220 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for HALF_SPACE_ASSYMETRY_THRESH.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 231 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMAX_DELTA_OFFSET=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexMAX_DELTA_OFFSET]=1; debug_grammar("\tMAX_DELTA_OFFSET\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 232 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MAX_DELTA_OFFSET.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 243 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMAX_DELTA_WIDTH=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexMAX_DELTA_WIDTH]=1; debug_grammar("\tMAX_DELTA_WIDTH\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 244 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MAX_DELTA_WIDTH.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 255 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMAX_DELTA_ANGLE=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexMAX_DELTA_ANGLE]=1; debug_grammar("\tMAX_DELTA_ANGLE\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 256 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MAX_DELTA_ANGLE.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 267 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMIN_SIGNAL=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexMIN_SIGNAL]=1; debug_grammar("\tMIN_SIGNAL\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 268 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MIN_SIGNAL.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 279 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramWIDTH_MAX=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexWIDTH_MAX]=1; debug_grammar("\tWIDTH_MAX\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 280 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for WIDTH_MAX.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 291 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramWIDTH_MIN=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexWIDTH_MIN]=1; debug_grammar("\tWIDTH_MIN\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 292 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for WIDTH_MIN.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 303 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramWIDTH_STEP=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexWIDTH_STEP]=1; debug_grammar("\tWIDTH_STEP\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 304 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for WIDTH_STEP.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 315 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramANGLE_STEP=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexANGLE_STEP]=1; debug_grammar("\tANGLE_STEP\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 316 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for ANGLE_STEP.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 327 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramOFFSET_STEP=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexOFFSET_STEP]=1; debug_grammar("\tOFFSET_STEP\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 328 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for OFFSET_STEP.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 339 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramTLEN=(yyvsp[(2) - (4)].integral);g_found_parameters[indexTLEN]=1; debug_grammar("\tTLEN\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 340 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for TLEN.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 351 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMIN_SIZE=(yyvsp[(2) - (4)].integral);g_found_parameters[indexMIN_SIZE]=1; debug_grammar("\tMIN_SIZE\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 352 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MIN_SIZE.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 363 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramMIN_LEVEL=(yyvsp[(2) - (4)].integral);g_found_parameters[indexMIN_LEVEL]=1; debug_grammar("\tMIN_LEVEL\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 364 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for MIN_LEVEL.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 375 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramHAT_RADIUS=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexHAT_RADIUS]=1; debug_grammar("\tHAT_RADIUS\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 376 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for HAT_RADIUS.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 387 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSEED_THRESH=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexSEED_THRESH]=1; debug_grammar("\tSEED_THRESH\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 388 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SEED_THRESH.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 399 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSEED_ACCUM_THRESH=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexSEED_ACCUM_THRESH]=1; debug_grammar("\tSEED_ACCUM_THRESH\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 400 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SEED_ACCUM_THRESH.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 411 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSEED_ITERATION_THRESH=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexSEED_ITERATION_THRESH]=1; debug_grammar("\tSEED_ITERATION_THRESH\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 412 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SEED_ITERATION_THRESH.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 423 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSEED_ITERATIONS=(yyvsp[(2) - (4)].integral);g_found_parameters[indexSEED_ITERATIONS]=1; debug_grammar("\tSEED_ITERATIONS\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 424 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SEED_ITERATIONS.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 435 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSEED_SIZE_PX=(yyvsp[(2) - (4)].integral);g_found_parameters[indexSEED_SIZE_PX]=1; debug_grammar("\tSEED_SIZE_PX\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 436 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SEED_SIZE_PX.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 447 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSEED_ON_GRID_LATTICE_SPACING=(yyvsp[(2) - (4)].integral);g_found_parameters[indexSEED_ON_GRID_LATTICE_SPACING]=1; debug_grammar("\tSEED_ON_GRID_LATTICE_SPACING\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 448 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SEED_ON_GRID_LATTICE_SPACING.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 459 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSEED_METHOD=(yyvsp[(2) - (4)].valSEED_METHOD);g_found_parameters[indexSEED_METHOD]=1; debug_grammar("\tSEED_METHOD\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 460 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SEED_METHOD.\n"
                                             "\tExpected a value of :\n\t\tSEED_EVERYWHERE\n\t\tSEED_ON_MHAT_CONTOURS\n\t\tSEED_ON_GRID\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 471 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramIDENTITY_SOLVER_SHAPE_NBINS=(yyvsp[(2) - (4)].integral);g_found_parameters[indexIDENTITY_SOLVER_SHAPE_NBINS]=1; debug_grammar("\tIDENTITY_SOLVER_SHAPE_NBINS\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 472 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for IDENTITY_SOLVER_SHAPE_NBINS.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 483 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramIDENTITY_SOLVER_VELOCITY_NBINS=(yyvsp[(2) - (4)].integral);g_found_parameters[indexIDENTITY_SOLVER_VELOCITY_NBINS]=1; debug_grammar("\tIDENTITY_SOLVER_VELOCITY_NBINS\n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 484 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for IDENTITY_SOLVER_VELOCITY_NBINS.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 495 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramCOMPARE_IDENTITIES_DISTS_NBINS=(yyvsp[(2) - (4)].integral);g_found_parameters[indexCOMPARE_IDENTITIES_DISTS_NBINS]=1; debug_grammar("\tCOMPARE_IDENTITIES_DISTS_NBINS\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 496 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for COMPARE_IDENTITIES_DISTS_NBINS.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 507 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramHMM_RECLASSIFY_BASELINE_LOG2=(yyvsp[(2) - (4)].decimal);g_found_parameters[indexHMM_RECLASSIFY_BASELINE_LOG2]=1; debug_grammar("\tHMM_RECLASSIFY_BASELINE_LOG2\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 508 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for HMM_RECLASSIFY_BASELINE_LOG2.\n"
                                             "\tExpected a value of decimal type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 519 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramHMM_RECLASSIFY_VEL_DISTS_NBINS=(yyvsp[(2) - (4)].integral);g_found_parameters[indexHMM_RECLASSIFY_VEL_DISTS_NBINS]=1; debug_grammar("\tHMM_RECLASSIFY_VEL_DISTS_NBINS\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 520 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for HMM_RECLASSIFY_VEL_DISTS_NBINS.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 531 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramHMM_RECLASSIFY_SHP_DISTS_NBINS=(yyvsp[(2) - (4)].integral);g_found_parameters[indexHMM_RECLASSIFY_SHP_DISTS_NBINS]=1; debug_grammar("\tHMM_RECLASSIFY_SHP_DISTS_NBINS\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 532 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for HMM_RECLASSIFY_SHP_DISTS_NBINS.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 543 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSHOW_PROGRESS_MESSAGES=(yyvsp[(2) - (4)].integral);g_found_parameters[indexSHOW_PROGRESS_MESSAGES]=1; debug_grammar("\tSHOW_PROGRESS_MESSAGES\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 544 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SHOW_PROGRESS_MESSAGES.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 555 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {g_param.paramSHOW_DEBUG_MESSAGES=(yyvsp[(2) - (4)].integral);g_found_parameters[indexSHOW_DEBUG_MESSAGES]=1; debug_grammar("\tSHOW_DEBUG_MESSAGES\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 556 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {
                                      fprintf(stderr,
                                             "Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                             "\tCould not interpret value for SHOW_DEBUG_MESSAGES.\n"
                                             "\tExpected a value of integral type.\n",
                                               (yylsp[(2) - (4)]).first_line,(yylsp[(2) - (4)]).first_column+1,
                                               (yylsp[(2) - (4)]).last_column+1);

                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 567 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    { debug_grammar("\tCOMMENT LINE\n"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 568 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    { fprintf(stderr,"Problem encountered loading parameters file at line %d, columns %d-%d\n"
                                                       "\tCould not interpret parameter name.\n",
                                               (yylsp[(1) - (2)]).first_line,(yylsp[(1) - (2)]).first_column+1,
                                               (yylsp[(1) - (2)]).last_column+1);
                                       PARSER_INCERR
                                       yyerrok;
                                     ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 576 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {(yyval.decimal)=(yyvsp[(1) - (1)].integral);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 577 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {(yyval.decimal)=(yyvsp[(1) - (1)].decimal);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 578 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {(yyval.integral)=(yyvsp[(1) - (1)].integral);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 579 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {(yyval.decimal)=(yyvsp[(1) - (1)].decimal);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 580 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {(yyval.valSEED_METHOD)=SEED_EVERYWHERE;;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 581 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {(yyval.valSEED_METHOD)=SEED_ON_MHAT_CONTOURS;;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 582 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"
    {(yyval.valSEED_METHOD)=SEED_ON_GRID;;}
    break;



/* Line 1455 of yacc.c  */
#line 2663 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



/* Line 1675 of yacc.c  */
#line 584 "C:/Users/Fernando/Desktop/src/whisk/build/src/parameters/param.y"

FILE *fp=NULL;                                               // when a file is opened, this points to the file
int yylex(void)
{ int c;
  static char *str = NULL;
  static size_t str_max_size = 0;
  ASRT(fp);


  if(!str)
  { str = malloc(1024);
    ASRT(str);
    str_max_size = 1024;
  }

  while( (c=getc(fp))==' '||c=='\t' ) ++yylloc.last_column;  // skip whitespace
  if(c==0)
  { if(feof(fp))
      return 0;
    if(ferror(fp))
    { fprintf(stderr,"\t lex - Got error: %d\n",ferror(fp));
    }
  }

  /* Step */
  yylloc.first_line = yylloc.last_line;
  yylloc.first_column = yylloc.last_column;
  debug_lexer("\t\t\t\t lex - Start: %d.%d\n",yylloc.first_line,yylloc.first_column);
  
  if(isalpha(c))                                 // process string tokens
  { int i,n=0;
    while(!isspace(c))
    { 
      ++yylloc.last_column;
      if( n >= str_max_size )                    // resize if necessary
      { str_max_size = 1.2*n+50;
        str = realloc(str,str_max_size);
        ASRT(str);
      }
      str[n++] = c;
      c = getc(fp);
    }
    ungetc(c,fp);
    str[n]='\0';
                                                // search token table
    for (i = 0; i < YYNTOKENS; i++)
    {
      if (yytname[i] != 0
          && yytname[i][0] == '"'
          && ! strncmp(yytname[i] + 1, str,strlen(str))
          && yytname[i][strlen(str) + 1] == '"'
          && yytname[i][strlen(str) + 2] == 0)
        break;
    }
    if(i<YYNTOKENS)
    {
      debug_lexer("\tlex - (%d) %s\n",i,str);
      return yytoknum[i];
    }
    else //nothing was found - put characters back on the stream
    { yylloc.last_column-=n;
      while(n--)
      { ungetc(str[n],fp);
      }
      c = getc(fp);
      ++yylloc.last_column;
    }
  }

  if(c=='.'||isdigit(c)||c=='-')     // process numbers
  { int n = 0;
    do
    { if( n >= str_max_size )        //resize if necessary
      { str_max_size = 1.2*n+50;
        str = realloc(str,str_max_size);
        ASRT(str);
      }
      str[n++] = c;
      c = getc(fp);
      ++yylloc.last_column;
    }while(c=='.'||isdigit(c));
    ungetc(c,fp);
    --yylloc.last_column;
    str[n]='\0';
    if(strchr(str,'.'))
    { yylval.decimal = atof(str);
      debug_lexer("\tlex - DECIMAL (%f)\n",yylval.decimal);
      return DECIMAL;
    } else
    { yylval.integral = atoi(str);
      debug_lexer("\tlex - INTEGRAL (%d)\n",yylval.integral);
      return INTEGRAL;
    }
  }

  if(c=='[')                                                 // process section headers as comments
  { while( getc(fp)!='\n' ) ++yylloc.last_column;           // read the rest of the line
    ungetc('\n',fp);
    debug_lexer("\tlex - COMMENT\n");
    return COMMENT;
  }
  if(c=='/')                                                 // process c-style end-of-line comments
  { int d;
    d=getc(fp);
    ++yylloc.last_column;
    if(d=='/' || d=='*')
    { while( getc(fp)!='\n' ) ++yylloc.last_column;        // read the rest of the line
      ungetc('\n',fp);
    }
    debug_lexer("\tlex - COMMENT\n");
    return COMMENT;
  }

  if(c==EOF)
  { debug_lexer("\tlex - EOF\n");
    fclose(fp);
    fp=0;
  }
  if(c=='\n')
  {
    ++yylloc.last_line;
    yylloc.last_column=0;
  }
  return c;
}

void yyerror(char const *s)
{ //fprintf(stderr,"Parse Error:\n---\n\t%s\n---\n",s);
}

SHARED_EXPORT
t_params *Params(void) {return &g_param;}

SHARED_EXPORT
int Load_Params_File(char *filename)
{ int sts; //0==success, 1==failure
  // FILE *fp is global
  g_nparse_errors=0;
  memset(g_found_parameters,0,sizeof(g_found_parameters));
  fp = fopen(filename,"r");
  if(!fp)
  { fprintf(stderr,"Could not open parameter file at %s.\n",filename);
    return 1;
  }
  sts = yyparse();
  if(fp) fclose(fp);
  sts |= (g_nparse_errors>0);
  {
    int i;
    for(i=0;i<indexMAX;++i)
      if(g_found_parameters[i]==0)
      { sts=1;
        fprintf(stderr,"Failed to load parameter: %s\n",g_param_string_table[i]);
      }
  }
  return sts;
}

SHARED_EXPORT
int Print_Params_File(char *filename)
{ int sts=0; //0==success, 1==failure
  FILE *fp;
  fp = fopen(filename,"w");
  if(!fp)
  { fprintf(stderr,"Could not open parameter file for writing: %s\n",filename);
    return 1;
  }
  {
    fprintf(fp,"[error]\n");
    fprintf(fp,"SHOW_DEBUG_MESSAGES     1\n");
    fprintf(fp,"SHOW_PROGRESS_MESSAGES  1\n");
    fprintf(fp,"\n");
    fprintf(fp,"[reclassify]\n");
    fprintf(fp,"HMM_RECLASSIFY_SHP_DISTS_NBINS 16\n");
    fprintf(fp,"HMM_RECLASSIFY_VEL_DISTS_NBINS 8096\n");
    fprintf(fp,"HMM_RECLASSIFY_BASELINE_LOG2   -500.0\n");
    fprintf(fp,"COMPARE_IDENTITIES_DISTS_NBINS 8096\n");
    fprintf(fp,"IDENTITY_SOLVER_VELOCITY_NBINS 8096\n");
    fprintf(fp,"IDENTITY_SOLVER_SHAPE_NBINS    16\n");
    fprintf(fp,"\n");
    fprintf(fp,"[trace]\n");
    fprintf(fp,"SEED_METHOD                    SEED_ON_GRID // Specify seeding method: may be SEED_ON_MHAT_CONTOURS, SEED_ON_GRID, or SEED_EVERYWHERE\n");
    fprintf(fp,"SEED_ON_GRID_LATTICE_SPACING   50           // (pixels)\n");
    fprintf(fp,"SEED_SIZE_PX                   4            // Width of the seed detector in pixels.\n");
    fprintf(fp,"SEED_ITERATIONS                1            // Maxium number of iterations to re-estimate a seed.\n");
    fprintf(fp,"SEED_ITERATION_THRESH          0.0          // (0 to 1) Threshold score determining when a seed should be reestimated.\n");
    fprintf(fp,"SEED_ACCUM_THRESH              0.0          // (0 to 1) Threshold score determining when to accumulate statistics\n");
    fprintf(fp,"SEED_THRESH                    0.99         // (0 to 1) Threshold score determining when to generate a seed\n");
    fprintf(fp,"\n");
    fprintf(fp,"HAT_RADIUS                     1.5          // Mexican-hat radius for whisker detection (seeding)\n");
    fprintf(fp,"MIN_LEVEL                      1            // Level-set threshold for mexican hat result.  Used for seeding on mexican hat contours.\n");
    fprintf(fp,"MIN_SIZE                       20           // Minimum # of pixels in an object considered for mexican-hat based seeding.\n");
    fprintf(fp,"\n");
    fprintf(fp,"                                            // detector banks parameterization.  If any of these change, the detector banks\n");
    fprintf(fp,"                                            // should be deleted.  They will be regenerated on the next run.\n");
    fprintf(fp,"                                            //\n");
    fprintf(fp,"TLEN                           8            // (px) half the size of the detector support.  If this is changed, the detector banks must be deleted.\n");
    fprintf(fp,"OFFSET_STEP                    .1           // pixels\n");
    fprintf(fp,"ANGLE_STEP                     18.          // divisions of pi/4\n");
    fprintf(fp,"WIDTH_STEP                     .2           // (pixels)\n");
    fprintf(fp,"WIDTH_MIN                      0.4          // (pixels) must be a multiple of WIDTH_STEP\n");
    fprintf(fp,"WIDTH_MAX                      6.5          // (pixels) must be a multiple of WIDTH_STEP\n");
    fprintf(fp,"MIN_SIGNAL                     5.0          // minimum detector response per detector column.  Typically: (2*TLEN+1)*MIN_SIGNAL is the threshold determining when tracing stops.\n");
    fprintf(fp,"MAX_DELTA_ANGLE                10.1         // (degrees)  The detector is constrained to turns less than this value at each step.\n");
    fprintf(fp,"MAX_DELTA_WIDTH                6.0          // (pixels)   The detector width is constrained to change less than this value at each step.\n");
    fprintf(fp,"MAX_DELTA_OFFSET               6.0          // (pixels)   The detector offset is constrained to change less than this value at each step.\n");
    fprintf(fp,"HALF_SPACE_ASSYMETRY_THRESH    0.25         // (between 0 and 1)  1 is completely insensitive to asymmetry\n");
    fprintf(fp,"HALF_SPACE_TUNNELING_MAX_MOVES 50           // (pixels)  This should be the largest size of an occluding area to cross\n");
    fprintf(fp,"\n");
    fprintf(fp,"FRAME_DELTA                    1            // [depricated?] used in compute_zone to look for moving objects\n");
    fprintf(fp,"DUPLICATE_THRESHOLD            5.0          // [depricated?]\n");
    fprintf(fp,"MIN_LENGTH                     20           // [depricated?]           If span of object is not 20 pixels will not use as a seed\n");
    fprintf(fp,"MIN_LENSQR                     100          // [depricated?]           (MIN_LENGTH/2)^2\n");
    fprintf(fp,"MIN_LENPRJ                     14           // [depricated?] [unused]  floor(MIN_LENGTH/sqrt(2))\n");
  }
  fclose(fp);
  return sts;
}


