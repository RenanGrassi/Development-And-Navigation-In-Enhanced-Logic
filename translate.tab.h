/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TRANSLATE_TAB_H_INCLUDED
# define YY_YY_TRANSLATE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    ELIF = 260,                    /* ELIF  */
    FOR = 261,                     /* FOR  */
    RETURN = 262,                  /* RETURN  */
    CONTINUE = 263,                /* CONTINUE  */
    BREAK = 264,                   /* BREAK  */
    SWITCH = 265,                  /* SWITCH  */
    CASE = 266,                    /* CASE  */
    DEFAULT = 267,                 /* DEFAULT  */
    TYPEDEF = 268,                 /* TYPEDEF  */
    PRINT = 269,                   /* PRINT  */
    PRINTLN = 270,                 /* PRINTLN  */
    WHILE = 271,                   /* WHILE  */
    GOTO = 272,                    /* GOTO  */
    SCANF = 273,                   /* SCANF  */
    INT_MAIN = 274,                /* INT_MAIN  */
    READ_FILE = 275,               /* READ_FILE  */
    CLOSE_FILE = 276,              /* CLOSE_FILE  */
    OPEN_PARENTHESES = 277,        /* OPEN_PARENTHESES  */
    CLOSE_PARENTHESES = 278,       /* CLOSE_PARENTHESES  */
    OPEN_BRACKET = 279,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 280,           /* CLOSE_BRACKET  */
    COMMA = 281,                   /* COMMA  */
    SEMICOLON = 282,               /* SEMICOLON  */
    COLON = 283,                   /* COLON  */
    FUNCTION_CALL = 284,           /* FUNCTION_CALL  */
    ARQUIVO = 285,                 /* ARQUIVO  */
    ENUM = 286,                    /* ENUM  */
    STRUCT_KEYWORD = 287,          /* STRUCT_KEYWORD  */
    SWAP = 288,                    /* SWAP  */
    MALLOC = 289,                  /* MALLOC  */
    FREE = 290,                    /* FREE  */
    DANIBOY = 291,                 /* DANIBOY  */
    LT = 292,                      /* LT  */
    GT = 293,                      /* GT  */
    LE = 294,                      /* LE  */
    GE = 295,                      /* GE  */
    EQ = 296,                      /* EQ  */
    NE = 297,                      /* NE  */
    AND = 298,                     /* AND  */
    OR = 299,                      /* OR  */
    NEGA = 300,                    /* NEGA  */
    SUB = 301,                     /* SUB  */
    MUL = 302,                     /* MUL  */
    DIV = 303,                     /* DIV  */
    MOD = 304,                     /* MOD  */
    INCREMENT = 305,               /* INCREMENT  */
    DECREMENT = 306,               /* DECREMENT  */
    ADD_ASSIGN = 307,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 308,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 309,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 310,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 311,              /* MOD_ASSIGN  */
    XOR = 312,                     /* XOR  */
    LEFT_SHIFT = 313,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 314,             /* RIGHT_SHIFT  */
    QUEST = 315,                   /* QUEST  */
    SEMI_COLON = 316,              /* SEMI_COLON  */
    BLOCK_CLOSE = 317,             /* BLOCK_CLOSE  */
    BLOCK_OPEN = 318,              /* BLOCK_OPEN  */
    DOT = 319,                     /* DOT  */
    ARROW = 320,                   /* ARROW  */
    SUSTENIDO = 321,               /* SUSTENIDO  */
    ASSIGN = 322,                  /* ASSIGN  */
    ADD = 323,                     /* ADD  */
    MINUS = 324,                   /* MINUS  */
    INPUT = 325,                   /* INPUT  */
    LITERAL_STRING = 326,          /* LITERAL_STRING  */
    LITERAL_BOOL = 327,            /* LITERAL_BOOL  */
    LITERAL_CHAR = 328,            /* LITERAL_CHAR  */
    IDENTIFIER = 329,              /* IDENTIFIER  */
    DIGITS = 330,                  /* DIGITS  */
    DECIMAL = 331,                 /* DECIMAL  */
    FUNCTION = 332,                /* FUNCTION  */
    RELACIONAL_OPERATORS = 333,    /* RELACIONAL_OPERATORS  */
    LOGIC_OPERATORS = 334,         /* LOGIC_OPERATORS  */
    TYPE = 335                     /* TYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "translate.y"

    char* str;
    int iValue;
    double real;
    char mario;
    float donkey;
    bool zelda;
    identifier identifier;
    identifiers identifiers;
    Type type;
    Function* funct;

#line 157 "translate.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TRANSLATE_TAB_H_INCLUDED  */
