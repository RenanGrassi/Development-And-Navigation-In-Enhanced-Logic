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

#ifndef YY_YY_TRANSLATE_TAB_H_INCLUDED
# define YY_YY_TRANSLATE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 21 "translate.y"

    #include "TabelaDeSimbolos.h" 

#line 52 "translate.tab.h"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    ELIF = 260,
    FOR = 261,
    RETURN = 262,
    CONTINUE = 263,
    BREAK = 264,
    SWITCH = 265,
    CASE = 266,
    DEFAULT = 267,
    TYPEDEF = 268,
    PRINT = 269,
    PRINTLN = 270,
    WHILE = 271,
    GOTO = 272,
    SCANF = 273,
    INT_MAIN = 274,
    READ_FILE = 275,
    CLOSE_FILE = 276,
    OPEN_PARENTHESES = 277,
    CLOSE_PARENTHESES = 278,
    OPEN_BRACKET = 279,
    CLOSE_BRACKET = 280,
    COMMA = 281,
    SEMICOLON = 282,
    COLON = 283,
    FUNCTION_CALL = 284,
    ARQUIVO = 285,
    ENUM = 286,
    STRUCT_KEYWORD = 287,
    SWAP = 288,
    MALLOC = 289,
    FREE = 290,
    DANIBOY = 291,
    LT = 292,
    GT = 293,
    LE = 294,
    GE = 295,
    EQ = 296,
    NE = 297,
    AND = 298,
    OR = 299,
    NEGA = 300,
    SUB = 301,
    MUL = 302,
    DIV = 303,
    MOD = 304,
    INCREMENT = 305,
    DECREMENT = 306,
    ADD_ASSIGN = 307,
    SUB_ASSIGN = 308,
    MUL_ASSIGN = 309,
    DIV_ASSIGN = 310,
    MOD_ASSIGN = 311,
    XOR = 312,
    LEFT_SHIFT = 313,
    RIGHT_SHIFT = 314,
    QUEST = 315,
    SEMI_COLON = 316,
    BLOCK_CLOSE = 317,
    BLOCK_OPEN = 318,
    DOT = 319,
    ARROW = 320,
    SUSTENIDO = 321,
    ASSIGN = 322,
    ADD = 323,
    MINUS = 324,
    INPUT = 325,
    LITERAL_STRING = 326,
    LITERAL_BOOL = 327,
    LITERAL_CHAR = 328,
    IDENTIFIER = 329,
    DIGITS = 330,
    DECIMAL = 331,
    FUNCT = 332,
    RELACIONAL_OPERATORS = 333,
    LOGIC_OPERATORS = 334,
    TYPE = 335
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "translate.y"

    char* str;
    int iValue;
    double real;
    char caractere;
    Identificador identifier;
    Identificadores identifiers;
    Tipo type;
    RealParameters types;
    Function* funct;

#line 156 "translate.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TRANSLATE_TAB_H_INCLUDED  */
