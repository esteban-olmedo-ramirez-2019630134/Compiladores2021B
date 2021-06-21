/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntactic_analyzer.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol_table.h"
	#define _BOOL_ 1
	#define _INT_ 2
	#define _LONG_ 3
	#define _FLOAT_ 4
	#define _DOUBLE_ 5
	#define _CHAR_ 6
	#define _STRING_ 7
	#define _TILE_ 8
	#define _SMARTTILE_ 9
	#define _SECTION_ 10
	#define _CONTAINER_ 11
	#define PERLIN_NOISE 20
	#define SMOOTHED_PERLIN_NOISE 21
	#define RANDOM_WALK 22
	#define SMOOTHED_RANDOM_WALK 23
	#define PERLIN_NOISE_CAVE 24
	#define RANDOM_WALK_CAVE 25
	#define DIRECCIONAL_TUNNEL 26
	#define CELLULAR_AUTOMATA 27 
	#define MOORE_CELLULAR_AUTOMATA 28
	#define VON_NEUMANN_CELLULAR_AUTOMATA 29

	void yyerror(const char* message){
		printf("%s\n", message);
		exit(1);
	}

	int checkTypes(int type1, int type2) {
		if(type1 == type2) return 0;
		printf("estas seguro que sabes programar?!!!\n");
		exit(1);
	}
	void assignUnary(symrec* $$, symrec* $1, int opc);
  	void assignValue(symrec* a, symrec* b, symrec* c, int opc);
	void put_attribute(Section* a, symrec* attribute, symrec* constant);
	char* resize_string(char *code, int *new_len, int req_len);
  

#line 113 "syntactic_analyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED
# define YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INT = 259,
    FLOAT = 260,
    DOUBLE = 261,
    LONG = 262,
    BOOL = 263,
    CHAR = 264,
    STRING = 265,
    CONST_CHAR = 266,
    CONST_BOOL = 267,
    CONST_LONG = 268,
    CONST_INT = 269,
    CONST_FLOAT = 270,
    CONST_DOUBLE = 271,
    CONST_STRING = 272,
    FUNCTION = 273,
    MAIN = 274,
    ALGORITHM = 275,
    PLUSPLUS = 276,
    MINUSMINUS = 277,
    FOR = 278,
    WHILE = 279,
    IF = 280,
    ELSE = 281,
    RULE = 282,
    SECTIONS = 283,
    SMARTTILE = 284,
    SET = 285,
    TILE = 286,
    SECTION = 287,
    _BEGIN = 288,
    END = 289,
    NEW = 290,
    JOIN = 291,
    CONTAINER = 292,
    NAME = 293,
    TILESET = 294,
    DEFAULT = 295,
    GREATER_EQ = 296,
    LESS_EQ = 297,
    AND_OP = 298,
    OR_OP = 299,
    NEQ = 300,
    GREATER = 301,
    LESS = 302,
    EQ = 303,
    NEG = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

  /* section_declaration  */
  Section* section_declaration;
  /* tile_content  */
  Tile* tile_content;
  /* tiles_list  */
  TileList* tiles_list;
  /* ALGORITHM  */
  char* ALGORITHM;
  /* SMARTTILE  */
  int SMARTTILE;
  /* GREATER_EQ  */
  int GREATER_EQ;
  /* LESS_EQ  */
  int LESS_EQ;
  /* AND_OP  */
  int AND_OP;
  /* OR_OP  */
  int OR_OP;
  /* NEQ  */
  int NEQ;
  /* GREATER  */
  int GREATER;
  /* LESS  */
  int LESS;
  /* EQ  */
  int EQ;
  /* logical_operator  */
  int logical_operator;
  /* comparation_operator  */
  int comparation_operator;
  /* IDENTIFIER  */
  symrec* IDENTIFIER;
  /* INT  */
  symrec* INT;
  /* FLOAT  */
  symrec* FLOAT;
  /* DOUBLE  */
  symrec* DOUBLE;
  /* LONG  */
  symrec* LONG;
  /* BOOL  */
  symrec* BOOL;
  /* CHAR  */
  symrec* CHAR;
  /* STRING  */
  symrec* STRING;
  /* CONST_CHAR  */
  symrec* CONST_CHAR;
  /* CONST_BOOL  */
  symrec* CONST_BOOL;
  /* CONST_LONG  */
  symrec* CONST_LONG;
  /* CONST_INT  */
  symrec* CONST_INT;
  /* CONST_FLOAT  */
  symrec* CONST_FLOAT;
  /* CONST_DOUBLE  */
  symrec* CONST_DOUBLE;
  /* CONST_STRING  */
  symrec* CONST_STRING;
  /* RULE  */
  symrec* RULE;
  /* SECTIONS  */
  symrec* SECTIONS;
  /* variable_declaration  */
  symrec* variable_declaration;
  /* variable  */
  symrec* variable;
  /* type  */
  symrec* type;
  /* expression  */
  symrec* expression;
  /* condition  */
  symrec* condition;
  /* constant  */
  symrec* constant;
  /* vector  */
  symrec* vector;
  /* rule  */
  symrec* rule;
  /* tile  */
  symrec* tile;
  /* smarttile  */
  symrec* smarttile;
#line 300 "syntactic_analyzer.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

#define YYUNDEFTOK  2
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,     2,     2,     2,     2,     2,
      62,    63,    52,    51,    56,    50,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    58,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    57,     2,     2,     2,     2,
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
      45,    46,    47,    48,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    76,    88,    96,   103,   110,   112,   116,
     142,   152,   164,   207,   227,   237,   246,   267,   276,   277,
     284,   287,   288,   307,   326,   332,   338,   353,   355,   357,
     361,   382,   405,   418,   439,   455,   463,   473,   485,   492,
     503,   508,   522,   536,   551,   566,   577,   588,   606,   624,
     634,   641,   667,   681,   697,   711,   727,   742,   755,   760,
     767,   772,   777,   782,   787,   792,   799,   807,   815,   824,
     833,   842,   860,   867,   874,   881,   889,   897,   905
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INT", "FLOAT", "DOUBLE",
  "LONG", "BOOL", "CHAR", "STRING", "CONST_CHAR", "CONST_BOOL",
  "CONST_LONG", "CONST_INT", "CONST_FLOAT", "CONST_DOUBLE", "CONST_STRING",
  "FUNCTION", "MAIN", "ALGORITHM", "PLUSPLUS", "MINUSMINUS", "FOR",
  "WHILE", "IF", "ELSE", "RULE", "SECTIONS", "SMARTTILE", "SET", "TILE",
  "SECTION", "_BEGIN", "END", "NEW", "JOIN", "CONTAINER", "NAME",
  "TILESET", "DEFAULT", "GREATER_EQ", "LESS_EQ", "AND_OP", "OR_OP", "NEQ",
  "GREATER", "LESS", "EQ", "'='", "'-'", "'+'", "'*'", "'/'", "NEG", "'{'",
  "','", "'}'", "';'", "':'", "'['", "']'", "'('", "')'", "'!'", "$accept",
  "variable_declaration", "variable", "type", "expression", "condition",
  "constant", "vector", "rule", "tile", "logical_operator",
  "comparation_operator", "tiles_list", "tile_content", "smarttile",
  "section_declaration", "input", "set_size", "initial_declaration",
  "section", "main_function", "code_block", "statement", "while", "for",
  "if", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    61,
      45,    43,    42,    47,   304,   123,    44,   125,    59,    58,
      91,    93,    40,    41,    33
};
# endif

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,   -22,    33,     9,    -6,  -136,    49,    58,  -136,    67,
    -136,    61,    32,    29,    37,  -136,  -136,  -136,    34,    62,
      77,   208,    95,   108,    62,    57,    64,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,    53,    56,    65,    66,   100,    48,    48,    48,
    -136,    -7,     4,   292,    35,  -136,    75,    82,  -136,  -136,
    -136,    78,    86,  -136,  -136,   140,    63,    48,    48,    48,
      88,   -13,    60,   134,   -26,    73,   292,    81,  -136,  -136,
     148,    48,   115,  -136,  -136,  -136,  -136,  -136,  -136,    48,
      48,    48,    48,    48,  -136,  -136,    48,  -136,   146,   107,
     128,   118,     1,   110,    11,    41,   215,   158,  -136,  -136,
       4,   292,    48,   147,   147,    60,    60,   292,   230,  -136,
    -136,   124,   150,   190,   129,  -136,    48,   135,   136,  -136,
     137,  -136,   -10,   292,   204,   177,   170,  -136,   171,   190,
     -24,   208,   208,  -136,   172,   173,  -136,  -136,   176,    48,
     178,   182,   201,   195,  -136,   196,  -136,   225,   203,    48,
     197,   199,   200,   247,   266,   195,   208,   208,   211,    48,
     219,   214,   220,   238,   279,   195,  -136,  -136,   231,    48,
     222,   269,   253,  -136,   224,  -136,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     0,     1,     0,     0,     7,     0,
       8,     0,     0,     0,     0,     6,     5,     3,     0,     0,
       0,     0,     0,     0,    11,     0,     0,    20,    35,    72,
      73,    74,    75,    76,    77,    78,    69,    54,    66,    67,
      68,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    49,     0,    25,    50,    40,     0,     0,    28,    27,
      29,     0,     0,    10,     9,     0,     0,     0,     0,     0,
       0,    49,    45,     0,    50,    49,     0,    50,    47,    48,
       0,     0,    32,    60,    62,    64,    61,    63,    65,     0,
       0,     0,     0,     0,    58,    59,     0,    17,     0,     0,
       0,     0,     0,     0,    50,    50,     0,     0,    46,    57,
       0,    51,     0,    42,    41,    43,    44,    53,    50,    19,
       4,     0,    21,     0,     0,    13,     0,     0,     0,    34,
       0,    26,    49,    30,     0,     0,     0,    70,     0,     0,
      50,     0,     0,    33,     0,     0,    12,    15,     0,     0,
       0,     0,     0,     0,    14,     0,    36,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    39,     0,     0,
       0,     0,     0,    22,     0,    23,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,   217,   -21,  -136,   -46,   -43,  -113,  -135,  -136,  -136,
    -136,  -136,   260,  -136,   276,  -136,  -136,  -136,  -136,   280,
    -136,   -85,  -136,  -136,  -136,  -136
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    50,    71,    52,    53,    54,    55,   160,   136,    24,
      96,    93,    25,   122,     8,   102,     2,     3,     9,    10,
      17,    56,    57,    58,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    72,    73,    76,   124,    74,    77,    28,    78,    79,
     138,    78,    79,   119,    78,    79,     1,    94,    95,    94,
      95,    76,    76,   106,   104,   105,   148,     4,    75,    80,
     170,    82,    45,     5,   149,   111,    81,   109,     6,    81,
     180,     7,    81,   113,   114,   115,   116,   117,   -31,    11,
      76,    28,    12,   118,    94,    95,   150,   151,   125,    36,
      37,    13,    38,    39,    40,    41,   133,    29,    30,    31,
      32,    33,    34,    35,   127,    18,    45,    51,    94,    95,
      76,   171,   172,   140,    94,    95,    14,    19,    20,   131,
      22,   132,    21,    23,    78,    79,     6,    26,    47,     7,
      46,    83,    84,   155,   128,    85,    86,    87,    88,    61,
      48,    62,    49,   164,    64,    66,   -56,   -56,    67,    65,
      51,    51,    81,   174,    94,    95,    69,    68,    70,   -56,
     -56,   -56,    97,   182,   -56,    99,   -56,   -55,   -55,   -55,
      98,   100,   -55,   101,   -55,    51,    51,    27,   107,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   110,
      38,    39,    40,    41,   112,   120,   121,   123,   126,    42,
      43,    44,   130,   134,    45,    83,    84,   135,   139,    85,
      86,    87,    88,    46,    89,    90,    91,    92,    83,    84,
     141,   142,    85,    86,    87,    88,    47,   108,   143,    91,
      92,    36,   137,   -18,    38,    39,    40,    41,    48,    27,
      49,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,   144,    38,    39,    40,    41,   145,   146,   153,   147,
     152,    42,    43,    44,   154,   156,    45,    83,    84,   157,
     158,    85,    86,    87,    88,    46,    89,    90,    91,    92,
     159,   162,   163,   165,   166,   167,    83,    84,    47,   161,
      85,    86,    87,    88,   168,    89,    90,    91,    92,   173,
      48,   176,    49,    94,    95,   175,   129,   177,   178,   183,
     181,   184,   186,   103,    63,    15,   -52,   -52,   -52,    16,
       0,   -52,     0,   -52,    83,    84,     0,     0,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    83,    84,     0,
     185,    85,    86,    87,    88,     0,    89,    90,    91,    92,
      83,    84,   169,     0,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    83,    84,   179,     0,    85,    86,    87,
      88,     0,    89,    90,    91,    92
};

static const yytype_int16 yycheck[] =
{
      21,    47,    48,    49,     3,    48,    49,     3,    21,    22,
     123,    21,    22,    98,    21,    22,    30,    43,    44,    43,
      44,    67,    68,    69,    67,    68,   139,    49,    49,    36,
     165,    52,    28,     0,    58,    81,    49,    63,    29,    49,
     175,    32,    49,    89,    90,    91,    92,    93,    58,    55,
      96,     3,     3,    96,    43,    44,   141,   142,    57,    11,
      12,     3,    14,    15,    16,    17,   112,     4,     5,     6,
       7,     8,     9,    10,    63,    14,    28,    98,    43,    44,
     126,   166,   167,   126,    43,    44,    19,    55,    59,   110,
      56,   112,    55,    31,    21,    22,    29,    20,    50,    32,
      37,    41,    42,   149,    63,    45,    46,    47,    48,    14,
      62,     3,    64,   159,    57,    62,    43,    44,    62,    55,
     141,   142,    49,   169,    43,    44,    60,    62,    28,    56,
      57,    58,    57,   179,    61,    57,    63,    56,    57,    58,
      58,    55,    61,     3,    63,   166,   167,     1,    60,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    11,
      14,    15,    16,    17,    49,    58,    38,    49,    58,    23,
      24,    25,    14,    49,    28,    41,    42,    27,    49,    45,
      46,    47,    48,    37,    50,    51,    52,    53,    41,    42,
      55,    55,    45,    46,    47,    48,    50,    63,    61,    52,
      53,    11,    12,    57,    14,    15,    16,    17,    62,     1,
      64,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    14,    15,    16,    17,    49,    57,    55,    58,
      58,    23,    24,    25,    58,    57,    28,    41,    42,    57,
      39,    45,    46,    47,    48,    37,    50,    51,    52,    53,
      55,    26,    49,    56,    55,    55,    41,    42,    50,    63,
      45,    46,    47,    48,    17,    50,    51,    52,    53,    58,
      62,    57,    64,    43,    44,    56,    61,    57,    40,    57,
      49,    12,    58,    66,    24,     9,    56,    57,    58,     9,
      -1,    61,    -1,    63,    41,    42,    -1,    -1,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    41,    42,    -1,
      57,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      41,    42,    56,    -1,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    41,    42,    56,    -1,    45,    46,    47,
      48,    -1,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    30,    81,    82,    49,     0,    29,    32,    79,    83,
      84,    55,     3,     3,    19,    79,    84,    85,    14,    55,
      59,    55,    56,    31,    74,    77,    20,     1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    14,    15,
      16,    17,    23,    24,    25,    28,    37,    50,    62,    64,
      66,    67,    68,    69,    70,    71,    86,    87,    88,    89,
      90,    14,     3,    77,    57,    55,    62,    62,    62,    60,
      28,    67,    69,    69,    70,    67,    69,    70,    21,    22,
      36,    49,    67,    41,    42,    45,    46,    47,    48,    50,
      51,    52,    53,    76,    43,    44,    75,    57,    58,    57,
      55,     3,    80,    66,    70,    70,    69,    60,    63,    63,
      11,    69,    49,    69,    69,    69,    69,    69,    70,    86,
      58,    38,    78,    49,     3,    57,    58,    63,    63,    61,
      14,    67,    67,    69,    49,    27,    73,    12,    71,    49,
      70,    55,    55,    61,    17,    49,    57,    58,    71,    58,
      86,    86,    58,    55,    58,    69,    57,    57,    39,    55,
      72,    63,    26,    49,    69,    56,    55,    55,    17,    56,
      72,    86,    86,    58,    69,    56,    57,    57,    40,    56,
      72,    49,    69,    57,    12,    57,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    81,    81,    82,    83,    83,    83,    83,    79,
      77,    77,    74,    84,    80,    80,    78,    85,    86,    86,
      86,    73,    73,    72,    87,    87,    87,    87,    87,    87,
      66,    66,    66,    66,    67,    67,    88,    89,    90,    90,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    75,    75,
      76,    76,    76,    76,    76,    76,    71,    71,    71,    71,
      71,    71,    68,    68,    68,    68,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     8,     2,     2,     1,     1,     5,
       2,     1,     6,     7,     5,     4,    12,     4,     2,     3,
       1,     0,     9,     7,     1,     1,     4,     1,     1,     1,
       4,     4,     2,     5,     4,     1,     7,    11,     7,    11,
       1,     3,     3,     3,     3,     2,     3,     2,     2,     1,
       1,     3,     3,     3,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 76 "syntactic_analyzer.y"
                                                                {
		char *code3 = pop(&pila_codigo);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code3) + strlen(code2) + strlen(code1) + 500));
		print_template();
		printf("%s", code1);
		printf("public void CreateRulesAndTemplates(){%s}", code2);
		printf("%s}", code3);
								}
#line 1642 "syntactic_analyzer.tab.c"
    break;

  case 4:
#line 88 "syntactic_analyzer.y"
                                                                {
		char code[500];
		sprintf(code, "public void GenerateAll(){ClearMap();width = %d;height = %d;sections = new List<Section>();	templates = new Dictionary<string, Template>();	CreateRulesAndTemplates();CreateMap();Generate();}", (yyvsp[-4].CONST_INT) -> value._int, (yyvsp[-2].CONST_INT) -> value._int);
		push(&pila_codigo, code);
								}
#line 1652 "syntactic_analyzer.tab.c"
    break;

  case 5:
#line 96 "syntactic_analyzer.y"
                                                        {
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 10));
		sprintf(code,"%s%s", code1, code2);
		push(&pila_codigo, code);
							}
#line 1664 "syntactic_analyzer.tab.c"
    break;

  case 6:
#line 103 "syntactic_analyzer.y"
                                                        {
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 10));
		sprintf(code,"%s%s", code1, code2);
		push(&pila_codigo, code);
							}
#line 1676 "syntactic_analyzer.tab.c"
    break;

  case 7:
#line 110 "syntactic_analyzer.y"
                                                        {
							}
#line 1683 "syntactic_analyzer.tab.c"
    break;

  case 8:
#line 112 "syntactic_analyzer.y"
                                                        {
							}
#line 1690 "syntactic_analyzer.tab.c"
    break;

  case 9:
#line 116 "syntactic_analyzer.y"
                                                        {
			symrec* aux = getsym((yyvsp[-3].IDENTIFIER)->name);
			if(aux != NULL) {
				printf("No te chifles, mae. La ingenieria no es para los chiflados\n");
				exit(1);
			}
			(yyval.smarttile) = (symrec*)malloc(sizeof(symrec)); 
			putsym((yyvsp[-3].IDENTIFIER) -> name, (yyvsp[-4].SMARTTILE));
			(yyval.smarttile) = getsym((yyvsp[-3].IDENTIFIER) -> name);
			(yyval.smarttile) -> type = SMARTTILE;
			(yyval.smarttile) -> value.smart_tile = (Smarttile*)malloc(sizeof(Smarttile));
			(yyval.smarttile) -> value.smart_tile -> tiles = (yyvsp[-1].tiles_list);
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1) + 100 + 3*strlen((yyvsp[-3].IDENTIFIER) -> name)));
			sprintf(
				code, 
				"List<Rule> %s = new List<Rule>(){%s};\nCreateRuleTile(\"%s\",%s);", 
				(yyvsp[-3].IDENTIFIER) -> name, 
				code1, 
				(yyvsp[-3].IDENTIFIER) -> name,
				(yyvsp[-3].IDENTIFIER) -> name
			);
			push(&pila_codigo, code);
							}
#line 1719 "syntactic_analyzer.tab.c"
    break;

  case 10:
#line 142 "syntactic_analyzer.y"
                                                        {
			(yyval.tiles_list) = (TileList*) malloc(sizeof(TileList));
			(yyval.tiles_list) -> data = (yyvsp[-1].tile) -> value.tile;
			(yyval.tiles_list) -> next = (yyvsp[0].tiles_list);
			char *code2 = pop(&pila_codigo);
			char *code1 = pop(&pila_codigo);
			char* code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen(code2)+20));
			sprintf(code,"%s, %s", code1, code2);
			push(&pila_codigo, code);
							}
#line 1734 "syntactic_analyzer.tab.c"
    break;

  case 11:
#line 152 "syntactic_analyzer.y"
                                                        { 
			(yyval.tiles_list) = (TileList*) malloc(sizeof(TileList));
			(yyval.tiles_list) -> data = (yyvsp[0].tile) -> value.tile;
			(yyval.tiles_list) -> next = NULL;
			char* code1 = pop(&pila_codigo);
			char* code = (char*)malloc(sizeof(char)*(strlen(code1)+20));
			sprintf(code, "%s", code1);
			push(&pila_codigo, code);
							}
#line 1748 "syntactic_analyzer.tab.c"
    break;

  case 12:
#line 164 "syntactic_analyzer.y"
                                                        {
			int isMultipleSprite = strlen((yyvsp[-2].tile_content) -> tileset);
			if(getsym((yyvsp[-4].IDENTIFIER) -> name) != NULL) {
				printf("60 anios, una protesis\n");
				exit(1);
			}
			putsym((yyvsp[-4].IDENTIFIER) -> name, _TILE_);
			symrec *aux = getsym((yyvsp[-4].IDENTIFIER) -> name);
			aux -> value.tile = (yyvsp[-2].tile_content);
			
			if((yyvsp[-1].rule) != NULL) {
				for(int i = 0; i < 3; i++) {
					for(int j = 0; j < 3; j++) {
						aux -> value.tile -> rule[i][j] = (yyvsp[-1].rule) -> value.tile -> rule[i][j];
					}
				}
			}
			aux -> value.tile -> id = (char*)malloc(sizeof(char)*strlen((yyvsp[-4].IDENTIFIER) -> name));
			strcpy(aux -> value.tile -> id, (yyvsp[-4].IDENTIFIER) -> name);
			(yyval.tile) = aux;
			char *code2 = pop(&pila_codigo);
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen(code2) + 100));
			if((yyvsp[-1].rule) != NULL) {
				sprintf(
					code,
					"new Rule{%s matrixOfNeighbors=new int[,] %s",
					code1,
					code2
					);
			}
			else {
				sprintf(
					code,
					"new Rule{%s matrixOfNeighbors=new int[,] {}",
					code1
					);
			}
			push(&pila_codigo, code);
							}
#line 1793 "syntactic_analyzer.tab.c"
    break;

  case 13:
#line 207 "syntactic_analyzer.y"
                                                                        {
			if(getsym((yyvsp[-5].IDENTIFIER) -> name) != NULL) {
				printf("Escuchame pequenio cuck. Mis gustos son God y los tuyos zzzz. Yo soy basado y tu das cringe. Yo soy un chad y tu un virgen, y no puedes hacer nada para cambiarlo\n");
				exit(1);
			}
			putsym((yyvsp[-5].IDENTIFIER) -> name, _SECTION_);
			symrec* aux = getsym((yyvsp[-5].IDENTIFIER) -> name);
			aux -> type = _SECTION_;
			aux -> value.algo = (yyvsp[-1].section_declaration);
			aux -> value.algo -> algorithm = (char*)malloc(sizeof(char)*(strlen((yyvsp[-3].ALGORITHM))));
			strcpy(aux -> value.algo -> algorithm, (yyvsp[-3].ALGORITHM));

			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen((yyvsp[-3].ALGORITHM))+strlen((yyvsp[-5].IDENTIFIER) -> name)+100));
			sprintf(code, "templates[\"%s\"] = new Template {%s algorithm = \"%s\"};", (yyvsp[-5].IDENTIFIER) -> name,code1, (yyvsp[-3].ALGORITHM));
			push(&pila_codigo, code);
									}
#line 1815 "syntactic_analyzer.tab.c"
    break;

  case 14:
#line 227 "syntactic_analyzer.y"
                                                                        { 
		(yyval.section_declaration) = (yyvsp[-4].section_declaration);
		put_attribute((yyval.section_declaration),(yyvsp[-3].IDENTIFIER),(yyvsp[-1].constant));
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = malloc(sizeof(char)*(strlen((yyvsp[-3].IDENTIFIER) -> name) + strlen(code2) + 100 + strlen(code1)));
		sprintf(code, "%s %s = %s,", code1, (yyvsp[-3].IDENTIFIER) -> name, code2);
		push(&pila_codigo, code);

									}
#line 1830 "syntactic_analyzer.tab.c"
    break;

  case 15:
#line 237 "syntactic_analyzer.y"
                                                                        {
		(yyval.section_declaration) = (Section*)malloc(sizeof(Section));
		char *code1 = pop(&pila_codigo);
		char *code = malloc(sizeof(char)*(strlen((yyvsp[-3].IDENTIFIER) -> name) + strlen(code1) + 100));
		sprintf(code, "%s = %s,", (yyvsp[-3].IDENTIFIER) -> name, code1);
		push(&pila_codigo, code);
									}
#line 1842 "syntactic_analyzer.tab.c"
    break;

  case 16:
#line 246 "syntactic_analyzer.y"
                                                                                        {
			(yyval.tile_content) = (Tile*)malloc(sizeof(Tile));
			(yyval.tile_content) -> name = (char*) malloc(sizeof(char)*strlen((yyvsp[-9].CONST_STRING) -> value._string));
			strcpy((yyval.tile_content) -> name, (yyvsp[-9].CONST_STRING) -> value._string);
			(yyval.tile_content) -> tileset = (char*) malloc(sizeof(char)*strlen((yyvsp[-5].CONST_STRING) -> value._string));
			strcpy((yyval.tile_content) -> tileset, (yyvsp[-5].CONST_STRING) -> value._string);
			(yyval.tile_content) -> flag = (yyvsp[-1].CONST_BOOL) -> value._bool;			

			char *code = (char*)malloc(sizeof(char)*(strlen((yyval.tile_content) -> name) + strlen((yyval.tile_content) -> tileset) + 1000));
			sprintf(code,
				"spritePath=\"%s\", spriteMultiplePath=\"%s\",isDefault=%s,isMultipleSprite=%s,",
					(yyval.tile_content) -> name,
					(yyval.tile_content) -> tileset,
					((yyval.tile_content) -> flag? "true" : "false"),
					(strlen((yyval.tile_content)->tileset)? "true":"false")
				);
			push(&pila_codigo, code);
											}
#line 1865 "syntactic_analyzer.tab.c"
    break;

  case 17:
#line 267 "syntactic_analyzer.y"
                                        {
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1) + 100));
			sprintf(code, "public void CreateMap(){%s}",code1);
			push(&pila_codigo, code);
					}
#line 1876 "syntactic_analyzer.tab.c"
    break;

  case 18:
#line 276 "syntactic_analyzer.y"
                                    { /*printf("statement");*/ }
#line 1882 "syntactic_analyzer.tab.c"
    break;

  case 19:
#line 277 "syntactic_analyzer.y"
                                        {
		char *code2 = pop(&pila_codigo);	
		char *code1 = pop(&pila_codigo);	
		char *code = (char*)malloc(sizeof(char)*(strlen(code2) + strlen(code1) + 5));
		sprintf(code, "%s%s", code1, code2);
		push(&pila_codigo, code);
					}
#line 1894 "syntactic_analyzer.tab.c"
    break;

  case 20:
#line 284 "syntactic_analyzer.y"
                                 { yyerrok; }
#line 1900 "syntactic_analyzer.tab.c"
    break;

  case 21:
#line 287 "syntactic_analyzer.y"
                                { (yyval.rule) = NULL; }
#line 1906 "syntactic_analyzer.tab.c"
    break;

  case 22:
#line 288 "syntactic_analyzer.y"
                                                        {
			(yyval.rule) = (symrec*)malloc(sizeof(symrec));	
			(yyval.rule) -> value.tile = (Tile*)malloc(sizeof(Tile));
			for(int i = 0; i < 3; i++)
				(yyval.rule) -> value.tile -> rule[0][i]= (yyvsp[-5].vector) -> value._vector[i];
			for(int i = 0; i < 3; i++)
				(yyval.rule) -> value.tile -> rule[1][i]= (yyvsp[-3].vector) -> value._vector[i];
			for(int i = 0; i < 3; i++)
				(yyval.rule) -> value.tile -> rule[2][i]= (yyvsp[-1].vector) -> value._vector[i];
			char *code3 = pop(&pila_codigo);
			char *code2 = pop(&pila_codigo);
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + strlen(code3) + 10));
			sprintf(code, "{%s,%s,%s}", code1, code2, code3);
			push(&pila_codigo, code);

							}
#line 1928 "syntactic_analyzer.tab.c"
    break;

  case 23:
#line 307 "syntactic_analyzer.y"
                                                        {
			checkTypes((yyvsp[-5].expression) -> type, (yyvsp[-3].expression) -> type);
			checkTypes((yyvsp[-3].expression) -> type, (yyvsp[-1].expression) -> type);
			if((yyvsp[-5].expression) -> type != _INT_)  {
				printf("Hoy es noche de FREE FIRE!!!\n");
			}
			(yyval.vector) = (symrec*)malloc(sizeof(symrec));
			(yyval.vector) -> value._vector[0] = (yyvsp[-5].expression) -> value._int;
			(yyval.vector) -> value._vector[1] = (yyvsp[-3].expression) -> value._int; 
			(yyval.vector) -> value._vector[2] = (yyvsp[-1].expression) -> value._int;
			char *code3 = pop(&pila_codigo);
			char *code2 = pop(&pila_codigo);
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + strlen(code3) + 10));
			sprintf(code, "{%s,%s,%s}", code1, code2, code3);
			push(&pila_codigo, code);
							}
#line 1950 "syntactic_analyzer.tab.c"
    break;

  case 24:
#line 326 "syntactic_analyzer.y"
                                        {
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1) + 10));
			sprintf(code, "%s;", code1);
			push(&pila_codigo, code);
					}
#line 1961 "syntactic_analyzer.tab.c"
    break;

  case 25:
#line 332 "syntactic_analyzer.y"
                                        {	
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code1) + 10));
			sprintf(code, "%s;", code1);
			push(&pila_codigo, code);
					}
#line 1972 "syntactic_analyzer.tab.c"
    break;

  case 26:
#line 338 "syntactic_analyzer.y"
                                                {
			char *code2 = pop(&pila_codigo);
			char *code1 = pop(&pila_codigo);
			char *code = (char*)malloc(sizeof(char)*(strlen(code2)+strlen(code1) + 100));
			int direccion = 0;
			switch((yyvsp[-1].CONST_CHAR) -> value._char){
				case 'u': direccion = 1; break;
				case 'r': direccion = 2; break;
				case 'd': direccion = 3; break;
				case 'l': direccion = 4; break;
				default: printf("No mai, quedaste <clown face>\n");
			}
			sprintf(code,"%s.neighbors[%d] = %s.id;", code1, direccion, code2);
			push(&pila_codigo, code);
					}
#line 1992 "syntactic_analyzer.tab.c"
    break;

  case 27:
#line 353 "syntactic_analyzer.y"
                                        { 
					}
#line 1999 "syntactic_analyzer.tab.c"
    break;

  case 28:
#line 355 "syntactic_analyzer.y"
                                        {
					}
#line 2006 "syntactic_analyzer.tab.c"
    break;

  case 29:
#line 357 "syntactic_analyzer.y"
                                        {
					}
#line 2013 "syntactic_analyzer.tab.c"
    break;

  case 30:
#line 361 "syntactic_analyzer.y"
                                                        {
		if(getsym((yyvsp[-2].variable) -> name) != NULL) {
			printf("Redeclaracion de variable!!!\n");
			exit(1);
		}
		checkTypes((yyvsp[-3].type) -> type, (yyvsp[0].expression) -> type);
		(yyval.variable_declaration) -> type = (yyvsp[-3].type) -> type;
		assignUnary((yyvsp[-2].variable), (yyvsp[0].expression), '=');
		(yyvsp[-2].variable) -> type = (yyvsp[-3].type) -> type;
		assignUnary((yyval.variable_declaration), (yyvsp[-2].variable), '=');
		putsym((yyvsp[-2].variable) -> name, (yyvsp[-3].type) -> type);
		symrec* aux = getsym((yyvsp[-2].variable) -> name);
		assignUnary(aux, (yyvsp[0].expression), '=');

		char *code3 = pop(&pila_codigo);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen(code2)+strlen(code3)) + 10);
		sprintf(code, "%s %s = %s", code1, code2, code3);
		push(&pila_codigo, code);	
							}
#line 2039 "syntactic_analyzer.tab.c"
    break;

  case 31:
#line 382 "syntactic_analyzer.y"
                                                        { 
		symrec *aux;
		if((aux = getsym((yyvsp[0].variable) -> name)) == NULL) {
			printf("La variable no ha sido declarada!!!\n");
			exit(1);
		}
		if(getsym((yyvsp[-2].variable) -> name) != NULL) {
			printf("La variable se redeclaro\n");
			exit(1);
		}
		checkTypes((yyvsp[-3].type) -> type, aux -> type);
		assignUnary((yyvsp[-2].variable), aux, '=');
		assignUnary((yyval.variable_declaration), aux, '=');
		(yyval.variable_declaration) -> type = aux -> type;
		putsym((yyvsp[-2].variable) -> name, aux -> type);
		
		char *code3 = pop(&pila_codigo);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen(code2)+strlen(code3)) + 10);
		sprintf(code, "%s %s = %s", code1, code2, code3);
		push(&pila_codigo, code);	
							}
#line 2067 "syntactic_analyzer.tab.c"
    break;

  case 32:
#line 405 "syntactic_analyzer.y"
                                                        { 
		if(getsym((yyvsp[0].variable) -> name) != NULL) {
			printf("La variable se redeclaro\n");
			exit(1);
		}
		(yyval.variable_declaration) -> type = (yyvsp[-1].type) -> type;
		putsym((yyvsp[0].variable) -> name, (yyvsp[-1].type) -> type);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 10));
		sprintf(code, "%s,%s",code1, code2);
		push(&pila_codigo, code);	
							}
#line 2085 "syntactic_analyzer.tab.c"
    break;

  case 33:
#line 418 "syntactic_analyzer.y"
                                                        {
		if(getsym((yyvsp[-3].SECTIONS) -> name) != NULL) {
			printf("yabasayorar?\n");
			exit(1);
		}
		char** array = (char**)malloc(sizeof(char*)*(yyvsp[-1].CONST_INT) -> value._int);
		putsym((yyvsp[-3].SECTIONS) -> name, _SECTION_);
		symrec* aux = getsym((yyvsp[-3].SECTIONS) -> name);
		(yyvsp[-3].SECTIONS) -> value.array = array;
		aux -> type = _SECTION_;
		(yyval.variable_declaration) = aux;
		char *code = (char*)malloc(sizeof(char)*(500));
		sprintf(
			code,
			"sections = new List<Section> (); for(int i = 0; i < %d; i++) { sections.Add({width = widht, height = height, id = i, neighbors = new int[4]{-1,-1,-1,-1}});}",
			(yyvsp[-1].CONST_INT) -> value._int
		);
		push(&pila_codigo, code);	
							}
#line 2109 "syntactic_analyzer.tab.c"
    break;

  case 34:
#line 439 "syntactic_analyzer.y"
                                                        {
		(yyval.variable) = getsym((yyvsp[-3].SECTIONS) -> name);
		if((yyval.variable) == NULL) {
			printf("Su pata del mameitor\n");
			exit(1);
		}
		checkTypes(_INT_, (yyvsp[-1].expression) -> type);
		(yyval.variable) = (symrec*)malloc(sizeof(symrec));
		strcpy((yyval.variable) -> name, (yyvsp[-3].SECTIONS) -> name); 
		(yyval.variable) -> value._int = (yyvsp[-1].expression) -> value._int;

		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + 4));
		sprintf(code, "%s[%s]", (yyvsp[-3].SECTIONS) -> name, code1);
		push(&pila_codigo, code);
							}
#line 2130 "syntactic_analyzer.tab.c"
    break;

  case 35:
#line 455 "syntactic_analyzer.y"
                                                        {
		strcpy((yyval.variable) -> name, (yyvsp[0].IDENTIFIER) -> name); 
		char *code = (char*)malloc(sizeof((yyvsp[0].IDENTIFIER) -> name));
		strcpy(code, (yyvsp[0].IDENTIFIER) -> name);
		push(&pila_codigo, code);
							}
#line 2141 "syntactic_analyzer.tab.c"
    break;

  case 36:
#line 463 "syntactic_analyzer.y"
                                                        {
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code2) + strlen(code1) + 50));
		sprintf(code, "while(%s){%s}", code1, code2);
		push(&pila_codigo, code);
							}
#line 2153 "syntactic_analyzer.tab.c"
    break;

  case 37:
#line 473 "syntactic_analyzer.y"
                                                                                             {
		char *code4 = pop(&pila_codigo);
		char *code3 = pop(&pila_codigo);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen(code2)+strlen(code3)+strlen(code4) + 100));
		sprintf(code, "for(%s;%s;%s){%s}", code1, code2, code3, code4);
		push(&pila_codigo, code);
							}
#line 2167 "syntactic_analyzer.tab.c"
    break;

  case 38:
#line 485 "syntactic_analyzer.y"
                                                                                { 
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen(code2) + 50));
		sprintf(code, "if(%s){%s}", code1, code2);
		push(&pila_codigo, code);
										}
#line 2179 "syntactic_analyzer.tab.c"
    break;

  case 39:
#line 492 "syntactic_analyzer.y"
                                                                                {  
		char *code3 = pop(&pila_codigo);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1)+strlen(code2)+strlen(code3) + 50));
		sprintf(code, "if(%s){%s}else{%s}", code1, code2, code3);
		push(&pila_codigo, code);
										}
#line 2192 "syntactic_analyzer.tab.c"
    break;

  case 40:
#line 503 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		(yyval.expression) -> type = (yyvsp[0].constant) -> type; 
		assignUnary((yyval.expression), (yyvsp[0].constant), '=');			
							}
#line 2202 "syntactic_analyzer.tab.c"
    break;

  case 41:
#line 508 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression) -> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '+');
		// printf("expresion + expresion\n"); 
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 4));
		sprintf(code, "%s+%s", code1, code2);
		push(&pila_codigo, code);

		
							}
#line 2221 "syntactic_analyzer.tab.c"
    break;

  case 42:
#line 522 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression)-> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '-');

		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 4));
		sprintf(code, "%s-%s", code1, code2);
		push(&pila_codigo, code);

          	// printf("expresion - expresion\n"); 
              						}
#line 2240 "syntactic_analyzer.tab.c"
    break;

  case 43:
#line 536 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression)-> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '*');

		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 4));
		sprintf(code, "%s*%s", code1, code2);
		push(&pila_codigo, code);

		free((yyvsp[-2].expression));
		free((yyvsp[0].expression));
              						}
#line 2260 "syntactic_analyzer.tab.c"
    break;

  case 44:
#line 551 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression)-> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '/');
		
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 4));
		sprintf(code, "%s/%s", code1, code2);
		push(&pila_codigo, code);

		free((yyvsp[-2].expression));
		free((yyvsp[0].expression));
              						}
#line 2280 "syntactic_analyzer.tab.c"
    break;

  case 45:
#line 566 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		(yyval.expression) -> type = (yyvsp[0].expression) -> type;
		assignUnary((yyval.expression), (yyvsp[0].expression), '-');
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + 4));
		sprintf(code, "-%s", code1);
		push(&pila_codigo, code);

		free((yyvsp[0].expression));
							}
#line 2296 "syntactic_analyzer.tab.c"
    break;

  case 46:
#line 577 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		(yyval.expression) -> type = (yyvsp[-1].expression) -> type;
		assignUnary((yyval.expression), (yyvsp[-1].expression), '=');

		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + 4));
		sprintf(code, "(%s)", code1);
		push(&pila_codigo, code);
		free((yyvsp[-1].expression));
              						}
#line 2312 "syntactic_analyzer.tab.c"
    break;

  case 47:
#line 588 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		symrec* aux = getsym((yyvsp[-1].variable) -> name);
		if(aux == NULL) {
			printf("Ni vas a acabar la carrera\n");
			exit(1);
		}
		(yyval.expression) -> type = aux -> type;
		assignUnary(aux, aux, PLUSPLUS);
		assignUnary((yyval.expression), aux, '=');

		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1)+5));
		sprintf(code, "%s++", code1);
		push(&pila_codigo, code);

		free((yyvsp[-1].variable));
              						}
#line 2335 "syntactic_analyzer.tab.c"
    break;

  case 48:
#line 606 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		symrec* aux = getsym((yyvsp[-1].variable) -> name);
		if(aux == NULL) {
			printf("te pido el cambio de carrera o tu lo pides?");
			exit(1);
		}
		(yyval.expression) -> type = aux -> type;
		assignUnary(aux, aux, MINUSMINUS);
		assignUnary((yyval.expression), aux, '=');

		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1)+5));
		sprintf(code, "%s--", code1);
		push(&pila_codigo, code);

		free((yyvsp[-1].variable));
              						}
#line 2358 "syntactic_analyzer.tab.c"
    break;

  case 49:
#line 624 "syntactic_analyzer.y"
                                                        { 
		symrec* aux = getsym((yyvsp[0].variable) -> name);
		if(aux == NULL) {
			printf("Se esta usando una variable no declarada\n");
			exit(1);
		}
		(yyval.expression) -> type = aux -> type;
		assignUnary((yyval.expression), aux, '=');
		free((yyvsp[0].variable));
							}
#line 2373 "syntactic_analyzer.tab.c"
    break;

  case 50:
#line 634 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		(yyval.expression) -> type = _BOOL_;
		(yyval.expression) -> value._bool = (yyvsp[0].condition) -> value._bool;
		int actLen = strlen(pila_codigo -> code);

							}
#line 2385 "syntactic_analyzer.tab.c"
    break;

  case 51:
#line 641 "syntactic_analyzer.y"
                                                        { 
		symrec* aux = getsym((yyvsp[-2].variable) -> name);
		if(aux == NULL) {
			printf("Neta we, ya mejor vete a dormir\n");
			exit(1);
		}
		checkTypes(aux -> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[0].expression) -> type;
		assignUnary(aux, (yyvsp[0].expression), '=');
		assignUnary((yyval.expression), aux, '=');
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + 10));
		if(aux -> type == _SECTION_) {
			sprintf(code, "%s.Init(templates[\"%s\"])", code1, code2);
		}
		else {
			sprintf(code, "%s=%s", code1, code2);
		}
		push(&pila_codigo, code);
		free((yyvsp[0].expression));
		free((yyvsp[-2].variable));
					      		}
#line 2413 "syntactic_analyzer.tab.c"
    break;

  case 52:
#line 667 "syntactic_analyzer.y"
                                                                { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].condition) -> type, (yyvsp[0].condition) -> type);
		assignValue((yyval.condition), (yyvsp[-2].condition), (yyvsp[0].condition), (yyvsp[-1].logical_operator)); 
		char *code3 = pop(&pila_codigo);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + strlen(code3) + 10));
		strcpy(code, code1);
		strcat(code, code2);
		strcat(code, code3);
		push(&pila_codigo, code);

              						    	}
#line 2432 "syntactic_analyzer.tab.c"
    break;

  case 53:
#line 681 "syntactic_analyzer.y"
                                                                { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression) -> type, (yyvsp[0].expression) -> type);
		(yyval.condition) -> type = _BOOL_;
		assignValue((yyval.condition), (yyvsp[-2].expression), (yyvsp[0].expression), (yyvsp[-1].comparation_operator));
		char *code3 = pop(&pila_codigo);
		char *code2 = pop(&pila_codigo);
		char *code1 = pop(&pila_codigo);
		char *code = (char*)malloc(sizeof(char)*(strlen(code1) + strlen(code2) + strlen(code3) + 10));
		strcpy(code, code1);
		strcat(code, code2);
		strcat(code, code3);
		push(&pila_codigo, code);
		free((yyvsp[-2].expression));
		free((yyvsp[0].expression));
              							}
#line 2453 "syntactic_analyzer.tab.c"
    break;

  case 54:
#line 697 "syntactic_analyzer.y"
                                                                { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		(yyval.condition) -> type = _BOOL_;
		(yyval.condition) -> value._bool = (yyvsp[0].CONST_BOOL) -> value._bool;
		free((yyvsp[0].CONST_BOOL));
		char code[10];
		if((yyval.condition) -> value._bool) {
			strcpy(code, "true");
		}
		else{
			strcpy(code, "false");
		}
		push(&pila_codigo, code);
              							}
#line 2472 "syntactic_analyzer.tab.c"
    break;

  case 55:
#line 711 "syntactic_analyzer.y"
                                                                { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
        	if((yyvsp[0].condition) -> type != _BOOL_) {
        		printf("No coinciden los tipos mi tio\n");
        		exit(1);
          	}
		(yyval.condition) -> type = CONST_BOOL;
		assignUnary((yyval.condition), (yyvsp[0].condition), '!');
		char *code = (char*)malloc(sizeof(char)*(strlen(pila_codigo -> code) + 10));
		code[0] = '!'; code[1] = '\0';
		strcat(code, pila_codigo -> code);
		pop(&pila_codigo);
		push(&pila_codigo, code);

		// printf("no condicion\n");
              }
#line 2493 "syntactic_analyzer.tab.c"
    break;

  case 56:
#line 727 "syntactic_analyzer.y"
                                                                {
		symrec *aux = getsym((yyvsp[0].variable) -> name);
		if(aux == NULL || aux -> type != _BOOL_) {
			printf("No nos interesa tu rollo, nomas que funcione\n");
			exit(1);
		}
		(yyval.condition) -> value._bool = !(aux -> value._bool);
		(yyval.condition) -> type = _BOOL_;
		char *code = (char*)malloc(sizeof(char)*(strlen(pila_codigo -> code) + 10));
		code[0] = '!'; code[1] = '\0';
		strcat(code, pila_codigo -> code);
		push(&pila_codigo, code);
		pop(&pila_codigo);
		free((yyvsp[0].variable));
								}
#line 2513 "syntactic_analyzer.tab.c"
    break;

  case 57:
#line 742 "syntactic_analyzer.y"
                                                                { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		(yyval.condition) -> type = (yyvsp[-1].condition) -> type;
		char *code = (char*)malloc(sizeof(char)*(strlen(pila_codigo -> code) + 10));
		code[0] = '('; code[1] = '\0';
		strcat(code, pila_codigo -> code);
		strcat(code, ")");
		pop(&pila_codigo);
		push(&pila_codigo, code);
              							}
#line 2528 "syntactic_analyzer.tab.c"
    break;

  case 58:
#line 755 "syntactic_analyzer.y"
                                                        { 
					(yyval.logical_operator) = (yyvsp[0].AND_OP); 
					char code[4] = "&&";
					push(&pila_codigo,  code);
							}
#line 2538 "syntactic_analyzer.tab.c"
    break;

  case 59:
#line 760 "syntactic_analyzer.y"
                                                        { 
					(yyval.logical_operator) = (yyvsp[0].OR_OP); 
					char code[4] = "||";
					push(&pila_codigo, code);
							}
#line 2548 "syntactic_analyzer.tab.c"
    break;

  case 60:
#line 767 "syntactic_analyzer.y"
                                                        { 
					(yyval.comparation_operator) = (yyvsp[0].GREATER_EQ); 	
					char code[4] = ">=";
					push(&pila_codigo, code);
							}
#line 2558 "syntactic_analyzer.tab.c"
    break;

  case 61:
#line 772 "syntactic_analyzer.y"
                                                        { 
					(yyval.comparation_operator) = (yyvsp[0].GREATER);
					char code[4] = ">";
					push(&pila_codigo, code);
							}
#line 2568 "syntactic_analyzer.tab.c"
    break;

  case 62:
#line 777 "syntactic_analyzer.y"
                                                        { 
					(yyval.comparation_operator) = (yyvsp[0].LESS_EQ); 
					char code[4] = "<=";
					push(&pila_codigo, code);
							}
#line 2578 "syntactic_analyzer.tab.c"
    break;

  case 63:
#line 782 "syntactic_analyzer.y"
                                                        { 
					(yyval.comparation_operator) = (yyvsp[0].LESS); 	
					char code[4] = "<";
					push(&pila_codigo, code);
							}
#line 2588 "syntactic_analyzer.tab.c"
    break;

  case 64:
#line 787 "syntactic_analyzer.y"
                                                        { 
					(yyval.comparation_operator) = (yyvsp[0].NEQ); 	
					char code[4] = "<";
					push(&pila_codigo, code);
							}
#line 2598 "syntactic_analyzer.tab.c"
    break;

  case 65:
#line 792 "syntactic_analyzer.y"
                                                        { 
					(yyval.comparation_operator) = (yyvsp[0].EQ); 
					char code[4] = "==";
					push(&pila_codigo, code);
							}
#line 2608 "syntactic_analyzer.tab.c"
    break;

  case 66:
#line 799 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._int = (yyvsp[0].CONST_INT) -> value._int; 
		(yyval.constant) -> type = _INT_; 
		char code[25];
		sprintf(code, "%d", (yyval.constant) -> value._int);
		push(&pila_codigo, code);
		}
#line 2621 "syntactic_analyzer.tab.c"
    break;

  case 67:
#line 807 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._float = (yyvsp[0].CONST_FLOAT) -> value._float; 
		(yyval.constant) -> type = _FLOAT_; 
		char code[25];
		sprintf(code, "%f", (yyval.constant) -> value._float);
		push(&pila_codigo, code);
		}
#line 2634 "syntactic_analyzer.tab.c"
    break;

  case 68:
#line 815 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._double = (yyvsp[0].CONST_DOUBLE) -> value._double; 
		(yyval.constant) -> type = _DOUBLE_; 
		char code[25];
		sprintf(code, "%f", (yyval.constant) -> value._double);
		push(&pila_codigo, code);
		//printf("const_double\n"); 
		}
#line 2648 "syntactic_analyzer.tab.c"
    break;

  case 69:
#line 824 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._char = (yyvsp[0].CONST_CHAR) -> value._char; 
		(yyval.constant) -> type = _CHAR_; 
		// printf("const_char\n"); 
		char code[10];
		sprintf(code, "'%c'", (yyval.constant) -> value._char);
		push(&pila_codigo, code);
		}
#line 2662 "syntactic_analyzer.tab.c"
    break;

  case 70:
#line 833 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._bool = (yyvsp[0].CONST_BOOL) -> value._bool; 
		(yyval.constant) -> type = _BOOL_; 
		char code[10];
		sprintf(code, "%s", ((yyval.constant) -> value._bool? "true" : "false"));
		push(&pila_codigo, code);
		// printf("const_bool\n"); 
		}
#line 2676 "syntactic_analyzer.tab.c"
    break;

  case 71:
#line 842 "syntactic_analyzer.y"
                       {
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));	
		int len = strlen((yyvsp[0].CONST_STRING) -> value._string);
		(yyval.constant) -> value._string = (char*)malloc(sizeof(char)*len);
		strcpy((yyval.constant) -> value._string, (yyvsp[0].CONST_STRING) -> value._string);
		(yyval.constant) -> type = _STRING_;
		char* code = (char*)malloc(sizeof(char)*(strlen((yyvsp[0].CONST_STRING) -> value._string) + 4));
		code[0] = '\"';
		code[1] = '\0';
		code = strcat(code, (yyvsp[0].CONST_STRING) -> value._string);
		code = strcat(code, (yyvsp[0].CONST_STRING) -> value._string);
		code = strcat(code, "\"");
		push(&pila_codigo, code);
		free((yyvsp[0].CONST_STRING));
		}
#line 2696 "syntactic_analyzer.tab.c"
    break;

  case 72:
#line 860 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _INT_; 
		char code[7];
		sprintf(code, "int");
		push(&pila_codigo, code);
		}
#line 2708 "syntactic_analyzer.tab.c"
    break;

  case 73:
#line 867 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _FLOAT_; 
		char code[7];
		sprintf(code, "float");
		push(&pila_codigo, code);
		}
#line 2720 "syntactic_analyzer.tab.c"
    break;

  case 74:
#line 874 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _DOUBLE_; 
		char code[7];
		sprintf(code, "double");
		push(&pila_codigo, code);
		}
#line 2732 "syntactic_analyzer.tab.c"
    break;

  case 75:
#line 881 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _LONG_; 
		char code[7];
		sprintf(code, "long");
		push(&pila_codigo, code);
		// printf("long\n"); 
		}
#line 2745 "syntactic_analyzer.tab.c"
    break;

  case 76:
#line 889 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _BOOL_; 
		char code[7];
		sprintf(code, "bool");
		push(&pila_codigo, code);
		// printf("bool\n"); 
		}
#line 2758 "syntactic_analyzer.tab.c"
    break;

  case 77:
#line 897 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _CHAR_; 
		char code[7];
		sprintf(code, "char");
		push(&pila_codigo, code);
		// printf("char\n"); 
		}
#line 2771 "syntactic_analyzer.tab.c"
    break;

  case 78:
#line 905 "syntactic_analyzer.y"
                   {
		(yyval.type)  = (symrec*) malloc(sizeof(symrec));
		(yyval.type) -> type = _STRING_; 
		char code[7];
		sprintf(code, "string");
		push(&pila_codigo, code);
		// printf("String\n");
		}
#line 2784 "syntactic_analyzer.tab.c"
    break;


#line 2788 "syntactic_analyzer.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 916 "syntactic_analyzer.y"

tabla_hash sym_table;
Pila *pila_codigo;
void init() {
	int i = 0;
	sym_table.MOD = 9887;
	for(i = 0; i < sym_table.MOD; i++) {
		sym_table.table[i] = NULL;
	}
	pila_codigo = NULL;
}
int get_hash(char const *name) {
	int i = 0;
	int ret = 0;
	int pot = 1;
	int prime = 31;
	// printf("Name: %s\n", name);
	for(i = 0; i < strlen(name); i++) {
		ret += (name[i]*pot)%sym_table.MOD;
		if(ret > sym_table.MOD)
			ret -= sym_table.MOD;
		pot = (pot * prime) % sym_table.MOD;
	}
	// printf("Valor hash: %d\n", ret);
	return ret % sym_table.MOD;
}

void putsym(char const *name, int sym_type) {
	int hash_val = get_hash(name);
	symrec *new_one = (symrec *) malloc (sizeof (symrec));
	strcpy(new_one -> name, name);
	new_one -> type = sym_type;
	sym_table.table[hash_val] = new_one;
}
symrec *getsym(char const *name) {
	int hash_val = get_hash(name);
	return sym_table.table[hash_val];
}
char *pop(Pila **p) {
	if((*p) == NULL) {
		printf("Error, la pila esta vacia\n");
		exit(1);
	}
	Pila* aux = (*p);
	char *code = (char*)malloc(sizeof(char)*(strlen((*p) -> code) + 4));
	strcpy(code, (*p) -> code);
	(*p) = (*p) -> next;
	free(aux);
	return code;
}
void push(Pila **p, char* code) {
	Pila *aux = (Pila*)malloc(sizeof(Pila));
	aux -> next = (*p);
	aux -> code = (char*)malloc(sizeof(char)*(strlen(code) + 4));
	strcpy(aux -> code, code);
	(*p) = aux;
}
int main(int argc, char** argv) {
	init();
	yyparse();
	return 0;
}

void assignUnary(symrec* $$, symrec* $1, int opc) {
 	// printf("$1 -> type = %d\n", $1 -> type);
    switch($1 -> type) {
      case _INT_:
        switch(opc) {
          case '-': $$ -> value._int = -$1 -> value._int; break;
          case '=': $$ -> value._int = $1 -> value._int; break;
          case PLUSPLUS: $$ -> value._int = $1 -> value._int + 1; break;
          case MINUSMINUS: $$ -> value._int = $1 -> value._int - 1; break;
        }
        break;
      case _FLOAT_:
        switch(opc) {
          case '-': $$ -> value._float = -$1 -> value._float; break;
          case '=': $$ -> value._float = $1 -> value._float; break;
          case PLUSPLUS: $$ -> value._float = $1 -> value._float + 1; break;
          case MINUSMINUS: $$ -> value._float = $1 -> value._float - 1; break;
        }
        break;
      case _DOUBLE_:
        switch(opc) {
          case '-': $$ -> value._double = -$1 -> value._double; break;
          case '=': $$ -> value._double = $1 -> value._double; break;
          case PLUSPLUS: $$ -> value._double = $1 -> value._double + 1; break;
          case MINUSMINUS: $$ -> value._double = $1 -> value._double - 1; break;
        }
        break;
      case _CHAR_:
        switch(opc) {
          case '=': $$ -> value._char = $1 -> value._char; break;
        }
        break;
      case _BOOL_:
        if(opc == '!') {
          $$ -> value._bool = !($1 -> value._bool); break;
        }
        else if(opc == '='){
          $$ -> value._bool = $1-> value._bool;
        }
        break;
      case _LONG_:
        switch(opc) {
          case '-': $$ -> value._long = -$1 -> value._long; break;
          case '=': $$ -> value._long = -$1 -> value._long; break;
          case PLUSPLUS: $$ -> value._long = $1 -> value._long + 1; break;
          case MINUSMINUS: $$ -> value._long = $1 -> value._long - 1; break;
        } 
        break;
	case _STRING_:
		if(opc == '=') {
			int len = strlen($1 -> value._string);
			$$ -> value._string = (char*)malloc(len*sizeof(char));
			strcpy($$ -> value._string, $1 -> value._string);
		}
		else {
			printf("Que haces, eso no se puede\n");
		}
	break;
	case _SECTION_:
		if(opc == '=') {
			// $$ -> value._int -> al que quieres accesar
			$$ -> value.array[$$ -> value._int] = (char*)malloc(sizeof(char)*strlen($1 -> name));
			strcpy($$ -> value.array[$$ -> value._int], $1 -> name);
		}
		else {
			printf("RTFM\n");
			exit(1);
		}
      default:
      	printf("Error unario\n");
        printf("Hay un error!\n");
        exit(1);
    }
  }
  // Para operaciones binarias
void assignValue(symrec* a, symrec* b, symrec* c, int opc) {
	// printf("OPC: %d\n", opc);
	switch(b -> type) {
		case _INT_:
			// printf("B: %d\n", b -> value._int);
			// printf("C: %d\n", c -> value._int);
			switch(opc) {
				case '+': a -> value._int = b -> value._int + c -> value._int; break;			
				case '-': a -> value._int = b -> value._int - c -> value._int; break;			
				case '*': a -> value._int = b -> value._int * c -> value._int; break;			
				case '/': a -> value._int = b -> value._int / c -> value._int; break;			
				case LESS: a -> value._bool = b -> value._int < c -> value._int; break;			
				case GREATER: a -> value._bool = b -> value._int > c -> value._int; break;
				case GREATER_EQ: a -> value._bool = b -> value._int >= c -> value._int; break;
				case LESS_EQ: a -> value._bool = b -> value._int <= c -> value._int; break;
				case NEQ: a-> value._bool = b -> value._int != c -> value._int; break;
				case EQ: a-> value._bool = b -> value._int == c -> value._int; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _FLOAT_:
			switch(opc) {
				case '+': a -> value._float = b -> value._float + c -> value._float; break;
				case '-': a -> value._float = b -> value._float - c -> value._float; break;
				case '*': a -> value._float = b -> value._float * c -> value._float; break;
				case '/': a -> value._float = b -> value._float / c -> value._float; break;
				case LESS: a -> value._bool = b -> value._float < c -> value._float; break;
				case GREATER: a -> value._bool = b -> value._float > c -> value._float; break;
				case GREATER_EQ: a -> value._bool = b -> value._float >= c -> value._float; break;
				case LESS_EQ: a -> value._bool = b -> value._float <= c -> value._float; break;
				case NEQ: a-> value._bool = b -> value._float != c -> value._float; break;
				case EQ: a-> value._bool = b -> value._float == c -> value._float; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _DOUBLE_:
			// printf("%f / %f\n", b -> value._double, c -> value._double);
			switch(opc) {
				case '+': a -> value._double = b -> value._double + c -> value._double; break;
				case '-': a -> value._double = b -> value._double - c -> value._double; break;
				case '*': a -> value._double = b -> value._double * c -> value._double; break;
				case '/': a -> value._double = b -> value._double / c -> value._double;break;
				case LESS: a-> value._bool = b -> value._double < c -> value._double;break;
				case GREATER: a-> value._bool = b -> value._double > c -> value._double;break;
				case GREATER_EQ: a -> value._bool = b -> value._double >= c -> value._double;break;
				case LESS_EQ: a-> value._bool = b -> value._double <= c -> value._double;break;
				case NEQ: a-> value._bool = b -> value._double != c -> value._double; break;
				case EQ: a-> value._bool = b -> value._double == c -> value._double; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _CHAR_:
			switch(opc) {
				case '+': a -> value._char = b -> value._char + c -> value._char; break;
				case '-': a -> value._char = b -> value._char - c -> value._char; break;
				case '*': a -> value._char = b -> value._char * c -> value._char; break;
				case '/': a -> value._char = b -> value._char / c -> value._char; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _BOOL_:
			switch(opc) {
				case '+': a -> value._bool = b -> value._bool | c -> value._bool; break;
				case '*': a -> value._bool = b -> value._bool & c -> value._bool; break;
				case OR_OP: a -> value._bool = b -> value._bool | c -> value._bool; break;
				case AND_OP: a -> value._bool = b -> value._bool & c -> value._bool; break;	
  				case NEQ: a-> value._bool = b -> value._bool != c -> value._bool; break;
  				case EQ: a-> value._bool = b -> value._bool != c -> value._bool; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		case _LONG_:
			switch(opc) {
				case '+': a -> value._long = b -> value._long + c -> value._long; break;	
				case '-': a -> value._long = b -> value._long - c -> value._long; break;	
				case '*': a -> value._long = b -> value._long * c -> value._long; break;	
				case '/': a -> value._long = b -> value._long / c -> value._long; break;	
				case LESS: a-> value._bool = b -> value._long < c -> value._long; break;
				case GREATER: a-> value._bool = b -> value._long > c -> value._long; break;
				case GREATER_EQ: a -> value._bool = b -> value._long >= c -> value._long;break;
				case LESS_EQ: a-> value._bool = b -> value._long <= c -> value._long; break;
				case NEQ: a-> value._bool = b -> value._long != c -> value._long; break;
				case EQ: a-> value._bool = b -> value._long == c -> value._long; break;
				default:
					printf("Te faltan manos men\n");
					exit(1);
			}
			break;
		default:
			printf("Hay un error!\n");
			exit(1);
	}
}

void put_attribute(Section* a, symrec* attribute, symrec* constant) {
	if(strcmp(attribute -> name, "interval") == 0){
		checkTypes(_INT_, constant -> type);
		a -> _ints[0] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "minSectionWidth") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[1] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "requiredFloor") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[2] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "minPathWidth") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[3] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "roughness") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[4] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "curviness") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[5] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "height") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[6] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "fillPercent") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[7] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "smoothCount") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[8] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "x") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[9] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "y") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[10] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "edge") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[11] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "maxPathWidth") == 0) {
		checkTypes(_INT_, constant -> type);
		a -> _ints[12] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "seed") == 0) {
		checkTypes(_DOUBLE_, constant -> type);
		a -> _floats[0] = constant -> value._double;
	}
	else if(strcmp(attribute -> name, "modifier") == 0) {
		checkTypes(_DOUBLE_, constant -> type);
		a -> _floats[1] = constant -> value._int;
	}
	else if(strcmp(attribute -> name, "fillerTile") == 0) {
		checkTypes(_STRING_, constant -> type);
		symrec *aux = getsym(constant -> value._string);
		if(aux == NULL) {
			printf("seguro?\n");
			exit(1);
		}
		a -> filler = aux -> value.smart_tile;
	}
	else {
		printf("It's called hentai and is art\n");
		exit(1);
	}
}
char* resize_string(char *code, int *new_len, int req_len) {
	while((*new_len) <= req_len) {
		(*new_len)*=2;
		code = (char*)realloc((void*)code, *new_len);
		if(code == NULL) {
			printf("Error\n");
			exit(1);
		}
	}
	return code;
}
void print_template() {
	printf("using System.Collections.Generic;using UnityEngine;using UnityEditor;using UnityEngine.Tilemaps;public class MapGenerator : MonoBehaviour{private Dictionary<string, Template> templates { get; set; }private List<Section> sections { get; set; }[Header(\"Reference here your Tilemap\")]public Tilemap tilemap;public int width { get; set; }public int height { get; set; }public void ClearMap(){tilemap.ClearAllTiles();}public void Generate(){bool[] visited = new bool[sections.Count];List<ConectedComponent> components = new List<ConectedComponent>();for (int i = 0; i < sections.Count; i++){visited[i] = false;}for (int i = 0; i < sections.Count; i++){if(!visited[i]){ConectedComponent current = new ConectedComponent{origin = new int[2] {0, 0},corner = new int[2] {width - 1, height - 1},elements = new List<int>()};Dfs(i, visited, current);components.Add(current);}}int[] origin = new int[] {0, 0};for (int i = 0; i < components.Count; i++){MoveCoords(components[i], origin);origin[0] = components[i].corner[0] + 1;}int mapWidth = origin[0] + width;int mapHeight = origin[1] + height;for (int k = 0; k < sections.Count; k++){TileBase tile = Resources.Load<TileBase>(RuleTileGenerator.RULE_TILES_PATH + sections[k].filler) as TileBase;Debug.Log(\"processing section: \" + k);if(tile == null){Debug.Log(\"Resource tile load failed\");}for (int i = 0; i < width; i++){for (int j = 0; j < height; j++){int x = sections[k].x + i;int y = sections[k].y + j;if(sections[k].map[i, j] == 1){tilemap.SetTile(new Vector3Int(x, y, 0), tile);}}}}}private void MoveCoords(ConectedComponent component, int[] origin){int Cx = component.origin[0] - origin[0];int Cy = component.origin[1] - origin[1];for (int i = 0; i < component.elements.Count; i++){int idx = component.elements[i];sections[idx].x = sections[idx].x - Cx;sections[idx].y = sections[idx].y - Cy;}component.origin[0] = component.origin[0] - Cx;component.origin[1] = component.origin[1] - Cy;component.corner[0] = component.corner[0] - Cx;component.corner[1] = component.corner[1] - Cy;}private void Join(ConectedComponent component, Section origin, Section destiny, int direction){if (direction == 0){destiny.x = origin.x - width;destiny.y = origin.y;}else if (direction == 1){destiny.x = origin.x;destiny.y = origin.y + height;}else if (direction == 2){destiny.x = origin.x + width;destiny.y = origin.y;}else{destiny.x = origin.x;destiny.y = origin.y - height;}component.origin[0] = Min(origin.x, destiny.x);component.origin[1] = Min(origin.y, destiny.y);component.corner[0] = Max(origin.x, destiny.x) + width;component.corner[1] = Max(origin.y, destiny.y) + height;}");
	printf("private void Dfs(int node, bool[] visited, ConectedComponent current){visited[node] = true;current.elements.Add(node);for (int i = 0; i < 4; i++){int nextNode = sections[node].neighbors[i];if (nextNode == -1){continue;}if (!visited[nextNode]){Join(current, sections[node], sections[nextNode], i);Dfs(nextNode, visited, current);}}}private int Min(int a, int b){if(a < b) return a;return b;}private int Max(int a, int b){if(a > b) return a;return b;}");
}
