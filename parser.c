/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 15 "parser.y"


#include "search.h"

#define YYINITDEPTH 18000  /* SIZE OF THE PARSER STACK */
#define YYMAXDEPTH  18000
extern FILE *yyin;
extern char *yytext; /* Current symbol for error reporting. */

extern int yylex(void); /* Lexical analyzer function. */
extern int yyparse(void); /* Parser function. */

int yydebug=0;


/*--- global variables ---*/
extern IBVariables variables;      /* global array of constrained variables */
extern IBConstants constants;      /* global array of constants */
extern IBConstraints constraints;  /* global array of constraints */

extern double             IBPragmaPrecision;
extern int                IBPragmaBisection;
extern int                IBPragmaNumberBisection; 
extern long               IBPragmaMaxTime;
extern IBBisectArity      IBsplit;
extern int                IBargBisectNo;
extern int                IBPragmaHullMode; 
extern int                IBPragmaIntervalDigits;
extern int                IBPragmaStyleInterval;
extern unsigned long      IBPragmaMaxSolution;
extern IBLocalPropagation IBfilter2B;
extern int                IBcompute3B;
extern int                IBcomputeWeak3B;
extern double             IBPragmaPrecisionShrink;
extern double             IBPragmaPrecision3B; 
extern double             IBPragmaImprovement; 
extern int                IBPragmaSubpaving;


/*--- variables used for parsing ---*/
IBItv itv;
IBInterval *itv2;
double x1, x2;
char s[40];
IBTree *f1, *f2;
int i,
    newVar,
    the_index,
    IBIndexArrayLeft,
    IBIndexArrayRight;
long lt;

/* Line 371 of yacc.c  */
#line 121 "parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PRAGMACONSTANTS = 258,
     PRAGMADOMAINS = 259,
     PRAGMACONSTRAINTS = 260,
     PRAGMABISECTION = 261,
     BISECTIONCHOICE = 262,
     BISECTIONPARTS = 263,
     NOBISECTION = 264,
     BISECTIONCHOICERR = 265,
     BISECTIONCHOICELF = 266,
     BISECTIONCHOICEMN = 267,
     BISECTIONNUMBER = 268,
     BISECTIONSUBPAVING = 269,
     BISECTIONPOINTS = 270,
     PRAGMAMAXTIME = 271,
     MODE = 272,
     PRAGMAOUTPUT = 273,
     OUTPUTHULLMODE = 274,
     OUTPUTUNIONMODE = 275,
     OUTPUTDIGITS = 276,
     OUTPUTSTYLE = 277,
     OUTPUTBOUNDSTYLE = 278,
     OUTPUTMIDPOINTSTYLE = 279,
     OUTPUTSOLUTION = 280,
     OUTPUTALLSOLUTION = 281,
     PRAGMACONSISTENCY = 282,
     LOCALCONSISTENCY = 283,
     STRONGCONSISTENCY = 284,
     CONSISTENCYBC3 = 285,
     CONSISTENCYBC3Newton = 286,
     CONSISTENCYBC4 = 287,
     CONSISTENCYBC5 = 288,
     CONSISTENCYHC3 = 289,
     CONSISTENCYHC4 = 290,
     CONSISTENCYHC4I = 291,
     CONSISTENCYHC4Newton = 292,
     PRECISION2B = 293,
     IMPROVEMENT2B = 294,
     CONSISTENCY3B = 295,
     CONSISTENCYWEAK3B = 296,
     PRECISION3B = 297,
     PRECISION = 298,
     INDOM = 299,
     COMMA = 300,
     TWOPOINTS = 301,
     SCOLON = 302,
     COLON = 303,
     UNDERSCORE = 304,
     LSBR = 305,
     RSBR = 306,
     LBR = 307,
     RBR = 308,
     IDENT = 309,
     INTEGER = 310,
     FLOAT = 311,
     REALPOSINFINITY = 312,
     REALNEGINFINITY = 313,
     ADD = 314,
     SUB = 315,
     MUL = 316,
     DIV = 317,
     POW = 318,
     SQRT = 319,
     LOG = 320,
     EXP = 321,
     MINIMUM = 322,
     MAXIMUM = 323,
     COS = 324,
     SIN = 325,
     TAN = 326,
     COSH = 327,
     SINH = 328,
     TANH = 329,
     ACOS = 330,
     ASIN = 331,
     ATAN = 332,
     ACOSH = 333,
     ASINH = 334,
     ATANH = 335,
     PREV = 336,
     SUCC = 337,
     INTEGERTYPE = 338,
     REALTYPE = 339,
     NEWDATA = 340,
     EQU = 341,
     INF = 342,
     SUP = 343
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 70 "parser.y"

   int  nvar;
   char str_num[40];
   char str_unum[40];
   char str_sign[2];
   char str_integ[40];
   char str_float[40];
   char str_var[20];
   int  n, vtype, bbound;
   double lbound, rbound;
   void *fun;


/* Line 387 of yacc.c  */
#line 266 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 294 "parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   301

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  267

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    13,    16,    19,    22,
      25,    28,    31,    34,    37,    38,    41,    42,    46,    50,
      54,    56,    58,    60,    62,    65,    66,    69,    70,    74,
      78,    82,    86,    90,    92,    94,    96,    98,   100,   102,
     104,   106,   108,   110,   113,   114,   117,   118,   120,   124,
     128,   132,   136,   140,   142,   144,   146,   148,   150,   152,
     154,   157,   158,   161,   165,   173,   175,   178,   179,   182,
     188,   189,   192,   195,   197,   199,   201,   203,   206,   207,
     210,   221,   222,   228,   230,   232,   233,   235,   237,   239,
     241,   244,   247,   251,   255,   257,   261,   265,   267,   270,
     271,   274,   277,   281,   283,   285,   288,   291,   296,   301,
     306,   313,   320,   325,   330,   335,   340,   345,   350,   355,
     360,   365,   370,   375,   380,   383,   385,   386,   390,   392,
     393,   395,   397,   399,   401,   403,   405,   407,   409,   410
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    92,    47,    91,    -1,    -1,    90,    -1,
       4,   120,    -1,     5,   114,    -1,     3,   110,    -1,     6,
     104,    -1,    16,    93,    -1,    18,    94,    -1,    27,    99,
      -1,    86,   139,    -1,    96,    95,    -1,    -1,    45,    94,
      -1,    -1,    17,    86,    97,    -1,    21,    86,   141,    -1,
      22,    86,    98,    -1,    19,    -1,    20,    -1,    23,    -1,
      24,    -1,   101,   100,    -1,    -1,    45,    99,    -1,    -1,
      28,    86,   102,    -1,    29,    86,   103,    -1,    38,    86,
     139,    -1,    42,    86,   139,    -1,    39,    86,   139,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    40,    -1,    41,    -1,
     106,   105,    -1,    -1,    45,   104,    -1,    -1,     9,    -1,
      43,    86,   139,    -1,     7,    86,   107,    -1,     8,    86,
     141,    -1,    13,    86,   108,    -1,    17,    86,   109,    -1,
      10,    -1,    11,    -1,    12,    -1,   141,    -1,    57,    -1,
      15,    -1,    14,    -1,   112,   111,    -1,    -1,    45,   110,
      -1,   113,    86,   129,    -1,   113,    86,    50,   129,   124,
     129,    51,    -1,    54,    -1,   116,   115,    -1,    -1,    45,
     114,    -1,   142,   117,   129,   119,   129,    -1,    -1,   118,
      48,    -1,    49,    54,    -1,    86,    -1,    87,    -1,    88,
      -1,    44,    -1,   122,   121,    -1,    -1,    45,   120,    -1,
     125,   142,   137,   123,    44,   126,   127,   124,   128,   126,
      -1,    -1,    50,   141,   124,   141,    51,    -1,    45,    -1,
      46,    -1,    -1,    84,    -1,    83,    -1,    50,    -1,    51,
      -1,   138,   129,    -1,   138,   129,    -1,   129,    59,   130,
      -1,   129,    60,   130,    -1,   130,    -1,   130,    61,   131,
      -1,   130,    62,   131,    -1,   131,    -1,   133,   132,    -1,
      -1,    63,   141,    -1,    63,   134,    -1,    52,   129,    53,
      -1,   134,    -1,   139,    -1,    60,   130,    -1,    59,   130,
      -1,    64,    52,   129,    53,    -1,    66,    52,   129,    53,
      -1,    65,    52,   129,    53,    -1,    67,    52,   129,    45,
     129,    53,    -1,    68,    52,   129,    45,   129,    53,    -1,
      69,    52,   129,    53,    -1,    70,    52,   129,    53,    -1,
      71,    52,   129,    53,    -1,    72,    52,   129,    53,    -1,
      73,    52,   129,    53,    -1,    74,    52,   129,    53,    -1,
      75,    52,   129,    53,    -1,    76,    52,   129,    53,    -1,
      77,    52,   129,    53,    -1,    78,    52,   129,    53,    -1,
      79,    52,   129,    53,    -1,    80,    52,   129,    53,    -1,
     135,   136,    -1,    54,    -1,    -1,    50,   141,    51,    -1,
      54,    -1,    -1,    81,    -1,    82,    -1,   141,    -1,   140,
      -1,    57,    -1,    58,    -1,    56,    -1,    55,    -1,    -1,
      85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   218,   218,   220,   221,   223,   224,   225,   226,   227,
     228,   229,   236,   255,   258,   259,   262,   263,   264,   277,
     280,   284,   290,   291,   298,   301,   302,   305,   306,   307,
     308,   321,   334,   356,   360,   364,   368,   372,   376,   380,
     384,   390,   394,   403,   406,   407,   409,   410,   416,   429,
     430,   444,   445,   448,   449,   450,   453,   463,   469,   470,
     477,   480,   481,   484,   492,   517,   524,   527,   528,   531,
     558,   559,   562,   565,   566,   567,   568,   575,   578,   579,
     582,   633,   634,   642,   643,   646,   647,   648,   651,   652,
     655,   683,   714,   734,   754,   760,   790,   823,   829,   840,
     841,   842,   855,   858,   861,   878,   881,   884,   887,   890,
     893,   896,   899,   902,   905,   908,   911,   914,   917,   920,
     923,   926,   929,   932,   940,   981,   984,   985,   992,   995,
     996,   997,  1000,  1001,  1002,  1003,  1006,  1009,  1012,  1013
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRAGMACONSTANTS", "PRAGMADOMAINS",
  "PRAGMACONSTRAINTS", "PRAGMABISECTION", "BISECTIONCHOICE",
  "BISECTIONPARTS", "NOBISECTION", "BISECTIONCHOICERR",
  "BISECTIONCHOICELF", "BISECTIONCHOICEMN", "BISECTIONNUMBER",
  "BISECTIONSUBPAVING", "BISECTIONPOINTS", "PRAGMAMAXTIME", "MODE",
  "PRAGMAOUTPUT", "OUTPUTHULLMODE", "OUTPUTUNIONMODE", "OUTPUTDIGITS",
  "OUTPUTSTYLE", "OUTPUTBOUNDSTYLE", "OUTPUTMIDPOINTSTYLE",
  "OUTPUTSOLUTION", "OUTPUTALLSOLUTION", "PRAGMACONSISTENCY",
  "LOCALCONSISTENCY", "STRONGCONSISTENCY", "CONSISTENCYBC3",
  "CONSISTENCYBC3Newton", "CONSISTENCYBC4", "CONSISTENCYBC5",
  "CONSISTENCYHC3", "CONSISTENCYHC4", "CONSISTENCYHC4I",
  "CONSISTENCYHC4Newton", "PRECISION2B", "IMPROVEMENT2B", "CONSISTENCY3B",
  "CONSISTENCYWEAK3B", "PRECISION3B", "PRECISION", "INDOM", "COMMA",
  "TWOPOINTS", "SCOLON", "COLON", "UNDERSCORE", "LSBR", "RSBR", "LBR",
  "RBR", "IDENT", "INTEGER", "FLOAT", "REALPOSINFINITY", "REALNEGINFINITY",
  "ADD", "SUB", "MUL", "DIV", "POW", "SQRT", "LOG", "EXP", "MINIMUM",
  "MAXIMUM", "COS", "SIN", "TAN", "COSH", "SINH", "TANH", "ACOS", "ASIN",
  "ATAN", "ACOSH", "ASINH", "ATANH", "PREV", "SUCC", "INTEGERTYPE",
  "REALTYPE", "NEWDATA", "EQU", "INF", "SUP", "$accept", "First",
  "NextPragma", "Pragma", "MaxTime", "Output", "NextOutput",
  "OutputArgument", "OutputTypeMode", "OutputTypeStyle", "Consistency",
  "NextConsistency", "ConsistencyArgument", "ConsistencyLocalType",
  "ConsistencyStrongType", "Bisection", "NextBisection",
  "BisectionArgument", "BisectionTypeChoice", "BisectionNumber",
  "BisectionMode", "Constants", "NextConstants", "Constant", "ConstName",
  "Constraints", "NextConstraints", "Constraint", "ConstraintName",
  "ConstraintIdent", "Relation", "Domains", "NextDomains", "Domain",
  "VariableArray", "DomainSep", "VarType", "BracketBound", "ExprLeftBound",
  "ExprRightBound", "Expr", "ExprMul", "ExprExp", "Exposant", "ExprUnit",
  "Ident", "IdentName", "IdentArray", "Variable", "PrevSuccNumber",
  "Number", "Float", "Integer", "IsNewData", YY_NULL
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    93,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    98,    99,   100,   100,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   103,   103,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   107,   108,   108,   109,   109,
     110,   111,   111,   112,   112,   113,   114,   115,   115,   116,
     117,   117,   118,   119,   119,   119,   119,   120,   121,   121,
     122,   123,   123,   124,   124,   125,   125,   125,   126,   126,
     127,   128,   129,   129,   129,   130,   130,   130,   131,   132,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   135,   136,   136,   137,   138,
     138,   138,   139,   139,   139,   139,   140,   141,   142,   142
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     2,     0,     3,     3,     3,
       1,     1,     1,     1,     2,     0,     2,     0,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     0,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     3,     7,     1,     2,     0,     2,     5,
       0,     2,     2,     1,     1,     1,     1,     2,     0,     2,
      10,     0,     5,     1,     1,     0,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     3,     3,     1,     2,     0,
       2,     2,     3,     1,     1,     2,     2,     4,     4,     4,
       6,     6,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     1,     0,     3,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    85,   138,    46,     0,    16,    27,     0,     0,
      65,     7,    61,     0,    87,    86,     5,    78,   138,   139,
       6,    67,    70,     0,     0,    47,     0,     0,     0,     8,
      44,     0,     9,     0,     0,     0,    10,    14,     0,     0,
       0,     0,     0,    11,    25,     1,     3,     0,    60,     0,
      85,    77,     0,   138,    66,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    43,   137,   136,   134,   135,    12,
     133,   132,     0,     0,     0,    16,    13,     0,     0,     0,
       0,     0,    27,    24,     4,     2,    62,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      94,    97,    99,   103,   126,   104,    79,   128,    81,    68,
      72,     0,    71,    53,    54,    55,    49,    50,    57,    51,
      56,    59,    58,    52,    48,    45,    20,    21,    17,    18,
      22,    23,    19,    15,    33,    34,    35,    36,    37,    38,
      39,    40,    28,    41,    42,    29,    30,    32,    31,    26,
       0,     0,   106,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,   124,     0,
       0,    76,    73,    74,    75,     0,    83,    84,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    95,
      96,   101,   100,     0,     0,     0,    69,     0,   107,   109,
     108,     0,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   127,     0,    88,    89,   129,
      64,     0,     0,     0,   130,   131,     0,     0,   110,   111,
      82,   129,    90,     0,     0,    80,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,    85,     9,    32,    36,    76,    37,   138,   142,
      43,    83,    44,   152,   155,    29,    64,    30,   126,   129,
     133,    11,    48,    12,    13,    20,    54,    21,    56,    57,
     195,    16,    51,    17,   190,   198,    18,   249,   256,   263,
     109,   110,   111,   186,   112,   113,   114,   188,   118,   257,
     115,    70,    71,    22
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -215
static const yytype_int16 yypact[] =
{
      41,   -27,   -43,   -52,     0,   -49,     2,    59,    67,    22,
    -215,  -215,    62,    39,  -215,  -215,  -215,    93,   -52,  -215,
    -215,    95,   103,    84,   100,  -215,   104,   112,   114,  -215,
     157,    34,  -215,   124,   126,   138,  -215,   177,   150,   155,
     171,   172,   173,  -215,   187,  -215,    41,   -27,  -215,     6,
     -43,  -215,   200,   -52,  -215,   202,    89,   207,    94,   165,
     -39,    37,    34,     0,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,   131,   165,   148,     2,  -215,   147,   133,    34,
      34,    34,    59,  -215,  -215,  -215,  -215,    89,    89,  -215,
      89,    89,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   175,
     181,  -215,   225,  -215,   227,  -215,  -215,  -215,   228,  -215,
    -215,   -38,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     -34,    40,   181,   181,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,   190,  -215,   165,  -215,   165,
     235,  -215,  -215,  -215,  -215,    89,  -215,  -215,    89,  -215,
      43,    73,    75,   -31,   -25,    77,   132,   134,   136,   144,
     146,   154,   156,   158,   166,   168,   170,   181,   181,  -215,
    -215,  -215,  -215,   229,   201,   198,   175,   -21,  -215,  -215,
    -215,    89,    89,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,   165,  -215,  -215,   169,
    -215,   178,   180,   230,  -215,  -215,   201,    89,  -215,  -215,
    -215,   169,   175,   198,    89,  -215,   175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,   236,  -215,  -215,  -215,   226,  -215,  -215,  -215,  -215,
     203,  -215,  -215,  -215,  -215,   231,  -215,  -215,  -215,  -215,
    -215,   237,  -215,  -215,  -215,   233,  -215,  -215,  -215,  -215,
    -215,   239,  -215,  -215,  -215,  -214,  -215,    20,  -215,  -215,
     -56,   -87,    69,  -215,  -215,   102,  -215,  -215,  -215,    29,
     -26,  -215,   -58,   273
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     121,   127,   130,   162,   163,    69,   191,    23,    24,    25,
     246,   196,   197,    26,   231,   139,    65,    27,   128,    33,
     232,   181,   182,    34,    35,   181,   182,    10,   181,   182,
     250,   160,   161,    19,   181,   182,   134,    31,   181,   182,
      14,    15,   261,    28,     1,     2,     3,     4,   192,   193,
     194,   131,   132,   156,   157,   158,    87,     5,    88,     6,
      89,    65,    66,    67,    68,    90,    91,    45,     7,    46,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    38,    39,    65,
      66,    67,    68,   199,   217,   218,   228,    40,    41,   181,
     182,    42,   181,   182,   123,   124,   125,    47,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,    49,   229,   222,   230,   223,
     233,   224,   181,   182,   181,   182,   181,   182,    50,   226,
      53,    88,   227,    89,    65,    66,    67,    68,    90,    91,
     136,   137,    55,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      58,   140,   141,   153,   154,   251,   252,   144,   145,   146,
     147,   148,   149,   150,   151,   234,    59,   235,   253,   236,
      60,   181,   182,   181,   182,   181,   182,   237,    61,   238,
      62,   262,    63,   181,   182,   181,   182,   239,   266,   240,
      72,   241,    73,   181,   182,   181,   182,   181,   182,   242,
      65,   243,    75,   244,    74,   181,   182,   181,   182,   181,
     182,   258,    82,   259,   181,   182,    77,   181,   182,   181,
     182,    78,   183,   184,    89,    65,   196,   197,   247,   248,
     254,   255,   219,   220,   117,   122,   120,    79,    80,    81,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   187,   189,   225,
     245,   260,    84,   265,    86,   159,   119,   221,   185,   116,
     264,    52,     0,     0,   135,     0,     0,     0,     0,     0,
       0,   143
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      56,    59,    60,    90,    91,    31,    44,     7,     8,     9,
     224,    45,    46,    13,    45,    73,    55,    17,    57,    17,
      45,    59,    60,    21,    22,    59,    60,    54,    59,    60,
      51,    87,    88,    85,    59,    60,    62,    86,    59,    60,
      83,    84,   256,    43,     3,     4,     5,     6,    86,    87,
      88,    14,    15,    79,    80,    81,    50,    16,    52,    18,
      54,    55,    56,    57,    58,    59,    60,     0,    27,    47,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    28,    29,    55,
      56,    57,    58,    53,   181,   182,    53,    38,    39,    59,
      60,    42,    59,    60,    10,    11,    12,    45,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    86,    53,   185,    53,   187,
      53,   189,    59,    60,    59,    60,    59,    60,    45,   195,
      45,    52,   198,    54,    55,    56,    57,    58,    59,    60,
      19,    20,    49,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      86,    23,    24,    40,    41,   231,   232,    30,    31,    32,
      33,    34,    35,    36,    37,    53,    86,    53,   246,    53,
      86,    59,    60,    59,    60,    59,    60,    53,    86,    53,
      86,   257,    45,    59,    60,    59,    60,    53,   264,    53,
      86,    53,    86,    59,    60,    59,    60,    59,    60,    53,
      55,    53,    45,    53,    86,    59,    60,    59,    60,    59,
      60,    53,    45,    53,    59,    60,    86,    59,    60,    59,
      60,    86,    61,    62,    54,    55,    45,    46,    50,    51,
      81,    82,   183,   184,    54,    48,    54,    86,    86,    86,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    50,    50,    44,
      51,    51,    46,   263,    47,    82,    53,   185,    63,    50,
     261,    18,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    16,    18,    27,    90,    92,
      54,   110,   112,   113,    83,    84,   120,   122,   125,    85,
     114,   116,   142,     7,     8,     9,    13,    17,    43,   104,
     106,    86,    93,    17,    21,    22,    94,    96,    28,    29,
      38,    39,    42,    99,   101,     0,    47,    45,   111,    86,
      45,   121,   142,    45,   115,    49,   117,   118,    86,    86,
      86,    86,    86,    45,   105,    55,    56,    57,    58,   139,
     140,   141,    86,    86,    86,    45,    95,    86,    86,    86,
      86,    86,    45,   100,    90,    91,   110,    50,    52,    54,
      59,    60,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   129,
     130,   131,   133,   134,   135,   139,   120,    54,   137,   114,
      54,   129,    48,    10,    11,    12,   107,   141,    57,   108,
     141,    14,    15,   109,   139,   104,    19,    20,    97,   141,
      23,    24,    98,    94,    30,    31,    32,    33,    34,    35,
      36,    37,   102,    40,    41,   103,   139,   139,   139,    99,
     129,   129,   130,   130,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    59,    60,    61,    62,    63,   132,    50,   136,    50,
     123,    44,    86,    87,    88,   119,    45,    46,   124,    53,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   130,   131,
     131,   134,   141,   141,   141,    44,   129,   129,    53,    53,
      53,    45,    45,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    51,   124,    50,    51,   126,
      51,   129,   129,   141,    81,    82,   127,   138,    53,    53,
      51,   124,   129,   128,   138,   126,   129
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 12:
/* Line 1792 of yacc.c  */
#line 237 "parser.y"
    {
            lt = strtoul((yyvsp[(2) - (2)].str_num),NULL,10);
            if( lt>0 )
            {
              IBPragmaMaxTime = lt;
	    }
            else
	    {
	      yyerror("invalid time.");
	      YYABORT;                    
	    }
	  }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 265 "parser.y"
    {
                    i = IBStrToInt((yyvsp[(3) - (3)].str_integ));
		    if( i>=0 )
		    {
                      IBPragmaIntervalDigits = i;
                    }
                    else
		    {
	              yyerror("invalid number of digits.");
	              YYABORT;
		    }
		 }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 281 "parser.y"
    {
                   IBPragmaHullMode = 1;
                 }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 285 "parser.y"
    {
                   IBPragmaHullMode = 0;
                 }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 290 "parser.y"
    { IBPragmaStyleInterval = IBPrintIntervalBounds; }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 291 "parser.y"
    { IBPragmaStyleInterval = IBPrintIntervalMidError; }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 309 "parser.y"
    {
                       x2 = IBStrToDouble((yyvsp[(3) - (3)].str_num));
                       if( x2>=0 )
		       {
		         IBPragmaPrecisionShrink = x2;  /* precision of local (box) consistency */
		       }
                       else
		       {
	                 yyerror("invalid precision.");
	                 YYABORT;     
		       }
		     }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 322 "parser.y"
    {
                       x2 = IBStrToDouble((yyvsp[(3) - (3)].str_num));
                       if( x2>=0 )
		       {
		         IBPragmaPrecision3B = x2;  /* precision of (weak) 3B consistency */
		       }
                       else
		       {
	                 yyerror("invalid precision.");
	                 YYABORT;     
		       }
		     }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 335 "parser.y"
    {
                       x2 = IBStrToDouble((yyvsp[(3) - (3)].str_num));
                       if( (x2>=0) && (x2<=100.0) )
		       {
                         if( x2==0.0 )
			 {
		           IBPragmaImprovement = 1.0;
			 }
                         else
                         {
		           IBPragmaImprovement = 1 - (x2/100); /* improvement factor of 2B consistency */
			 }
		       }
                       else
		       {
	                 yyerror("invalid improvement factor.");
	                 YYABORT;     
		       }
		     }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 357 "parser.y"
    {
			 IBfilter2B = IBF2Bbc3;
		       }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 361 "parser.y"
    {
			 IBfilter2B = IBF2Bbc3Newton;
		       }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 365 "parser.y"
    {
			 IBfilter2B = IBF2Bbc4;
		       }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 369 "parser.y"
    {
			 IBfilter2B = IBF2Bbc5;
		       }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 373 "parser.y"
    {
			 IBfilter2B = IBF2Bhc3;
		       }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 377 "parser.y"
    {
			 IBfilter2B = IBF2Bhc4;
		       }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 381 "parser.y"
    {
			 IBfilter2B = IBF2Bhc4I;
		       }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 385 "parser.y"
    {
			 IBfilter2B = IBF2Bhc4Newton;
		       }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 391 "parser.y"
    {
                         IBcompute3B = 1;
		       }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 395 "parser.y"
    {
                         IBcomputeWeak3B = 1;
		       }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 411 "parser.y"
    {
                      IBPragmaNumberBisection = 0;
                      IBargBisectNo = 1;
		    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 417 "parser.y"
    {
                      x2 = IBStrToDouble((yyvsp[(3) - (3)].str_num));
                      if( x2>=0 )
		      {
                        IBPragmaPrecision = x2;
		      }
                      else
		      {
	                yyerror("invalid precision.");
	                YYABORT;     
		      }
		    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 431 "parser.y"
    {
                      i = IBStrToInt((yyvsp[(3) - (3)].str_integ));
		      if( i==2 )
		      {
                        IBsplit = IBBsplit2;
                        IBPragmaNumberBisection = 2;
		      }
		      else if( i==3 )
		      {
                        IBsplit = IBBsplit3;
                        IBPragmaNumberBisection = 3;
		      }
		    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 448 "parser.y"
    { IBPragmaBisection = IBBisectRoundRobin; }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 449 "parser.y"
    { IBPragmaBisection = IBBisectLargestFirst; }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 450 "parser.y"
    { IBPragmaBisection = IBBisectMaxNarrow; }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 454 "parser.y"
    {
                    IBPragmaMaxSolution = strtoul((yyvsp[(1) - (1)].str_integ),NULL,10);
 
	 	    if( IBPragmaMaxSolution<1 )
		    {
	              yyerror("invalid number of solutions.");
	              YYABORT;
		    }
		  }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 464 "parser.y"
    {
		    IBPragmaMaxSolution = ~0;
		  }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 469 "parser.y"
    { IBPragmaSubpaving = 0; }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 470 "parser.y"
    { IBPragmaSubpaving = 1; }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 485 "parser.y"
    {
             if( !IBAddConstant(constants,(yyvsp[(1) - (3)].str_var),(yyvsp[(3) - (3)].fun)) )
	     {
	       yyerror("a constant expression evaluates in the empty interval.");
	       YYABORT;                    
	     }
	   }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 493 "parser.y"
    {
             f1 = (IBTree *)(yyvsp[(4) - (7)].fun);
             IBTevalConstant(f1);
	     if( IBEmptyI(IBTfwd(f1)) )
	     {
	       yyerror("a constant expression evaluates in the empty interval.");
	       YYABORT;
	     }

             f2 = (IBTree *)(yyvsp[(6) - (7)].fun);
             IBTevalConstant(f2);
	     if( IBEmptyI(IBTfwd(f2)) )
	     {
	       yyerror("a constant expression evaluates in the empty interval.");
	       YYABORT;
	     }

             IBSetI(itv,IBMinI(IBTfwd(f1)),IBMaxI(IBTfwd(f2)));
             IBTFree(f1);
             IBTFree(f2);
             IBAddConstant(constants,(yyvsp[(1) - (7)].str_var),IBTNewItv(itv));
	   }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 517 "parser.y"
    { strcpy((yyval.str_var),yytext); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 532 "parser.y"
    {
               if( !((IBTiszero((yyvsp[(3) - (5)].fun))) && (IBTiszero((yyvsp[(5) - (5)].fun)))) )
	       {
		  if( (f1=IBRemoveConstantSubtrees((yyvsp[(3) - (5)].fun)))==NULL )
		  {
	            yyerror("a constant expression evaluates in the empty interval.");
	            YYABORT;
		  }
                  if( (f2=IBRemoveConstantSubtrees((yyvsp[(5) - (5)].fun)))==NULL )
		  {
	            yyerror("a constant expression evaluates in the empty interval.");
	            YYABORT;
		  }

                  if( IBfilter2B==IBF2Bhc3 )
		  {
                    IBDecompConstraint(constraints,variables,f1,(yyvsp[(4) - (5)].n),f2,(yyvsp[(2) - (5)].str_var),!((yyvsp[(1) - (5)].n)));
		  }
                  else
		  {
                    IBAddConstraint(constraints,f1,(yyvsp[(4) - (5)].n),f2,(yyvsp[(2) - (5)].str_var),!((yyvsp[(1) - (5)].n)));
		  }
	       }
             }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 558 "parser.y"
    { strcpy((yyval.str_var),""); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 559 "parser.y"
    { strcpy((yyval.str_var),(yyvsp[(1) - (2)].str_var)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 562 "parser.y"
    { strcpy((yyval.str_var),yytext); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 565 "parser.y"
    { (yyval.n) = IBRelationEQU; }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 566 "parser.y"
    { (yyval.n) = IBRelationINF; }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 567 "parser.y"
    { (yyval.n) = IBRelationSUP; }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 568 "parser.y"
    { (yyval.n) = IBRelationSET; }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 585 "parser.y"
    {
	   if( ((yyvsp[(7) - (10)].lbound)>(yyvsp[(9) - (10)].rbound)) || (((yyvsp[(7) - (10)].lbound)==(yyvsp[(9) - (10)].rbound)) && (((yyvsp[(6) - (10)].bbound)==2) || ((yyvsp[(10) - (10)].bbound)==1))) ) {
	     yyerror("the interval is empty.");
	     YYABORT;
	   }

           if( (yyvsp[(2) - (10)].n) )
  	   {
	     newVar = IBVstatusHidden;
	   }
           else
	   {
	     newVar = IBVstatusUser;
	   }

           if( (yyvsp[(4) - (10)].n) )  /* array of variables */
	   {
             if( (IBIndexArrayLeft>=0) && (IBIndexArrayRight>=IBIndexArrayLeft) )
	     {
               for( i=IBIndexArrayLeft; i<=IBIndexArrayRight; i++ )
	       {
                 sprintf(s,"%s[%d]",(yyvsp[(3) - (10)].str_var),i);
                 the_index = IBAddV(variables,s,newVar);
                 IBSetD(IBDomVars(variables),the_index,(yyvsp[(7) - (10)].lbound),(yyvsp[(9) - (10)].rbound));
                 if( (yyvsp[(1) - (10)].vtype)==3 )  /* integer variable */
	         {
                   IBSetIntV(variables,the_index);
	         }
	       }
	     }
             else
	     {
               yyerror("wrong index of variables array.");
	       YYABORT;
	     }
	   }
           else      /* one variable */
	   {
             the_index = IBAddV(variables,(yyvsp[(3) - (10)].str_var),newVar);
             IBSetD(IBDomVars(variables),the_index,(yyvsp[(7) - (10)].lbound),(yyvsp[(9) - (10)].rbound));
             if( (yyvsp[(1) - (10)].vtype)==3 )  /* integer variable */
	     {
               IBSetIntV(variables,the_index);
	     }
	   }
         }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 633 "parser.y"
    { (yyval.n) = 0; }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 635 "parser.y"
    {
                  IBIndexArrayLeft  = IBStrToInt((yyvsp[(2) - (5)].str_integ));
                  IBIndexArrayRight = IBStrToInt((yyvsp[(4) - (5)].str_integ));
                  (yyval.n) = 1;
                }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 646 "parser.y"
    { (yyval.vtype) = 1; }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 647 "parser.y"
    { (yyval.vtype) = 2; }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 648 "parser.y"
    { (yyval.vtype) = 3; }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 651 "parser.y"
    { (yyval.bbound) = 1; }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 652 "parser.y"
    { (yyval.bbound) = 2; }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 656 "parser.y"
    {
                  f1 = (IBTree *)(yyvsp[(2) - (2)].fun);
                  IBTevalConstant(f1);
		  if( IBEmptyI(IBTfwd(f1)) )
		  {
	            yyerror("the left bound is not defined by a constant expression.");
	            YYABORT;
		  }
                  else
		  {
                    x1 = IBMinI(IBTfwd(f1));

	            if ((yyvsp[(1) - (2)].n)==1) {
                      (yyval.lbound) = IBPrevDouble(x1);
	            }
	            else if ((yyvsp[(1) - (2)].n)==2) {
                      (yyval.lbound) = IBNextDouble(x1);
	            }
                    else
		    {
		      (yyval.lbound) = x1;
		    }
                    IBTFree(f1);
		  }
                }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 684 "parser.y"
    {
                   f1 = (IBTree *)(yyvsp[(2) - (2)].fun);
                   IBTevalConstant(f1);
		   if( IBEmptyI(IBTfwd(f1)) )
		   {
	             yyerror("the right bound is not defined by a constant expression.");
	             YYABORT;
	 	   }
                   else
		   {
                     x1 = IBMaxI(IBTfwd(f1));
	             if ((yyvsp[(1) - (2)].n)==1) {
                       (yyval.rbound) = IBPrevDouble(x1);
	             }
	             else if ((yyvsp[(1) - (2)].n)==2) {
                       (yyval.rbound) = IBNextDouble(x1);
	             }
                     else
		     {
		       (yyval.rbound) = x1;
		     }
                     IBTFree(f1);
		   }
                 }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 715 "parser.y"
    {
         if( IBTtype((IBTree *)(yyvsp[(1) - (3)].fun))==IBTNodeItv )
	 {
           if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(1) - (3)].fun))) )
             (yyval.fun) = IBTNewOp(IBOpAddRI,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
           else
             (yyval.fun) = IBTNewOp(IBOpAddII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
	 }
         else if( IBTtype((IBTree *)(yyvsp[(3) - (3)].fun))==IBTNodeItv )
	 {
           if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(3) - (3)].fun))) )
             (yyval.fun) = IBTNewOp(IBOpAddRI,(IBTree *)(yyvsp[(3) - (3)].fun),(IBTree *)(yyvsp[(1) - (3)].fun));
           else
             (yyval.fun) = IBTNewOp(IBOpAddII,(IBTree *)(yyvsp[(3) - (3)].fun),(IBTree *)(yyvsp[(1) - (3)].fun));
	 }
         else
           (yyval.fun) = IBTNewOp(IBOpAddII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
       }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 735 "parser.y"
    {
         if( IBTtype((IBTree *)(yyvsp[(1) - (3)].fun))==IBTNodeItv )
	 {
           if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(1) - (3)].fun))) )
             (yyval.fun) = IBTNewOp(IBOpSubRI,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
           else
             (yyval.fun) = IBTNewOp(IBOpSubII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
	 }
         else if( IBTtype((IBTree *)(yyvsp[(3) - (3)].fun))==IBTNodeItv )
	 {
           if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(3) - (3)].fun))) )
             (yyval.fun) = IBTNewOp(IBOpSubIR,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
           else
             (yyval.fun) = IBTNewOp(IBOpSubII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
	 }
         else
           (yyval.fun) = IBTNewOp(IBOpSubII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
       }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 755 "parser.y"
    { 
         (yyval.fun) = (IBTree*)(yyvsp[(1) - (1)].fun); 
       }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 761 "parser.y"
    {
            if( IBTtype((IBTree *)(yyvsp[(1) - (3)].fun))==IBTNodeItv )
            {
              if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(1) - (3)].fun))) )
              {
                if( IBMinI(IBTitv((IBTree *)(yyvsp[(1) - (3)].fun)))>=0 )
                     (yyval.fun) = IBTNewOp(IBOpMulRposI,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
                else
                     (yyval.fun) = IBTNewOp(IBOpMulRnegI,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
              }
              else
                (yyval.fun) = IBTNewOp(IBOpMulII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
            }
            else if( IBTtype((IBTree *)(yyvsp[(3) - (3)].fun))==IBTNodeItv )
            {
              if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(3) - (3)].fun))) )
              {
                if( IBMinI(IBTitv((IBTree *)(yyvsp[(3) - (3)].fun)))>=0 )
                     (yyval.fun) = IBTNewOp(IBOpMulRposI,(IBTree *)(yyvsp[(3) - (3)].fun),(IBTree *)(yyvsp[(1) - (3)].fun));
                else
                     (yyval.fun) = IBTNewOp(IBOpMulRnegI,(IBTree *)(yyvsp[(3) - (3)].fun),(IBTree *)(yyvsp[(1) - (3)].fun));
              }
              else
                (yyval.fun) = IBTNewOp(IBOpMulII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
            }
            else
              (yyval.fun) = IBTNewOp(IBOpMulII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
          }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 791 "parser.y"
    {
            if( IBTtype((IBTree *)(yyvsp[(1) - (3)].fun))==IBTNodeItv )
            {
              if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(1) - (3)].fun))) )
              {
                if( IBMinI(IBTitv((IBTree *)(yyvsp[(1) - (3)].fun)))>=0 )
                     (yyval.fun) = IBTNewOp(IBOpDivRposI,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
                else
                     (yyval.fun) = IBTNewOp(IBOpDivRnegI,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
              }
              else
                (yyval.fun) = IBTNewOp(IBOpDivII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
            }
            else if( IBTtype((IBTree *)(yyvsp[(3) - (3)].fun))==IBTNodeItv )
            {
              if( IBIsDoubleI(IBTitv((IBTree *)(yyvsp[(3) - (3)].fun))) )
              {
                if( IBMinI(IBTitv((IBTree *)(yyvsp[(3) - (3)].fun)))>=0 )
                     (yyval.fun) = IBTNewOp(IBOpDivIRpos,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
                else
                     (yyval.fun) = IBTNewOp(IBOpDivIRneg,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
              }
              else
                (yyval.fun) = IBTNewOp(IBOpDivII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));
            }
            else
            {
              (yyval.fun) = IBTNewOp(IBOpDivII,(IBTree *)(yyvsp[(1) - (3)].fun),(IBTree *)(yyvsp[(3) - (3)].fun));

            }
          }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 824 "parser.y"
    { 
            (yyval.fun) = (IBTree *)(yyvsp[(1) - (1)].fun); 
          }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 830 "parser.y"
    {
            if( (yyvsp[(2) - (2)].n)>1 )
            {
              if( (yyvsp[(2) - (2)].n)==2 ) (yyval.fun) = IBTNewOp(IBOpSqrI,(IBTree *)(yyvsp[(1) - (2)].fun),IBTNewExp(2));
              else        (yyval.fun) = IBTNewOp(IBOpPowI,(IBTree *)(yyvsp[(1) - (2)].fun),IBTNewExp((yyvsp[(2) - (2)].n)));

            }
          }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 840 "parser.y"
    { (yyval.n) = 1; }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 841 "parser.y"
    { (yyval.n) = IBStrToInt((yyvsp[(2) - (2)].str_integ)); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 842 "parser.y"
    { f1 = (IBTree *)(yyvsp[(2) - (2)].fun);
	                 if( (IBTtype(f1)==IBTNodeItv) && (IBIsIntegerI(IBTitv(f1))) )
	                 {
                           (yyval.n) = (int)(IBMinI(IBTitv(f1)));
	                 }
                         else
                         {
	                   yyerror("invalid exponent.");
	                   YYABORT;
                         }
	               }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 856 "parser.y"
    { (yyval.fun) = (yyvsp[(2) - (3)].fun); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 859 "parser.y"
    { (yyval.fun) = (yyvsp[(1) - (1)].fun); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 862 "parser.y"
    {
             if( strcmp((yyvsp[(1) - (1)].str_num),"+oo")==0 )
	     {
               IBSetI(itv,IBPosInfinity,IBPosInfinity);
	     }
	     else if( strcmp((yyvsp[(1) - (1)].str_num),"-oo")==0 )
	     {
               IBSetI(itv,IBNegInfinity,IBNegInfinity);
	     }
             else
	     {
	       IBStrToI((yyvsp[(1) - (1)].str_num),itv);
	     }
             (yyval.fun) = IBTNewItv(itv);
           }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 879 "parser.y"
    { (yyval.fun) = IBTNewOp(IBOpNegI,(IBTree *)(yyvsp[(2) - (2)].fun),IBTNewUseless()); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 882 "parser.y"
    { (yyval.fun) = (yyvsp[(2) - (2)].fun); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 885 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpSqrtI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 888 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpExpI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 891 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpLogI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 894 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpMinII,(IBTree *)(yyvsp[(3) - (6)].fun),(IBTree *)(yyvsp[(5) - (6)].fun)); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 897 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpMaxII,(IBTree *)(yyvsp[(3) - (6)].fun),(IBTree *)(yyvsp[(5) - (6)].fun)); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 900 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpCosI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 903 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpSinI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 906 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpTanI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 909 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpCoshI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 912 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpSinhI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 915 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpTanhI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 918 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpAcosI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 921 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpAsinI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 924 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpAtanI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 927 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpAcoshI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 930 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpAsinhI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 933 "parser.y"
    { (yyval.fun) =IBTNewOp(IBOpAtanhI,(IBTree *)(yyvsp[(3) - (4)].fun),IBTNewUseless()); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 941 "parser.y"
    {
          sprintf(s,"%s%s",(yyvsp[(1) - (2)].str_var),(yyvsp[(2) - (2)].str_var));

	  if( s[0]=='@' )  /* predefined constant */
	  {
            itv2 = IBGetConstant(constants,s);
            if( itv2==NULL )
	    {
	      strcat(s,": predefined constant unknown.");
              yyerror(s);
	      YYABORT;                      
	    }
            else             /* s is the name of a constant */
	    {
              (yyval.fun) = IBTNewItv(IBNewCopyI(itv2));
	    }
	  }
          else
	  {
            itv2 = IBGetConstant(constants,s);
            if( itv2==NULL )    /* s is the name of a variable */
	    {
              if ((i = IBIsPresentInV(variables,s))>=0)
              {
                (yyval.fun) = IBTNewVar(i,-1);
              }
	      else {
		strcat(s,": identifier unknown.");
		yyerror(s);
                YYABORT;
	      }
	    }
            else             /* s is the name of a constant */
	    {
              (yyval.fun) = IBTNewItv(IBNewCopyI(itv2));
	    }
	  }
        }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 981 "parser.y"
    { strcpy((yyval.str_var),yytext); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 984 "parser.y"
    { strcpy((yyval.str_var),""); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 986 "parser.y"
    {
               sprintf(s,"[%s]",(yyvsp[(2) - (3)].str_integ));
               strcpy((yyval.str_var),s);
             }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 992 "parser.y"
    { strcpy((yyval.str_var),yytext); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 995 "parser.y"
    { (yyval.n) = 0; }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 996 "parser.y"
    { (yyval.n) = 1; }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 997 "parser.y"
    { (yyval.n) = 2; }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 1000 "parser.y"
    { strcpy((yyval.str_num),(yyvsp[(1) - (1)].str_integ)); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 1001 "parser.y"
    { strcpy((yyval.str_num),(yyvsp[(1) - (1)].str_float)); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 1002 "parser.y"
    { strcpy((yyval.str_num),"+oo"); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 1003 "parser.y"
    { strcpy((yyval.str_num),"-oo"); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 1006 "parser.y"
    { strcpy((yyval.str_float),yytext); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 1009 "parser.y"
    { strcpy((yyval.str_integ),yytext); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 1012 "parser.y"
    { (yyval.n) = 0; }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 1013 "parser.y"
    { (yyval.n) = 1; }
    break;


/* Line 1792 of yacc.c  */
#line 2778 "parser.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
		      yytoken, &yylval);
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1015 "parser.y"

