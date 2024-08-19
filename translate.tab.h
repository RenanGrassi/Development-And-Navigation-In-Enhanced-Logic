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
    STRUCT = 268,                  /* STRUCT  */
    TYPEDEF = 269,                 /* TYPEDEF  */
    PRINT = 270,                   /* PRINT  */
    PRINTLN = 271,                 /* PRINTLN  */
    WHILE = 272,                   /* WHILE  */
    GOTO = 273,                    /* GOTO  */
    SCANF = 274,                   /* SCANF  */
    VOID_MAIN = 275,               /* VOID_MAIN  */
    INT_MAIN = 276,                /* INT_MAIN  */
    READ_FILE = 277,               /* READ_FILE  */
    CLOSE_FILE = 278,              /* CLOSE_FILE  */
    OPENING_MODE = 279,            /* OPENING_MODE  */
    OPEN_KEY = 280,                /* OPEN_KEY  */
    CLOSE_KEY = 281,               /* CLOSE_KEY  */
    OPEN_PARENTHESES = 282,        /* OPEN_PARENTHESES  */
    CLOSE_PARENTHESES = 283,       /* CLOSE_PARENTHESES  */
    OPEN_BRACKET = 284,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 285,           /* CLOSE_BRACKET  */
    COMMA = 286,                   /* COMMA  */
    SEMICOLON = 287,               /* SEMICOLON  */
    COLON = 288,                   /* COLON  */
    TIPO = 289,                    /* TIPO  */
    CALL = 290,                    /* CALL  */
    ARQUIVO = 291,                 /* ARQUIVO  */
    ENUM = 292,                    /* ENUM  */
    STRUCT_KEYWORD = 293,          /* STRUCT_KEYWORD  */
    SWAP = 294,                    /* SWAP  */
    MALLOC = 295,                  /* MALLOC  */
    FREE = 296,                    /* FREE  */
    DANIBOY = 297,                 /* DANIBOY  */
    LT = 298,                      /* LT  */
    GT = 299,                      /* GT  */
    LE = 300,                      /* LE  */
    GE = 301,                      /* GE  */
    EQ = 302,                      /* EQ  */
    NE = 303,                      /* NE  */
    AND = 304,                     /* AND  */
    OR = 305,                      /* OR  */
    NEGA = 306,                    /* NEGA  */
    SUB = 307,                     /* SUB  */
    MUL = 308,                     /* MUL  */
    DIV = 309,                     /* DIV  */
    MOD = 310,                     /* MOD  */
    INCREMENT = 311,               /* INCREMENT  */
    DECREMENT = 312,               /* DECREMENT  */
    ADD_ASSIGN = 313,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 314,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 315,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 316,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 317,              /* MOD_ASSIGN  */
    XOR = 318,                     /* XOR  */
    LEFT_SHIFT = 319,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 320,             /* RIGHT_SHIFT  */
    QUEST = 321,                   /* QUEST  */
    SEMI_COLON = 322,              /* SEMI_COLON  */
    BLOCK_CLOSE = 323,             /* BLOCK_CLOSE  */
    BLOCK_OPEN = 324,              /* BLOCK_OPEN  */
    DOT = 325,                     /* DOT  */
    ARROW = 326,                   /* ARROW  */
    SUSTENIDO = 327,               /* SUSTENIDO  */
    ASSIGN = 328,                  /* ASSIGN  */
    ADD = 329,                     /* ADD  */
    MINUS = 330,                   /* MINUS  */
    INPUT = 331,                   /* INPUT  */
    LITERAL_STRING = 332,          /* LITERAL_STRING  */
    LITERAL_BOOL = 333,            /* LITERAL_BOOL  */
    LITERAL_CHAR = 334,            /* LITERAL_CHAR  */
    IDENTIFIER = 335,              /* IDENTIFIER  */
    DIGITS = 336,                  /* DIGITS  */
    DECIMAL = 337,                 /* DECIMAL  */
    FUNCTION = 338,                /* FUNCTION  */
    RELACIONAL_OPERATORS = 339,    /* RELACIONAL_OPERATORS  */
    LOGIC_OPERATORS = 340          /* LOGIC_OPERATORS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "translate.y"

    char* superMario;
    int marioKart;
    double kong;
    char mario;
    float donkey;
    bool zelda;
    identifier identifier;
    identifiers identifiers;
    Type type;
    Function* funct;

#line 162 "translate.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TRANSLATE_TAB_H_INCLUDED  */
