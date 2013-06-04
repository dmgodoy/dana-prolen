/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "semantico.y"


#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include "traduccion.h"

void yyerror(const char *msg) ;





/* Line 268 of yacc.c  */
#line 86 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     MAIN = 258,
     INICIO = 259,
     FINBLO = 260,
     INICIOV = 261,
     FINV = 262,
     PYC = 263,
     COMA = 264,
     TIPOSIMPLE = 265,
     PROCED = 266,
     CORIZ = 267,
     CORDER = 268,
     IF = 269,
     ELSE = 270,
     WHILE = 271,
     READ = 272,
     WRITE = 273,
     SWITCH = 274,
     CASE = 275,
     DEFAULT = 276,
     DOSP = 277,
     BREAK = 278,
     CONSTANTE = 279,
     PARDER = 280,
     PARIZ = 281,
     CADENA = 282,
     IDENTIFICADOR = 283,
     CONSTANTE_E = 284,
     CARACTER = 285,
     ASIG = 286,
     OPB_OR = 287,
     OPB_AND = 288,
     OPB_IG = 289,
     OPB_REL = 290,
     OPB_ADD = 291,
     OPB_MUL = 292,
     OPU = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 166 "y.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    11,    12,    20,    23,
      24,    25,    29,    30,    37,    38,    44,    45,    51,    52,
      56,    58,    60,    65,    72,    76,    77,    80,    82,    84,
      85,    86,    92,    93,    98,   100,   102,   105,   107,   109,
     111,   113,   115,   117,   119,   121,   123,   125,   126,   127,
     134,   138,   141,   145,   149,   153,   157,   161,   165,   168,
     170,   172,   174,   176,   178,   180,   181,   182,   190,   191,
     197,   201,   205,   207,   209,   211,   213,   217,   218,   219,
     225,   226,   233,   237,   241,   245,   247,   249,   251,   260,
     268,   269,   271,   273,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    -1,    41,    42,    43,    -1,     3,    -1,
      -1,    -1,     4,    44,    56,    45,    46,    63,     5,    -1,
      46,    47,    -1,    -1,    -1,    49,    48,    43,    -1,    -1,
      11,    28,    26,    50,    52,    25,    -1,    -1,    11,    28,
      26,    51,    25,    -1,    -1,    52,     9,    10,    53,    55,
      -1,    -1,    10,    54,    55,    -1,     1,    -1,    28,    -1,
      28,    12,    68,    13,    -1,    28,    12,    68,     9,    68,
      13,    -1,     6,    57,     7,    -1,    -1,    57,    58,    -1,
      58,    -1,     1,    -1,    -1,    -1,    10,    59,    61,    60,
       8,    -1,    -1,    61,     9,    62,    55,    -1,    55,    -1,
       1,    -1,    63,    64,    -1,    64,    -1,    43,    -1,    65,
      -1,    75,    -1,    81,    -1,    83,    -1,    84,    -1,    69,
      -1,    87,    -1,     1,    -1,    -1,    -1,    55,    66,    31,
      68,    67,     8,    -1,    26,    68,    25,    -1,    36,    68,
      -1,    68,    32,    68,    -1,    68,    33,    68,    -1,    68,
      34,    68,    -1,    68,    35,    68,    -1,    68,    36,    68,
      -1,    68,    37,    68,    -1,    38,    68,    -1,    55,    -1,
      24,    -1,    29,    -1,    30,    -1,    73,    -1,     1,    -1,
      -1,    -1,    28,    26,    70,    74,    25,    71,     8,    -1,
      -1,    28,    26,    25,    72,     8,    -1,     4,    74,     5,
      -1,    74,     9,    68,    -1,    68,    -1,    77,    -1,    76,
      -1,    78,    -1,    78,    15,    64,    -1,    -1,    -1,    79,
      14,    68,    80,    64,    -1,    -1,    16,    26,    68,    82,
      25,    64,    -1,    17,    61,     8,    -1,    18,    85,     8,
      -1,    85,     9,    86,    -1,    86,    -1,    68,    -1,    27,
      -1,    19,    26,    28,    25,     4,    88,    90,     5,    -1,
      88,    20,    89,    22,    63,    23,     8,    -1,    -1,    29,
      -1,    30,    -1,    21,    22,    63,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    59,    71,    73,    75,    73,    88,    88,
      90,    90,    94,    94,    95,    95,    97,    97,    98,    98,
      99,   102,   111,   135,   164,   164,   165,   166,   166,   170,
     176,   169,   182,   182,   188,   193,   195,   195,   197,   198,
     199,   200,   201,   202,   203,   204,   204,   206,   206,   206,
     221,   223,   235,   241,   251,   260,   272,   280,   303,   311,
     322,   326,   330,   334,   335,   338,   342,   337,   347,   347,
     350,   352,   357,   364,   364,   366,   368,   371,   373,   371,
     386,   385,   391,   393,   395,   395,   397,   397,   399,   401,
     401,   403,   403,   405,   405
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "INICIO", "FINBLO", "INICIOV",
  "FINV", "PYC", "COMA", "TIPOSIMPLE", "PROCED", "CORIZ", "CORDER", "IF",
  "ELSE", "WHILE", "READ", "WRITE", "SWITCH", "CASE", "DEFAULT", "DOSP",
  "BREAK", "CONSTANTE", "PARDER", "PARIZ", "CADENA", "IDENTIFICADOR",
  "CONSTANTE_E", "CARACTER", "ASIG", "OPB_OR", "OPB_AND", "OPB_IG",
  "OPB_REL", "OPB_ADD", "OPB_MUL", "OPU", "$accept", "programa", "$@1",
  "cabecera_programa", "bloque", "$@2", "$@3", "declar_de_subprogs",
  "declar_subprog", "$@4", "cabecera_subprograma", "$@5", "$@6",
  "declar_parametros", "$@7", "$@8", "iden", "declar_de_variables_locales",
  "variables_locales", "cuerpo_decla_variables", "$@9", "$@10",
  "lista_variables", "$@11", "sentencias", "sentencia",
  "sentencia_asignacion", "$@12", "$@13", "expresion", "procedimiento",
  "$@14", "@15", "@16", "agregados", "lista_expresiones", "sentencia_if",
  "alternativa_simple", "alternativa_doble", "if_expresion_sentencia",
  "$@17", "$@18", "sentencia_while", "$@19", "sentencia_entrada",
  "sentencia_salida", "lista_expresiones_o_cadena", "expresion_o_cadena",
  "sentencia_case", "casos", "opcion", "caso_por_defecto", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    41,    40,    42,    44,    45,    43,    46,    46,
      48,    47,    50,    49,    51,    49,    53,    52,    54,    52,
      52,    55,    55,    55,    56,    56,    57,    57,    57,    59,
      60,    58,    62,    61,    61,    61,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    66,    67,    65,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    70,    71,    69,    72,    69,
      73,    74,    74,    75,    75,    76,    77,    79,    80,    78,
      82,    81,    83,    84,    85,    85,    86,    86,    87,    88,
      88,    89,    89,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     0,     0,     7,     2,     0,
       0,     3,     0,     6,     0,     5,     0,     5,     0,     3,
       1,     1,     4,     6,     3,     0,     2,     1,     1,     0,
       0,     5,     0,     4,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     6,
       3,     2,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     0,     0,     7,     0,     5,
       3,     3,     1,     1,     1,     1,     3,     0,     0,     5,
       0,     6,     3,     3,     3,     1,     1,     1,     8,     7,
       0,     1,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     4,     0,     5,     3,    25,     0,
       6,    28,    29,     0,    27,     9,     0,    24,    26,     0,
      35,    21,    34,    30,    46,     0,     0,     0,     0,     0,
      21,    38,     8,    10,    47,     0,    37,    39,    44,    40,
      74,    73,    75,     0,    41,    42,    43,    45,     0,    32,
       0,     0,     0,     0,    64,     0,    60,     0,    87,    61,
      62,     0,     0,    59,    86,    63,     0,    85,     0,    65,
       0,     0,     7,    36,     0,     0,     0,     0,    31,    12,
      80,    82,    72,     0,     0,    51,    58,     0,     0,     0,
       0,     0,     0,    83,     0,     0,    68,     0,    11,     0,
      76,    78,     0,    22,    33,     0,     0,     0,    70,     0,
      50,    52,    53,    54,    55,    56,    57,    84,     0,     0,
       0,    48,     0,     0,    20,    18,     0,    15,     0,    71,
      90,    69,    66,     0,    79,    23,     0,     0,    13,    81,
      94,     0,    49,    19,    16,     0,     0,     0,    67,     0,
      91,    92,     0,     0,    88,    17,     0,     0,     0,     0,
      89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    31,     8,    15,    19,    32,    70,
      33,   105,   106,   126,   149,   136,    63,    10,    13,    14,
      16,    50,    23,    77,    35,    36,    37,    71,   133,    64,
      38,    97,   141,   119,    65,    83,    39,    40,    41,    42,
      43,   122,    44,   107,    45,    46,    66,    67,    47,   140,
     152,   147
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int16 yypact[] =
{
    -101,    13,    20,  -101,  -101,    40,  -101,  -101,    54,     4,
    -101,  -101,  -101,    35,  -101,  -101,     8,  -101,  -101,    91,
    -101,    67,  -101,    72,  -101,    63,    85,     8,     3,    95,
      -6,  -101,  -101,  -101,  -101,   130,  -101,  -101,  -101,  -101,
    -101,  -101,    78,   108,  -101,  -101,  -101,  -101,    42,  -101,
     124,   110,    42,    29,  -101,    42,  -101,    42,  -101,  -101,
    -101,    42,    42,  -101,   163,  -101,    46,  -101,   111,   113,
      40,   112,  -101,  -101,   175,    42,    64,   117,  -101,   126,
     163,  -101,   163,    19,    93,  -101,  -101,    42,    42,    42,
      42,    42,    42,  -101,     3,   127,  -101,    42,  -101,    42,
    -101,   163,    42,  -101,  -101,    15,   132,   135,  -101,    42,
    -101,    80,   150,    39,    28,   118,  -101,  -101,   157,   154,
       1,   163,   175,    50,  -101,  -101,     9,  -101,   175,   163,
    -101,  -101,  -101,   156,  -101,  -101,   117,   160,  -101,  -101,
      69,   167,  -101,  -101,  -101,    74,   158,   176,  -101,   117,
    -101,  -101,   166,   175,  -101,  -101,   175,   149,   155,   174,
    -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,    -3,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,   -16,  -101,  -101,   177,
    -101,  -101,   178,  -101,  -100,   -34,  -101,  -101,  -101,   -40,
    -101,  -101,  -101,  -101,  -101,   104,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,   114,  -101,  -101,
    -101,  -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -94
static const yytype_int16 yytable[] =
{
      22,    73,     7,    34,    54,    11,    48,    55,    76,    20,
     109,    22,    80,     3,    12,    82,   124,    84,   137,    34,
      69,    85,    86,     4,   108,   125,   132,    56,   109,    57,
      58,    21,    59,    60,   138,   101,    21,    81,    49,    61,
     100,    62,    17,    54,     6,    12,    55,   111,   112,   113,
     114,   115,   116,   157,    93,    94,   158,    82,    34,   121,
       9,   104,   123,   135,    91,    92,    56,    98,    57,   129,
      21,    59,    60,   102,    90,    91,    92,   103,    61,    48,
      62,    49,    87,    88,    89,    90,    91,    92,   134,   145,
     146,    51,    24,    74,   139,     6,    87,    88,    89,    90,
      91,    92,    25,   150,   151,   -77,    34,    26,    27,    28,
      29,    52,    34,    88,    89,    90,    91,    92,   110,    30,
     143,    68,    75,    73,    73,    87,    88,    89,    90,    91,
      92,    24,    78,   155,     6,    72,    79,    34,    96,    95,
      34,    34,    34,    99,   -77,    21,    26,    27,    28,    29,
      24,   -14,   118,     6,   -93,    92,    24,   127,    30,     6,
     128,   130,   131,   -77,   142,    26,    27,    28,    29,   -77,
     144,    26,    27,    28,    29,   148,    24,    30,   159,     6,
     153,   154,   160,    30,    89,    90,    91,    92,   156,   -77,
      18,    26,    27,    28,    29,    87,    88,    89,    90,    91,
      92,   120,     0,    30,     0,    53,     0,     0,   117
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-101))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      16,    35,     5,    19,     1,     1,    12,     4,    48,     1,
       9,    27,    52,     0,    10,    55,     1,    57,     9,    35,
      26,    61,    62,     3,     5,    10,    25,    24,     9,    26,
      27,    28,    29,    30,    25,    75,    28,     8,     9,    36,
      74,    38,     7,     1,     4,    10,     4,    87,    88,    89,
      90,    91,    92,   153,     8,     9,   156,    97,    74,    99,
       6,    77,   102,    13,    36,    37,    24,    70,    26,   109,
      28,    29,    30,     9,    35,    36,    37,    13,    36,    12,
      38,     9,    32,    33,    34,    35,    36,    37,   122,    20,
      21,    28,     1,    15,   128,     4,    32,    33,    34,    35,
      36,    37,    11,    29,    30,    14,   122,    16,    17,    18,
      19,    26,   128,    33,    34,    35,    36,    37,    25,    28,
     136,    26,    14,   157,   158,    32,    33,    34,    35,    36,
      37,     1,     8,   149,     4,     5,    26,   153,    25,    28,
     156,   157,   158,    31,    14,    28,    16,    17,    18,    19,
       1,    25,    25,     4,     5,    37,     1,    25,    28,     4,
      25,     4,     8,    14,     8,    16,    17,    18,    19,    14,
      10,    16,    17,    18,    19,     8,     1,    28,    23,     4,
      22,     5,     8,    28,    34,    35,    36,    37,    22,    14,
      13,    16,    17,    18,    19,    32,    33,    34,    35,    36,
      37,    97,    -1,    28,    -1,    27,    -1,    -1,    94
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,     3,    42,     4,    43,    44,     6,
      56,     1,    10,    57,    58,    45,    59,     7,    58,    46,
       1,    28,    55,    61,     1,    11,    16,    17,    18,    19,
      28,    43,    47,    49,    55,    63,    64,    65,    69,    75,
      76,    77,    78,    79,    81,    83,    84,    87,    12,     9,
      60,    28,    26,    61,     1,     4,    24,    26,    27,    29,
      30,    36,    38,    55,    68,    73,    85,    86,    26,    26,
      48,    66,     5,    64,    15,    14,    68,    62,     8,    26,
      68,     8,    68,    74,    68,    68,    68,    32,    33,    34,
      35,    36,    37,     8,     9,    28,    25,    70,    43,    31,
      64,    68,     9,    13,    55,    50,    51,    82,     5,     9,
      25,    68,    68,    68,    68,    68,    68,    86,    25,    72,
      74,    68,    80,    68,     1,    10,    52,    25,    25,    68,
       4,     8,    25,    67,    64,    13,    54,     9,    25,    64,
      88,    71,     8,    55,    10,    20,    21,    90,     8,    53,
      29,    30,    89,    22,     5,    55,    22,    63,    63,    23,
       8
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/* Line 1806 of yacc.c  */
#line 59 "semantico.y"
    {
initTS();
  openFiles("out.c");
}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 65 "semantico.y"
    {
printf("\nAnálisis finalizado.\n");
 closeFiles(); 
return 0;
}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 73 "semantico.y"
    {IntroIniBloq();if(main_flag==0)writeFout("\n{\n");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 75 "semantico.y"
    {
  if(main_flag==1){
    writeMain();
    main_flag=0;
  }

}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 84 "semantico.y"
    {IntroFinBloq();writeFout("\n}\n");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 90 "semantico.y"
    { subProg = 1; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 91 "semantico.y"
    { /*subProg = 0;*/ }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 94 "semantico.y"
    {TS_InsertaSUBPROG(&(yyvsp[(2) - (3)]));}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 95 "semantico.y"
    {TS_InsertaSUBPROG(&(yyvsp[(2) - (3)]));}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 97 "semantico.y"
    {tipoTmp = (yyvsp[(3) - (3)]).tipo;}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 97 "semantico.y"
    {TS_InsertaPARAMF(&(yyvsp[(5) - (5)]));}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 98 "semantico.y"
    {tipoTmp = (yyvsp[(1) - (1)]).tipo;}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 98 "semantico.y"
    {TS_InsertaPARAMF(&(yyvsp[(3) - (3)]));}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 103 "semantico.y"
    { 
    atributocpy(&(yyval),&(yyvsp[(1) - (1)]));
    (yyval).tipo = tipoTmp;
    if(dec_flag==1)
    writeFout((yyvsp[(1) - (1)]).lexema);
    //en principio es lo mismo dec_flag o no ya que en sentencia se sobreescribe
}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 112 "semantico.y"
    { 
  if(dec_flag==1){
    atributocpy(&(yyval),&(yyvsp[(1) - (4)]));
    (yyval).tipo = tipoEnArray(tipoTmp);
    (yyval).dimensiones = 1;
  if(checkIndexEntero(&(yyvsp[(3) - (4)])))
    (yyval).TamDimen1 = atoi((yyvsp[(3) - (4)]).lexema); /* revisar */
  char tmp[256];
  sprintf(tmp,"%s[%i]",(yyvsp[(1) - (4)]).lexema,(yyval).TamDimen1);
  writeFout(tmp);
    //showAtt(&$$);
    //getchar();
  }else{
    atributocpy(&(yyval),&(yyvsp[(1) - (4)]));
    (yyval).tipo = tipoEnArray(tipoTmp);
    (yyval).dimensiones = 1;
  if(checkIndexEntero(&(yyvsp[(3) - (4)])))
    (yyval).TamDimen1 = atoi((yyvsp[(3) - (4)]).lexema); /* revisar */
    //showAtt(&$$);
    //getchar();
  }
}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 136 "semantico.y"
    { 
  if(dec_flag){
    atributocpy(&(yyval),&(yyvsp[(1) - (6)]));
    (yyval).tipo = tipoEnArray(tipoTmp);
    (yyval).dimensiones = 2;
    //if(checkIndexEntero(&$3))
    (yyval).TamDimen1 = atoi((yyvsp[(3) - (6)]).lexema); /* revisar */
    //if(checkIndexEntero(&$5))
    (yyval).TamDimen2 = atoi((yyvsp[(5) - (6)]).lexema); /* revisar */
    //showAtt(&$$);
    //getchar();
    char tmp[256];
    sprintf(tmp,"%s[%i][%i]",(yyvsp[(1) - (6)]).lexema,(yyval).TamDimen1,(yyval).TamDimen2);
    writeFout(tmp);
  }else{
    atributocpy(&(yyval),&(yyvsp[(1) - (6)]));
    (yyval).tipo = tipoEnArray(tipoTmp);
    (yyval).dimensiones = 2;
    //if(checkIndexEntero(&$3))
    (yyval).TamDimen1 = atoi((yyvsp[(3) - (6)]).lexema); /* revisar */
    //if(checkIndexEntero(&$5))
    (yyval).TamDimen2 = atoi((yyvsp[(5) - (6)]).lexema); /* revisar */
    //showAtt(&$$);
    //getchar();
  }
}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 170 "semantico.y"
    {
  tipoTmp = (yyvsp[(1) - (1)]).tipo;
  dec_flag=1;
  writeFout(dtipo2ctipostr((yyvsp[(1) - (1)]).tipo));
}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 176 "semantico.y"
    {
  dec_flag=0;
  writeFout(";\n");
}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 182 "semantico.y"
    {writeFout(",");}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 183 "semantico.y"
    {
  if(dec_flag){
    TS_InsertaVAR(&(yyvsp[(4) - (4)]));
  }
}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 189 "semantico.y"
    {
if(dec_flag)
  TS_InsertaVAR(&(yyvsp[(1) - (1)]));
}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 203 "semantico.y"
    {checkProced(&(yyvsp[(1) - (1)]),&(yyval));}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 206 "semantico.y"
    {checkScope(&(yyvsp[(1) - (1)]),&(yyvsp[(1) - (1)]));writeFout("{//Inicio asignacion\n"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 206 "semantico.y"
    {
checkEqualTypeAsig(&(yyvsp[(1) - (4)]),&(yyvsp[(4) - (4)]));
 if(es_array((yyvsp[(1) - (4)]).tipo) && es_array((yyvsp[(4) - (4)]).tipo)){
   checkEqualDimenArray(&(yyvsp[(1) - (4)]),&(yyvsp[(4) - (4)]));
   //showAtt(&$1);
   //showAtt(&$4);
 }
 writeFout((yyvsp[(1) - (4)]).lexema); //TODO ARRAYS
 writeFout(" = ");
 writeFout((yyvsp[(4) - (4)]).expr_tmp);
 writeFout(";\n}//Fin asignacion\n");

}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 222 "semantico.y"
    {atributocpy(&(yyval),&(yyvsp[(2) - (3)]));}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 223 "semantico.y"
    {
  atributocpy(&(yyval),&(yyvsp[(2) - (2)]));
  /*AnyCheck?*/
  /* si está activo el flag de array dar error para $1.atrib=2 ( - ) */
  if(array_flag){
    checkSignArray(&(yyvsp[(1) - (2)]));//TODO
  }
  writeOpuExpr(&(yyval),(yyvsp[(1) - (2)]).lexema,&(yyvsp[(2) - (2)]));
  //TODO writeExpr
  //printf("OPU_ADD\n");
  getchar();
}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 235 "semantico.y"
    {
  atributocpy(&(yyval),&(yyvsp[(1) - (3)]));
  if(check_OPB_OR(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0) (yyval).tipo=desconocido;
  (yyval).lexema = "_";
  writeExpr(&(yyval),&(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).lexema,&(yyvsp[(3) - (3)]));
}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 241 "semantico.y"
    {
 

  atributocpy(&(yyval),&(yyvsp[(1) - (3)]));

  if(check_OPB_AND(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0) (yyval).tipo=desconocido;
  (yyval).lexema = "_";
 
  writeExpr(&(yyval),&(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).lexema,&(yyvsp[(3) - (3)]));
}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 251 "semantico.y"
    {
  atributocpy(&(yyval),&(yyvsp[(1) - (3)]));
  if(check_OPB_IG(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0)
    (yyval).tipo=desconocido;
  else
    (yyval).tipo=booleano;
  (yyval).lexema = "_";
  writeExpr(&(yyval),&(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).lexema,&(yyvsp[(3) - (3)]));
}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 260 "semantico.y"
    {
  atributocpy(&(yyval),&(yyvsp[(1) - (3)]));
  if(check_OPB_REL(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0)
    (yyval).tipo=desconocido;
  else{
    (yyval).tipo=booleano;
  }
  (yyval).lexema = "_";
 
  writeExpr(&(yyval),&(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).lexema,&(yyvsp[(3) - (3)]));
  
}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 272 "semantico.y"
    {
  atributocpy(&(yyval),&(yyvsp[(1) - (3)]));
  if(check_OPB_ADD(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0 ||checkEqualDimenArray(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0)
    (yyval).tipo=desconocido;
  (yyval).lexema = "_";
  writeExpr(&(yyval),&(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).lexema,&(yyvsp[(3) - (3)]));
  //  printf("%s = %s OPB_ADD %s\n",$$.expr_tmp,$1.expr_tmp,$3.expr_tmp);
}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 280 "semantico.y"
    {
  atributocpy(&(yyval),&(yyvsp[(1) - (3)]));
  if(check_OPB_MUL(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0) {(yyval).tipo=desconocido;}
  if((yyvsp[(2) - (3)]).atrib == 1){ /*  **  */
    if(checkArrayMulDimension(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0)
      {(yyval).tipo=desconocido;}
    (yyval).TamDimen1 = (yyvsp[(1) - (3)]).TamDimen1;
    (yyval).TamDimen2 = (yyvsp[(3) - (3)]).TamDimen2;
    //showAtt(&$$);
    //getchar();
  }else{
    if(checkEqualDimenArray(&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]))==0){
      (yyval).tipo=desconocido;
    }else{
      //printf("Opp entre arrays\n");
      (yyval).TamDimen1 = (yyvsp[(1) - (3)]).TamDimen1;
      (yyval).TamDimen2 = (yyvsp[(1) - (3)]).TamDimen2;
      //showAtt(&$$);getchar();
    }
  }
  (yyval).lexema = "_";
  writeExpr(&(yyval),&(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).lexema,&(yyvsp[(3) - (3)]));
}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 304 "semantico.y"
    { if(checkBoolean(&(yyvsp[(2) - (2)]))==0)
    (yyval).tipo=desconocido; 
  else (yyval).tipo=(yyvsp[(2) - (2)]).tipo;
  //TODO writeExpr
  writeOpuExpr(&(yyval),(yyvsp[(1) - (2)]).lexema,&(yyvsp[(2) - (2)]));

}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 312 "semantico.y"
    {
 checkScope(&(yyvsp[(1) - (1)]),&(yyval));
 if((yyval).dimensiones == (yyvsp[(1) - (1)]).dimensiones){
   (yyval).tipo=tipoArray((yyval).tipo);
 }//else if($$.dimensiones == $1.dimensiones+1){
   //
 //}
 (yyval).expr_tmp = strdup((yyvsp[(1) - (1)]).lexema);
 
}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 323 "semantico.y"
    {
atributocpy(&(yyval),&(yyvsp[(1) - (1)])); (yyval).expr_tmp = strdup((yyvsp[(1) - (1)]).lexema);
}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 327 "semantico.y"
    {
atributocpy(&(yyval),&(yyvsp[(1) - (1)])); (yyval).expr_tmp = strdup((yyvsp[(1) - (1)]).lexema);
}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 331 "semantico.y"
    {
atributocpy(&(yyval),&(yyvsp[(1) - (1)])); (yyval).expr_tmp = strdup((yyvsp[(1) - (1)]).lexema);
}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 334 "semantico.y"
    { /*que no sea index de array o se pase a proc*/ }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 338 "semantico.y"
    {call_procedure_flag=1;

}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 342 "semantico.y"
    {
call_procedure_flag=0;
 checkCallProc(&(yyvsp[(1) - (5)]),&(yyval));

}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 347 "semantico.y"
    {checkCallProcWithoutArgs(&(yyvsp[(1) - (3)]),&(yyval));}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 353 "semantico.y"
    {if(call_procedure_flag){
    linkAtt(&(yyvsp[(3) - (3)]));
  }
}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 358 "semantico.y"
    {if(call_procedure_flag){
    linkAtt(&(yyvsp[(1) - (1)]));
  }
}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 364 "semantico.y"
    {write_close_if();}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 364 "semantico.y"
    {write_close_if();}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 366 "semantico.y"
    {writeFout("} //Fin Sentencia IF\n");}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 368 "semantico.y"
    {writeFout("} //Fin Sentencia IF-ELSE\n");}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 371 "semantico.y"
    {writeFout("{ //Sentencia IF\n");}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 373 "semantico.y"
    {
  write_init_if();
  write_conditional_jump_to_else_tag(&(yyvsp[(3) - (3)]));
checkBoolean(&(yyvsp[(3) - (3)]));
}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 379 "semantico.y"
    {
write_go_to_exit_tag();
write_else_tag();
}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 386 "semantico.y"
    {
checkBoolean(&(yyvsp[(3) - (3)]));
}
    break;



/* Line 1806 of yacc.c  */
#line 2121 "y.tab.c"
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



/* Line 2067 of yacc.c  */
#line 408 "semantico.y"


#include "lex.yy.c"


void yyerror( const char *msg )
{
	printf("\nLinea %d: ERROR-> %s\n", yylineno, msg);
	

}

