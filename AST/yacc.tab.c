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
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "AST.h"

ASTNode *root;
int qtd = 0;
extern void yyerror(const char *);
int yylex(void);  
extern int line_number;
void executeProgram();


#line 87 "yacc.tab.c"

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

#include "yacc.tab.h"
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
  YYSYMBOL_OPEN_PARENTHESES = 17,          /* OPEN_PARENTHESES  */
  YYSYMBOL_CLOSE_PARENTHESES = 18,         /* CLOSE_PARENTHESES  */
  YYSYMBOL_OPEN_BRACKET = 19,              /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 20,             /* CLOSE_BRACKET  */
  YYSYMBOL_COMMA = 21,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 22,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 23,                     /* COLON  */
  YYSYMBOL_FUNCTION_CALL = 24,             /* FUNCTION_CALL  */
  YYSYMBOL_BLOCK_CLOSE = 25,               /* BLOCK_CLOSE  */
  YYSYMBOL_BLOCK_OPEN = 26,                /* BLOCK_OPEN  */
  YYSYMBOL_ASSIGN = 27,                    /* ASSIGN  */
  YYSYMBOL_INPUT = 28,                     /* INPUT  */
  YYSYMBOL_LITERAL_STRING = 29,            /* LITERAL_STRING  */
  YYSYMBOL_LITERAL_BOOL = 30,              /* LITERAL_BOOL  */
  YYSYMBOL_LITERAL_CHAR = 31,              /* LITERAL_CHAR  */
  YYSYMBOL_IDENTIFIER = 32,                /* IDENTIFIER  */
  YYSYMBOL_DIGITS = 33,                    /* DIGITS  */
  YYSYMBOL_DECIMAL = 34,                   /* DECIMAL  */
  YYSYMBOL_FUNCT = 35,                     /* FUNCT  */
  YYSYMBOL_RELACIONAL_OPERATORS = 36,      /* RELACIONAL_OPERATORS  */
  YYSYMBOL_OPERATION = 37,                 /* OPERATION  */
  YYSYMBOL_LOGIC_OPERATORS = 38,           /* LOGIC_OPERATORS  */
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_type = 41,                      /* type  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_functions = 43,                 /* functions  */
  YYSYMBOL_function = 44,                  /* function  */
  YYSYMBOL_parameters = 45,                /* parameters  */
  YYSYMBOL_parameter = 46,                 /* parameter  */
  YYSYMBOL_main = 47,                      /* main  */
  YYSYMBOL_stmts = 48,                     /* stmts  */
  YYSYMBOL_stmt = 49,                      /* stmt  */
  YYSYMBOL_command = 50,                   /* command  */
  YYSYMBOL_call_function = 51,             /* call_function  */
  YYSYMBOL_real_parameters = 52,           /* real_parameters  */
  YYSYMBOL_real_parameters2 = 53,          /* real_parameters2  */
  YYSYMBOL_real_parameter = 54,            /* real_parameter  */
  YYSYMBOL_return_stmt = 55,               /* return_stmt  */
  YYSYMBOL_assign_stmt = 56,               /* assign_stmt  */
  YYSYMBOL_declaration = 57,               /* declaration  */
  YYSYMBOL_code_block = 58,                /* code_block  */
  YYSYMBOL_if_stmt = 59,                   /* if_stmt  */
  YYSYMBOL_else_stmt = 60,                 /* else_stmt  */
  YYSYMBOL_while_stmt = 61,                /* while_stmt  */
  YYSYMBOL_for_stmt = 62,                  /* for_stmt  */
  YYSYMBOL_switch_stmt = 63,               /* switch_stmt  */
  YYSYMBOL_cases = 64,                     /* cases  */
  YYSYMBOL_default_case = 65,              /* default_case  */
  YYSYMBOL_print_stmt = 66,                /* print_stmt  */
  YYSYMBOL_print_texts = 67,               /* print_texts  */
  YYSYMBOL_print_text = 68,                /* print_text  */
  YYSYMBOL_input_stmt = 69,                /* input_stmt  */
  YYSYMBOL_input_text = 70,                /* input_text  */
  YYSYMBOL_expr = 71,                      /* expr  */
  YYSYMBOL_term = 72,                      /* term  */
  YYSYMBOL_var = 73,                       /* var  */
  YYSYMBOL_literal = 74                    /* literal  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    77,    85,    90,    93,    99,   100,   103,
     104,   107,   113,   118,   123,   124,   125,   126,   127,   130,
     131,   132,   133,   134,   135,   136,   137,   140,   145,   146,
     149,   150,   153,   156,   160,   165,   171,   176,   182,   188,
     192,   196,   199,   204,   210,   217,   221,   224,   228,   231,
     234,   239,   240,   243,   244,   247,   252,   253,   256,   257,
     258,   259,   260,   261,   264,   267,   268,   269,   274,   280,
     283,   286
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
  "PRINT", "PRINTLN", "WHILE", "INT_MAIN", "OPEN_PARENTHESES",
  "CLOSE_PARENTHESES", "OPEN_BRACKET", "CLOSE_BRACKET", "COMMA",
  "SEMICOLON", "COLON", "FUNCTION_CALL", "BLOCK_CLOSE", "BLOCK_OPEN",
  "ASSIGN", "INPUT", "LITERAL_STRING", "LITERAL_BOOL", "LITERAL_CHAR",
  "IDENTIFIER", "DIGITS", "DECIMAL", "FUNCT", "RELACIONAL_OPERATORS",
  "OPERATION", "LOGIC_OPERATORS", "TYPE", "$accept", "type", "program",
  "functions", "function", "parameters", "parameter", "main", "stmts",
  "stmt", "command", "call_function", "real_parameters",
  "real_parameters2", "real_parameter", "return_stmt", "assign_stmt",
  "declaration", "code_block", "if_stmt", "else_stmt", "while_stmt",
  "for_stmt", "switch_stmt", "cases", "default_case", "print_stmt",
  "print_texts", "print_text", "input_stmt", "input_text", "expr", "term",
  "var", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-112)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    -5,    23,    13,    11,    39,  -112,    68,  -112,  -112,
      10,    43,    47,    92,    48,    50,    56,    63,    67,    69,
      58,    74,  -112,  -112,    61,  -112,    68,  -112,    72,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,    70,    66,
      80,   103,    76,   103,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,   106,  -112,  -112,  -112,  -112,  -112,   103,   -21,   -21,
     103,    87,    76,    84,  -112,  -112,   103,  -112,    10,    93,
     -12,    88,     3,  -112,   103,   103,   103,    14,  -112,    -9,
    -112,  -112,    -8,    30,   103,    24,  -112,  -112,   109,    80,
      86,    95,   103,  -112,    77,    21,  -112,   117,   107,   -21,
     119,   125,   121,   128,   -22,   129,    76,  -112,  -112,    68,
     124,   116,   144,  -112,  -112,  -112,   124,   134,   103,  -112,
    -112,  -112,   132,    68,    32,   140,   103,   147,  -112,  -112,
     128,  -112,   135,   138,   145,  -112,   141,   -19,   142,  -112,
    -112,  -112,   124,   103,   124,   124,   124,  -112,    51,  -112,
     144,  -112,   143,  -112,   124,    32,  -112
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     0,     5,     0,     1,    13,     3,     4,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     2,     0,    11,    13,    18,     0,    19,
      20,    25,    14,    15,    16,    17,    21,    26,     0,     0,
       8,     0,     0,     0,    34,    70,    71,    69,    64,    67,
      62,     0,    61,    65,    66,    24,    23,     0,     0,     0,
       0,     0,     0,     0,    12,    22,     0,     9,    10,     0,
       0,     0,     0,    33,     0,     0,     0,     0,    53,     0,
      51,    54,     0,     0,    29,     0,    56,    36,     0,     8,
       0,     0,     0,    63,    60,    58,    59,     0,     0,     0,
       0,     0,     0,    31,    32,     0,     0,    35,     7,    13,
       0,     0,    46,    49,    52,    50,     0,     0,     0,    28,
      55,    57,     0,    13,    41,     0,     0,    48,    42,    27,
      31,     6,     0,     0,     0,    38,     0,     0,     0,    44,
      30,    37,     0,     0,     0,     0,     0,    40,     0,    43,
      46,    47,     0,    45,     0,    41,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,    -3,  -112,   159,  -112,    78,   100,  -112,   -24,  -112,
    -112,    -6,  -112,    40,    53,  -112,   127,  -112,  -111,  -112,
      17,  -112,  -112,  -112,    25,  -112,  -112,   114,    75,  -112,
    -112,   -13,  -112,    -4,  -112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    24,     2,     3,     4,    69,    40,     8,    25,    26,
      27,    50,   102,   119,   103,    29,    30,    31,   124,    32,
     135,    33,    34,    35,   127,   139,    36,    79,    80,    37,
      85,   104,    52,    53,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    28,    64,    38,   145,   128,    91,    39,    78,    98,
     100,    22,    99,    99,    74,    75,    76,    74,    75,    76,
      28,    93,    38,     6,    74,    75,    76,     5,    70,     7,
      72,   147,    97,   149,   150,   151,   133,   134,    38,    74,
      75,    76,   105,   155,    77,   106,     1,    83,   101,    23,
      74,    75,    76,    88,    81,    81,    10,    74,    86,    76,
      41,    94,    95,    96,    42,    39,    74,    75,    76,   152,
      55,    11,    56,    57,    12,    13,    14,    15,    16,   111,
      58,    17,    18,    19,    59,   122,    60,    74,    75,    76,
      61,    62,    20,    63,    65,    81,    21,    66,    67,   132,
      22,    68,   121,    28,    84,    38,    87,    23,    22,    43,
      92,    90,   109,   137,    44,    76,    20,    28,   110,    38,
      43,    45,    46,    47,    22,    48,    49,    20,    73,   113,
     148,   107,    45,    46,    47,    22,    48,    49,   125,   117,
     112,   115,    74,    75,    76,    74,    75,    76,   116,   118,
     123,   120,    74,    75,    76,   126,   129,   131,   136,   138,
     141,   142,   143,     9,   144,   146,   154,   108,    89,    71,
     140,   130,   156,    82,   114,   153
};

static const yytype_uint8 yycheck[] =
{
      13,     7,    26,     7,    23,   116,    18,    10,    29,    18,
      18,    32,    21,    21,    36,    37,    38,    36,    37,    38,
      26,    18,    26,     0,    36,    37,    38,    32,    41,    16,
      43,   142,    18,   144,   145,   146,     4,     5,    42,    36,
      37,    38,    18,   154,    57,    21,    35,    60,    18,    39,
      36,    37,    38,    66,    58,    59,    17,    36,    62,    38,
      17,    74,    75,    76,    17,    68,    36,    37,    38,    18,
      22,     3,    22,    17,     6,     7,     8,     9,    10,    92,
      17,    13,    14,    15,    17,   109,    17,    36,    37,    38,
      32,    17,    24,    32,    22,    99,    28,    27,    32,   123,
      32,    21,   106,   109,    17,   109,    22,    39,    32,    17,
      22,    18,    26,   126,    22,    38,    24,   123,    23,   123,
      17,    29,    30,    31,    32,    33,    34,    24,    22,    22,
     143,    22,    29,    30,    31,    32,    33,    34,    22,    18,
      23,    22,    36,    37,    38,    36,    37,    38,    23,    21,
      26,    22,    36,    37,    38,    11,    22,    25,    18,    12,
      25,    23,    17,     4,    23,    23,    23,    89,    68,    42,
     130,   118,   155,    59,    99,   150
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    42,    43,    44,    32,     0,    16,    47,    43,
      17,     3,     6,     7,     8,     9,    10,    13,    14,    15,
      24,    28,    32,    39,    41,    48,    49,    50,    51,    55,
      56,    57,    59,    61,    62,    63,    66,    69,    73,    41,
      46,    17,    17,    17,    22,    29,    30,    31,    33,    34,
      51,    71,    72,    73,    74,    22,    22,    17,    17,    17,
      17,    32,    17,    32,    48,    22,    27,    32,    21,    45,
      71,    56,    71,    22,    36,    37,    38,    71,    29,    67,
      68,    73,    67,    71,    17,    70,    73,    22,    71,    46,
      18,    18,    22,    18,    71,    71,    71,    18,    18,    21,
      18,    18,    52,    54,    71,    18,    21,    22,    45,    26,
      23,    71,    23,    22,    68,    22,    23,    18,    21,    53,
      22,    73,    48,    26,    58,    22,    11,    64,    58,    22,
      54,    25,    48,     4,     5,    60,    18,    71,    12,    65,
      53,    25,    23,    17,    23,    23,    23,    58,    71,    58,
      58,    58,    18,    64,    23,    58,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    43,    43,    44,    45,    45,    46,
      46,    47,    48,    48,    49,    49,    49,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    51,    52,    52,
      53,    53,    54,    55,    55,    56,    57,    58,    59,    60,
      60,    60,    61,    62,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    73,    74,
      74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     9,     3,     0,     2,
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     6,     2,     0,
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
#line 74 "yacc.y"
           {}
#line 1257 "yacc.tab.c"
    break;

  case 3: /* program: functions main  */
#line 77 "yacc.y"
                       { 
        root = createASTNode("Program", NULL);
        addChildNode(root, (yyvsp[-1].node));
        addChildNode(root, (yyvsp[0].node));
        printAST(root,0);
       }
#line 1268 "yacc.tab.c"
    break;

  case 4: /* functions: function functions  */
#line 85 "yacc.y"
                             {
    (yyval.node) = createASTNode("Functions", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
    addChildNode((yyval.node), (yyvsp[0].node));
}
#line 1278 "yacc.tab.c"
    break;

  case 5: /* functions: %empty  */
#line 90 "yacc.y"
           { (yyval.node) = createASTNode("Functions\n", NULL); }
#line 1284 "yacc.tab.c"
    break;

  case 6: /* function: FUNCT IDENTIFIER OPEN_PARENTHESES parameter parameters CLOSE_PARENTHESES BLOCK_OPEN stmts BLOCK_CLOSE  */
#line 93 "yacc.y"
                                                                                                                {
    (yyval.node) = createASTNode("Function", (yyvsp[-7].str));
    addChildNode((yyval.node), (yyvsp[-1].node));
}
#line 1293 "yacc.tab.c"
    break;

  case 11: /* main: INT_MAIN stmts  */
#line 107 "yacc.y"
                    {
    (yyval.node) = createASTNode("Main", "boatarde");
    addChildNode((yyval.node), (yyvsp[0].node));
}
#line 1302 "yacc.tab.c"
    break;

  case 12: /* stmts: stmt stmts  */
#line 113 "yacc.y"
                  {
    (yyval.node) = createASTNode("Statements", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
    addChildNode((yyval.node), (yyvsp[0].node));
}
#line 1312 "yacc.tab.c"
    break;

  case 13: /* stmts: %empty  */
#line 118 "yacc.y"
                   {
        (yyval.node) = createASTNode("Statements", NULL);
     }
#line 1320 "yacc.tab.c"
    break;

  case 23: /* command: BREAK SEMICOLON  */
#line 134 "yacc.y"
                         {}
#line 1326 "yacc.tab.c"
    break;

  case 24: /* command: CONTINUE SEMICOLON  */
#line 135 "yacc.y"
                            {}
#line 1332 "yacc.tab.c"
    break;

  case 27: /* call_function: FUNCTION_CALL IDENTIFIER OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON  */
#line 140 "yacc.y"
                                                                                                     {
    (yyval.node) = createASTNode("CHAMADA DE FUNÇÃO", NULL);
}
#line 1340 "yacc.tab.c"
    break;

  case 29: /* real_parameters: %empty  */
#line 146 "yacc.y"
                 {}
#line 1346 "yacc.tab.c"
    break;

  case 30: /* real_parameters2: COMMA real_parameter real_parameters2  */
#line 149 "yacc.y"
                                                        {}
#line 1352 "yacc.tab.c"
    break;

  case 31: /* real_parameters2: %empty  */
#line 150 "yacc.y"
                  {}
#line 1358 "yacc.tab.c"
    break;

  case 33: /* return_stmt: RETURN expr SEMICOLON  */
#line 156 "yacc.y"
                                   {
    (yyval.node) = createASTNode("Return", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
}
#line 1367 "yacc.tab.c"
    break;

  case 34: /* return_stmt: RETURN SEMICOLON  */
#line 160 "yacc.y"
                             {
            (yyval.node) = createASTNode("Return", NULL);
           }
#line 1375 "yacc.tab.c"
    break;

  case 35: /* assign_stmt: var ASSIGN expr SEMICOLON  */
#line 165 "yacc.y"
                                       {
    (yyval.node) = createASTNode("Assignment", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
}
#line 1384 "yacc.tab.c"
    break;

  case 36: /* declaration: type IDENTIFIER SEMICOLON  */
#line 171 "yacc.y"
                                       {
    (yyval.node) = createASTNode("DECLARAÇÃO", NULL);
}
#line 1392 "yacc.tab.c"
    break;

  case 37: /* code_block: BLOCK_OPEN stmts BLOCK_CLOSE  */
#line 176 "yacc.y"
                                         {
    (yyval.node) = createASTNode("Bloco de código", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
}
#line 1401 "yacc.tab.c"
    break;

  case 38: /* if_stmt: IF OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block else_stmt  */
#line 182 "yacc.y"
                                                                               {
    (yyval.node) = createASTNode("IF", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
}
#line 1410 "yacc.tab.c"
    break;

  case 39: /* else_stmt: ELIF OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block else_stmt  */
#line 188 "yacc.y"
                                                                                   {
    (yyval.node) = createASTNode("ELIF",NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
}
#line 1419 "yacc.tab.c"
    break;

  case 40: /* else_stmt: ELSE COLON code_block  */
#line 192 "yacc.y"
                                 {
            (yyval.node) = createASTNode("ELSE",NULL);
            addChildNode((yyval.node), (yyvsp[0].node));
          }
#line 1428 "yacc.tab.c"
    break;

  case 41: /* else_stmt: %empty  */
#line 196 "yacc.y"
            {}
#line 1434 "yacc.tab.c"
    break;

  case 42: /* while_stmt: WHILE OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block  */
#line 199 "yacc.y"
                                                                          {
    (yyval.node) = createASTNode("WHILE", NULL);
    addChildNode((yyval.node), (yyvsp[0].node));
}
#line 1443 "yacc.tab.c"
    break;

  case 43: /* for_stmt: FOR OPEN_PARENTHESES assign_stmt SEMICOLON expr SEMICOLON CLOSE_PARENTHESES COLON code_block  */
#line 204 "yacc.y"
                                                                                                      {
    (yyval.node) = createASTNode("FOR", NULL);
    addChildNode((yyval.node), (yyvsp[0].node));
}
#line 1452 "yacc.tab.c"
    break;

  case 44: /* switch_stmt: SWITCH OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON cases default_case  */
#line 210 "yacc.y"
                                                                                    {
    (yyval.node) = createASTNode("SWITCH", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
    addChildNode((yyval.node), (yyvsp[0].node));
}
#line 1462 "yacc.tab.c"
    break;

  case 45: /* cases: CASE expr COLON code_block cases  */
#line 217 "yacc.y"
                                        {
    (yyval.node) = createASTNode("CASE", NULL);
    addChildNode((yyval.node), (yyvsp[-1].node));
}
#line 1471 "yacc.tab.c"
    break;

  case 46: /* cases: %empty  */
#line 221 "yacc.y"
                   {}
#line 1477 "yacc.tab.c"
    break;

  case 47: /* default_case: DEFAULT COLON code_block  */
#line 224 "yacc.y"
                                       {
    (yyval.node) = createASTNode("DEFAULT", NULL);
    addChildNode((yyval.node), (yyvsp[0].node));
}
#line 1486 "yacc.tab.c"
    break;

  case 48: /* default_case: %empty  */
#line 228 "yacc.y"
                          {}
#line 1492 "yacc.tab.c"
    break;

  case 49: /* print_stmt: PRINT OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON  */
#line 231 "yacc.y"
                                                                           {
    (yyval.node) = createASTNode("PRINT", NULL);
}
#line 1500 "yacc.tab.c"
    break;

  case 50: /* print_stmt: PRINTLN OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON  */
#line 234 "yacc.y"
                                                                             {
            (yyval.node) = createASTNode("PRINT", NULL);
          }
#line 1508 "yacc.tab.c"
    break;

  case 55: /* input_stmt: INPUT OPEN_PARENTHESES input_text CLOSE_PARENTHESES SEMICOLON  */
#line 247 "yacc.y"
                                                                          {
    (yyval.node) = createASTNode("INPUT", NULL);
}
#line 1516 "yacc.tab.c"
    break;

  case 61: /* expr: term  */
#line 259 "yacc.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 1522 "yacc.tab.c"
    break;

  case 62: /* expr: call_function  */
#line 260 "yacc.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 1528 "yacc.tab.c"
    break;

  case 63: /* expr: OPEN_PARENTHESES expr CLOSE_PARENTHESES  */
#line 261 "yacc.y"
                                              { (yyval.node) = (yyvsp[-1].node); }
#line 1534 "yacc.tab.c"
    break;

  case 64: /* term: DIGITS  */
#line 264 "yacc.y"
             { 
    (yyval.node) = createASTNode("DIGITOS", NULL);
}
#line 1542 "yacc.tab.c"
    break;

  case 65: /* term: var  */
#line 267 "yacc.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1548 "yacc.tab.c"
    break;

  case 66: /* term: literal  */
#line 268 "yacc.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 1554 "yacc.tab.c"
    break;

  case 67: /* term: DECIMAL  */
#line 269 "yacc.y"
              {
        (yyval.node) = createASTNode("DECIMAL", NULL);
    }
#line 1562 "yacc.tab.c"
    break;

  case 68: /* var: IDENTIFIER  */
#line 274 "yacc.y"
                {
    (yyval.node) = createASTNode("IDENTIFICADOR", NULL);
}
#line 1570 "yacc.tab.c"
    break;

  case 69: /* literal: LITERAL_CHAR  */
#line 280 "yacc.y"
                      { 
    (yyval.node) = createASTNode("CHAR", NULL);
}
#line 1578 "yacc.tab.c"
    break;

  case 70: /* literal: LITERAL_STRING  */
#line 283 "yacc.y"
                         {
            (yyval.node) = createASTNode("STRING", NULL);
         }
#line 1586 "yacc.tab.c"
    break;

  case 71: /* literal: LITERAL_BOOL  */
#line 286 "yacc.y"
                       { 
            (yyval.node) = createASTNode("BOOL", NULL);
         }
#line 1594 "yacc.tab.c"
    break;


#line 1598 "yacc.tab.c"

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

#line 291 "yacc.y"


int main(){
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

int yywrap() 
{
    return 1;
}
