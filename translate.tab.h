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
    ASSIGN = 289,                  /* ASSIGN  */
    ADD = 290,                     /* ADD  */
    MINUS = 291,                   /* MINUS  */
    INPUT = 292,                   /* INPUT  */
    LITERAL_STRING = 293,          /* LITERAL_STRING  */
    LITERAL_BOOL = 294,            /* LITERAL_BOOL  */
    LITERAL_CHAR = 295,            /* LITERAL_CHAR  */
    IDENTIFIER = 296,              /* IDENTIFIER  */
    DIGITS = 297,                  /* DIGITS  */
    DECIMAL = 298,                 /* DECIMAL  */
    FUNCTION = 299,                /* FUNCTION  */
    RELACIONAL_OPERATORS = 300,    /* RELACIONAL_OPERATORS  */
    LOGIC_OPERATORS = 301,         /* LOGIC_OPERATORS  */
    type = 302                     /* type  */
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

#line 124 "translate.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TRANSLATE_TAB_H_INCLUDED  */
