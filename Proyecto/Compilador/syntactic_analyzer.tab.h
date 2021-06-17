/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 177 "syntactic_analyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED  */
