/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

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
#line 1 "grammaire.y"

	#include<stdio.h>
	#include<string.h>
	#include"translate.h"
	int yylex();
	void yyerror(char const* s);
	extern FILE *yyin;

/* Line 371 of yacc.c  */
#line 77 "grammaire.tab.c"

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammaire.tab.h".  */
#ifndef YY_YY_GRAMMAIRE_TAB_H_INCLUDED
# define YY_YY_GRAMMAIRE_TAB_H_INCLUDED
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
     TBEGIN = 258,
     DO = 259,
     DIV = 260,
     TEND = 261,
     FUNCTION = 262,
     PROCEDURE = 263,
     IF = 264,
     MOD = 265,
     PROGRAM = 266,
     THEN = 267,
     ELSE = 268,
     VAR = 269,
     WHILE = 270,
     FOR = 271,
     TO = 272,
     INTEGER = 273,
     STRING = 274,
     REAL = 275,
     BOOLEAN = 276,
     CHAR = 277,
     ASSIGNATION = 278,
     POINT = 279,
     DEUXPOINTS = 280,
     VIRGULE = 281,
     POINTVIRGULE = 282,
     EGAL = 283,
     SUPERIEUREGAL = 284,
     SUPERIEUR = 285,
     INFERIEUREGAL = 286,
     INFERIEUR = 287,
     DIFFERENT = 288,
     ADDITION = 289,
     SOUSTRACTION = 290,
     MULTIPLICATION = 291,
     DIVISION = 292,
     PARENTHESEGAUCHE = 293,
     PARENTHESEDROITE = 294,
     APOSTROPHE = 295,
     NOMBRE = 296,
     IDENTIFIANT = 297,
     WRITELN = 298,
     CHAINE = 299
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 30 "grammaire.y"

	int t_int;
	float t_float;
	char * t_string;


/* Line 387 of yacc.c  */
#line 171 "grammaire.tab.c"
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

#endif /* !YY_YY_GRAMMAIRE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 199 "grammaire.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   135

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    11,    16,    20,    21,    25,    27,
      31,    35,    37,    41,    42,    46,    47,    51,    53,    57,
      59,    62,    65,    72,    76,    80,    84,    86,    87,    92,
      96,    98,   100,   102,   104,   106,   107,   109,   111,   113,
     115,   117,   118,   124,   125,   126,   135,   144,   145,   152,
     157,   159,   163,   164,   169,   171,   173,   177,   181,   185,
     189,   193,   197,   201,   205,   209,   213,   215,   217,   219,
     221,   223,   225,   227
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    48,    24,    -1,    11,    42,    27,
      -1,    49,    53,    54,    63,    -1,    14,    50,    27,    -1,
      -1,    50,    27,    51,    -1,    51,    -1,    52,    25,    84,
      -1,    52,    26,    42,    -1,    42,    -1,    55,    27,    49,
      -1,    -1,    56,    27,    49,    -1,    -1,    55,    27,    57,
      -1,    57,    -1,    56,    27,    58,    -1,    58,    -1,    59,
      48,    -1,    60,    48,    -1,     7,    42,    61,    25,    84,
      27,    -1,     8,    42,    27,    -1,    38,    62,    39,    -1,
      62,    26,    51,    -1,    51,    -1,    -1,     3,    64,    65,
       6,    -1,    65,    27,    66,    -1,    66,    -1,    68,    -1,
      67,    -1,    78,    -1,    63,    -1,    -1,    69,    -1,    71,
      -1,    74,    -1,    75,    -1,    79,    -1,    -1,    15,    81,
       4,    70,    66,    -1,    -1,    -1,     9,    81,    12,    72,
      66,    13,    73,    66,    -1,    16,    42,    23,    83,    17,
      83,     4,    66,    -1,    -1,    43,    38,    77,    39,    76,
      66,    -1,    42,    38,    83,    39,    -1,    83,    -1,    42,
      23,    77,    -1,    -1,    42,    27,    80,    66,    -1,    82,
      -1,    41,    -1,    83,    31,    83,    -1,    83,    32,    83,
      -1,    83,    28,    83,    -1,    83,    30,    83,    -1,    83,
      29,    83,    -1,    83,    36,    83,    -1,    83,    34,    83,
      -1,    83,    35,    83,    -1,    83,    37,    83,    -1,    38,
      83,    39,    -1,    41,    -1,    42,    -1,    44,    -1,    19,
      -1,    18,    -1,    20,    -1,    21,    -1,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    77,    80,    86,    90,    93,    94,    97,
     100,   101,   104,   105,   108,   109,   112,   113,   116,   117,
     120,   123,   126,   135,   141,   144,   145,   148,   148,   153,
     154,   157,   158,   161,   162,   163,   166,   167,   168,   169,
     170,   175,   173,   185,   191,   183,   195,   201,   198,   209,
     217,   219,   224,   224,   228,   230,   233,   235,   237,   239,
     241,   244,   246,   248,   250,   252,   254,   256,   258,   261,
     262,   263,   264,   265
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TBEGIN", "DO", "DIV", "TEND",
  "FUNCTION", "PROCEDURE", "IF", "MOD", "PROGRAM", "THEN", "ELSE", "VAR",
  "WHILE", "FOR", "TO", "INTEGER", "STRING", "REAL", "BOOLEAN", "CHAR",
  "ASSIGNATION", "POINT", "DEUXPOINTS", "VIRGULE", "POINTVIRGULE", "EGAL",
  "SUPERIEUREGAL", "SUPERIEUR", "INFERIEUREGAL", "INFERIEUR", "DIFFERENT",
  "ADDITION", "SOUSTRACTION", "MULTIPLICATION", "DIVISION",
  "PARENTHESEGAUCHE", "PARENTHESEDROITE", "APOSTROPHE", "NOMBRE",
  "IDENTIFIANT", "WRITELN", "CHAINE", "$accept", "programme",
  "programme_entete", "bloc", "declaration_variable", "liste_variables",
  "declaration_variables", "liste_identifiants", "declaration_fonction",
  "declaration_procedure", "liste_fonctions", "liste_procedures",
  "declaration_fonctions", "declaration_procedures", "fonction_entete",
  "procedure_entete", "parametres", "liste_parametres", "instruction",
  "$@1", "instruction_list", "declaration", "declaration_close",
  "declaration_ouverte", "while", "$@2", "if", "$@3", "$@4", "for",
  "write", "$@5", "interieur_write", "instruction_assignement",
  "appel_procedure", "$@6", "expressions", "comparaison", "expression",
  "type_variable", YY_NULL
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
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    49,    49,    50,    50,    51,
      52,    52,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    58,    59,    60,    61,    62,    62,    64,    63,    65,
      65,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      68,    70,    69,    72,    73,    71,    74,    76,    75,    77,
      77,    78,    80,    79,    81,    81,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    84,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     4,     3,     0,     3,     1,     3,
       3,     1,     3,     0,     3,     0,     3,     1,     3,     1,
       2,     2,     6,     3,     3,     3,     1,     0,     4,     3,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     0,     5,     0,     0,     8,     8,     0,     6,     4,
       1,     3,     0,     4,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     6,     0,     1,     0,     0,    13,     3,
      11,     0,     8,     0,     2,     0,    15,     0,    17,     6,
       5,     0,     0,     0,     0,     0,     0,    19,     6,     6,
      20,     7,    70,    69,    71,    72,    73,     9,    10,     0,
       0,     0,    27,     4,     6,    21,    12,    16,    26,     0,
       0,    23,    35,    14,    18,     0,    24,     0,     0,     0,
       0,     0,     0,    34,     0,    30,    32,    31,    36,    37,
      38,    39,    33,    40,    25,    22,     0,    66,    67,    68,
       0,    54,     0,     0,     0,     0,    52,     0,    28,    35,
      66,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,    67,    51,    50,    35,     0,    29,
      65,    35,    58,    60,    59,    56,    57,    62,    63,    61,
      64,    35,     0,     0,    53,    47,     0,    42,     0,     0,
      35,    44,     0,    49,    48,    35,    35,    45,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    11,    12,    13,    16,    25,
      17,    26,    18,    27,    19,    28,    40,    49,    63,    52,
      64,    65,    66,    67,    68,   121,    69,   111,   135,    70,
      71,   130,   105,    72,    73,   107,    80,    81,    82,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int8 yypact[] =
{
      -6,   -11,    14,    45,    31,   -82,    11,    41,    59,   -82,
     -82,    40,   -82,     8,   -82,    38,    67,    56,   -82,    45,
      11,    93,    47,    46,    52,    78,    70,   -82,    45,    43,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,    11,
      84,    76,   -82,   -82,    -4,   -82,   -82,   -82,   -82,   -24,
      93,   -82,    26,   -82,   -82,    11,   -82,    94,    44,    44,
      80,    33,    85,   -82,     1,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,    49,    39,   -82,   -82,
     108,   -82,    42,   120,   102,    54,   -82,    54,   -82,    26,
     -82,    65,   -82,    49,    49,    49,    49,    49,    49,    49,
      49,    49,   -82,    49,    88,   -82,    82,    26,    89,   -82,
     -82,    26,    82,    82,    82,    82,    82,     9,     9,   -82,
     -82,    26,    27,    49,   -82,   -82,   114,   -82,    49,    71,
      26,   -82,     2,   -82,   -82,    26,    26,   -82,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,   -82,   -16,   -28,   -82,    -7,   -82,   -82,   -82,
     -82,   -82,   100,    86,   -82,   -82,   -82,   -82,   106,   -82,
     -82,   -81,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,    48,   -82,   -82,   -82,    73,   -82,   -76,    83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      91,    46,    55,    30,    24,     1,   136,    88,   109,   106,
       6,   106,    45,    31,     5,    56,    53,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   124,   122,    89,    42,
     126,     4,    48,    21,    22,    58,    98,    99,   100,   101,
     127,    59,    60,   -55,   128,   100,   101,   129,    74,   134,
      15,   -55,   132,    10,   137,   138,    85,     6,     9,     6,
      86,    98,    99,   100,   101,    14,    15,    20,    61,    62,
      93,    94,    95,    96,    97,    24,    98,    99,   100,   101,
      23,    42,    76,    29,    39,    77,    78,    76,    79,    38,
      90,    78,    76,    79,    41,    90,   104,    44,    79,    98,
      99,   100,   101,    51,   110,    98,    99,   100,   101,    50,
     133,    32,    33,    34,    35,    36,    98,    99,   100,   101,
      92,    75,    84,    87,   102,   103,   123,   131,   125,    47,
      54,    43,    83,    57,     0,   108
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-82)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      76,    29,    26,    19,     8,    11,     4,     6,    89,    85,
      14,    87,    28,    20,     0,    39,    44,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   107,   103,    27,     3,
     111,    42,    39,    25,    26,     9,    34,    35,    36,    37,
     121,    15,    16,     4,    17,    36,    37,   123,    55,   130,
       7,    12,   128,    42,   135,   136,    23,    14,    27,    14,
      27,    34,    35,    36,    37,    24,     7,    27,    42,    43,
      28,    29,    30,    31,    32,     8,    34,    35,    36,    37,
      42,     3,    38,    27,    38,    41,    42,    38,    44,    42,
      41,    42,    38,    44,    42,    41,    42,    27,    44,    34,
      35,    36,    37,    27,    39,    34,    35,    36,    37,    25,
      39,    18,    19,    20,    21,    22,    34,    35,    36,    37,
      12,    27,    42,    38,     4,    23,    38,    13,    39,    29,
      44,    25,    59,    50,    -1,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    46,    47,    42,     0,    14,    48,    49,    27,
      42,    50,    51,    52,    24,     7,    53,    55,    57,    59,
      27,    25,    26,    42,     8,    54,    56,    58,    60,    27,
      48,    51,    18,    19,    20,    21,    22,    84,    42,    38,
      61,    42,     3,    63,    27,    48,    49,    57,    51,    62,
      25,    27,    64,    49,    58,    26,    39,    84,     9,    15,
      16,    42,    43,    63,    65,    66,    67,    68,    69,    71,
      74,    75,    78,    79,    51,    27,    38,    41,    42,    44,
      81,    82,    83,    81,    42,    23,    27,    38,     6,    27,
      41,    83,    12,    28,    29,    30,    31,    32,    34,    35,
      36,    37,     4,    23,    42,    77,    83,    80,    77,    66,
      39,    72,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    70,    83,    38,    66,    39,    66,    66,    17,    83,
      76,    13,    83,    39,    66,    73,     4,    66,    66
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
  YYUSE (yytype);
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

  YYUSE (yytype);
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
        case 3:
/* Line 1787 of yacc.c  */
#line 77 "grammaire.y"
    { ajouterEnFin((yyvsp[(2) - (3)].t_string)); }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 86 "grammaire.y"
    { 
							ajouterEnFin("declaration_variables ");
							ajouterEnFin((yyvsp[(2) - (3)].t_string)); 
							}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 93 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 94 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 97 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 100 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 101 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 120 "grammaire.y"
    { ajouterEnFin(concat_deux_chaines("fin_fonction ",(yyvsp[(1) - (2)].t_string))); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 123 "grammaire.y"
    { ajouterEnFin(concat_deux_chaines("fin_procedure ",(yyvsp[(1) - (2)].t_string))); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 126 "grammaire.y"
    { 
				ajouterEnFin(concat_trois_chaines((yyvsp[(1) - (6)].t_string)," ",(yyvsp[(2) - (6)].t_string))); 
				ajouterEnFin(concat_deux_chaines("param ",(yyvsp[(3) - (6)].t_string)));
				ajouterEnFin(concat_deux_chaines("type_return ", (yyvsp[(5) - (6)].t_string)));
				ajouterEnFin(concat_deux_chaines("fin_declaration ",(yyvsp[(2) - (6)].t_string)));
				(yyval.t_string) = (yyvsp[(2) - (6)].t_string);
				}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 135 "grammaire.y"
    { 
														ajouterEnFin(concat_trois_chaines((yyvsp[(1) - (3)].t_string)," ",(yyvsp[(2) - (3)].t_string)));
														(yyval.t_string) = (yyvsp[(2) - (3)].t_string);
													 }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 141 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(2) - (3)].t_string); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 144 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 148 "grammaire.y"
    { ajouterEnFin("begin"); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 150 "grammaire.y"
    { ajouterEnFin("end"); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 175 "grammaire.y"
    { 
							char * temporaire = concat_trois_chaines((yyvsp[(1) - (3)].t_string)," ",(yyvsp[(2) - (3)].t_string));
	 						char * temporaire2 = concat_trois_chaines(temporaire," ",(yyvsp[(3) - (3)].t_string));
							ajouterEnFin(temporaire2);
						}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 185 "grammaire.y"
    { 
	 					char * temporaire = concat_trois_chaines((yyvsp[(1) - (3)].t_string)," ",(yyvsp[(2) - (3)].t_string));
	 					char * temporaire2 = concat_trois_chaines(temporaire," ",(yyvsp[(3) - (3)].t_string));
						ajouterEnFin(temporaire2); 
					}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 191 "grammaire.y"
    { ajouterEnFin("else"); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 201 "grammaire.y"
    {
			char * temporaire = concat_trois_chaines("affichage ",(yyvsp[(1) - (4)].t_string),(yyvsp[(2) - (4)].t_string));
			char * temporaire2 = concat_trois_chaines(temporaire,(yyvsp[(3) - (4)].t_string),(yyvsp[(4) - (4)].t_string));
			ajouterEnFin(temporaire2);
		}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 212 "grammaire.y"
    { char * temporaire = concat_trois_chaines((yyvsp[(1) - (4)].t_string),(yyvsp[(2) - (4)].t_string),(yyvsp[(3) - (4)].t_string));
										char * temporaire2 = concat_deux_chaines(temporaire,(yyvsp[(4) - (4)].t_string));
										(yyval.t_string) = temporaire2;
										}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 217 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 219 "grammaire.y"
    { 
						char * temporaire = concat_deux_chaines("assignation ",(yyvsp[(1) - (3)].t_string));
						ajouterEnFin(concat_trois_chaines(temporaire,(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string))); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 224 "grammaire.y"
    { ajouterEnFin(concat_deux_chaines("appel_procedure ",(yyvsp[(1) - (2)].t_string))); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 228 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 230 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 233 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 235 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 237 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 239 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 241 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 244 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 246 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 248 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 250 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 252 "grammaire.y"
    { (yyval.t_string) = concat_trois_chaines((yyvsp[(1) - (3)].t_string),(yyvsp[(2) - (3)].t_string),(yyvsp[(3) - (3)].t_string)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 254 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 256 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 258 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 261 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 262 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 263 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 264 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 265 "grammaire.y"
    { (yyval.t_string) = (yyvsp[(1) - (1)].t_string); }
    break;


/* Line 1787 of yacc.c  */
#line 1806 "grammaire.tab.c"
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


/* Line 2050 of yacc.c  */
#line 268 "grammaire.y"


int main(int argc, char* argv[]){
	FILE *f = NULL;
	if(argc >1) {
		f = fopen(argv[1],"r");
			if(f==NULL){
				return -1;
			}
			yyin=f;
	}
	yyparse();
	//impression();
	traduction();
	if(f!=NULL)
		fclose(f);
}

void yyerror(char const* s){
	fprintf(stderr, "Erreur %s\n", s);
}