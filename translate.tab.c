/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translate.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "TabelaDeSimbolos.h"

extern void yyerror(const char *);
int yylex(void);  
extern int line_number;
void executeProgram();
extern void yyerrorSemantic(const char *s);

int primeiro = 0;

int funcaoOuMain; //0 funcao, 1 main

int qntPassadas;

Function funcaoYacc;
Identificador *primeiroIdentificador;
Identificador *ultimoIdentificador;

ListaIdentificadores listaIdentificadores;


Function *funcaoVazia;
Function funcaoAuxiliar;

Identificador *identificadorAuxiliar;

TabelaDeSimbolos tabelaDeSimbolos;  // Tabela de símbolos global
//void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);

void addId(char *id, Tipo tipoSimbolo, TipoDeDado tipoDado, int linha, Type type, Function funcaoTabela);



#line 110 "translate.tab.c"

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

#include "translate.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_ELIF = 5,                       /* ELIF  */
  YYSYMBOL_FOR = 6,                        /* FOR  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_SWITCH = 10,                    /* SWITCH  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_DEFAULT = 12,                   /* DEFAULT  */
  YYSYMBOL_PRINT = 13,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 14,                   /* PRINTLN  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_INT_MAIN = 16,                  /* INT_MAIN  */
  YYSYMBOL_READ_FILE = 17,                 /* READ_FILE  */
  YYSYMBOL_CLOSE_FILE = 18,                /* CLOSE_FILE  */
  YYSYMBOL_OPEN_PARENTHESES = 19,          /* OPEN_PARENTHESES  */
  YYSYMBOL_CLOSE_PARENTHESES = 20,         /* CLOSE_PARENTHESES  */
  YYSYMBOL_OPEN_BRACKET = 21,              /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 22,             /* CLOSE_BRACKET  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 24,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 25,                     /* COLON  */
  YYSYMBOL_FUNCTION_CALL = 26,             /* FUNCTION_CALL  */
  YYSYMBOL_BLOCK_CLOSE = 27,               /* BLOCK_CLOSE  */
  YYSYMBOL_BLOCK_OPEN = 28,                /* BLOCK_OPEN  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_INPUT = 30,                     /* INPUT  */
  YYSYMBOL_LITERAL_STRING = 31,            /* LITERAL_STRING  */
  YYSYMBOL_LITERAL_BOOL = 32,              /* LITERAL_BOOL  */
  YYSYMBOL_LITERAL_CHAR = 33,              /* LITERAL_CHAR  */
  YYSYMBOL_IDENTIFIER = 34,                /* IDENTIFIER  */
  YYSYMBOL_DIGITS = 35,                    /* DIGITS  */
  YYSYMBOL_DECIMAL = 36,                   /* DECIMAL  */
  YYSYMBOL_FUNCT = 37,                     /* FUNCT  */
  YYSYMBOL_RELACIONAL_OPERATORS = 38,      /* RELACIONAL_OPERATORS  */
  YYSYMBOL_OPERATION = 39,                 /* OPERATION  */
  YYSYMBOL_LOGIC_OPERATORS = 40,           /* LOGIC_OPERATORS  */
  YYSYMBOL_TYPE = 41,                      /* TYPE  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_type = 43,                      /* type  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_45_1 = 45,                      /* $@1  */
  YYSYMBOL_functions = 46,                 /* functions  */
  YYSYMBOL_function = 47,                  /* function  */
  YYSYMBOL_48_2 = 48,                      /* $@2  */
  YYSYMBOL_49_3 = 49,                      /* $@3  */
  YYSYMBOL_parameters = 50,                /* parameters  */
  YYSYMBOL_parameter = 51,                 /* parameter  */
  YYSYMBOL_main = 52,                      /* main  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_stmts = 54,                     /* stmts  */
  YYSYMBOL_stmt = 55,                      /* stmt  */
  YYSYMBOL_command = 56,                   /* command  */
  YYSYMBOL_file_stmt = 57,                 /* file_stmt  */
  YYSYMBOL_file_open = 58,                 /* file_open  */
  YYSYMBOL_file_close = 59,                /* file_close  */
  YYSYMBOL_call_function = 60,             /* call_function  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_real_parameters = 62,           /* real_parameters  */
  YYSYMBOL_real_parameters2 = 63,          /* real_parameters2  */
  YYSYMBOL_real_parameter = 64,            /* real_parameter  */
  YYSYMBOL_return_stmt = 65,               /* return_stmt  */
  YYSYMBOL_assign_stmt = 66,               /* assign_stmt  */
  YYSYMBOL_declaration = 67,               /* declaration  */
  YYSYMBOL_code_block = 68,                /* code_block  */
  YYSYMBOL_if_stmt = 69,                   /* if_stmt  */
  YYSYMBOL_else_stmt = 70,                 /* else_stmt  */
  YYSYMBOL_while_stmt = 71,                /* while_stmt  */
  YYSYMBOL_for_stmt = 72,                  /* for_stmt  */
  YYSYMBOL_switch_stmt = 73,               /* switch_stmt  */
  YYSYMBOL_cases = 74,                     /* cases  */
  YYSYMBOL_default_case = 75,              /* default_case  */
  YYSYMBOL_print_stmt = 76,                /* print_stmt  */
  YYSYMBOL_print_texts = 77,               /* print_texts  */
  YYSYMBOL_print_text = 78,                /* print_text  */
  YYSYMBOL_input_stmt = 79,                /* input_stmt  */
  YYSYMBOL_input_text = 80,                /* input_text  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_term = 82,                      /* term  */
  YYSYMBOL_var = 83,                       /* var  */
  YYSYMBOL_literal = 84                    /* literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,    97,    97,   106,   107,   111,   117,   111,
     127,   128,   131,   140,   144,   144,   147,   148,   151,   152,
     153,   154,   155,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   169,   170,   173,   176,   179,   179,   194,   195,
     198,   199,   202,   227,   228,   231,   247,   253,   256,   259,
     260,   261,   264,   266,   269,   272,   273,   276,   277,   280,
     281,   284,   285,   288,   289,   292,   295,   296,   315,   321,
     327,   333,   334,   335,   338,   339,   340,   341,   344,   357,
     358,   359
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "ELIF",
  "FOR", "RETURN", "CONTINUE", "BREAK", "SWITCH", "CASE", "DEFAULT",
  "PRINT", "PRINTLN", "WHILE", "INT_MAIN", "READ_FILE", "CLOSE_FILE",
  "OPEN_PARENTHESES", "CLOSE_PARENTHESES", "OPEN_BRACKET", "CLOSE_BRACKET",
  "COMMA", "SEMICOLON", "COLON", "FUNCTION_CALL", "BLOCK_CLOSE",
  "BLOCK_OPEN", "ASSIGN", "INPUT", "LITERAL_STRING", "LITERAL_BOOL",
  "LITERAL_CHAR", "IDENTIFIER", "DIGITS", "DECIMAL", "FUNCT",
  "RELACIONAL_OPERATORS", "OPERATION", "LOGIC_OPERATORS", "TYPE",
  "$accept", "type", "program", "$@1", "functions", "function", "$@2",
  "$@3", "parameters", "parameter", "main", "$@4", "stmts", "stmt",
  "command", "file_stmt", "file_open", "file_close", "call_function",
  "$@5", "real_parameters", "real_parameters2", "real_parameter",
  "return_stmt", "assign_stmt", "declaration", "code_block", "if_stmt",
  "else_stmt", "while_stmt", "for_stmt", "switch_stmt", "cases",
  "default_case", "print_stmt", "print_texts", "print_text", "input_stmt",
  "input_text", "expr", "term", "var", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -122,     9,   -22,  -122,     3,  -122,   -22,     0,  -122,    16,
    -122,     7,    68,  -122,    19,  -122,    35,    38,    84,    40,
      44,    53,    54,    65,    74,    76,    25,    77,  -122,    -5,
    -122,    68,  -122,  -122,  -122,  -122,    80,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,    71,  -122,    78,   103,
      89,   103,  -122,  -122,  -122,  -122,  -122,  -122,  -122,     6,
    -122,  -122,  -122,  -122,  -122,   103,   -24,   -24,   103,    94,
    -122,    89,    95,   107,  -122,  -122,   103,     7,  -122,   -15,
     108,   -12,  -122,   103,   103,   103,    -4,  -122,    -6,  -122,
    -122,    -2,    23,   113,   122,    29,  -122,   112,  -122,    73,
      78,   127,   123,   103,  -122,   109,   -27,  -122,   125,   128,
     -24,   132,   126,   133,   103,   134,    89,   139,  -122,  -122,
     135,   136,   106,   149,  -122,  -122,  -122,   136,  -122,   141,
     142,    52,  -122,  -122,   138,    68,    68,    75,   146,   103,
     155,  -122,   144,   103,  -122,  -122,   143,   145,   148,   150,
    -122,   151,   115,   152,  -122,  -122,   142,  -122,  -122,   136,
     103,   136,   136,   136,  -122,  -122,    49,  -122,   149,  -122,
     153,  -122,   136,    75,  -122
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     6,     1,     0,    14,     6,     0,     4,     0,
       5,    13,    17,     2,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
      15,    17,    22,    31,    32,    33,     0,    23,    24,    29,
      18,    19,    20,    21,    25,    30,     0,    12,    11,     0,
       0,     0,    44,    80,    81,    79,    74,    77,    72,     0,
      71,    75,    76,    28,    27,     0,     0,     0,     0,     0,
      36,     0,     0,     0,    16,    26,     0,    13,     8,     0,
       0,     0,    43,     0,     0,     0,     0,    63,     0,    61,
      64,     0,     0,     0,     0,     0,    66,     0,    46,     0,
      11,     0,     0,     0,    73,    70,    68,    69,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    45,    10,
       0,     0,     0,    56,    59,    62,    60,     0,    35,     0,
      41,    42,    65,    67,     0,    17,    17,    51,     0,     0,
      58,    52,     0,     0,    38,    34,     0,     0,     0,     0,
      48,     0,     0,     0,    54,    37,    41,     9,    47,     0,
       0,     0,     0,     0,    40,    50,     0,    53,    56,    57,
       0,    55,     0,    51,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,    -7,  -122,  -122,   165,  -122,  -122,  -122,    79,    97,
    -122,  -122,   -29,  -122,  -122,  -122,  -122,  -122,    -9,  -122,
    -122,    24,    32,  -122,   131,  -122,  -121,  -122,    10,  -122,
    -122,  -122,    14,  -122,  -122,   117,    81,  -122,  -122,   -18,
    -122,   -11,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    29,     1,     2,     5,     6,    48,   101,    78,    15,
       8,     9,    30,    31,    32,    33,    34,    35,    58,    94,
     129,   144,   130,    37,    38,    39,   137,    40,   150,    41,
      42,    43,   140,   154,    44,    88,    89,    45,    95,   131,
      60,    61,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    46,    74,    36,    14,   102,   141,    87,   104,     3,
      28,    83,    72,    85,   109,     4,   108,   110,   111,    11,
      46,   110,    36,    83,    84,    85,    83,    84,    85,    73,
      82,    79,    12,    81,    83,    84,    85,     7,   165,    46,
     167,   168,   169,   112,    83,    84,    85,    86,    13,   115,
      92,   173,   116,    47,    49,    90,    90,    50,    99,    70,
      96,    83,    84,    85,    63,   105,   106,   107,    64,   170,
      14,    16,    65,    66,    17,    18,    19,    20,    21,   148,
     149,    22,    23,    24,    67,   122,    25,    83,    84,    85,
      83,    84,    85,    68,    26,    69,    71,   118,    27,    90,
      76,    77,    28,    51,    75,   133,   146,   147,    52,    13,
      26,    83,    84,    85,    97,    53,    54,    55,    28,    56,
      57,   152,    51,    28,    46,    46,    36,    36,    93,    26,
     138,    98,   103,   113,    53,    54,    55,    28,    56,    57,
     162,   114,   166,   117,    83,    84,    85,   120,   121,    85,
     123,   127,   124,    83,    84,    85,   126,   128,   132,   134,
     139,   142,   145,   135,   136,   143,   151,   153,   155,   160,
     157,    10,   158,   159,   100,   156,   161,   163,   172,   119,
     164,    80,   171,   174,    91,     0,     0,     0,     0,     0,
       0,   125
};

static const yytype_int16 yycheck[] =
{
      18,    12,    31,    12,    11,    20,   127,    31,    20,     0,
      34,    38,    17,    40,    20,    37,    20,    23,    20,    19,
      31,    23,    31,    38,    39,    40,    38,    39,    40,    34,
      24,    49,    16,    51,    38,    39,    40,    34,   159,    50,
     161,   162,   163,    20,    38,    39,    40,    65,    41,    20,
      68,   172,    23,    34,    19,    66,    67,    19,    76,    34,
      71,    38,    39,    40,    24,    83,    84,    85,    24,    20,
      77,     3,    19,    19,     6,     7,     8,     9,    10,     4,
       5,    13,    14,    15,    19,   103,    18,    38,    39,    40,
      38,    39,    40,    19,    26,    19,    19,    24,    30,   110,
      29,    23,    34,    19,    24,   116,   135,   136,    24,    41,
      26,    38,    39,    40,    19,    31,    32,    33,    34,    35,
      36,   139,    19,    34,   135,   136,   135,   136,    34,    26,
      24,    24,    24,    20,    31,    32,    33,    34,    35,    36,
      25,    19,   160,    31,    38,    39,    40,    20,    25,    40,
      25,    25,    24,    38,    39,    40,    24,    24,    24,    20,
      11,    20,    24,    28,    28,    23,    20,    12,    24,    19,
      27,     6,    27,    25,    77,   143,    25,    25,    25,   100,
     156,    50,   168,   173,    67,    -1,    -1,    -1,    -1,    -1,
      -1,   110
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,    45,     0,    37,    46,    47,    34,    52,    53,
      46,    19,    16,    41,    43,    51,     3,     6,     7,     8,
       9,    10,    13,    14,    15,    18,    26,    30,    34,    43,
      54,    55,    56,    57,    58,    59,    60,    65,    66,    67,
      69,    71,    72,    73,    76,    79,    83,    34,    48,    19,
      19,    19,    24,    31,    32,    33,    35,    36,    60,    81,
      82,    83,    84,    24,    24,    19,    19,    19,    19,    19,
      34,    19,    17,    34,    54,    24,    29,    23,    50,    81,
      66,    81,    24,    38,    39,    40,    81,    31,    77,    78,
      83,    77,    81,    34,    61,    80,    83,    19,    24,    81,
      51,    49,    20,    24,    20,    81,    81,    81,    20,    20,
      23,    20,    20,    20,    19,    20,    23,    31,    24,    50,
      20,    25,    81,    25,    24,    78,    24,    25,    24,    62,
      64,    81,    24,    83,    20,    28,    28,    68,    24,    11,
      74,    68,    20,    23,    63,    24,    54,    54,     4,     5,
      70,    20,    81,    12,    75,    24,    64,    27,    27,    25,
      19,    25,    25,    25,    63,    68,    81,    68,    68,    68,
      20,    74,    25,    68,    70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    45,    44,    46,    46,    48,    49,    47,
      50,    50,    51,    51,    53,    52,    54,    54,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    58,    59,    61,    60,    62,    62,
      63,    63,    64,    65,    65,    66,    67,    68,    69,    70,
      70,    70,    71,    72,    73,    74,    74,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    80,    80,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    83,    84,
      84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     3,     2,     0,     0,     0,    11,
       3,     0,     2,     0,     0,     3,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     6,     5,     0,     7,     2,     0,
       3,     0,     1,     3,     2,     4,     3,     3,     7,     7,
       3,     0,     6,     9,     7,     5,     0,     3,     0,     5,
       5,     1,     3,     1,     1,     5,     1,     3,     3,     3,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* type: TYPE  */
#line 93 "translate.y"
           { (yyval.type) = get_type((yyvsp[0].str)); }
#line 1306 "translate.tab.c"
    break;

  case 3: /* $@1: %empty  */
#line 97 "translate.y"
       {funcaoOuMain = 0;}
#line 1312 "translate.tab.c"
    break;

  case 4: /* program: $@1 functions main  */
#line 98 "translate.y"
                      { 
       primeiroIdentificador = (Identificador*) malloc(sizeof(Identificador));
       ultimoIdentificador = (Identificador*) malloc(sizeof(Identificador));
       imprimeTabelaDeSimbolos(&tabelaDeSimbolos, listaIdentificadores   ); 
       executeProgram(); 
}
#line 1323 "translate.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 111 "translate.y"
                                                     {  
                
            primeiroIdentificador = listaIdentificadores.primeiro; 
            ultimoIdentificador = listaIdentificadores.ultimo; 
            identificadorAuxiliar = primeiroIdentificador;

            }
#line 1335 "translate.tab.c"
    break;

  case 8: /* $@3: %empty  */
#line 117 "translate.y"
                         {
                inicializaFuncao(&funcaoYacc, (yyvsp[-4].identifier).nome, primeiroIdentificador, listaIdentificadores.qntParams, ultimoIdentificador, 1);
                funcaoYacc.qntParams = listaIdentificadores.qntParams;
            }
#line 1344 "translate.tab.c"
    break;

  case 9: /* function: FUNCT IDENTIFIER OPEN_PARENTHESES parameter $@2 parameters $@3 CLOSE_PARENTHESES BLOCK_OPEN stmts BLOCK_CLOSE  */
#line 121 "translate.y"
                                                           {
                addId((yyvsp[-9].identifier).nome, funcao, nenhum, line_number + 1, FUNCTION, funcaoYacc);
                //clearIdentificadorList(primeiroIdentificador);  // Clean up memory after usage
            }
#line 1353 "translate.tab.c"
    break;

  case 12: /* parameter: type IDENTIFIER  */
#line 131 "translate.y"
                           {
            if(primeiro == 1){
                atualizaListaParametros(&listaIdentificadores, (yyvsp[-1].type)); // Set the pointer to the last identifier
                primeiro = 0;  // Flag that the first parameter is now set
            } else {
                atualizaListaParametros(&listaIdentificadores, (yyvsp[-1].type)); 
                // Insert subsequent parameters
            }
}
#line 1367 "translate.tab.c"
    break;

  case 13: /* parameter: %empty  */
#line 140 "translate.y"
                    {funcaoOuMain = 0;}
#line 1373 "translate.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 144 "translate.y"
      {funcaoOuMain = 0;}
#line 1379 "translate.tab.c"
    break;

  case 16: /* stmts: stmt stmts  */
#line 147 "translate.y"
                  { (yyval.type) = TYPE; }
#line 1385 "translate.tab.c"
    break;

  case 17: /* stmts: %empty  */
#line 148 "translate.y"
                   { (yyval.type) = NONE; }
#line 1391 "translate.tab.c"
    break;

  case 36: /* $@5: %empty  */
#line 179 "translate.y"
                                        {
                if(!(buscaSimbolo(&tabelaDeSimbolos, (yyvsp[0].identifier).nome))){
                    imprimeTabelaDeSimbolos(&tabelaDeSimbolos, listaIdentificadores); 
                    char msg[100];
                    sprintf(msg, "Chamada de função não declarada \"%s\" proximo a linha %d", (yyvsp[0].identifier).nome, line_number + 1);
                    yyerrorSemantic(msg); 
                }

                }
#line 1405 "translate.tab.c"
    break;

  case 37: /* call_function: FUNCTION_CALL IDENTIFIER $@5 OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON  */
#line 187 "translate.y"
                                                                               { 
                (yyval.type) = FUNCTION; 
                qntPassadas = 0;
       
                }
#line 1415 "translate.tab.c"
    break;

  case 39: /* real_parameters: %empty  */
#line 195 "translate.y"
                 { (yyval.type) = NONE; }
#line 1421 "translate.tab.c"
    break;

  case 40: /* real_parameters2: COMMA real_parameter real_parameters2  */
#line 198 "translate.y"
                                                        { (yyval.type) = (yyvsp[-1].type); }
#line 1427 "translate.tab.c"
    break;

  case 41: /* real_parameters2: %empty  */
#line 199 "translate.y"
                  { (yyval.type) = NONE; }
#line 1433 "translate.tab.c"
    break;

  case 42: /* real_parameter: expr  */
#line 202 "translate.y"
                     { 
    if(qntPassadas < funcaoYacc.qntParams){
        if((yyvsp[0].type) == identificadorAuxiliar->type){
            qntPassadas++;
            if(!(identificadorAuxiliar->proximo)){
                identificadorAuxiliar = identificadorAuxiliar->proximo;

            }

        }else{
            char msg[100];
            sprintf(msg, "Tipo incompativel. Tipo esperado: %s, tipo passado: %s ",
                             getType(identificadorAuxiliar->type),getType((yyvsp[0].type)));
            yyerrorSemantic(msg);

        }
    }else{
        char msg[100];
        sprintf(msg, "Quantidade de parametros maior doque esperado.");
        yyerrorSemantic(msg);
    }

}
#line 1461 "translate.tab.c"
    break;

  case 45: /* assign_stmt: var ASSIGN expr SEMICOLON  */
#line 231 "translate.y"
                                       {
    Simbolo *simboloTeste;
    simboloTeste = buscaSimbolo(&tabelaDeSimbolos, (yyvsp[-3].identifier).nome);
    if(simboloTeste){
        Type varType = simboloTeste->type;
        Type exprType = (yyvsp[-1].type);
        if (varType != exprType) {
            char msg[100];
            sprintf(msg, "Tipo incompatível na atribuição de %s", (yyvsp[-3].identifier).nome);
            yyerrorSemantic(msg);
        }
    }
    
}
#line 1480 "translate.tab.c"
    break;

  case 46: /* declaration: type IDENTIFIER SEMICOLON  */
#line 247 "translate.y"
                                       { 
    funcaoVazia = (Function*) malloc(sizeof(Function));
    funcaoVazia->flag = 0;
    addId((yyvsp[-1].identifier).nome, variavel, (yyvsp[-2].type), line_number+1, (yyvsp[-2].type), *funcaoVazia); }
#line 1489 "translate.tab.c"
    break;

  case 68: /* expr: expr OPERATION expr  */
#line 315 "translate.y"
                          {
    (yyval.type) = semantica_op((yyvsp[-2].type), (yyvsp[0].type), (yyvsp[-1].str)[0]);
    if ((yyval.type) == ERRO) {
        yyerrorSemantic("Operação inválida entre tipos incompatíveis.");
    }
}
#line 1500 "translate.tab.c"
    break;

  case 69: /* expr: expr LOGIC_OPERATORS expr  */
#line 321 "translate.y"
                                {
    (yyval.type) = semantica_logic((yyvsp[-2].type), (yyvsp[0].type));
    if ((yyval.type) == ERRO) {
        yyerrorSemantic("Operação lógica inválida entre tipos incompatíveis.");
    }
}
#line 1511 "translate.tab.c"
    break;

  case 70: /* expr: expr RELACIONAL_OPERATORS expr  */
#line 327 "translate.y"
                                     {
    (yyval.type) = semantica_relop((yyvsp[-2].type), (yyvsp[0].type), (yyvsp[-1].str)[0]);
    if ((yyval.type) == ERRO) {
        yyerrorSemantic("Operação relacional inválida entre tipos incompatíveis.");
    }
}
#line 1522 "translate.tab.c"
    break;

  case 71: /* expr: term  */
#line 333 "translate.y"
           { (yyval.type) = (yyvsp[0].type); }
#line 1528 "translate.tab.c"
    break;

  case 72: /* expr: call_function  */
#line 334 "translate.y"
                    { (yyval.type) = (yyvsp[0].type); }
#line 1534 "translate.tab.c"
    break;

  case 73: /* expr: OPEN_PARENTHESES expr CLOSE_PARENTHESES  */
#line 335 "translate.y"
                                              { (yyval.type) = (yyvsp[-1].type); }
#line 1540 "translate.tab.c"
    break;

  case 74: /* term: DIGITS  */
#line 338 "translate.y"
             { (yyval.type) = INT; }
#line 1546 "translate.tab.c"
    break;

  case 75: /* term: var  */
#line 339 "translate.y"
          { (yyval.type) = (yyvsp[0].identifier).type; }
#line 1552 "translate.tab.c"
    break;

  case 76: /* term: literal  */
#line 340 "translate.y"
              { (yyval.type) = (yyvsp[0].type); }
#line 1558 "translate.tab.c"
    break;

  case 77: /* term: DECIMAL  */
#line 341 "translate.y"
              { (yyval.type) = FLOAT; }
#line 1564 "translate.tab.c"
    break;

  case 78: /* var: IDENTIFIER  */
#line 344 "translate.y"
                {
    if(funcaoOuMain == 1){
        if (!buscaSimbolo(&tabelaDeSimbolos, (yyvsp[0].identifier).nome)) {
            char msg[100];
            sprintf(msg, "Variável \"%s\" não declarada", (yyvsp[0].identifier).nome);
            yyerrorSemantic(msg);
        }
    }
    (yyval.identifier) = (yyvsp[0].identifier);
}
#line 1579 "translate.tab.c"
    break;

  case 79: /* literal: LITERAL_CHAR  */
#line 357 "translate.y"
                      { (yyval.type) = CHAR; }
#line 1585 "translate.tab.c"
    break;

  case 80: /* literal: LITERAL_STRING  */
#line 358 "translate.y"
                         { (yyval.type) = STRING; }
#line 1591 "translate.tab.c"
    break;

  case 81: /* literal: LITERAL_BOOL  */
#line 359 "translate.y"
                       { (yyval.type) =  BOOLEAN; }
#line 1597 "translate.tab.c"
    break;


#line 1601 "translate.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 362 "translate.y"


void addId(char *id, Tipo tipoSimbolo, TipoDeDado tipoDado, int linha, Type type, Function funcaoTabela) {
    
    if (buscaSimbolo(&tabelaDeSimbolos, id)) {
       imprimeTabelaDeSimbolos(&tabelaDeSimbolos, listaIdentificadores   ); 
        char msg[100];
        sprintf(msg, "Redeclaração do identificador \"%s\" na linha %d", id, linha);
        yyerrorSemantic(msg);
        exit(1);
    }
    insereSimbolo(&tabelaDeSimbolos, id, tipoDado, linha, tipoSimbolo, type, funcaoTabela);
}


int main(){
    qntPassadas = 0;
    identificadorAuxiliar = (Identificador *) malloc(sizeof(Identificador));
    inicializaTabelaDeSimbolos(&tabelaDeSimbolos);
    yyparse();
    return 0;
}

void executeProgram() {
    printf("\nPrograma sintaticamente correto\n");
}   

void yyerror(const char *s) 
{
    fprintf(stderr, "Erro: %s próximo a linha %d\n", s, line_number+1);
    exit(0);
}

void yyerrorSemantic(const char *s)
{
    fprintf(stderr, "Erro semântico próximo a linha %d: %s\n", line_number+1, s);
    exit(0);
}

int yywrap() 
{
    return 1;
}
