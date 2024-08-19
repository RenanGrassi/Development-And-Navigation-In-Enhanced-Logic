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
    INT_MAIN = 275,                /* INT_MAIN  */
    READ_FILE = 276,               /* READ_FILE  */
    CLOSE_FILE = 277,              /* CLOSE_FILE  */
    OPENING_MODE = 278,            /* OPENING_MODE  */
    OPEN_KEY = 279,                /* OPEN_KEY  */
    CLOSE_KEY = 280,               /* CLOSE_KEY  */
    OPEN_PARENTHESES = 281,        /* OPEN_PARENTHESES  */
    CLOSE_PARENTHESES = 282,       /* CLOSE_PARENTHESES  */
    OPEN_BRACKET = 283,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 284,           /* CLOSE_BRACKET  */
    COMMA = 285,                   /* COMMA  */
    SEMICOLON = 286,               /* SEMICOLON  */
    COLON = 287,                   /* COLON  */
    TIPO = 288,                    /* TIPO  */
    CALL = 289,                    /* CALL  */
    ARQUIVO = 290,                 /* ARQUIVO  */
    ENUM = 291,                    /* ENUM  */
    STRUCT_KEYWORD = 292,          /* STRUCT_KEYWORD  */
    SWAP = 293,                    /* SWAP  */
    MALLOC = 294,                  /* MALLOC  */
    FREE = 295,                    /* FREE  */
    DANIBOY = 296,                 /* DANIBOY  */
    LT = 297,                      /* LT  */
    GT = 298,                      /* GT  */
    LE = 299,                      /* LE  */
    GE = 300,                      /* GE  */
    EQ = 301,                      /* EQ  */
    NE = 302,                      /* NE  */
    AND = 303,                     /* AND  */
    OR = 304,                      /* OR  */
    NEGA = 305,                    /* NEGA  */
    SUB = 306,                     /* SUB  */
    MUL = 307,                     /* MUL  */
    DIV = 308,                     /* DIV  */
    MOD = 309,                     /* MOD  */
    INCREMENT = 310,               /* INCREMENT  */
    DECREMENT = 311,               /* DECREMENT  */
    ADD_ASSIGN = 312,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 313,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 314,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 315,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 316,              /* MOD_ASSIGN  */
    XOR = 317,                     /* XOR  */
    LEFT_SHIFT = 318,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 319,             /* RIGHT_SHIFT  */
    QUEST = 320,                   /* QUEST  */
    SEMI_COLON = 321,              /* SEMI_COLON  */
    BLOCK_CLOSE = 322,             /* BLOCK_CLOSE  */
    BLOCK_OPEN = 323,              /* BLOCK_OPEN  */
    DOT = 324,                     /* DOT  */
    ARROW = 325,                   /* ARROW  */
    SUSTENIDO = 326,               /* SUSTENIDO  */
    ASSIGN = 327,                  /* ASSIGN  */
    ADD = 328,                     /* ADD  */
    MINUS = 329,                   /* MINUS  */
    INPUT = 330,                   /* INPUT  */
    LITERAL_STRING = 331,          /* LITERAL_STRING  */
    LITERAL_BOOL = 332,            /* LITERAL_BOOL  */
    LITERAL_CHAR = 333,            /* LITERAL_CHAR  */
    IDENTIFIER = 334,              /* IDENTIFIER  */
    DIGITS = 335,                  /* DIGITS  */
    DECIMAL = 336,                 /* DECIMAL  */
    FUNCTION = 337,                /* FUNCTION  */
    RELACIONAL_OPERATORS = 338,    /* RELACIONAL_OPERATORS  */
    LOGIC_OPERATORS = 339,         /* LOGIC_OPERATORS  */
    TYPE = 340                     /* TYPE  */
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
