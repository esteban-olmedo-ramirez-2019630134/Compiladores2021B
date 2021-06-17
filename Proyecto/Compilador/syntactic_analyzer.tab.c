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
  

#line 97 "syntactic_analyzer.tab.c"

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
    SET = 283,
    SMARTTILE = 284,
    TILE = 285,
    SECTION = 286,
    _BEGIN = 287,
    END = 288,
    NEW = 289,
    JOIN = 290,
    CONTAINER = 291,
    NAME = 292,
    TILESET = 293,
    DEFAULT = 294,
    GREATER_EQ = 295,
    LESS_EQ = 296,
    AND_OP = 297,
    OR_OP = 298,
    NEQ = 299,
    GREATER = 300,
    LESS = 301,
    EQ = 302,
    NEG = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

  /* tile_content  */
  Tile* tile_content;
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
#line 269 "syntactic_analyzer.tab.c"

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
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

#define YYUNDEFTOK  2
#define YYMAXUTOK   303


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
       2,     2,     2,    63,     2,     2,     2,     2,     2,     2,
      61,    62,    51,    50,    55,    49,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    57,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    56,    59,    63,    64,    65,    68,    72,
      73,    77,    97,   101,   105,   116,   120,   121,   122,   125,
     126,   143,   156,   157,   158,   159,   160,   161,   164,   181,
     199,   210,   211,   212,   213,   220,   224,   228,   229,   233,
     240,   247,   254,   269,   278,   279,   285,   293,   306,   319,
     329,   334,   351,   357,   368,   375,   385,   395,   404,   405,
     408,   409,   410,   411,   412,   413,   416,   422,   428,   434,
     440,   446,   457,   461,   465,   469,   473,   477,   481
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
  "WHILE", "IF", "ELSE", "RULE", "SET", "SMARTTILE", "TILE", "SECTION",
  "_BEGIN", "END", "NEW", "JOIN", "CONTAINER", "NAME", "TILESET",
  "DEFAULT", "GREATER_EQ", "LESS_EQ", "AND_OP", "OR_OP", "NEQ", "GREATER",
  "LESS", "EQ", "'='", "'-'", "'+'", "'*'", "'/'", "NEG", "'{'", "','",
  "'}'", "';'", "':'", "'['", "']'", "'('", "')'", "'!'", "$accept",
  "variable_declaration", "variable", "type", "expression", "condition",
  "constant", "vector", "rule", "logical_operator", "comparation_operator",
  "tile_content", "input", "set_size", "initial_declaration", "smarttile",
  "tiles_list", "tile", "section", "section_declaration", "main_function",
  "code_block", "statement", "while", "for", "if", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,    61,    45,
      43,    42,    47,   303,   123,    44,   125,    59,    58,    91,
      93,    40,    41,    33
};
# endif

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -13,    13,  -154,   -24,  -154,   171,    45,    10,    66,
      75,  -154,  -154,  -154,    27,   152,    29,    46,    98,  -154,
      54,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,    56,    57,    59,    60,    73,    73,
      73,  -154,   -15,   123,   276,     9,  -154,    76,    72,  -154,
    -154,  -154,  -154,   111,    79,   168,    73,   325,    73,    73,
      56,   178,   147,   -18,    15,   276,   -28,  -154,  -154,    73,
     102,  -154,  -154,  -154,  -154,  -154,  -154,    73,    73,    73,
      73,    73,  -154,  -154,    73,  -154,    91,   -11,    85,    88,
      -4,    86,   220,   192,    94,    18,    24,  -154,  -154,   276,
      73,    97,    97,   178,   178,   276,    68,  -154,   162,  -154,
    -154,   169,  -154,  -154,  -154,  -154,  -154,    73,   119,   120,
     -10,   276,   124,   133,   139,    11,   152,   152,   166,   326,
    -154,    73,   148,   149,   141,   179,  -154,   150,   206,  -154,
     182,   193,   163,   156,  -154,   160,   167,   159,   172,  -154,
     152,   152,   189,   174,   164,   184,   186,    73,   175,  -154,
    -154,   218,   250,   174,   188,    73,   194,   209,   263,   174,
     211,    73,   207,   261,   237,  -154,   205,  -154,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     7,     0,     1,     0,     0,     0,     0,
       0,     6,     5,     3,     0,     0,     0,     0,     0,    18,
      34,    72,    73,    74,    75,    76,    77,    78,    69,    54,
      66,    67,    68,    71,    24,     0,     0,     0,     0,     0,
       0,    22,    49,     0,    23,    50,    39,     0,     0,    26,
      25,    27,    10,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    50,    49,     0,    50,    47,    48,     0,
      30,    60,    62,    64,    61,    63,    65,     0,     0,     0,
       0,     0,    58,    59,     0,    15,     0,     0,     0,     0,
      34,    66,     0,     0,     0,    50,    50,    46,    57,    51,
       0,    41,    40,    42,    43,    53,    50,    17,     0,     8,
       9,     0,     4,    33,    32,    31,    44,     0,     0,     0,
      49,    28,     0,     0,     0,    50,     0,     0,     0,     0,
      12,     0,     0,     0,     0,    19,    70,     0,     0,    35,
      37,     0,     0,     0,    13,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,   217,   -35,  -154,   -38,   -36,   146,  -153,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,   -77,  -154,  -154,  -154,  -154
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    41,    42,    43,    44,    45,    46,   158,   143,    84,
      81,   135,     2,     3,     6,    11,    87,   110,    12,   124,
      13,    47,    48,    49,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    62,    65,    63,    66,    64,    67,    68,    70,   107,
     166,    67,    68,     5,    82,    83,   172,    92,    93,   108,
      65,    65,    95,    96,    82,    83,     1,   -55,   -55,   -55,
       7,    99,   -55,    69,   -55,     4,    67,    68,    69,   101,
     102,   103,   104,   105,    98,   109,    65,   -29,   106,   132,
     133,    82,    83,    82,    83,    55,   113,   -56,   -56,    14,
      82,    83,   121,    69,    15,   120,    82,    83,   131,    16,
     -56,   -56,   -56,   154,   155,   -56,    20,   -56,    17,    65,
     118,   125,    18,    52,    28,    29,   119,    30,    31,    32,
      33,    60,    19,   138,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    53,    30,    31,    32,    33,    34,
      82,    83,    54,    55,    35,    36,    37,    56,    57,   162,
      58,    59,    38,   -52,   -52,   -52,    20,   168,   -52,    86,
     -52,    88,    85,   174,    39,    89,    40,    71,    72,   111,
      38,    73,    74,    75,    76,   112,   114,   -16,    79,    80,
     100,   117,    39,    19,    40,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   122,    30,    31,    32,    33,
      34,    90,   123,   126,   127,    35,    36,    37,   128,    28,
      29,   129,    91,    31,    32,    33,    60,    71,    72,   141,
       8,    73,    74,    75,    76,   130,    77,    78,    79,    80,
       9,    38,    10,   134,   139,   140,   142,   144,   146,    97,
     147,   148,   149,    39,   150,    40,   152,    38,    71,    72,
     159,   151,    73,    74,    75,    76,   153,   156,   157,    39,
     163,    40,    71,    72,   161,   164,    73,    74,    75,    76,
     160,    77,    78,    79,    80,   167,    71,    72,   170,   169,
      73,    74,    75,    76,   116,    77,    78,    79,    80,   173,
      71,    72,   178,   175,    73,    74,    75,    76,   145,    77,
      78,    79,    80,   176,    94,   137,     0,    71,    72,     0,
     115,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      71,    72,     0,   177,    73,    74,    75,    76,     0,    77,
      78,    79,    80,    71,    72,   165,     0,    73,    74,    75,
      76,     0,    77,    78,    79,    80,    71,    72,   171,     0,
      73,    74,    75,    76,     0,    77,    78,    79,    80,    21,
      22,    23,    24,    25,    26,    27,     0,    28,   136,     0,
      30,    31,    32,    33
};

static const yytype_int16 yycheck[] =
{
      38,    39,    40,    39,    40,    40,    21,    22,    43,    86,
     163,    21,    22,     0,    42,    43,   169,    55,    56,    30,
      58,    59,    58,    59,    42,    43,    28,    55,    56,    57,
      54,    69,    60,    48,    62,    48,    21,    22,    48,    77,
      78,    79,    80,    81,    62,    56,    84,    57,    84,   126,
     127,    42,    43,    42,    43,    59,    60,    42,    43,    14,
      42,    43,   100,    48,    54,   100,    42,    43,    57,     3,
      55,    56,    57,   150,   151,    60,     3,    62,     3,   117,
      62,   117,    55,    54,    11,    12,    62,    14,    15,    16,
      17,    18,     1,   131,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    58,    14,    15,    16,    17,    18,
      42,    43,    14,    59,    23,    24,    25,    61,    61,   157,
      61,    61,    49,    55,    56,    57,     3,   165,    60,    57,
      62,    20,    56,   171,    61,    56,    63,    40,    41,    54,
      49,    44,    45,    46,    47,    57,    60,    56,    51,    52,
      48,    57,    61,     1,    63,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     3,    14,    15,    16,    17,
      18,     3,     3,    54,    54,    23,    24,    25,    54,    11,
      12,    48,    14,    15,    16,    17,    18,    40,    41,    48,
      19,    44,    45,    46,    47,    56,    49,    50,    51,    52,
      29,    49,    31,    37,    56,    56,    27,    57,    26,    62,
      17,    48,    56,    61,    54,    63,    57,    49,    40,    41,
      56,    54,    44,    45,    46,    47,    54,    38,    54,    61,
      55,    63,    40,    41,    48,    17,    44,    45,    46,    47,
      56,    49,    50,    51,    52,    57,    40,    41,    39,    55,
      44,    45,    46,    47,    62,    49,    50,    51,    52,    48,
      40,    41,    57,    56,    44,    45,    46,    47,    62,    49,
      50,    51,    52,    12,    57,   129,    -1,    40,    41,    -1,
      60,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      40,    41,    -1,    56,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    40,    41,    55,    -1,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    40,    41,    55,    -1,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,     4,
       5,     6,     7,     8,     9,    10,    -1,    11,    12,    -1,
      14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    76,    77,    48,     0,    78,    54,    19,    29,
      31,    79,    82,    84,    14,    54,     3,     3,    55,     1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      14,    15,    16,    17,    18,    23,    24,    25,    49,    61,
      63,    65,    66,    67,    68,    69,    70,    85,    86,    87,
      88,    89,    54,    58,    14,    59,    61,    61,    61,    61,
      18,    68,    68,    69,    66,    68,    69,    21,    22,    48,
      66,    40,    41,    44,    45,    46,    47,    49,    50,    51,
      52,    74,    42,    43,    73,    56,    57,    80,    20,    56,
       3,    14,    68,    68,    65,    69,    69,    62,    62,    68,
      48,    68,    68,    68,    68,    68,    69,    85,    30,    56,
      81,    54,    57,    60,    60,    60,    62,    57,    62,    62,
      66,    68,     3,     3,    83,    69,    54,    54,    54,    48,
      56,    57,    85,    85,    37,    75,    12,    70,    68,    56,
      56,    48,    27,    72,    57,    62,    26,    17,    48,    56,
      54,    54,    57,    54,    85,    85,    38,    54,    71,    56,
      56,    48,    68,    55,    17,    55,    71,    57,    68,    55,
      39,    55,    71,    48,    68,    56,    12,    56,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    76,    76,    77,    78,    78,    78,    79,    80,
      80,    81,    82,    83,    75,    84,    85,    85,    85,    72,
      72,    71,    86,    86,    86,    86,    86,    86,    65,    65,
      65,    66,    66,    66,    66,    87,    88,    89,    89,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    73,    73,
      74,    74,    74,    74,    74,    74,    70,    70,    70,    70,
      70,    70,    67,    67,    67,    67,    67,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     8,     2,     2,     0,     5,     2,
       0,     6,     7,     4,    12,     4,     2,     3,     1,     0,
       9,     7,     1,     1,     1,     1,     1,     1,     4,     4,
       2,     4,     4,     4,     1,     7,    11,     7,    11,     1,
       3,     3,     3,     3,     4,     2,     3,     2,     2,     1,
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
#line 56 "syntactic_analyzer.y"
                                                                {printf("SIUUUUUUUU!!!!!!\n");}
#line 1598 "syntactic_analyzer.tab.c"
    break;

  case 4:
#line 59 "syntactic_analyzer.y"
                                                                {printf("Declaracion de tamanio\n");}
#line 1604 "syntactic_analyzer.tab.c"
    break;

  case 5:
#line 63 "syntactic_analyzer.y"
                                                        {}
#line 1610 "syntactic_analyzer.tab.c"
    break;

  case 6:
#line 64 "syntactic_analyzer.y"
                                                        {}
#line 1616 "syntactic_analyzer.tab.c"
    break;

  case 8:
#line 68 "syntactic_analyzer.y"
                                                        {printf("smarttile");}
#line 1622 "syntactic_analyzer.tab.c"
    break;

  case 9:
#line 72 "syntactic_analyzer.y"
                                                        {printf("tile_list");}
#line 1628 "syntactic_analyzer.tab.c"
    break;

  case 11:
#line 77 "syntactic_analyzer.y"
                                                        {
			if(getsym((yyvsp[-4].IDENTIFIER) -> name) != NULL) {
				printf("60 anios, una protesis\n");
				exit(1);
			}
			putsym((yyvsp[-4].IDENTIFIER) -> name, _TILE_);
			symrec *aux = getsym((yyvsp[-4].IDENTIFIER) -> name);
			aux -> value.tile = *((yyvsp[-2].tile_content));

			for(int i = 0; i < 3; i++) {
				for(int j = 0; j < 3; j++) {
					aux -> value.tile.rule[i][j] = (yyvsp[-1].rule) -> value.tile.rule[i][j];
					printf("%d ", aux -> value.tile.rule[i][j]);
				}
				printf("\n");
			}
							}
#line 1650 "syntactic_analyzer.tab.c"
    break;

  case 12:
#line 97 "syntactic_analyzer.y"
                                                                      { printf("Seccion\n"); }
#line 1656 "syntactic_analyzer.tab.c"
    break;

  case 13:
#line 101 "syntactic_analyzer.y"
                                                { printf("Declaracion"); }
#line 1662 "syntactic_analyzer.tab.c"
    break;

  case 14:
#line 105 "syntactic_analyzer.y"
                                                                                        {
			(yyval.tile_content) = (Tile*)malloc(sizeof(Tile));
			(yyval.tile_content) -> name = (char*) malloc(sizeof(char)*strlen((yyvsp[-9].CONST_STRING) -> value._string));
			strcpy((yyval.tile_content) -> name, (yyvsp[-9].CONST_STRING) -> value._string);
			(yyval.tile_content) -> tileset = (char*) malloc(sizeof(char)*strlen((yyvsp[-5].CONST_STRING) -> value._string));
			strcpy((yyval.tile_content) -> name, (yyvsp[-5].CONST_STRING) -> value._string);
			(yyval.tile_content) -> flag = (yyvsp[-1].CONST_BOOL) -> value._bool;
								}
#line 1675 "syntactic_analyzer.tab.c"
    break;

  case 15:
#line 116 "syntactic_analyzer.y"
                                   { printf("Funcion principal\n"); }
#line 1681 "syntactic_analyzer.tab.c"
    break;

  case 16:
#line 120 "syntactic_analyzer.y"
                                    { printf("statement"); }
#line 1687 "syntactic_analyzer.tab.c"
    break;

  case 17:
#line 121 "syntactic_analyzer.y"
                                     { printf("statement code_block"); }
#line 1693 "syntactic_analyzer.tab.c"
    break;

  case 18:
#line 122 "syntactic_analyzer.y"
                                 { yyerrok; }
#line 1699 "syntactic_analyzer.tab.c"
    break;

  case 19:
#line 125 "syntactic_analyzer.y"
                                {printf("xd\n");}
#line 1705 "syntactic_analyzer.tab.c"
    break;

  case 20:
#line 126 "syntactic_analyzer.y"
                                                        {
			(yyval.rule) = (symrec*)malloc(sizeof(symrec));	
			for(int i = 0; i < 3; i++)
				(yyval.rule) -> value.tile.rule[0][i]= (yyvsp[-5].vector) -> value._vector[i];
			for(int i = 0; i < 3; i++)
				(yyval.rule) -> value.tile.rule[1][i]= (yyvsp[-3].vector) -> value._vector[i];
			for(int i = 0; i < 3; i++)
				(yyval.rule) -> value.tile.rule[2][i]= (yyvsp[-1].vector) -> value._vector[i];
			for(int i = 0; i < 3; i++) {
				for(int j = 0; j < 3; j++) {
					printf("%d ", (yyval.rule) -> value.tile.rule[i][j]);
				}
				printf("\n");
			}
							}
#line 1725 "syntactic_analyzer.tab.c"
    break;

  case 21:
#line 143 "syntactic_analyzer.y"
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
							}
#line 1741 "syntactic_analyzer.tab.c"
    break;

  case 22:
#line 156 "syntactic_analyzer.y"
                                 { printf("variable\n"); }
#line 1747 "syntactic_analyzer.tab.c"
    break;

  case 23:
#line 157 "syntactic_analyzer.y"
                       { printf("expresion\n"); }
#line 1753 "syntactic_analyzer.tab.c"
    break;

  case 24:
#line 158 "syntactic_analyzer.y"
                       { printf("funcion\n"); }
#line 1759 "syntactic_analyzer.tab.c"
    break;

  case 25:
#line 159 "syntactic_analyzer.y"
                       { printf("for\n"); }
#line 1765 "syntactic_analyzer.tab.c"
    break;

  case 26:
#line 160 "syntactic_analyzer.y"
                       { printf("while\n"); }
#line 1771 "syntactic_analyzer.tab.c"
    break;

  case 27:
#line 161 "syntactic_analyzer.y"
                       { printf("if\n"); }
#line 1777 "syntactic_analyzer.tab.c"
    break;

  case 28:
#line 164 "syntactic_analyzer.y"
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
		printf("%s: %d\n", (yyvsp[-2].variable) -> name, aux -> value._bool);
		printf("%s: %d\n", (yyvsp[-2].variable) -> name, aux -> value._int);
		printf("%s: %f\n", (yyvsp[-2].variable) -> name, aux -> value._double);
							}
#line 1799 "syntactic_analyzer.tab.c"
    break;

  case 29:
#line 181 "syntactic_analyzer.y"
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
		printf("%s: %d\n", (yyvsp[-2].variable) -> name, (yyval.variable_declaration) -> value._int);
		printf("tipo idenfificador = idenfificador\n"); 
							}
#line 1822 "syntactic_analyzer.tab.c"
    break;

  case 30:
#line 199 "syntactic_analyzer.y"
                                                        { 
		if(getsym((yyvsp[0].variable) -> name) != NULL) {
			printf("La variable se redeclaro\n");
			exit(1);
		}
		(yyval.variable_declaration) -> type = (yyvsp[-1].type) -> type;
		putsym((yyvsp[0].variable) -> name, (yyvsp[-1].type) -> type);
		printf("tipo idenfificador\n"); 
							}
#line 1836 "syntactic_analyzer.tab.c"
    break;

  case 31:
#line 210 "syntactic_analyzer.y"
                                                        {printf("Identificador[expresion]\n");}
#line 1842 "syntactic_analyzer.tab.c"
    break;

  case 32:
#line 211 "syntactic_analyzer.y"
                                                        {printf("Identificador[constante]\n");}
#line 1848 "syntactic_analyzer.tab.c"
    break;

  case 33:
#line 212 "syntactic_analyzer.y"
                                                        {printf("Identificador[Identificador]\n");}
#line 1854 "syntactic_analyzer.tab.c"
    break;

  case 34:
#line 213 "syntactic_analyzer.y"
                                                        {
		printf("Identifier: %s\n", (yyvsp[0].IDENTIFIER) -> name);
		strcpy((yyval.variable) -> name, (yyvsp[0].IDENTIFIER) -> name); 
		printf("Identificador<---\n");
							}
#line 1864 "syntactic_analyzer.tab.c"
    break;

  case 35:
#line 220 "syntactic_analyzer.y"
                                                       { printf("while\n"); }
#line 1870 "syntactic_analyzer.tab.c"
    break;

  case 36:
#line 224 "syntactic_analyzer.y"
                                                                                             { printf("for\n"); }
#line 1876 "syntactic_analyzer.tab.c"
    break;

  case 37:
#line 228 "syntactic_analyzer.y"
                                                                                { printf("if\n"); }
#line 1882 "syntactic_analyzer.tab.c"
    break;

  case 38:
#line 229 "syntactic_analyzer.y"
                                                                                { printf("if else\n"); }
#line 1888 "syntactic_analyzer.tab.c"
    break;

  case 39:
#line 233 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		printf("constate: "); 
		(yyval.expression) -> type = (yyvsp[0].constant) -> type; 
		assignUnary((yyval.expression), (yyvsp[0].constant), '=');
			
							}
#line 1900 "syntactic_analyzer.tab.c"
    break;

  case 40:
#line 240 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression) -> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '+');
		printf("expresion + expresion\n"); 
							}
#line 1912 "syntactic_analyzer.tab.c"
    break;

  case 41:
#line 247 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression)-> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '-');
          	printf("expresion - expresion\n"); 
              						}
#line 1924 "syntactic_analyzer.tab.c"
    break;

  case 42:
#line 254 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression)-> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		printf("$1 -> value: %d\n", (yyvsp[-2].expression) -> value._int);
		printf("$3 -> value: %d\n", (yyvsp[0].expression) -> value._int);
		printf("%p\n", (yyval.expression));
		printf("%p\n", (yyvsp[-2].expression));
		printf("%p\n", (yyvsp[0].expression));
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '*');
		printf("ValMul: %d\n", (yyval.expression) -> value._int);
		printf("expression * expression\n");
		free((yyvsp[-2].expression));
		free((yyvsp[0].expression));
              						}
#line 1944 "syntactic_analyzer.tab.c"
    break;

  case 43:
#line 269 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression)-> type, (yyvsp[0].expression) -> type);
		(yyval.expression) -> type = (yyvsp[-2].expression) -> type;
		assignValue((yyval.expression), (yyvsp[-2].expression), (yyvsp[0].expression), '/');
		printf("expression / expression\n"); 
		free((yyvsp[-2].expression));
		free((yyvsp[0].expression));
              						}
#line 1958 "syntactic_analyzer.tab.c"
    break;

  case 44:
#line 278 "syntactic_analyzer.y"
                                                        { printf("funcion\n"); }
#line 1964 "syntactic_analyzer.tab.c"
    break;

  case 45:
#line 279 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		(yyval.expression) -> type = (yyvsp[0].expression) -> type;
		assignUnary((yyval.expression), (yyvsp[0].expression), '-');
		free((yyvsp[0].expression));
							}
#line 1975 "syntactic_analyzer.tab.c"
    break;

  case 46:
#line 285 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		(yyval.expression) -> type = (yyvsp[-1].expression) -> type;
		assignUnary((yyval.expression), (yyvsp[-1].expression), '=');
		printf("( %d )\n", (yyvsp[-1].expression) -> value._int);
		printf("(expression)\n"); 
		free((yyvsp[-1].expression));
              						}
#line 1988 "syntactic_analyzer.tab.c"
    break;

  case 47:
#line 293 "syntactic_analyzer.y"
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
		printf("idenfificado++\n"); 
		free((yyvsp[-1].variable));
              						}
#line 2006 "syntactic_analyzer.tab.c"
    break;

  case 48:
#line 306 "syntactic_analyzer.y"
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
		printf("idenfificador--\n"); 
		free((yyvsp[-1].variable));
              						}
#line 2024 "syntactic_analyzer.tab.c"
    break;

  case 49:
#line 319 "syntactic_analyzer.y"
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
#line 2039 "syntactic_analyzer.tab.c"
    break;

  case 50:
#line 329 "syntactic_analyzer.y"
                                                        { 
		(yyval.expression) = (symrec*)malloc(sizeof(symrec));
		(yyval.expression) -> type = _BOOL_;
		(yyval.expression) -> value._bool = (yyvsp[0].condition) -> value._bool;
							}
#line 2049 "syntactic_analyzer.tab.c"
    break;

  case 51:
#line 334 "syntactic_analyzer.y"
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
		printf("idenfificador = expresion\n"); 
		free((yyvsp[0].expression));
		free((yyvsp[-2].variable));
					      		}
#line 2068 "syntactic_analyzer.tab.c"
    break;

  case 52:
#line 351 "syntactic_analyzer.y"
                                                { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].condition) -> type, (yyvsp[0].condition) -> type);
		assignValue((yyval.condition), (yyvsp[-2].condition), (yyvsp[0].condition), (yyvsp[-1].logical_operator)); 
		printf("condicion op condicion\n"); 
              					}
#line 2079 "syntactic_analyzer.tab.c"
    break;

  case 53:
#line 357 "syntactic_analyzer.y"
                                                            { 
		printf("xd: %d\n", (yyvsp[-1].comparation_operator));
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		checkTypes((yyvsp[-2].expression) -> type, (yyvsp[0].expression) -> type);

		(yyval.condition) -> type = _BOOL_;
		assignValue((yyval.condition), (yyvsp[-2].expression), (yyvsp[0].expression), (yyvsp[-1].comparation_operator));
		free((yyvsp[-2].expression));
		free((yyvsp[0].expression));
		printf("variable\n"); 
              						}
#line 2095 "syntactic_analyzer.tab.c"
    break;

  case 54:
#line 368 "syntactic_analyzer.y"
                                                        { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		(yyval.condition) -> type = _BOOL_;
		(yyval.condition) -> value._bool = (yyvsp[0].CONST_BOOL) -> value._bool;
		free((yyvsp[0].CONST_BOOL));
		printf("constante: ");
              						}
#line 2107 "syntactic_analyzer.tab.c"
    break;

  case 55:
#line 375 "syntactic_analyzer.y"
                                               { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
        	if((yyvsp[0].condition) -> type != _BOOL_) {
        		printf("No coinciden los tipos mi tio\n");
        		exit(1);
          	}
		(yyval.condition) -> type = CONST_BOOL;
		assignUnary((yyval.condition), (yyvsp[0].condition), '!');
		printf("no condicion\n");
              }
#line 2122 "syntactic_analyzer.tab.c"
    break;

  case 56:
#line 385 "syntactic_analyzer.y"
                                                {
		symrec *aux = getsym((yyvsp[0].variable) -> name);
		if(aux == NULL || aux -> type != _BOOL_) {
			printf("No nos interesa tu rollo, nomas que funcione\n");
			exit(1);
		}
		(yyval.condition) -> value._bool = !(aux -> value._bool);
		(yyval.condition) -> type = _BOOL_;
		free((yyvsp[0].variable));
						}
#line 2137 "syntactic_analyzer.tab.c"
    break;

  case 57:
#line 395 "syntactic_analyzer.y"
                                                { 
		(yyval.condition) = (symrec*)malloc(sizeof(symrec));
		(yyval.condition) -> type = (yyvsp[-1].condition) -> type;
		assignUnary((yyval.condition),(yyvsp[-1].condition),'=');
		printf("(condicion)\n"); 
              					}
#line 2148 "syntactic_analyzer.tab.c"
    break;

  case 58:
#line 404 "syntactic_analyzer.y"
                                                { (yyval.logical_operator) = (yyvsp[0].AND_OP); }
#line 2154 "syntactic_analyzer.tab.c"
    break;

  case 59:
#line 405 "syntactic_analyzer.y"
                                                { (yyval.logical_operator) = (yyvsp[0].OR_OP); }
#line 2160 "syntactic_analyzer.tab.c"
    break;

  case 60:
#line 408 "syntactic_analyzer.y"
                                                { (yyval.comparation_operator) = (yyvsp[0].GREATER_EQ); }
#line 2166 "syntactic_analyzer.tab.c"
    break;

  case 61:
#line 409 "syntactic_analyzer.y"
                                                { (yyval.comparation_operator) = (yyvsp[0].GREATER); printf("Valor: %d\n", (yyvsp[0].GREATER)); }
#line 2172 "syntactic_analyzer.tab.c"
    break;

  case 62:
#line 410 "syntactic_analyzer.y"
                                                { (yyval.comparation_operator) = (yyvsp[0].LESS_EQ); }
#line 2178 "syntactic_analyzer.tab.c"
    break;

  case 63:
#line 411 "syntactic_analyzer.y"
                                                { (yyval.comparation_operator) = (yyvsp[0].LESS); }
#line 2184 "syntactic_analyzer.tab.c"
    break;

  case 64:
#line 412 "syntactic_analyzer.y"
                                                { (yyval.comparation_operator) = (yyvsp[0].NEQ); }
#line 2190 "syntactic_analyzer.tab.c"
    break;

  case 65:
#line 413 "syntactic_analyzer.y"
                                                { (yyval.comparation_operator) = (yyvsp[0].EQ); }
#line 2196 "syntactic_analyzer.tab.c"
    break;

  case 66:
#line 416 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._int = (yyvsp[0].CONST_INT) -> value._int; 
		(yyval.constant) -> type = _INT_; 
		printf("const_int\n"); 
		}
#line 2207 "syntactic_analyzer.tab.c"
    break;

  case 67:
#line 422 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._float = (yyvsp[0].CONST_FLOAT) -> value._float; 
		(yyval.constant) -> type = _FLOAT_; 
		printf("const_float\n"); 
		}
#line 2218 "syntactic_analyzer.tab.c"
    break;

  case 68:
#line 428 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._double = (yyvsp[0].CONST_DOUBLE) -> value._double; 
		(yyval.constant) -> type = _DOUBLE_; 
		printf("const_double\n"); 
		}
#line 2229 "syntactic_analyzer.tab.c"
    break;

  case 69:
#line 434 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._char = (yyvsp[0].CONST_CHAR) -> value._char; 
		(yyval.constant) -> type = _CHAR_; 
		printf("const_char\n"); 
		}
#line 2240 "syntactic_analyzer.tab.c"
    break;

  case 70:
#line 440 "syntactic_analyzer.y"
                        { 
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));
		(yyval.constant) -> value._bool = (yyvsp[0].CONST_BOOL) -> value._bool; 
		(yyval.constant) -> type = _BOOL_; 
		printf("const_bool\n"); 
		}
#line 2251 "syntactic_analyzer.tab.c"
    break;

  case 71:
#line 446 "syntactic_analyzer.y"
                       {
		(yyval.constant) = (symrec*)malloc(sizeof(symrec));	
		int len = strlen((yyvsp[0].CONST_STRING) -> value._string);
		(yyval.constant) -> value._string = (char*)malloc(sizeof(char)*len);
		strcpy((yyval.constant) -> value._string, (yyvsp[0].CONST_STRING) -> value._string);
		(yyval.constant) -> type = _STRING_;
		free((yyvsp[0].CONST_STRING));
		}
#line 2264 "syntactic_analyzer.tab.c"
    break;

  case 72:
#line 457 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _INT_; printf("int\n"); 
		}
#line 2273 "syntactic_analyzer.tab.c"
    break;

  case 73:
#line 461 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _FLOAT_; printf("float\n"); 
		}
#line 2282 "syntactic_analyzer.tab.c"
    break;

  case 74:
#line 465 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _DOUBLE_; printf("double\n"); 
		}
#line 2291 "syntactic_analyzer.tab.c"
    break;

  case 75:
#line 469 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _LONG_; printf("long\n"); 
		}
#line 2300 "syntactic_analyzer.tab.c"
    break;

  case 76:
#line 473 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _BOOL_; printf("bool\n"); 
		}
#line 2309 "syntactic_analyzer.tab.c"
    break;

  case 77:
#line 477 "syntactic_analyzer.y"
                   { 
		(yyval.type) = (symrec*)malloc(sizeof(symrec));
		(yyval.type) -> type = _CHAR_; printf("char\n"); 
		}
#line 2318 "syntactic_analyzer.tab.c"
    break;

  case 78:
#line 481 "syntactic_analyzer.y"
                   {
		(yyval.type)  = (symrec*) malloc(sizeof(symrec));
		(yyval.type) -> type = _STRING_; 
		printf("String\n");
		}
#line 2328 "syntactic_analyzer.tab.c"
    break;


#line 2332 "syntactic_analyzer.tab.c"

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
#line 489 "syntactic_analyzer.y"

tabla_hash sym_table;
void init_table() {
	int i = 0;
	sym_table.MOD = 9887;
	for(i = 0; i < sym_table.MOD; i++) {
		sym_table.table[i] = NULL;
	}
}
int get_hash(char const *name) {
	printf("gethash\n");
	int i = 0;
	int ret = 0;
	int pot = 1;
	int prime = 31;
	printf("Name: %s\n", name);
	for(i = 0; i < strlen(name); i++) {
		ret += (name[i]*pot)%sym_table.MOD;
		if(ret > sym_table.MOD)
			ret -= sym_table.MOD;
		pot = (pot * prime) % sym_table.MOD;
	}
	printf("Valor hash: %d\n", ret);
	return ret % sym_table.MOD;
}

void putsym(char const *name, int sym_type) {
	printf("putsym\n");
	int hash_val = get_hash(name);
	symrec *new_one = (symrec *) malloc (sizeof (symrec));
	strcpy(new_one -> name, name);
	new_one -> type = sym_type;
	sym_table.table[hash_val] = new_one;
}
symrec *getsym(char const *name) {
	printf("getsym\n");
	int hash_val = get_hash(name);
	return sym_table.table[hash_val];
}
int main(int argc, char** argv) {
	init_table();
	yyparse();
	return 0;
}

void assignUnary(symrec* $$, symrec* $1, int opc) {
 	printf("$1 -> type = %d\n", $1 -> type);
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
      default:
      	printf("Error unario\n");
        printf("Hay un error!\n");
        exit(1);
    }
  }
  // Para operaciones binarias
void assignValue(symrec* a, symrec* b, symrec* c, int opc) {
	printf("OPC: %d\n", opc);
	switch(b -> type) {
		case _INT_:
			printf("B: %d\n", b -> value._int);
			printf("C: %d\n", c -> value._int);
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
			printf("%f / %f\n", b -> value._double, c -> value._double);
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

