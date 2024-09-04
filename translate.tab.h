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
/* "%code requires" blocks.  */
#line 40 "translate.y"

    #include "TabelaDeSimbolos.h" 

#line 53 "translate.tab.h"

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
    PRINT = 268,                   /* PRINT  */
    PRINTLN = 269,                 /* PRINTLN  */
    WHILE = 270,                   /* WHILE  */
    INT_MAIN = 271,                /* INT_MAIN  */
    READ_FILE = 272,               /* READ_FILE  */
    CLOSE_FILE = 273,              /* CLOSE_FILE  */
    OPEN_PARENTHESES = 274,        /* OPEN_PARENTHESES  */
    CLOSE_PARENTHESES = 275,       /* CLOSE_PARENTHESES  */
    OPEN_BRACKET = 276,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 277,           /* CLOSE_BRACKET  */
    COMMA = 278,                   /* COMMA  */
    SEMICOLON = 279,               /* SEMICOLON  */
    COLON = 280,                   /* COLON  */
    FUNCTION_CALL = 281,           /* FUNCTION_CALL  */
    BLOCK_CLOSE = 282,             /* BLOCK_CLOSE  */
    BLOCK_OPEN = 283,              /* BLOCK_OPEN  */
    ASSIGN = 284,                  /* ASSIGN  */
    INPUT = 285,                   /* INPUT  */
    LITERAL_STRING = 286,          /* LITERAL_STRING  */
    LITERAL_BOOL = 287,            /* LITERAL_BOOL  */
    LITERAL_CHAR = 288,            /* LITERAL_CHAR  */
    IDENTIFIER = 289,              /* IDENTIFIER  */
    DIGITS = 290,                  /* DIGITS  */
    DECIMAL = 291,                 /* DECIMAL  */
    FUNCT = 292,                   /* FUNCT  */
    RELACIONAL_OPERATORS = 293,    /* RELACIONAL_OPERATORS  */
    OPERATION = 294,               /* OPERATION  */
    LOGIC_OPERATORS = 295,         /* LOGIC_OPERATORS  */
    TYPE = 296                     /* TYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "translate.y"

    char* str;
    int iValue;
    double real;
    char caractere;
    Identifier identifier;
    Type type;
    RealParameters types;
    Function* funct;

#line 122 "translate.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TRANSLATE_TAB_H_INCLUDED  */
