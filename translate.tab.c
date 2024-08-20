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
#include "tabelaDeSimbolos/TabelaDeSimbolos.h"


void addId(char *id, Enumtypes type);

extern void yyerror(const char *);


#line 85 "translate.tab.c"

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
  YYSYMBOL_TYPEDEF = 13,                   /* TYPEDEF  */
  YYSYMBOL_PRINT = 14,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 15,                   /* PRINTLN  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_GOTO = 17,                      /* GOTO  */
  YYSYMBOL_SCANF = 18,                     /* SCANF  */
  YYSYMBOL_INT_MAIN = 19,                  /* INT_MAIN  */
  YYSYMBOL_READ_FILE = 20,                 /* READ_FILE  */
  YYSYMBOL_CLOSE_FILE = 21,                /* CLOSE_FILE  */
  YYSYMBOL_OPEN_PARENTHESES = 22,          /* OPEN_PARENTHESES  */
  YYSYMBOL_CLOSE_PARENTHESES = 23,         /* CLOSE_PARENTHESES  */
  YYSYMBOL_OPEN_BRACKET = 24,              /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 25,             /* CLOSE_BRACKET  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 27,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 28,                     /* COLON  */
  YYSYMBOL_FUNCTION_CALL = 29,             /* FUNCTION_CALL  */
  YYSYMBOL_ARQUIVO = 30,                   /* ARQUIVO  */
  YYSYMBOL_ENUM = 31,                      /* ENUM  */
  YYSYMBOL_STRUCT_KEYWORD = 32,            /* STRUCT_KEYWORD  */
  YYSYMBOL_SWAP = 33,                      /* SWAP  */
  YYSYMBOL_MALLOC = 34,                    /* MALLOC  */
  YYSYMBOL_FREE = 35,                      /* FREE  */
  YYSYMBOL_DANIBOY = 36,                   /* DANIBOY  */
  YYSYMBOL_LT = 37,                        /* LT  */
  YYSYMBOL_GT = 38,                        /* GT  */
  YYSYMBOL_LE = 39,                        /* LE  */
  YYSYMBOL_GE = 40,                        /* GE  */
  YYSYMBOL_EQ = 41,                        /* EQ  */
  YYSYMBOL_NE = 42,                        /* NE  */
  YYSYMBOL_AND = 43,                       /* AND  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_NEGA = 45,                      /* NEGA  */
  YYSYMBOL_SUB = 46,                       /* SUB  */
  YYSYMBOL_MUL = 47,                       /* MUL  */
  YYSYMBOL_DIV = 48,                       /* DIV  */
  YYSYMBOL_MOD = 49,                       /* MOD  */
  YYSYMBOL_INCREMENT = 50,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 51,                 /* DECREMENT  */
  YYSYMBOL_ADD_ASSIGN = 52,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 53,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 54,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 55,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 56,                /* MOD_ASSIGN  */
  YYSYMBOL_XOR = 57,                       /* XOR  */
  YYSYMBOL_LEFT_SHIFT = 58,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 59,               /* RIGHT_SHIFT  */
  YYSYMBOL_QUEST = 60,                     /* QUEST  */
  YYSYMBOL_SEMI_COLON = 61,                /* SEMI_COLON  */
  YYSYMBOL_BLOCK_CLOSE = 62,               /* BLOCK_CLOSE  */
  YYSYMBOL_BLOCK_OPEN = 63,                /* BLOCK_OPEN  */
  YYSYMBOL_DOT = 64,                       /* DOT  */
  YYSYMBOL_ARROW = 65,                     /* ARROW  */
  YYSYMBOL_SUSTENIDO = 66,                 /* SUSTENIDO  */
  YYSYMBOL_ASSIGN = 67,                    /* ASSIGN  */
  YYSYMBOL_ADD = 68,                       /* ADD  */
  YYSYMBOL_MINUS = 69,                     /* MINUS  */
  YYSYMBOL_INPUT = 70,                     /* INPUT  */
  YYSYMBOL_LITERAL_STRING = 71,            /* LITERAL_STRING  */
  YYSYMBOL_LITERAL_BOOL = 72,              /* LITERAL_BOOL  */
  YYSYMBOL_LITERAL_CHAR = 73,              /* LITERAL_CHAR  */
  YYSYMBOL_IDENTIFIER = 74,                /* IDENTIFIER  */
  YYSYMBOL_DIGITS = 75,                    /* DIGITS  */
  YYSYMBOL_DECIMAL = 76,                   /* DECIMAL  */
  YYSYMBOL_FUNCTION = 77,                  /* FUNCTION  */
  YYSYMBOL_RELACIONAL_OPERATORS = 78,      /* RELACIONAL_OPERATORS  */
  YYSYMBOL_LOGIC_OPERATORS = 79,           /* LOGIC_OPERATORS  */
  YYSYMBOL_TYPE = 80,                      /* TYPE  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_type = 82,                      /* type  */
  YYSYMBOL_program = 83,                   /* program  */
  YYSYMBOL_functions = 84,                 /* functions  */
  YYSYMBOL_function = 85,                  /* function  */
  YYSYMBOL_parameters = 86,                /* parameters  */
  YYSYMBOL_parameter = 87,                 /* parameter  */
  YYSYMBOL_main = 88,                      /* main  */
  YYSYMBOL_stmts = 89,                     /* stmts  */
  YYSYMBOL_stmt = 90,                      /* stmt  */
  YYSYMBOL_command = 91,                   /* command  */
  YYSYMBOL_file_stmt = 92,                 /* file_stmt  */
  YYSYMBOL_file_open = 93,                 /* file_open  */
  YYSYMBOL_file_close = 94,                /* file_close  */
  YYSYMBOL_call_function = 95,             /* call_function  */
  YYSYMBOL_real_parameters = 96,           /* real_parameters  */
  YYSYMBOL_return_stmt = 97,               /* return_stmt  */
  YYSYMBOL_assign_stmt = 98,               /* assign_stmt  */
  YYSYMBOL_declaration = 99,               /* declaration  */
  YYSYMBOL_code_block = 100,               /* code_block  */
  YYSYMBOL_if_stmt = 101,                  /* if_stmt  */
  YYSYMBOL_else_stmt = 102,                /* else_stmt  */
  YYSYMBOL_while_stmt = 103,               /* while_stmt  */
  YYSYMBOL_for_stmt = 104,                 /* for_stmt  */
  YYSYMBOL_switch_stmt = 105,              /* switch_stmt  */
  YYSYMBOL_cases = 106,                    /* cases  */
  YYSYMBOL_default_case = 107,             /* default_case  */
  YYSYMBOL_print_stmt = 108,               /* print_stmt  */
  YYSYMBOL_print_texts = 109,              /* print_texts  */
  YYSYMBOL_print_text = 110,               /* print_text  */
  YYSYMBOL_input_stmt = 111,               /* input_stmt  */
  YYSYMBOL_input_text = 112,               /* input_text  */
  YYSYMBOL_condition = 113,                /* condition  */
  YYSYMBOL_increment_stmt = 114,           /* increment_stmt  */
  YYSYMBOL_expr = 115,                     /* expr  */
  YYSYMBOL_term = 116,                     /* term  */
  YYSYMBOL_var = 117,                      /* var  */
  YYSYMBOL_literal = 118                   /* literal  */
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
#define YYLAST   154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    78,    79,    82,    83,    86,    89,    90,
      93,    94,    97,   100,   101,   104,   105,   106,   107,   108,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   122,
     123,   126,   129,   132,   135,   136,   139,   140,   143,   146,
     149,   152,   155,   156,   157,   160,   163,   166,   169,   170,
     173,   174,   177,   178,   181,   182,   185,   186,   189,   192,
     193,   196,   197,   200,   201,   204,   205,   206,   209,   210,
     211,   212,   215,   218,   219,   220
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
  "TYPEDEF", "PRINT", "PRINTLN", "WHILE", "GOTO", "SCANF", "INT_MAIN",
  "READ_FILE", "CLOSE_FILE", "OPEN_PARENTHESES", "CLOSE_PARENTHESES",
  "OPEN_BRACKET", "CLOSE_BRACKET", "COMMA", "SEMICOLON", "COLON",
  "FUNCTION_CALL", "ARQUIVO", "ENUM", "STRUCT_KEYWORD", "SWAP", "MALLOC",
  "FREE", "DANIBOY", "LT", "GT", "LE", "GE", "EQ", "NE", "AND", "OR",
  "NEGA", "SUB", "MUL", "DIV", "MOD", "INCREMENT", "DECREMENT",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "XOR", "LEFT_SHIFT", "RIGHT_SHIFT", "QUEST", "SEMI_COLON", "BLOCK_CLOSE",
  "BLOCK_OPEN", "DOT", "ARROW", "SUSTENIDO", "ASSIGN", "ADD", "MINUS",
  "INPUT", "LITERAL_STRING", "LITERAL_BOOL", "LITERAL_CHAR", "IDENTIFIER",
  "DIGITS", "DECIMAL", "FUNCTION", "RELACIONAL_OPERATORS",
  "LOGIC_OPERATORS", "TYPE", "$accept", "type", "program", "functions",
  "function", "parameters", "parameter", "main", "stmts", "stmt",
  "command", "file_stmt", "file_open", "file_close", "call_function",
  "real_parameters", "return_stmt", "assign_stmt", "declaration",
  "code_block", "if_stmt", "else_stmt", "while_stmt", "for_stmt",
  "switch_stmt", "cases", "default_case", "print_stmt", "print_texts",
  "print_text", "input_stmt", "input_text", "condition", "increment_stmt",
  "expr", "term", "var", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-7)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -16,   -67,    12,    -1,   -52,    11,   -77,     7,   -77,   -77,
     -50,    23,    24,    41,    20,    22,    28,    29,    30,    31,
      35,    37,    42,   -77,   -14,   -77,     7,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,    -2,    -3,    44,    47,     2,    47,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,    45,   -77,   -77,   -77,   -77,   -77,
      47,   -63,   -63,    47,     4,     2,    47,    51,    48,   -77,
      47,   -77,   -50,    59,    61,   -42,   -77,    58,    63,   -77,
      65,   -77,     1,   -77,   -77,     3,    66,    69,     8,   -77,
       9,   -77,    25,   -77,    71,    44,    38,    72,    47,    47,
      47,   -77,    75,    77,   -63,    78,    83,    79,    97,     2,
     101,    47,    76,   -77,   -77,     7,    67,   -77,   -77,   102,
     121,   -77,   -77,   -77,    67,   -77,   -77,   -77,   -77,   -77,
     106,    73,     7,    36,     2,    47,   122,   -77,   -77,   -77,
      74,   109,   116,   -77,   117,   -25,   111,   113,   -77,   -77,
      67,    47,   114,    80,    81,    67,    67,   -77,   120,    67,
     -77,   -77,   121,   -77,   118,   -77,   -77,    67,    36,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     6,     0,     1,    14,     4,     5,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     2,     0,    12,    14,    19,    28,    29,
      30,    23,    20,    21,    26,    15,    16,    17,    18,    22,
      27,     0,     0,     9,     0,     0,     0,    37,    74,    75,
      73,    68,    71,    66,     0,    65,    69,    70,    25,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,    10,    11,     0,     0,     0,    72,     0,     0,    36,
       0,    56,     0,    54,    57,     0,     0,     0,     0,    59,
       0,    34,     0,    39,     0,     9,     0,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     8,    14,     0,    61,    62,     0,
      49,    52,    55,    53,     0,    32,    58,    60,    33,    35,
       0,     0,    14,    44,     0,     0,    51,    45,    31,     7,
       0,     0,     0,    41,     0,     0,     0,     0,    47,    40,
       0,     0,     0,     0,     0,     0,     0,    43,     0,     0,
      63,    64,    49,    50,     0,    46,    48,     0,    44,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,    -5,   -77,   140,   -77,    50,    82,   -77,   -22,   -77,
     -77,   -77,   -77,   -77,    -6,   -77,   -77,   104,   -77,   -76,
     -77,   -21,   -77,   -77,   -77,   -11,   -77,   -77,    90,    49,
     -77,   -77,   -61,   -77,    -4,   -77,    -7,   -77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    24,     2,     3,     4,    73,    43,     8,    25,    26,
      27,    28,    29,    30,    53,    90,    32,    33,    34,   133,
      35,   143,    36,    37,    38,   136,   148,    39,    82,    83,
      40,    88,    74,   144,    75,    55,    56,    57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    31,    86,    -6,    69,    42,    67,     5,    81,    54,
      11,    76,     6,    12,    13,    14,    15,    16,     7,    41,
      31,    17,    18,    19,   103,     1,   105,   104,    20,   104,
      23,   108,   110,    10,   109,   111,    98,    99,    41,   119,
     141,   142,    78,   153,   154,    44,    45,    58,   137,    59,
      60,    61,    62,    63,    84,    84,    80,    64,    89,    65,
      68,     1,    91,    46,    66,    70,    94,    42,    47,    46,
      72,    71,    79,    92,   157,    93,    76,    21,    87,   162,
     163,    22,    96,   165,    97,   100,   101,    23,   102,   106,
     158,   168,   107,   131,   117,   118,   112,    84,   113,   130,
     116,   115,   127,   120,   121,   123,   125,   129,    41,    31,
     140,   124,    48,    49,    50,    22,    51,    52,    48,    49,
      50,    22,    51,    52,   126,    41,    31,   145,   128,   134,
     132,   146,   135,   138,   147,   139,   149,   150,   151,   155,
     152,   156,   159,   164,     9,   114,   167,   169,   160,    77,
     161,   166,    85,   122,    95
};

static const yytype_uint8 yycheck[] =
{
       7,     7,    63,    19,    26,    10,    20,    74,    71,    13,
       3,    74,     0,     6,     7,     8,     9,    10,    19,    26,
      26,    14,    15,    16,    23,    77,    23,    26,    21,    26,
      80,    23,    23,    22,    26,    26,    78,    79,    45,   100,
       4,     5,    46,    68,    69,    22,    22,    27,   124,    27,
      22,    22,    22,    22,    61,    62,    60,    22,    65,    22,
      74,    77,    66,    22,    22,    67,    70,    72,    27,    22,
      26,    74,    27,    22,   150,    27,    74,    70,    74,   155,
     156,    74,    23,   159,    23,    27,    23,    80,    23,    23,
     151,   167,    23,   115,    98,    99,    71,   104,    27,    23,
      28,    63,   109,    28,    27,    27,    27,   111,   115,   115,
     132,    28,    71,    72,    73,    74,    75,    76,    71,    72,
      73,    74,    75,    76,    27,   132,   132,   134,    27,    27,
      63,   135,    11,    27,    12,    62,    62,    28,    22,    28,
      23,    28,    28,    23,     4,    95,    28,   168,    68,    45,
      69,   162,    62,   104,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    77,    83,    84,    85,    74,     0,    19,    88,    84,
      22,     3,     6,     7,     8,     9,    10,    14,    15,    16,
      21,    70,    74,    80,    82,    89,    90,    91,    92,    93,
      94,    95,    97,    98,    99,   101,   103,   104,   105,   108,
     111,   117,    82,    87,    22,    22,    22,    27,    71,    72,
      73,    75,    76,    95,   115,   116,   117,   118,    27,    27,
      22,    22,    22,    22,    22,    22,    22,    20,    74,    89,
      67,    74,    26,    86,   113,   115,    74,    98,   115,    27,
     115,    71,   109,   110,   117,   109,   113,    74,   112,   117,
      96,   115,    22,    27,   115,    87,    23,    23,    78,    79,
      27,    23,    23,    23,    26,    23,    23,    23,    23,    26,
      23,    26,    71,    27,    86,    63,    28,   115,   115,   113,
      28,    27,   110,    27,    28,    27,    27,   117,    27,   115,
      23,    89,    63,   100,    27,    11,   106,   100,    27,    62,
      89,     4,     5,   102,   114,   117,   115,    12,   107,    62,
      28,    22,    23,    68,    69,    28,    28,   100,   113,    28,
      68,    69,   100,   100,    23,   100,   106,    28,   100,   102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    81,    82,    83,    83,    84,    84,    85,    86,    86,
      87,    87,    88,    89,    89,    90,    90,    90,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    94,    95,    96,    96,    97,    97,    98,    99,
     100,   101,   102,   102,   102,   103,   104,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   116,   116,
     116,   116,   117,   118,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     0,     9,     3,     0,
       2,     0,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     6,     5,     5,     1,     3,     3,     2,     4,     3,
       3,     7,     7,     3,     0,     6,    10,     7,     5,     0,
       3,     0,     5,     5,     1,     3,     1,     1,     5,     1,
       3,     3,     3,     3,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 75 "translate.y"
           { (yyval.type) = TYPE; }
#line 1308 "translate.tab.c"
    break;

  case 13: /* stmts: stmt stmts  */
#line 100 "translate.y"
                  { (yyval.type) = STMT; }
#line 1314 "translate.tab.c"
    break;

  case 14: /* stmts: %empty  */
#line 101 "translate.y"
                   { (yyval.type) = NONE; }
#line 1320 "translate.tab.c"
    break;

  case 33: /* call_function: IDENTIFIER OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON  */
#line 132 "translate.y"
                                                                                       { (yyval.type) = FUNCTION_CALL; }
#line 1326 "translate.tab.c"
    break;

  case 34: /* real_parameters: expr  */
#line 135 "translate.y"
                      { (yyval.str) = (yyvsp[0].type); }
#line 1332 "translate.tab.c"
    break;

  case 63: /* increment_stmt: var ADD ADD  */
#line 200 "translate.y"
                            { (yyval.type) = (yyvsp[-2].identifier).type; }
#line 1338 "translate.tab.c"
    break;

  case 64: /* increment_stmt: var MINUS MINUS  */
#line 201 "translate.y"
                                { (yyval.type) = (yyvsp[-2].identifier).type; }
#line 1344 "translate.tab.c"
    break;

  case 67: /* expr: OPEN_PARENTHESES expr CLOSE_PARENTHESES  */
#line 206 "translate.y"
                                              { (yyval.type) = (yyvsp[-1].type).type; }
#line 1350 "translate.tab.c"
    break;

  case 68: /* term: DIGITS  */
#line 209 "translate.y"
             { (yyval.type) = INT; }
#line 1356 "translate.tab.c"
    break;

  case 69: /* term: var  */
#line 210 "translate.y"
          { (yyval.type) = (yyvsp[0].identifier).type; }
#line 1362 "translate.tab.c"
    break;

  case 70: /* term: literal  */
#line 211 "translate.y"
              { (yyval.type) = (yyvsp[0].str); }
#line 1368 "translate.tab.c"
    break;

  case 71: /* term: DECIMAL  */
#line 212 "translate.y"
              { (yyval.type) = FLOAT; }
#line 1374 "translate.tab.c"
    break;

  case 73: /* literal: LITERAL_CHAR  */
#line 218 "translate.y"
                      { (yyval.str) = LITERAL_CHAR; }
#line 1380 "translate.tab.c"
    break;


#line 1384 "translate.tab.c"

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

#line 223 "translate.y"

/*
void addId(char *id, Enumtypes type) {
    if(buscaSimbolo(TabelaDeSimbolos,id)) {
        char msg[100];
        sprintf(msg, "Redeclaração do identificador \"%s\"", id);
        yyerror(msg);
        on_exit();
        exit(0);
    }
    insereSimbolo(tabelaDeSimbolos, id, TipoDeDado tipoDado, *endereco, int linha, Tipo tipoSimbolo);
    symbolTableInsert(st, symbolNew(id, type, 1));
    imprimeTabelaDeSimbolos(TabelaDeSimbolos);
}*/

int main(){
    TabelaDeSimbolos tabelaDeSimbolos;
    return yyparse();
}

void yyerror(const char *s)
{
    fprintf(stderr, "Error: %s\n", s);
}

int yywrap()
{
    return 1;
}
