
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
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "mainf.y"

  #include<stdio.h>
  #include<stdlib.h>
  #include<math.h>

  int sym[30]; int s[30]={0};
  char fun[20];

  int varnum=0;
  int expnum=0;
  int ifelsenum=0;
  int fornum=0; 
  int whilenum=0;
  int switchnum=0; 
  int printnum=0;
  int fun_num=0;
  int arr_num=0;
  int class_num=0;
  int trycatch_num=0;
  int var_assign_num=0;


        



/* Line 189 of yacc.c  */
#line 100 "mainf.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOIDMAIN = 258,
     NUM = 259,
     VAR = 260,
     PST = 261,
     PEN = 262,
     BST = 263,
     BEN = 264,
     SM = 265,
     INT = 266,
     FLOAT = 267,
     CHAR = 268,
     ARRAY = 269,
     GCD = 270,
     LCM = 271,
     INC = 272,
     DEC = 273,
     AND = 274,
     OR = 275,
     IF = 276,
     ELSE = 277,
     ELSEIF = 278,
     FOR = 279,
     WHILE = 280,
     CASE = 281,
     SWITCH = 282,
     DEFAULT = 283,
     PRINTFUNCTION = 284,
     PLUS = 285,
     MINUS = 286,
     MUL = 287,
     DIV = 288,
     MOD = 289,
     LT = 290,
     GT = 291,
     LE = 292,
     GE = 293,
     FACTORIAL = 294,
     ODDEVEN = 295,
     PRIME = 296,
     SORT = 297,
     SQR = 298,
     SQRT = 299,
     EXP = 300,
     POW = 301,
     LOG = 302,
     SIN = 303,
     COS = 304,
     TAN = 305,
     TRY = 306,
     CATCH = 307,
     CLASS = 308,
     FUNCTION = 309,
     FUN = 310,
     MAX = 311,
     MIN = 312,
     IFX = 313
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "mainf.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   411

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,     2,
       2,    59,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    62,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    14,    17,    20,    25,
      33,    45,    64,    76,    86,    96,   106,   114,   120,   128,
     134,   140,   146,   154,   162,   170,   178,   185,   189,   193,
     197,   206,   215,   221,   229,   241,   245,   247,   251,   254,
     256,   258,   260,   264,   266,   268,   271,   272,   275,   281,
     286,   288,   290,   294,   298,   302,   306,   310,   314,   318,
     322,   326,   330,   335,   338,   341,   344,   347,   350,   353
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,     3,     8,    65,     9,    -1,    -1,    65,
      66,    -1,    10,    -1,    68,    10,    -1,    75,    10,    -1,
       5,    59,    75,    10,    -1,    21,     6,    75,     7,     8,
      66,     9,    -1,    21,     6,    75,     7,     8,    66,     9,
      22,     8,    66,     9,    -1,    21,     6,    75,     7,     8,
      66,     9,    23,     6,    75,     7,     8,    66,     9,    22,
       8,    66,     9,    -1,    24,     6,     4,    60,     4,    60,
       4,     7,     8,    66,     9,    -1,    24,     6,     4,    60,
       4,     7,     8,    66,     9,    -1,    25,     6,     4,    35,
       4,     7,     8,    66,     9,    -1,    25,     6,     4,    36,
       4,     7,     8,    66,     9,    -1,    27,     6,     4,     7,
       8,    71,     9,    -1,    29,     6,    75,     7,    10,    -1,
      14,    69,     5,     6,     4,     7,    10,    -1,    39,     6,
       4,     7,    10,    -1,    40,     6,     4,     7,    10,    -1,
      41,     6,     4,     7,    10,    -1,    56,     6,     4,    60,
       4,     7,    10,    -1,    57,     6,     4,    60,     4,     7,
      10,    -1,    15,     6,     4,    60,     4,     7,    10,    -1,
      16,     6,     4,    60,     4,     7,    10,    -1,    54,     5,
      61,     8,    66,     9,    -1,     5,    61,    10,    -1,    17,
       4,    10,    -1,    18,     4,    10,    -1,     6,    75,     7,
      19,     6,    75,     7,    10,    -1,     6,    75,     7,    20,
       6,    75,     7,    10,    -1,    53,     5,     8,    66,     9,
      -1,    53,     5,    61,     5,     8,    66,     9,    -1,    51,
       8,    66,     9,    52,     6,    75,     7,     8,    66,     9,
      -1,    42,    67,    10,    -1,     4,    -1,    67,    60,     4,
      -1,    69,    70,    -1,    11,    -1,    12,    -1,    13,    -1,
      70,    60,     5,    -1,     5,    -1,    72,    -1,    72,    74,
      -1,    -1,    72,    73,    -1,    26,     4,    61,    75,    10,
      -1,    28,    61,    75,    10,    -1,     4,    -1,     5,    -1,
      75,    30,    75,    -1,    75,    31,    75,    -1,    75,    32,
      75,    -1,    75,    33,    75,    -1,    75,    34,    75,    -1,
      75,    35,    75,    -1,    75,    36,    75,    -1,    75,    37,
      75,    -1,    75,    38,    75,    -1,     6,    75,     7,    -1,
      46,    75,    62,    75,    -1,    45,    75,    -1,    43,    75,
      -1,    44,    75,    -1,    47,    75,    -1,    48,    75,    -1,
      49,    75,    -1,    50,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    49,    51,    54,    55,    57,    62,    70,
      83,    94,   110,   121,   133,   142,   151,   159,   164,   179,
     192,   204,   234,   241,   248,   263,   281,   286,   296,   297,
     299,   309,   320,   326,   333,   341,   370,   371,   376,   381,
     382,   383,   386,   389,   393,   394,   397,   398,   401,   403,
     407,   409,   411,   413,   415,   417,   427,   438,   439,   440,
     441,   442,   444,   447,   448,   449,   451,   452,   453,   454
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOIDMAIN", "NUM", "VAR", "PST", "PEN",
  "BST", "BEN", "SM", "INT", "FLOAT", "CHAR", "ARRAY", "GCD", "LCM", "INC",
  "DEC", "AND", "OR", "IF", "ELSE", "ELSEIF", "FOR", "WHILE", "CASE",
  "SWITCH", "DEFAULT", "PRINTFUNCTION", "PLUS", "MINUS", "MUL", "DIV",
  "MOD", "LT", "GT", "LE", "GE", "FACTORIAL", "ODDEVEN", "PRIME", "SORT",
  "SQR", "SQRT", "EXP", "POW", "LOG", "SIN", "COS", "TAN", "TRY", "CATCH",
  "CLASS", "FUNCTION", "FUN", "MAX", "MIN", "IFX", "'='", "','", "':'",
  "'^'", "$accept", "program", "line", "statement", "digits",
  "declaration", "TYPE", "ID1", "SWITCHCASE", "casegrammer", "casenumber",
  "defaultgrammer", "expression", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,    61,
      44,    58,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    69,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     1,     2,     2,     4,     7,
      11,    18,    11,     9,     9,     9,     7,     5,     7,     5,
       5,     5,     7,     7,     7,     7,     6,     3,     3,     3,
       8,     8,     5,     7,    11,     3,     1,     3,     2,     1,
       1,     1,     3,     1,     1,     2,     0,     2,     5,     4,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     2,     2,     2,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,    50,    51,     0,     2,
       5,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    64,    65,    63,     0,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     6,    43,
      38,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    61,     0,     0,     0,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     8,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    62,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    17,    19,    20,    21,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,    26,     0,     0,     0,
       0,    18,    24,    25,     9,     0,     0,     0,     0,    16,
       0,     0,    47,    45,     0,    33,    22,    23,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    10,     0,    12,    48,    34,     0,
       0,     0,     0,     0,     0,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    41,    64,    42,    43,    80,   182,   183,
     202,   203,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
      16,    30,    46,   -65,   -65,   179,   -65,    -9,    62,   -65,
     -65,   -65,   -65,   -65,    32,    43,    47,    79,    87,    86,
      88,    89,    90,    91,    94,    95,    97,   128,    62,    62,
      62,    62,    62,    62,    62,    62,   127,    93,   131,   132,
     133,   -65,   130,   137,   322,    62,   143,   -65,    62,    -2,
     138,   150,   152,   147,   149,    62,   156,   157,   158,    62,
     169,   170,   173,   -65,    -4,   -65,   -65,    27,   -20,   -65,
     -65,   -65,   -65,   233,    -7,    76,   174,   176,   -65,   -65,
     121,   -65,    62,    62,    62,    62,    62,    62,    62,    62,
      62,   339,   -65,    83,   -16,   180,   122,   139,   -65,   -65,
      92,   141,   -28,   191,   134,   195,   198,   200,   -65,   183,
      62,   201,   233,   206,   205,   154,   155,   211,    53,    53,
     -65,   -65,   -65,    39,    39,   116,   116,   -65,   -65,   225,
     228,   236,   237,   238,   244,   249,   251,   252,   253,   254,
     255,   256,   257,   -65,    27,   207,   260,   262,   233,   259,
     267,   -65,    62,    62,   281,   294,   295,   233,    -5,   296,
     297,   -65,   -65,   -65,   -65,   -65,   299,   -65,   233,   298,
     311,   312,   261,   278,   323,   324,   325,   313,   328,   302,
     329,   330,   341,    13,    62,   342,   -65,   352,   353,   354,
     355,   -65,   -65,   -65,    66,   233,   314,   233,   233,   -65,
     316,   305,   -65,   -65,   293,   -65,   -65,   -65,   -65,   -65,
     331,   361,   359,   371,   381,   382,   319,    62,   384,   233,
      62,   -65,   233,   -65,   -65,    62,   351,   233,   385,   310,
     386,   368,   -65,   387,   -65,   389,   -65,   -65,   -65,   233,
     398,   388,   400,   233,   402,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   -65,   -64,   -65,   -65,   379,   -65,   -65,   -65,
     -65,   -65,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,   112,   178,   129,   130,    94,   108,   136,   137,   111,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     1,
      65,    66,    67,    68,    69,    70,    71,    72,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     3,   200,
      93,   201,   110,    11,    12,    13,     4,   100,   146,    51,
      45,   104,    46,    52,   113,   179,   109,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     6,    47,    48,    82,
      83,    84,    85,    86,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    53,   169,    84,    85,    86,   210,   211,
     128,    54,    55,   177,    56,    57,    58,    59,    74,   134,
      60,    61,   144,    62,   185,    28,    29,    30,    31,    32,
      33,    34,    35,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   212,    63,   214,   215,    73,    75,   114,    76,    77,
      78,   139,    79,    95,   172,   173,    82,    83,    84,    85,
      86,    87,    88,    92,    96,   228,    97,    98,   230,    99,
     101,   102,   103,   233,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   105,   106,   240,   204,   107,   115,   244,
     116,   117,   132,     6,     7,     8,   131,   143,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   138,   133,
      19,   135,   140,    20,    21,   141,    22,   142,    23,   226,
     145,   147,   229,   148,   149,   150,   151,   231,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   152,    37,    38,   153,    39,    40,     6,     7,     8,
     154,   155,   156,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   157,   158,    19,   159,   160,    20,    21,   166,
      22,   161,    23,   170,   162,   163,   164,   165,   189,   167,
     168,   171,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,   190,    37,    38,   174,    39,
      40,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     218,   175,   176,   180,   181,   184,   196,   186,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   235,   187,   188,
     216,   213,   194,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    81,   191,   192,   193,   195,   197,   198,   219,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   127,
     199,   205,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   232,   206,   207,   208,   209,   217,   220,   221,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   237,   222,
     225,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     223,   224,   227,    50,   234,   236,   238,   239,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   241,   243,     0,
     242,   245
};

static const yytype_int16 yycheck[] =
{
       8,     8,     7,    19,    20,     7,    10,    35,    36,    73,
      30,    31,    32,    33,    34,    35,    36,    37,    38,     3,
      28,    29,    30,    31,    32,    33,    34,    35,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    45,     8,    26,
      48,    28,    62,    11,    12,    13,     0,    55,   112,     6,
      59,    59,    61,     6,    61,    60,    60,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     4,     5,     6,    30,
      31,    32,    33,    34,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     4,   148,    32,    33,    34,    22,    23,
       7,     4,     6,   157,     6,     6,     6,     6,     5,     7,
       6,     6,   110,     6,   168,    43,    44,    45,    46,    47,
      48,    49,    50,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   195,     4,   197,   198,     8,     5,    61,     6,     6,
      10,     7,     5,     5,   152,   153,    30,    31,    32,    33,
      34,    35,    36,    10,     4,   219,     4,    10,   222,    10,
       4,     4,     4,   227,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     4,     4,   239,   184,     4,     4,   243,
       4,    60,    60,     4,     5,     6,     6,     4,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     7,    60,
      21,    60,     7,    24,    25,     7,    27,     7,    29,   217,
       9,     5,   220,     8,    60,    60,     5,   225,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     6,    53,    54,     6,    56,    57,     4,     5,     6,
       4,     4,     4,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     4,    21,     4,     4,    24,    25,    52,
      27,     8,    29,     4,    10,    10,    10,    10,     7,     9,
       8,     4,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     7,    53,    54,     7,    56,
      57,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       7,     7,     7,     7,     7,     6,     4,     9,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     7,     7,     7,
       4,     7,     9,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    10,    10,    10,    10,     8,     8,     8,     8,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    10,
       9,     9,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    10,    10,    10,    10,    10,    61,     6,     9,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    10,     8,
      61,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       9,     9,     8,    14,     9,     9,     9,     8,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     9,     8,    -1,
      22,     9
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    64,     8,     0,    65,     4,     5,     6,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    21,
      24,    25,    27,    29,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    53,    54,    56,
      57,    66,    68,    69,    75,    59,    61,     5,     6,    75,
      69,     6,     6,     4,     4,     6,     6,     6,     6,     6,
       6,     6,     6,     4,    67,    75,    75,    75,    75,    75,
      75,    75,    75,     8,     5,     5,     6,     6,    10,     5,
      70,    10,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    75,    10,    75,     7,     5,     4,     4,    10,    10,
      75,     4,     4,     4,    75,     4,     4,     4,    10,    60,
      62,    66,     8,    61,    61,     4,     4,    60,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    10,     7,    19,
      20,     6,    60,    60,     7,    60,    35,    36,     7,     7,
       7,     7,     7,     4,    75,     9,    66,     5,     8,    60,
      60,     5,     6,     6,     4,     4,     4,     8,     4,     4,
       4,     8,    10,    10,    10,    10,    52,     9,     8,    66,
       4,     4,    75,    75,     7,     7,     7,    66,     7,    60,
       7,     7,    71,    72,     6,    66,     9,     7,     7,     7,
       7,    10,    10,    10,     9,     8,     4,     8,     8,     9,
      26,    28,    73,    74,    75,     9,    10,    10,    10,    10,
      22,    23,    66,     7,    66,    66,     4,    61,     7,     8,
       6,     9,     8,     9,     9,    61,    75,     8,    66,    75,
      66,    75,    10,    66,     9,     7,     9,    10,     9,     8,
      66,     9,    22,     8,    66,     9
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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
        case 2:

/* Line 1455 of yacc.c  */
#line 44 "mainf.y"
    {printf("Main Function is Finished !!!\n");
                                 printf("\n");    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 55 "mainf.y"
    { varnum++;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 57 "mainf.y"
    {  (yyval)=(yyvsp[(1) - (2)]);
		                           printf("\n.........................................\n");
		                           expnum++;
		                        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 62 "mainf.y"
    { 
					   printf("\nValue of the variable: %d\n",(yyvsp[(3) - (4)]));
					   sym[(yyvsp[(1) - (4)])]=(yyvsp[(3) - (4)]);
					   (yyval)=(yyvsp[(3) - (4)]);
					   printf("\n.........................................\n");
					   var_assign_num++;
					;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 70 "mainf.y"
    {
								if((yyvsp[(3) - (7)])){
								   	printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (7)]));
								       }
								else{   printf("\nWhen IF_Condition is Wrong->\n");
									printf("\nCondition value is '0' in IF block\n");
								}

								printf("\n.........................................\n");
								ifelsenum++;

							;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 83 "mainf.y"
    {
								if((yyvsp[(3) - (11)])){
									printf("value of expression in IF: %d\n",(yyvsp[(6) - (11)]));
								}
								else{
									printf("value of expression in ELSE: %d\n",(yyvsp[(10) - (11)]));
								}
								ifelsenum++;
								printf("\n.........................................\n");
							;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 95 "mainf.y"
    {
								 if((yyvsp[(3) - (18)]))      {
									      printf("value of expression in IF: %d\n",(yyvsp[(6) - (18)]));
								             }
                                                                 else if((yyvsp[(10) - (18)])){
                                                                             printf("value in ELSE_IF: %d\n",(yyvsp[(13) - (18)]));
                                                                             }
								 else        {
		                                                             printf("value of expression in ELSE: %d\n",(yyvsp[(17) - (18)]));
								             }     
								ifelsenum++;
								printf("\n.........................................\n");
							;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 110 "mainf.y"
    { 
	                                                     int i;
	                                                     printf("FOR Loop execution");
	                                                     for(i=(yyvsp[(3) - (11)]) ; i<(yyvsp[(5) - (11)]) ; i=i+(yyvsp[(7) - (11)]) )
                                                             {printf("\nvalue of the  i: %d expression value : %d\n", i,(yyvsp[(10) - (11)]));}
                                                             
	                                                     printf("\n.........................................\n");
                                                             fornum++;
                                                            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 121 "mainf.y"
    {   
                                                    int i;
	                                            printf("FOR Another Loop execution");
                                                      for (i=(yyvsp[(3) - (9)]) ; i<=(yyvsp[(5) - (9)]);i=i+1)
                                                         {
                                                              printf("\nvalue of the  i: %d expression value : %d\n", i,(yyvsp[(8) - (9)]));
	                                                      printf("\n.........................................\n");
                                                              fornum++;
                                                          }
                                                       
                                                    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 133 "mainf.y"
    {
	                                              int i;
	                                              printf("WHILE Loop execution");
	                                              for(i=(yyvsp[(3) - (9)]) ; i<(yyvsp[(5) - (9)]) ; i++) 
                                                      {printf("\nvalue of the loop: %d expression value: %d\n", i,(yyvsp[(8) - (9)]));}
	                                              printf("\n.........................................\n");									
				                      whilenum++;
                                                      ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 142 "mainf.y"
    {
	                                              int i;
	                                              printf("WHILE Loop2 execution");
	                                              for(i=(yyvsp[(3) - (9)]) ; i>(yyvsp[(5) - (9)]) ; i--) 
                                                      {printf("\nvalue of the loop: %d expression value: %d\n", i,(yyvsp[(8) - (9)]));}
	                                              printf("\n.........................................\n");									
				                      whilenum++;
                                                      ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 151 "mainf.y"
    {
		                                                 printf("\nSWITCH CASE Declaration\n");
	                                                         printf("\nFinally Choose Case number :-> %d\n",(yyvsp[(3) - (7)]));
                                                           
		                                                 printf("\n.........................................\n");
		                                                 switchnum++;
	                                                        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 159 "mainf.y"
    {printf("\nPrint Expression %d\n",(yyvsp[(3) - (5)]));
		                               printnum++;
		                               printf("\n.........................................\n");
                                              ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 164 "mainf.y"
    {
		                         printf("Array Declaration\n");
                                         printf("Size of the Array is : %d\n",(yyvsp[(5) - (7)]));
                                         {
                                             int array[8] = {4, 5, 23, 3, 8, 9, 13, 0};
                                               int loop;

                                                  for(loop = 0; loop < 8; loop++)
                                                  printf("%d ", array[loop]);
           
                                     }
  
                                         arr_num++;printf("\n.........................................\n");
                                        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 179 "mainf.y"
    {
		                    printf("\nFACTORIAL declaration\n");
		                    int i;
		                    int f=1;
		                    for(i=1;i<=(yyvsp[(3) - (5)]);i++)
		                       {
			                f=f*i;    
                                       }
		                    printf("FACTORIAL of %d is : %d\n",(yyvsp[(3) - (5)]),f);
		                    printf("\n.........................................\n");
                                    fun_num++;
                                   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 192 "mainf.y"
    {
		                  printf("Odd Even Number detection \n");
                                  if((yyvsp[(3) - (5)]) % 2 == 0) {
			                           printf("Number : %d is --- Even\n",(yyvsp[(3) - (5)]));
		                                  }
		                  else {
			                 printf("Number is :%d is --- Odd\n",(yyvsp[(3) - (5)]));
		                       }
		                  printf("\n.........................................\n");
		                  fun_num++;
		                 ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 204 "mainf.y"
    {  
                                    printf("Prime Number Detection -> \n");    
                                    int i,j,k;
                                    int p = 0;
                                    for(i=2;i<=(yyvsp[(3) - (5)])-1;i++)
                                       {
                                          j = (yyvsp[(3) - (5)]) % i;
                                          if (j == 0)
                                              {
                                                p=1;
                                                break;
                                              }
                                       }
                                    k=(yyvsp[(3) - (5)]);
                                    if( k == 1){
                                                 printf("1 is neither prime nor composite.\n");
                                                } 
                                    else{
                                             if(p == 0){
                                                printf("%d is prime.\n",(yyvsp[(3) - (5)]));
                                                }
                                             else{
                                                  printf("%d is Composite, not prime.\n",(yyvsp[(3) - (5)]));
		                                  fun_num++;
                                                 }
                                         } 
                                  printf("\n.........................................\n");
		                  fun_num++;
                              ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 234 "mainf.y"
    {
                                      printf("\nTwo Values are : %d & %d\n",(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),fmax((yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]))); 
                                      (yyval) = fmax((yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]));
                                      printf("\nMaximum Value is :  %d\n",(yyval));
                                      printf("\n.........................................\n");
		                      fun_num++;
                                     ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 241 "mainf.y"
    {
                                      printf("\nTwo Values are : %d & %d\n",(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),fmin((yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]))); 
                                      (yyval) = fmin((yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]));
                                      printf("\nMinimum Value is :  %d\n",(yyval));
                                      printf("\n.........................................\n");
		                      fun_num++;
                                     ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 248 "mainf.y"
    {
                                       int i, gcd;
                                       printf("\nTwo Values are: %d & %d\n ",(yyvsp[(3) - (7)]) ,(yyvsp[(5) - (7)]));
                                       for(i=1; i <= (yyvsp[(3) - (7)]) && i <= (yyvsp[(5) - (7)]); i++)
                                               {
                                                if((yyvsp[(3) - (7)])%i==0 && (yyvsp[(5) - (7)])%i==0)
                                                    gcd = i;
                                                    (yyval) =gcd;
                                               }                                                 
                                         printf("\nG.C.D of %d and %d is --> %d\n", (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyval));
                                         printf("\n.........................................\n"); 
                                          fun_num++; 
                                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 263 "mainf.y"
    {
                                       printf("\nLCM calculation using GCD::\n ");   
                                       int i, gcd,lcm;
                                       printf("\nTwo Values are: %d & %d\n ",(yyvsp[(3) - (7)]) ,(yyvsp[(5) - (7)]));
                                       for(i=1; i <= (yyvsp[(3) - (7)]) && i <= (yyvsp[(5) - (7)]); i++)
                                               {
                                                if((yyvsp[(3) - (7)])%i==0 && (yyvsp[(5) - (7)])%i==0)
                                                    gcd = i;
                                               }  
                                         lcm = ((yyvsp[(3) - (7)]) * (yyvsp[(5) - (7)])) / gcd;
                                         (yyval) = lcm; 
                                         printf("\nLCM of  %d and %d is --> %d\n", (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyval));                                                
                                         printf("\n.........................................\n");  
                                       fun_num++;
                                     ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 281 "mainf.y"
    {
		                               printf("FUNCTION found : : \n");
                                               fun[(yyvsp[(2) - (6)])]=(yyvsp[(5) - (6)]); 
                                               printf("fuction declared successfully\n");
                                             ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 286 "mainf.y"
    {   if(fun[(yyvsp[(1) - (3)])])
                           {
                               printf("function called successfully\n");
                               printf("function value is %d\n",fun[(yyvsp[(1) - (3)])]);
                            }
                            printf("\n.........................................\n");
		            fun_num++;                    
                       ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 296 "mainf.y"
    {  printf("Increment -> %d\n", ++(yyvsp[(2) - (3)])); (yyval) = ++(yyvsp[(2) - (3)]); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 297 "mainf.y"
    {  printf("Decrement -> %d\n", --(yyvsp[(2) - (3)])); (yyval) = --(yyvsp[(2) - (3)]) ; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 299 "mainf.y"
    {
                                                      if ( ((yyvsp[(2) - (8)])) && ((yyvsp[(6) - (8)])) ) {
                                                              printf("AND Condition is true\n" );
                                                                         }                         
                                                      else {
                                                             printf("AND Condition is not true\n" );
                                                           }
                                                        printf("\n.........................................\n");
		                                        fun_num++;                    
                                                      ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 309 "mainf.y"
    {
                                                      if ( ((yyvsp[(2) - (8)])) || ((yyvsp[(6) - (8)])) ) {
                                                              printf("OR Condition is true\n" );
                                                                         }                         
                                                      else {
                                                             printf(" OR Condition is not true\n" );
                                                           }
                                                        printf("\n.........................................\n");
		                                        fun_num++; 
                                                      ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 320 "mainf.y"
    {
                                          printf("Class Declaration\n");
		                          printf("Expression : %d\n",(yyvsp[(4) - (5)]));
		                          class_num++;
	                               ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 326 "mainf.y"
    {
                                                 printf("Inheritance occur \n");
                                                 printf("Inherit Value : 200.   ");   
		                                 printf("Expression value : %d",(yyvsp[(6) - (7)]));
		                                  class_num++;
		                               ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 333 "mainf.y"
    {
		                                                             printf("TRY CATCH block found\n");
		                                                             printf("TRY Block operation : %d\n",(yyvsp[(3) - (11)]));
		                                                             printf("CATCH Value : %d\n",(yyvsp[(7) - (11)]));
		                                                             printf("Catch Block operation :%d\n",(yyvsp[(10) - (11)]));
		                                                             printf("\n.........................................\n");
                                                                             trycatch_num++;
	                                                                    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 341 "mainf.y"
    {     
                             
                             int i,j,swap;  
                            for(i=0;i<29-1;i++)
                            {
                                for(j=0;j<29-i;j++)
                                {
                                    if (s[j] > s[j+1]) 
                                    {
                                        swap   = s[j];
                                        s[j]   = s[j+1];
                                        s[j+1] = swap;
                                    }
                                }
                            }
                            printf("sorted values are ");
                            for(i=0;i<30;i++)
                            {
                                if(s[i] != 0)
                                {
                                    printf("%d  ",s[i]);
                                }
                            
                            }
                            printf("\n.........................................\n");
                            fun_num++;
                    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 370 "mainf.y"
    {   s[(yyvsp[(1) - (1)])]=(yyvsp[(1) - (1)]);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 371 "mainf.y"
    { s[(yyvsp[(3) - (3)])]=(yyvsp[(3) - (3)]);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 376 "mainf.y"
    {printf("\nVariable Declaration Complete!\n");
		printf("\n..............................................\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 381 "mainf.y"
    {printf("Interger declaration\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 382 "mainf.y"
    {printf("Float declaration\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 383 "mainf.y"
    {printf("Character declaration\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 401 "mainf.y"
    {printf("Case No : %d & expression value :%d \n",(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 403 "mainf.y"
    {printf("\nDefault case & expression value : %d",(yyvsp[(3) - (4)])); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 407 "mainf.y"
    { printf("\nNumber :  %d\n",(yyvsp[(1) - (1)]) ); (yyval) = (yyvsp[(1) - (1)]);  ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 409 "mainf.y"
    { (yyval) = sym[(yyvsp[(1) - (1)])]; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 411 "mainf.y"
    {printf("\nAddition :%d+%d = %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]) );  (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 413 "mainf.y"
    {printf("\nSubtraction :%d-%d=%d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])-(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 415 "mainf.y"
    {printf("\nMultiplication :%d*%d = %d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])*(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 417 "mainf.y"
    { if((yyvsp[(3) - (3)])) {
				     		  printf("\nDivision :%d/%d = %d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]));
				     		  (yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				     		 }
				  	  else {
						(yyval) = 0;
						printf("\ndivision by zero\n\t");
				  	       } 	
				    	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 427 "mainf.y"
    { if((yyvsp[(3) - (3)])){
				     		 printf("\nMod :%d | %d = %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]));
				     		 (yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]);
				     	         }
				  	  else{
						  (yyval) = 0;
						  printf("\nMOD by zero\n");
				  	      } 	
				    	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 438 "mainf.y"
    {printf("\nLess Than :%d < %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]) ; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 439 "mainf.y"
    {printf("\nGreater than :%d > %d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 440 "mainf.y"
    {printf("\nLess than Equal To :%d <= %d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)]);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 441 "mainf.y"
    {printf("\nGreater than Equal To :%d >= %d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)]);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 442 "mainf.y"
    {  (yyval) = (yyvsp[(2) - (3)]);  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 444 "mainf.y"
    {printf("\nPower : %d^%d\n",(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),(yyvsp[(2) - (4)])^(yyvsp[(4) - (4)]) );  
                                                (yyval) = pow((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));
                                                printf("\nvalue of Power: %d\n", (yyval));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 447 "mainf.y"
    {printf("\nExponential of %d : %lf \n",(yyvsp[(2) - (2)]),(exp((yyvsp[(2) - (2)]))) );  (yyval) = (exp((yyvsp[(2) - (2)])));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 448 "mainf.y"
    {printf("\nSqure of value %d : %d \n",(yyvsp[(2) - (2)]),(yyvsp[(2) - (2)])*(yyvsp[(2) - (2)]));  (yyval) = (yyvsp[(2) - (2)])*(yyvsp[(2) - (2)]);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 449 "mainf.y"
    {printf("\nSqureRoot of value %d : %lf \n",(yyvsp[(2) - (2)]),(sqrt((yyvsp[(2) - (2)])))); (yyval) = sqrt((yyvsp[(2) - (2)]));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 451 "mainf.y"
    {printf("\nValue of Log(%d) is : %lf\n",(yyvsp[(2) - (2)]),(log((yyvsp[(2) - (2)]))) ); (yyval)=(log((yyvsp[(2) - (2)])));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 452 "mainf.y"
    {printf("\nValue of Sin(%d) is : %lf\n",(yyvsp[(2) - (2)]),sin((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=sin((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 453 "mainf.y"
    {printf("\nValue of Cos(%d) is : %lf\n",(yyvsp[(2) - (2)]),cos((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=cos((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 454 "mainf.y"
    {printf("\nValue of Tan(%d) is : %lf\n",(yyvsp[(2) - (2)]),tan((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=tan((yyvsp[(2) - (2)])*3.1416/180);;}
    break;



/* Line 1455 of yacc.c  */
#line 2298 "mainf.tab.c"
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



/* Line 1675 of yacc.c  */
#line 458 "mainf.y"



int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("inputn.txt","r",stdin);
        freopen("outputn.txt","w",stdout);

	yyparse();
        
	printf("\n**********************************\n");

	printf("\n**********************************\n");

	printf("All the input parsing is completed !\n");
          
	printf("\n");
	
        printf("Variable declaration Count :%d \n",varnum);
        printf("Expression Count : %d\n",expnum);
        printf("If_else Count : %d\n",ifelsenum);
        printf("For loop Count :  %d\n",fornum);
	printf("While loop Count : %d\n",whilenum);
	printf("Switch Case Count : %d\n",switchnum);
        printf("Print function Count : %d\n",printnum);
        printf("Function Count : %d\n",fun_num);
	printf("Array Count : %d\n",arr_num);
	printf("Class Count : %d \n",class_num);
	printf("Try Catch Count : %d \n",trycatch_num);
	
printf("Variable Assignment Count : %d \n",var_assign_num);
        

	printf("\n**********************************\n");

	printf("\n**********************************\n");

        return 0;
}








