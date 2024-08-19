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

#include stdio.h
#include stdlib.h
#include string.h
#include "tabelaDeSimbolos/TabelaDeSimbolos.h"

#line 78 "translate.tab.c"

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
  YYSYMBOL_STRUCT = 13,                    /* STRUCT  */
  YYSYMBOL_TYPEDEF = 14,                   /* TYPEDEF  */
  YYSYMBOL_PRINT = 15,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 16,                   /* PRINTLN  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_GOTO = 18,                      /* GOTO  */
  YYSYMBOL_SCANF = 19,                     /* SCANF  */
  YYSYMBOL_VOID_MAIN = 20,                 /* VOID_MAIN  */
  YYSYMBOL_INT_MAIN = 21,                  /* INT_MAIN  */
  YYSYMBOL_READ_FILE = 22,                 /* READ_FILE  */
  YYSYMBOL_CLOSE_FILE = 23,                /* CLOSE_FILE  */
  YYSYMBOL_OPENING_MODE = 24,              /* OPENING_MODE  */
  YYSYMBOL_OPEN_KEY = 25,                  /* OPEN_KEY  */
  YYSYMBOL_CLOSE_KEY = 26,                 /* CLOSE_KEY  */
  YYSYMBOL_OPEN_PARENTHESES = 27,          /* OPEN_PARENTHESES  */
  YYSYMBOL_CLOSE_PARENTHESES = 28,         /* CLOSE_PARENTHESES  */
  YYSYMBOL_OPEN_BRACKET = 29,              /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 30,             /* CLOSE_BRACKET  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 32,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 33,                     /* COLON  */
  YYSYMBOL_TIPO = 34,                      /* TIPO  */
  YYSYMBOL_CALL = 35,                      /* CALL  */
  YYSYMBOL_ARQUIVO = 36,                   /* ARQUIVO  */
  YYSYMBOL_ENUM = 37,                      /* ENUM  */
  YYSYMBOL_STRUCT_KEYWORD = 38,            /* STRUCT_KEYWORD  */
  YYSYMBOL_SWAP = 39,                      /* SWAP  */
  YYSYMBOL_MALLOC = 40,                    /* MALLOC  */
  YYSYMBOL_FREE = 41,                      /* FREE  */
  YYSYMBOL_DANIBOY = 42,                   /* DANIBOY  */
  YYSYMBOL_LT = 43,                        /* LT  */
  YYSYMBOL_GT = 44,                        /* GT  */
  YYSYMBOL_LE = 45,                        /* LE  */
  YYSYMBOL_GE = 46,                        /* GE  */
  YYSYMBOL_EQ = 47,                        /* EQ  */
  YYSYMBOL_NE = 48,                        /* NE  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_OR = 50,                        /* OR  */
  YYSYMBOL_NEGA = 51,                      /* NEGA  */
  YYSYMBOL_SUB = 52,                       /* SUB  */
  YYSYMBOL_MUL = 53,                       /* MUL  */
  YYSYMBOL_DIV = 54,                       /* DIV  */
  YYSYMBOL_MOD = 55,                       /* MOD  */
  YYSYMBOL_INCREMENT = 56,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 57,                 /* DECREMENT  */
  YYSYMBOL_ADD_ASSIGN = 58,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 59,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 60,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 61,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 62,                /* MOD_ASSIGN  */
  YYSYMBOL_XOR = 63,                       /* XOR  */
  YYSYMBOL_LEFT_SHIFT = 64,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 65,               /* RIGHT_SHIFT  */
  YYSYMBOL_QUEST = 66,                     /* QUEST  */
  YYSYMBOL_SEMI_COLON = 67,                /* SEMI_COLON  */
  YYSYMBOL_BLOCK_CLOSE = 68,               /* BLOCK_CLOSE  */
  YYSYMBOL_BLOCK_OPEN = 69,                /* BLOCK_OPEN  */
  YYSYMBOL_DOT = 70,                       /* DOT  */
  YYSYMBOL_ARROW = 71,                     /* ARROW  */
  YYSYMBOL_SUSTENIDO = 72,                 /* SUSTENIDO  */
  YYSYMBOL_ASSIGN = 73,                    /* ASSIGN  */
  YYSYMBOL_ADD = 74,                       /* ADD  */
  YYSYMBOL_MINUS = 75,                     /* MINUS  */
  YYSYMBOL_INPUT = 76,                     /* INPUT  */
  YYSYMBOL_LITERAL_STRING = 77,            /* LITERAL_STRING  */
  YYSYMBOL_LITERAL_BOOL = 78,              /* LITERAL_BOOL  */
  YYSYMBOL_LITERAL_CHAR = 79,              /* LITERAL_CHAR  */
  YYSYMBOL_IDENTIFIER = 80,                /* IDENTIFIER  */
  YYSYMBOL_DIGITS = 81,                    /* DIGITS  */
  YYSYMBOL_DECIMAL = 82,                   /* DECIMAL  */
  YYSYMBOL_FUNCTION = 83,                  /* FUNCTION  */
  YYSYMBOL_RELACIONAL_OPERATORS = 84,      /* RELACIONAL_OPERATORS  */
  YYSYMBOL_LOGIC_OPERATORS = 85,           /* LOGIC_OPERATORS  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_type = 87,                      /* type  */
  YYSYMBOL_program = 88,                   /* program  */
  YYSYMBOL_functions = 89,                 /* functions  */
  YYSYMBOL_function = 90,                  /* function  */
  YYSYMBOL_stmts = 91,                     /* stmts  */
  YYSYMBOL_stmt = 92,                      /* stmt  */
  YYSYMBOL_command = 93,                   /* command  */
  YYSYMBOL_file = 94,                      /* file  */
  YYSYMBOL_file_open = 95,                 /* file_open  */
  YYSYMBOL_file_close = 96,                /* file_close  */
  YYSYMBOL_parameters = 97,                /* parameters  */
  YYSYMBOL_parameter = 98,                 /* parameter  */
  YYSYMBOL_call_function = 99,             /* call_function  */
  YYSYMBOL_real_parameters = 100,          /* real_parameters  */
  YYSYMBOL_return = 101,                   /* return  */
  YYSYMBOL_assign = 102,                   /* assign  */
  YYSYMBOL_declarations = 103,             /* declarations  */
  YYSYMBOL_declaration = 104,              /* declaration  */
  YYSYMBOL_code_block = 105,               /* code_block  */
  YYSYMBOL_if = 106,                       /* if  */
  YYSYMBOL_elif = 107,                     /* elif  */
  YYSYMBOL_else = 108,                     /* else  */
  YYSYMBOL_while = 109,                    /* while  */
  YYSYMBOL_for = 110,                      /* for  */
  YYSYMBOL_switch = 111,                   /* switch  */
  YYSYMBOL_cases = 112,                    /* cases  */
  YYSYMBOL_default = 113,                  /* default  */
  YYSYMBOL_print = 114,                    /* print  */
  YYSYMBOL_print_texts = 115,              /* print_texts  */
  YYSYMBOL_print_text = 116,               /* print_text  */
  YYSYMBOL_input = 117,                    /* input  */
  YYSYMBOL_input_text = 118,               /* input_text  */
  YYSYMBOL_condition = 119,                /* condition  */
  YYSYMBOL_increment = 120,                /* increment  */
  YYSYMBOL_expr = 121,                     /* expr  */
  YYSYMBOL_term = 122,                     /* term  */
  YYSYMBOL_var = 123,                      /* var  */
  YYSYMBOL_literal = 124                   /* literal  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   340


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    56,    57,    58,    59,    60,    63,    64,
      65,    66,    69,    70,    73,    76,    77,    80,    81,    82,
      83,    84,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    98,    99,   102,   105,   108,   109,   112,   115,   118,
     119,   122,   123,   126,   129,   130,   133,   136,   139,   140,
     143,   144,   147,   150,   153,   156,   159,   160,   163,   164,
     167,   168,   171,   172,   175,   176,   179,   182,   183,   186,
     187,   188,   191,   192,   193,   196,   197,   198,   201,   202,
     203,   204,   207,   210,   211,   212
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
  "STRUCT", "TYPEDEF", "PRINT", "PRINTLN", "WHILE", "GOTO", "SCANF",
  "VOID_MAIN", "INT_MAIN", "READ_FILE", "CLOSE_FILE", "OPENING_MODE",
  "OPEN_KEY", "CLOSE_KEY", "OPEN_PARENTHESES", "CLOSE_PARENTHESES",
  "OPEN_BRACKET", "CLOSE_BRACKET", "COMMA", "SEMICOLON", "COLON", "TIPO",
  "CALL", "ARQUIVO", "ENUM", "STRUCT_KEYWORD", "SWAP", "MALLOC", "FREE",
  "DANIBOY", "LT", "GT", "LE", "GE", "EQ", "NE", "AND", "OR", "NEGA",
  "SUB", "MUL", "DIV", "MOD", "INCREMENT", "DECREMENT", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "XOR",
  "LEFT_SHIFT", "RIGHT_SHIFT", "QUEST", "SEMI_COLON", "BLOCK_CLOSE",
  "BLOCK_OPEN", "DOT", "ARROW", "SUSTENIDO", "ASSIGN", "ADD", "MINUS",
  "INPUT", "LITERAL_STRING", "LITERAL_BOOL", "LITERAL_CHAR", "IDENTIFIER",
  "DIGITS", "DECIMAL", "FUNCTION", "RELACIONAL_OPERATORS",
  "LOGIC_OPERATORS", "$accept", "type", "program", "functions", "function",
  "stmts", "stmt", "command", "file", "file_open", "file_close",
  "parameters", "parameter", "call_function", "real_parameters", "return",
  "assign", "declarations", "declaration", "code_block", "if", "elif",
  "else", "while", "for", "switch", "cases", "default", "print",
  "print_texts", "print_text", "input", "input_text", "condition",
  "increment", "expr", "term", "var", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-118)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -118,     9,  -118,   109,   109,   -68,   -66,  -118,    24,    25,
     -22,    22,    32,    38,  -118,    43,    44,    45,  -118,  -118,
      46,  -118,  -118,  -118,    48,    55,   -11,  -118,   109,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,     1,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,   -41,  -118,    56,  -118,    -1,   -13,
      -1,  -118,  -118,  -118,  -118,  -118,  -118,  -118,    52,  -118,
    -118,  -118,  -118,  -118,     7,   -62,   -62,    -1,     8,   -13,
      -1,    58,    54,  -118,    10,  -118,    -1,     1,    61,   -43,
    -118,    62,    65,  -118,    67,  -118,   -12,  -118,  -118,    -8,
      69,    70,    -4,  -118,     5,  -118,    23,  -118,    71,    19,
       6,  -118,    72,    -1,    -1,    -1,  -118,    74,    76,   -62,
      77,    80,    78,    88,   -13,    89,    -1,    73,  -118,  -118,
      98,     1,   102,  -118,  -118,    96,   120,  -118,  -118,  -118,
     102,  -118,  -118,  -118,  -118,  -118,   111,   109,  -118,   109,
      40,   -13,    60,   121,  -118,   116,   119,   122,   117,   124,
    -118,  -118,   125,   -25,   123,   126,  -118,   128,  -118,  -118,
     102,    -1,   131,    75,    79,   109,   109,  -118,  -118,   127,
     102,  -118,  -118,   120,  -118,   134,  -118,  -118,   102,    40,
    -118,  -118
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     1,    16,    16,     0,     9,    12,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     4,     3,
       0,     2,     6,     7,     0,    82,     0,    11,    16,    21,
      30,    31,    32,    25,    22,    23,    28,    44,    17,    18,
      19,    20,    24,    29,     0,    10,     0,    13,    71,     0,
       0,    42,    84,    85,    83,    78,    81,    76,     0,    75,
      79,    80,    27,    26,     0,     0,     0,    71,     0,     0,
       0,     0,     0,    15,     0,    45,     0,     0,     0,     0,
      82,     0,     0,    41,     0,    64,     0,    62,    65,     0,
       0,     0,     0,    67,     0,    39,     0,    46,     0,     0,
       0,    35,     0,     0,     0,    71,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    37,
       0,     0,     0,    69,    70,     0,    57,    60,    63,    61,
       0,    34,    66,    68,    38,    40,     0,    16,    36,    16,
       0,    74,     0,    59,    53,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,    55,     0,    14,    47,
       0,    71,     0,     0,     0,    16,    16,    33,    52,     0,
       0,    72,    73,    57,    58,     0,    54,    56,     0,     0,
      50,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,   -30,  -118,  -118,   146,     3,  -118,  -118,  -118,  -118,
    -118,  -118,    36,     0,  -118,  -118,   112,  -118,   135,  -117,
    -118,   -21,    -9,  -118,  -118,  -118,     2,  -118,  -118,   106,
      64,  -118,  -118,   -65,  -118,    -2,  -118,    -3,  -118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,     1,     6,     7,    27,    28,    29,    30,    31,
      32,   100,   101,    57,    94,    34,    35,    36,    37,   140,
      38,   150,   151,    39,    40,    41,   143,   156,    42,    86,
      87,    43,    92,    78,   152,    79,    59,    60,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    44,    90,    33,    33,    50,    74,    45,    58,     2,
      51,    71,    46,   144,    14,    85,   108,     5,    80,   109,
     110,    18,    19,   109,   113,    44,    50,   114,    33,     3,
       4,    73,    76,   115,   120,    21,   116,   121,    22,    23,
     125,   103,   104,   168,   148,   149,    44,    99,    82,   163,
     164,    48,    49,   176,    62,    52,    53,    54,    25,    55,
      56,   179,    88,    88,    63,    64,    93,    80,    95,    72,
      65,    66,    67,    68,    98,    69,    52,    53,    54,    25,
      55,    56,    70,    77,    83,    96,    97,    84,    91,   102,
      72,    99,     5,   106,   105,   107,   169,   111,   112,   119,
     117,   123,   124,   118,   136,   122,    88,   126,   127,   129,
     131,   133,     8,   130,   135,     9,    10,    11,    12,    13,
     132,   134,    14,   137,    15,    16,    17,   139,   141,    18,
      19,   142,    20,   155,    44,   145,    44,    33,   153,    33,
     146,   154,   147,    21,   157,   158,    22,    23,   159,   171,
     160,   161,    47,   162,   172,   175,   165,   138,   180,   166,
     167,    81,    44,    44,   170,    33,    33,   178,   173,   174,
     181,    75,    89,   128,     0,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    25
};

static const yytype_int16 yycheck[] =
{
       3,     4,    67,     3,     4,    27,    36,     4,    10,     0,
      32,    22,    80,   130,    13,    77,    28,    83,    80,    31,
      28,    20,    21,    31,    28,    28,    27,    31,    28,    20,
      21,    28,    73,    28,    28,    34,    31,    31,    37,    38,
     105,    84,    85,   160,     4,     5,    49,    77,    50,    74,
      75,    27,    27,   170,    32,    77,    78,    79,    80,    81,
      82,   178,    65,    66,    32,    27,    69,    80,    70,    80,
      27,    27,    27,    27,    76,    27,    77,    78,    79,    80,
      81,    82,    27,    27,    32,    27,    32,    80,    80,    28,
      80,   121,    83,    28,    32,    28,   161,    28,    28,    80,
      77,   103,   104,    32,    31,    33,   109,    33,    32,    32,
      32,   114,     3,    33,   116,     6,     7,     8,     9,    10,
      32,    32,    13,    25,    15,    16,    17,    25,    32,    20,
      21,    11,    23,    12,   137,    24,   139,   137,   141,   139,
     137,    81,   139,    34,    28,    26,    37,    38,    26,    74,
      33,    27,     6,    28,    75,    28,    33,   121,   179,    33,
      32,    49,   165,   166,    33,   165,   166,    33,   165,   166,
     179,    36,    66,   109,    -1,   173,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    88,     0,    20,    21,    83,    89,    90,     3,     6,
       7,     8,     9,    10,    13,    15,    16,    17,    20,    21,
      23,    34,    37,    38,    76,    80,    87,    91,    92,    93,
      94,    95,    96,    99,   101,   102,   103,   104,   106,   109,
     110,   111,   114,   117,   123,    91,    80,    90,    27,    27,
      27,    32,    77,    78,    79,    81,    82,    99,   121,   122,
     123,   124,    32,    32,    27,    27,    27,    27,    27,    27,
      27,    22,    80,    91,    87,   104,    73,    27,   119,   121,
      80,   102,   121,    32,    80,    77,   115,   116,   123,   115,
     119,    80,   118,   123,   100,   121,    27,    32,   121,    87,
      97,    98,    28,    84,    85,    32,    28,    28,    28,    31,
      28,    28,    28,    28,    31,    28,    31,    77,    32,    80,
      28,    31,    33,   121,   121,   119,    33,    32,   116,    32,
      33,    32,    32,   123,    32,   121,    31,    25,    98,    25,
     105,    32,    11,   112,   105,    24,    91,    91,     4,     5,
     107,   108,   120,   123,    81,    12,   113,    28,    26,    26,
      33,    27,    28,    74,    75,    33,    33,    32,   105,   119,
      33,    74,    75,    91,    91,    28,   105,   112,    33,   105,
     107,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    89,    89,    90,    91,    91,    92,    92,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    95,    96,    97,    97,    98,    99,   100,
     100,   101,   101,   102,   103,   103,   104,   105,   106,   106,
     107,   107,   108,   109,   110,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   122,   122,
     122,   122,   123,   124,   124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     0,     2,
       3,     3,     1,     2,     8,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     8,     5,     1,     3,     2,     5,     1,
       3,     3,     2,     4,     1,     2,     3,     3,     7,     7,
       7,     7,     3,     6,    10,     7,     5,     0,     3,     0,
       5,     5,     1,     3,     1,     1,     5,     1,     3,     3,
       3,     0,     3,     3,     0,     1,     1,     3,     1,     1,
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
  case 17: /* stmt: if  */
#line 80 "translate.y"
         {addId(fezALista, palavraChave);}
#line 1323 "translate.tab.c"
    break;

  case 18: /* stmt: while  */
#line 81 "translate.y"
            {addId(eAGreve, palavraChave);}
#line 1329 "translate.tab.c"
    break;


#line 1333 "translate.tab.c"

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

#line 215 "translate.y"


void addId(char *id, Enumtypes type) {
    if(symbolTableFindInBlock(st, id)) {
        char msg[100];
        sprintf(msg, "Redeclaração do identificador \"%s\"", id);
        yyerror(msg);
        onExit();
        exit(0);
    }
    symbolTableInsert(st, symbolNew(id, type, 1));
    imprimeTabelaDeSimbolos(tabelaDeSimbolos);
}

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
