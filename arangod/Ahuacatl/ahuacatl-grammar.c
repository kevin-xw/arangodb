/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         Ahuacatlparse
#define yylex           Ahuacatllex
#define yyerror         Ahuacatlerror
#define yydebug         Ahuacatldebug
#define yynerrs         Ahuacatlnerrs


/* Copy the first part of user declarations.  */
#line 10 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>

#include <Basics/Common.h>
#include <BasicsC/conversions.h>
#include <BasicsC/tri-strings.h>

#include "Ahuacatl/ahuacatl-ast-node.h"
#include "Ahuacatl/ahuacatl-context.h"
#include "Ahuacatl/ahuacatl-error.h"
#include "Ahuacatl/ahuacatl-parser.h"
#include "Ahuacatl/ahuacatl-parser-functions.h"
#include "Ahuacatl/ahuacatl-scope.h"

#line 88 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ahuacatl-grammar.h".  */
#ifndef YY_AHUACATL_ARANGOD_AHUACATL_AHUACATL_GRAMMAR_H_INCLUDED
# define YY_AHUACATL_ARANGOD_AHUACATL_AHUACATL_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int Ahuacatldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_END = 0,
    T_FOR = 258,
    T_LET = 259,
    T_FILTER = 260,
    T_RETURN = 261,
    T_COLLECT = 262,
    T_SORT = 263,
    T_LIMIT = 264,
    T_ASC = 265,
    T_DESC = 266,
    T_IN = 267,
    T_INTO = 268,
    T_FROM = 269,
    T_IGNORE = 270,
    T_REMOVE = 271,
    T_SAVE = 272,
    T_UPDATE = 273,
    T_REPLACE = 274,
    T_NULL = 275,
    T_TRUE = 276,
    T_FALSE = 277,
    T_STRING = 278,
    T_QUOTED_STRING = 279,
    T_INTEGER = 280,
    T_DOUBLE = 281,
    T_PARAMETER = 282,
    T_ASSIGN = 283,
    T_NOT = 284,
    T_AND = 285,
    T_OR = 286,
    T_EQ = 287,
    T_NE = 288,
    T_LT = 289,
    T_GT = 290,
    T_LE = 291,
    T_GE = 292,
    T_PLUS = 293,
    T_MINUS = 294,
    T_TIMES = 295,
    T_DIV = 296,
    T_MOD = 297,
    T_EXPAND = 298,
    T_QUESTION = 299,
    T_COLON = 300,
    T_SCOPE = 301,
    T_RANGE = 302,
    T_COMMA = 303,
    T_OPEN = 304,
    T_CLOSE = 305,
    T_DOC_OPEN = 306,
    T_DOC_CLOSE = 307,
    T_LIST_OPEN = 308,
    T_LIST_CLOSE = 309,
    UMINUS = 310,
    UPLUS = 311,
    FUNCCALL = 312,
    REFERENCE = 313,
    INDEXED = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:355  */

  TRI_aql_node_t* node;
  char* strval;
  bool boolval;
  int64_t intval;

#line 196 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int Ahuacatlparse (TRI_aql_context_t* const context);

#endif /* !YY_AHUACATL_ARANGOD_AHUACATL_AHUACATL_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 33 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:358  */


////////////////////////////////////////////////////////////////////////////////
/// @brief forward for lexer function defined in ahuacatl-tokens.l
////////////////////////////////////////////////////////////////////////////////

int Ahuacatllex (YYSTYPE*, YYLTYPE*, void*);
 
////////////////////////////////////////////////////////////////////////////////
/// @brief register parse error
////////////////////////////////////////////////////////////////////////////////

void Ahuacatlerror (YYLTYPE* locp, TRI_aql_context_t* const context, const char* err) {
  TRI_SetErrorParseAql(context, err, locp->first_line, locp->first_column);
}

////////////////////////////////////////////////////////////////////////////////
/// @brief shortcut macro for signalling out of memory
////////////////////////////////////////////////////////////////////////////////

#define ABORT_OOM                                                                     \
  TRI_SetErrorContextAql(__FILE__, __LINE__, context, TRI_ERROR_OUT_OF_MEMORY, NULL); \
  YYABORT;

#define scanner context->_parser->_scanner


#line 251 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   822

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    60,     2,     2,     2,
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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   191,   191,   194,   197,   200,   203,   209,   211,   216,
     218,   220,   222,   224,   226,   231,   250,   263,   268,   270,
     275,   289,   289,   314,   316,   321,   334,   337,   343,   343,
     366,   371,   379,   390,   393,   396,   402,   413,   426,   443,
     465,   490,   512,   537,   559,   584,   606,   631,   634,   634,
     675,   678,   681,   684,   687,   690,   693,   724,   731,   745,
     745,   774,   782,   790,   801,   809,   817,   825,   833,   841,
     849,   857,   865,   873,   881,   889,   897,   905,   916,   928,
     930,   935,   940,   948,   951,   957,   957,   970,   972,   977,
     982,   990,   990,  1003,  1005,  1010,  1012,  1017,  1025,  1029,
    1029,  1088,  1105,  1112,  1120,  1128,  1139,  1150,  1161,  1172,
    1180,  1188,  1199,  1202,  1208,  1211,  1236,  1245,  1248,  1257,
    1266,  1278,  1290,  1297,  1306,  1312
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of query string\"", "error", "$undefined", "\"FOR declaration\"",
  "\"LET declaration\"", "\"FILTER declaration\"",
  "\"RETURN declaration\"", "\"COLLECT declaration\"",
  "\"SORT declaration\"", "\"LIMIT declaration\"", "\"ASC keyword\"",
  "\"DESC keyword\"", "\"IN keyword\"", "\"INTO keyword\"",
  "\"FROM keyword\"", "\"IGNORE hint\"", "\"REMOVE command\"",
  "\"SAVE command\"", "\"UPDATE command\"", "\"REPLACE command\"",
  "\"null\"", "\"true\"", "\"false\"", "\"identifier\"",
  "\"quoted string\"", "\"integer number\"", "\"number\"",
  "\"bind parameter\"", "\"assignment\"", "\"not operator\"",
  "\"and operator\"", "\"or operator\"", "\"== operator\"",
  "\"!= operator\"", "\"< operator\"", "\"> operator\"", "\"<= operator\"",
  "\">= operator\"", "\"+ operator\"", "\"- operator\"", "\"* operator\"",
  "\"/ operator\"", "\"% operator\"", "\"[*] operator\"", "\"?\"", "\":\"",
  "\"::\"", "\"..\"", "\",\"", "\"(\"", "\")\"", "\"{\"", "\"}\"", "\"[\"",
  "\"]\"", "UMINUS", "UPLUS", "FUNCCALL", "REFERENCE", "INDEXED", "'.'",
  "$accept", "query", "optional_statement_block_statements",
  "statement_block_statement", "for_statement", "filter_statement",
  "let_statement", "let_list", "let_element", "collect_statement", "$@1",
  "collect_list", "collect_element", "optional_into", "sort_statement",
  "$@2", "sort_list", "sort_element", "sort_direction", "limit_statement",
  "return_statement", "remove_statement", "save_statement",
  "update_statement", "replace_statement", "expression", "$@3",
  "function_name", "function_call", "$@4", "operator_unary",
  "operator_binary", "operator_ternary",
  "optional_function_call_arguments", "function_arguments_list",
  "compound_type", "list", "$@5", "optional_list_elements",
  "list_elements_list", "array", "$@6", "optional_array_elements",
  "array_elements_list", "array_element", "reference", "$@7",
  "single_reference", "expansion", "atomic_value", "numeric_value",
  "value_literal", "bind_parameter", "array_element_name", "variable_name",
  "integer_value", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      46
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -100

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -91,    22,    12,   -91,     4,     4,   670,   670,   -91,   -91,
      21,   241,   262,   283,   304,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,    26,   -24,
     -91,    29,   -91,   -91,   -91,   -36,   -91,   -91,   -91,   -91,
     670,   670,   670,   670,   -91,   -91,   518,    10,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,    -3,   -27,   -91,   -91,   -91,
     -91,   -91,   518,     4,   670,    11,   670,   359,   670,   392,
     670,   549,   670,   580,   670,     4,   670,   -91,   -91,   -91,
     210,   -91,   -12,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
      42,    18,    33,   670,    28,    -4,   -91,    67,    30,   -91,
     328,    21,   423,    78,   456,    79,   611,   691,   642,   712,
     518,   -91,   518,   -91,    63,   -91,   -91,    62,    81,   -91,
      87,   518,    77,    93,    70,   375,   344,   127,   127,    96,
      96,    96,    96,   108,   108,   -91,   -91,   -91,   487,   778,
     -91,   670,   -21,    86,   -91,   -91,     4,     4,   -91,   670,
     670,   -91,   -91,   -91,   -91,   121,   -91,   128,   -91,   733,
       3,   754,    23,   -91,   -91,   -12,   670,   -91,   670,   670,
     518,   102,   107,   670,   119,     1,   -91,   -91,   -91,   518,
     -91,   -91,   -91,    25,    50,   -91,   518,   518,   778,   -91,
     670,   148,   -91,   -91,   670,   120,   518,   -91,   179,   -91,
     -91,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     1,     0,     0,     0,     0,    21,    28,
       0,     0,     0,     0,     0,     8,     9,    11,    10,    12,
      13,    14,     2,     3,     4,     5,     6,   124,     0,    17,
      18,     0,   118,   119,   120,   101,   116,   125,   115,   121,
       0,     0,     0,    48,    91,    85,    16,    59,   102,    50,
      51,    52,    53,    83,    84,    55,    98,    54,   117,   112,
     113,   114,    38,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    61,    62,
       0,     7,    93,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    23,     0,    29,    30,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    19,    20,    47,     0,   122,   123,     0,    94,    95,
       0,    89,     0,    88,    77,    65,    64,    71,    72,    73,
      74,    75,    76,    66,    67,    68,    69,    70,     0,    56,
      58,    79,     0,     0,   103,   104,     0,     0,    22,     0,
       0,    34,    35,    32,    37,     0,    39,     0,    41,     0,
     101,     0,   101,    49,    92,     0,     0,    86,     0,     0,
      81,     0,    80,     0,     0,   100,   105,    27,    24,    25,
      31,    40,    42,   101,   101,    96,    97,    90,    78,    60,
       0,     0,   106,   107,     0,     0,    82,   108,     0,   109,
     110,   111
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,    90,   -91,   -91,   -91,   -91,   -91,   -91,    83,   -91,
     -91,   -91,     2,   -91,   -91,   -91,   -91,    14,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,    -6,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,    24,   -91,   -91,   -91,   -91,    -8,
     -91,   -91,   -90,   -91,     0,   -91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    15,    16,    17,    18,    29,    30,    19,
      63,   105,   106,   158,    20,    64,   108,   109,   163,    21,
      22,    23,    24,    25,    26,   134,    81,    47,    48,   101,
      49,    50,    51,   181,   182,    52,    53,    83,   132,   133,
      54,    82,   127,   128,   129,    55,   102,    56,   185,    57,
      58,    59,    60,   130,    31,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    62,    65,   -43,    28,    67,    69,    71,    73,   156,
     -57,   125,   126,   -57,   155,     4,     5,     6,     7,     8,
       9,    10,     3,   -45,    75,   -44,   103,    27,    11,    12,
      13,    14,   183,   104,    77,    78,    79,    80,    74,   184,
     -99,    32,    33,    34,   157,    36,    37,    38,    39,   -57,
     -46,   154,   -57,   -43,   204,    39,   100,    76,   110,   111,
     112,   205,   114,   107,   116,   150,   118,   151,   120,   -57,
     122,   -57,   -57,   -45,   -57,   -44,   152,   131,   160,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   203,   159,   -57,   153,    84,   -57,
     -46,   166,   168,   164,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   173,   174,   210,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   175,
      98,   177,   176,    99,    93,    94,    95,    96,    97,    84,
     186,   178,   202,   209,   191,   180,    39,    39,    95,    96,
      97,   192,   199,   189,   110,   200,   187,   107,   121,   188,
      84,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     196,   124,   197,   198,   190,     0,     0,   201,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    84,    98,     0,   206,    99,     0,     0,   208,   195,
       0,     0,   207,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    84,    98,     0,     0,    99,     0,     0,     0,
       0,     0,     0,   211,     0,     0,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,    98,     0,    66,    99,     0,     0,
     123,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,     0,     0,     0,     0,     0,     0,    68,     0,    41,
      42,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      43,    40,    44,     0,    45,     0,     0,     0,    70,     0,
      41,    42,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    43,    40,    44,     0,    45,     0,     0,     0,    72,
       0,    41,    42,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    43,    40,    44,     0,    45,     0,   161,   162,
      84,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    84,    45,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    84,    98,   113,    85,    99,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    84,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    98,    84,   115,    99,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    84,    98,   165,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     0,    98,    84,   167,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    84,
      98,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      84,    98,   179,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   117,    98,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   119,    98,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   169,    98,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   171,    98,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     0,    98,     0,     0,    99,
      32,    33,    34,    35,    36,    37,    38,    39,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
       0,    32,    33,    34,   170,    36,    37,    38,    39,    43,
      40,    44,     0,    45,     0,     0,     0,     0,     0,    41,
      42,     0,    32,    33,    34,   172,    36,    37,    38,    39,
      43,    40,    44,     0,    45,     0,     0,     0,     0,     0,
      41,    42,     0,    32,    33,    34,   193,    36,    37,    38,
      39,    43,    40,    44,     0,    45,     0,     0,     0,     0,
       0,    41,    42,     0,    32,    33,    34,   194,    36,    37,
      38,    39,    43,    40,    44,     0,    45,     0,     0,     0,
      84,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,    45,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     0,    98
};

static const yytype_int16 yycheck[] =
{
       6,     7,    10,     0,     4,    11,    12,    13,    14,    13,
      46,    23,    24,    49,   104,     3,     4,     5,     6,     7,
       8,     9,     0,     0,    48,     0,    53,    23,    16,    17,
      18,    19,    53,    60,    40,    41,    42,    43,    12,    60,
      43,    20,    21,    22,    48,    24,    25,    26,    27,    46,
       0,    23,    49,    50,    53,    27,    46,    28,    64,    48,
      66,    60,    68,    63,    70,    23,    72,    49,    74,    46,
      76,    46,    49,    50,    49,    50,    43,    83,    48,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   184,    28,    46,   103,    12,    49,
      50,    23,    23,   111,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    50,    52,   205,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    48,
      44,    54,    45,    47,    38,    39,    40,    41,    42,    12,
      54,    48,    23,    23,    23,   151,    27,    27,    40,    41,
      42,    23,    50,   159,   160,    48,   156,   157,    75,   157,
      12,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     176,    81,   178,   179,   160,    -1,    -1,   183,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    44,    -1,   200,    47,    -1,    -1,   204,   175,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    -1,    15,    47,    -1,    -1,
      50,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    38,
      39,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      49,    29,    51,    -1,    53,    -1,    -1,    -1,    15,    -1,
      38,    39,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    49,    29,    51,    -1,    53,    -1,    -1,    -1,    15,
      -1,    38,    39,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    49,    29,    51,    -1,    53,    -1,    10,    11,
      12,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    12,    53,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    44,    14,    30,    47,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    12,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    12,    13,    47,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    12,    44,    14,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    12,    13,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    12,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      12,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    12,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    12,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    -1,    -1,    47,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    49,
      29,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      49,    29,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    49,    29,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    49,    29,    51,    -1,    53,    -1,    -1,    -1,
      12,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    53,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,    63,     0,     3,     4,     5,     6,     7,     8,
       9,    16,    17,    18,    19,    64,    65,    66,    67,    70,
      75,    80,    81,    82,    83,    84,    85,    23,   115,    68,
      69,   115,    20,    21,    22,    23,    24,    25,    26,    27,
      29,    38,    39,    49,    51,    53,    86,    88,    89,    91,
      92,    93,    96,    97,   101,   106,   108,   110,   111,   112,
     113,   116,    86,    71,    76,   110,    15,    86,    15,    86,
      15,    86,    15,    86,    12,    48,    28,    86,    86,    86,
      86,    87,   102,    98,    12,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    44,    47,
      46,    90,   107,    53,    60,    72,    73,   115,    77,    78,
      86,    48,    86,    14,    86,    13,    86,    12,    86,    12,
      86,    69,    86,    50,    62,    23,    24,   103,   104,   105,
     114,    86,    99,   100,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      23,    49,    43,    86,    23,   113,    13,    48,    74,    28,
      48,    10,    11,    79,   110,    14,    23,    13,    23,    12,
      23,    12,    23,    50,    52,    48,    45,    54,    48,    45,
      86,    94,    95,    53,    60,   109,    54,   115,    73,    86,
      78,    23,    23,    23,    23,   105,    86,    86,    86,    50,
      48,    86,    23,   113,    53,    60,    86,    54,    86,    23,
     113,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    66,    67,    68,    68,
      69,    71,    70,    72,    72,    73,    74,    74,    76,    75,
      77,    77,    78,    79,    79,    79,    80,    80,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    87,    86,
      86,    86,    86,    86,    86,    86,    86,    88,    88,    90,
      89,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    94,
      94,    95,    95,    96,    96,    98,    97,    99,    99,   100,
     100,   102,   101,   103,   103,   104,   104,   105,   106,   107,
     106,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   113,   114,   114,   115,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     4,     2,     2,     1,     3,
       3,     0,     4,     1,     3,     3,     0,     2,     0,     3,
       1,     3,     2,     0,     1,     1,     2,     4,     2,     4,
       5,     4,     5,     4,     5,     4,     5,     3,     0,     4,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     0,
       5,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     0,
       1,     1,     3,     1,     1,     0,     4,     0,     1,     1,
       3,     0,     4,     0,     1,     1,     3,     3,     1,     0,
       4,     1,     1,     3,     3,     4,     2,     2,     3,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, TRI_aql_context_t* const context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, TRI_aql_context_t* const context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, TRI_aql_context_t* const context)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, TRI_aql_context_t* const context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (TRI_aql_context_t* const context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 191 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      context->_type = TRI_AQL_QUERY_READ;
    }
#line 1736 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 3:
#line 194 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      context->_type = TRI_AQL_QUERY_REMOVE;
    }
#line 1744 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 4:
#line 197 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      context->_type = TRI_AQL_QUERY_SAVE;
    }
#line 1752 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 5:
#line 200 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      context->_type = TRI_AQL_QUERY_UPDATE;
    }
#line 1760 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 6:
#line 203 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      context->_type = TRI_AQL_QUERY_REPLACE;
    }
#line 1768 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 7:
#line 209 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1775 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 8:
#line 211 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1782 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 9:
#line 216 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1789 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 10:
#line 218 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1796 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 11:
#line 220 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1803 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 12:
#line 222 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1810 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 13:
#line 224 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1817 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 14:
#line 226 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1824 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 15:
#line 231 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node;
      
      if (! TRI_StartScopeAql(context, TRI_AQL_SCOPE_FOR)) {
        ABORT_OOM
      }
      
      node = TRI_CreateNodeForAql(context, (yyvsp[-2].strval), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
    }
#line 1845 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 250 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeFilterAql(context, (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
    }
#line 1860 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 263 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1867 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 18:
#line 268 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1874 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 19:
#line 270 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1881 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 20:
#line 275 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeLetAql(context, (yyvsp[-2].strval), (yyvsp[0].node));

      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
    }
#line 1897 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 289 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeListAql(context);
      
      if (node == NULL) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    }
#line 1911 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 297 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeCollectAql(
                context, 
                static_cast<const TRI_aql_node_t* const>
                           (TRI_PopStackParseAql(context)), 
                (yyvsp[0].strval));
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
    }
#line 1930 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 314 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1937 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 24:
#line 316 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 1944 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 321 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeAssignAql(context, (yyvsp[-2].strval), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      if (! TRI_PushListAql(context, node)) {
        ABORT_OOM
      }
    }
#line 1959 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 334 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.strval) = NULL;
    }
#line 1967 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 337 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.strval) = (yyvsp[0].strval);
    }
#line 1975 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 343 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeListAql(context);
      
      if (node == NULL) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    }
#line 1989 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 351 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* list 
          = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));
      TRI_aql_node_t* node = TRI_CreateNodeSortAql(context, list);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
    }
#line 2006 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 366 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_PushListAql(context, (yyvsp[0].node))) {
        ABORT_OOM
      }
    }
#line 2016 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 371 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_PushListAql(context, (yyvsp[0].node))) {
        ABORT_OOM
      }
    }
#line 2026 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 379 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeSortElementAql(context, (yyvsp[-1].node), (yyvsp[0].boolval));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2039 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 390 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.boolval) = true;
    }
#line 2047 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 393 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.boolval) = true;
    }
#line 2055 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 396 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.boolval) = false;
    }
#line 2063 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 402 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeLimitAql(context, TRI_CreateNodeValueIntAql(context, 0), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
    }
#line 2079 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 37:
#line 413 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeLimitAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
    }
#line 2094 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 38:
#line 426 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeReturnAql(context, (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2113 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 39:
#line 443 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeRemoveAql(context, (yyvsp[-2].node), coll, false);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2140 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 465 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeRemoveAql(context, (yyvsp[-2].node), coll, true);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2167 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 490 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeSaveAql(context, (yyvsp[-2].node), coll, false);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2194 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 512 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeSaveAql(context, (yyvsp[-2].node), coll, true);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2221 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 537 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeUpdateAql(context, (yyvsp[-2].node), coll, false);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2248 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 559 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeUpdateAql(context, (yyvsp[-2].node), coll, true);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2275 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 584 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeReplaceAql(context, (yyvsp[-2].node), coll, false);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2302 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 606 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* coll;
      TRI_aql_node_t* node;

      coll = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      if (coll == NULL) {
        ABORT_OOM
      }

      node = TRI_CreateNodeReplaceAql(context, (yyvsp[-2].node), coll, true);
      if (node == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, node)) {
        ABORT_OOM
      }
      
      if (! TRI_EndScopeByReturnAql(context)) {
        ABORT_OOM
      }
    }
#line 2329 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 631 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[-1].node);
    }
#line 2337 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 634 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_StartScopeAql(context, TRI_AQL_SCOPE_SUBQUERY)) {
        ABORT_OOM
      }

      context->_subQueries++;

    }
#line 2350 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 641 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* result;
      TRI_aql_node_t* subQuery;
      TRI_aql_node_t* nameNode;
      
      context->_subQueries--;

      if (! TRI_EndScopeAql(context)) {
        ABORT_OOM
      }

      subQuery = TRI_CreateNodeSubqueryAql(context);

      if (subQuery == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, subQuery)) {
        ABORT_OOM
      }

      nameNode = TRI_AQL_NODE_MEMBER(subQuery, 0);
      if (nameNode == NULL) {
        ABORT_OOM
      }

      result = TRI_CreateNodeReferenceAql(context, TRI_AQL_NODE_STRING(nameNode));
      if (result == NULL) {
        ABORT_OOM
      }

      // return the result
      (yyval.node) = result;
    }
#line 2389 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 675 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2397 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 678 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2405 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 681 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2413 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 684 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2421 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 687 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2429 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 690 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2437 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 693 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node;
      TRI_aql_node_t* list;

      if ((yyvsp[-2].node) == NULL || (yyvsp[0].node) == NULL) {
        ABORT_OOM
      }
      
      list = TRI_CreateNodeListAql(context);
      if (list == NULL) {
        ABORT_OOM
      }
       
      if (TRI_ERROR_NO_ERROR != TRI_PushBackVectorPointer(&list->_members, (void*) (yyvsp[-2].node))) {
        ABORT_OOM
      }
      if (TRI_ERROR_NO_ERROR != TRI_PushBackVectorPointer(&list->_members, (void*) (yyvsp[0].node))) {
        ABORT_OOM
      }
      
      node = TRI_CreateNodeFcallAql(context, "RANGE", list);

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2470 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 724 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.strval) = (yyvsp[0].strval);

      if ((yyval.strval) == NULL) {
        ABORT_OOM
      }
    }
#line 2482 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 731 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-2].strval) == NULL || (yyvsp[0].strval) == NULL) {
        ABORT_OOM
      }

      (yyval.strval) = TRI_RegisterString3Aql(context, (yyvsp[-2].strval), "::", (yyvsp[0].strval));

      if ((yyval.strval) == NULL) {
        ABORT_OOM
      }
    }
#line 2498 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 59:
#line 745 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node;

      if (! TRI_PushStackParseAql(context, (yyvsp[0].strval))) {
        ABORT_OOM
      }

      node = TRI_CreateNodeListAql(context);
      if (node == NULL) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    }
#line 2517 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 758 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* list 
        = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));
      TRI_aql_node_t* node = TRI_CreateNodeFcallAql(context, 
                                    static_cast<char const* const>
                                               (TRI_PopStackParseAql(context)),
                                    list);
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2535 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 774 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorUnaryPlusAql(context, (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2548 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 62:
#line 782 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorUnaryMinusAql(context, (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2561 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 790 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    { 
      TRI_aql_node_t* node = TRI_CreateNodeOperatorUnaryNotAql(context, (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2574 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 801 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryOrAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2587 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 65:
#line 809 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryAndAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2600 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 817 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryPlusAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2613 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 825 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryMinusAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2626 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 833 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryTimesAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2639 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 841 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryDivAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2652 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 70:
#line 849 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryModAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2665 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 857 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryEqAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2678 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 72:
#line 865 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryNeAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2691 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 873 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryLtAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2704 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 881 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryGtAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2717 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 75:
#line 889 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryLeAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2730 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 897 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryGeAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2743 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 905 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorBinaryInAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2756 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 78:
#line 916 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeOperatorTernaryAql(context, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 2770 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 79:
#line 928 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2777 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 80:
#line 930 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2784 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 935 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_PushListAql(context, (yyvsp[0].node))) {
        ABORT_OOM
      }
    }
#line 2794 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 940 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_PushListAql(context, (yyvsp[0].node))) {
        ABORT_OOM
      }
    }
#line 2804 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 948 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2812 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 84:
#line 951 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2820 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 957 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeListAql(context);
      if (node == NULL) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    }
#line 2833 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 86:
#line 964 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));
    }
#line 2841 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 87:
#line 970 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2848 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 88:
#line 972 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2855 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 977 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_PushListAql(context, (yyvsp[0].node))) {
        ABORT_OOM
      }
    }
#line 2865 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 90:
#line 982 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_PushListAql(context, (yyvsp[0].node))) {
        ABORT_OOM
      }
    }
#line 2875 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 990 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeArrayAql(context);
      if (node == NULL) {
        ABORT_OOM
      }

      TRI_PushStackParseAql(context, node);
    }
#line 2888 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 997 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));
    }
#line 2896 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1003 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2903 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1005 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2910 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1010 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2917 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1012 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
    }
#line 2924 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1017 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if (! TRI_PushArrayAql(context, (yyvsp[-2].strval), (yyvsp[0].node))) {
        ABORT_OOM
      }
    }
#line 2934 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1025 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // start of reference (collection or variable name)
      (yyval.node) = (yyvsp[0].node);
    }
#line 2943 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1029 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // expanded variable access, e.g. variable[*]
      TRI_aql_node_t* node;
      char* varname = TRI_GetNameParseAql(context);

      if (varname == NULL) {
        ABORT_OOM
      }
      
      // push the varname onto the stack
      TRI_PushStackParseAql(context, varname);
      
      // push on the stack what's going to be expanded (will be popped when we come back) 
      TRI_PushStackParseAql(context, (yyvsp[0].node));

      // create a temporary variable for the row iterator (will be popped by "expansion" rule")
      node = TRI_CreateNodeReferenceAql(context, varname);

      if (node == NULL) {
        ABORT_OOM
      }

      // push the variable
      TRI_PushStackParseAql(context, node);
    }
#line 2973 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1053 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // return from the "expansion" subrule
      TRI_aql_node_t* expanded 
          = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));
      TRI_aql_node_t* expand;
      TRI_aql_node_t* nameNode;
      char* varname = static_cast<char*>(TRI_PopStackParseAql(context));

      // push the actual expand node into the statement list
      expand = TRI_CreateNodeExpandAql(context, varname, expanded, (yyvsp[0].node));

      if (expand == NULL) {
        ABORT_OOM
      }
      
      if (! TRI_AppendStatementListAql(context->_statements, expand)) {
        ABORT_OOM
      }

      nameNode = TRI_AQL_NODE_MEMBER(expand, 1);

      if (nameNode == NULL) {
        ABORT_OOM
      }

      // return a reference only
      (yyval.node) = TRI_CreateNodeReferenceAql(context, TRI_AQL_NODE_STRING(nameNode));

      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3010 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1088 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // variable or collection
      TRI_aql_node_t* node;
      
      if (TRI_VariableExistsScopeAql(context, (yyvsp[0].strval))) {
        node = TRI_CreateNodeReferenceAql(context, (yyvsp[0].strval));
      }
      else {
        node = TRI_CreateNodeCollectionAql(context, (yyvsp[0].strval));
      }

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3032 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1105 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
      
      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3044 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1112 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // named variable access, e.g. variable.reference
      (yyval.node) = TRI_CreateNodeAttributeAccessAql(context, (yyvsp[-2].node), (yyvsp[0].strval));
      
      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3057 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1120 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // named variable access, e.g. variable.@reference
      (yyval.node) = TRI_CreateNodeBoundAttributeAccessAql(context, (yyvsp[-2].node), (yyvsp[0].node));
      
      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3070 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1128 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // indexed variable access, e.g. variable[index]
      (yyval.node) = TRI_CreateNodeIndexedAql(context, (yyvsp[-3].node), (yyvsp[-1].node));
      
      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3083 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1139 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // named variable access, continuation from * expansion, e.g. [*].variable.reference
      TRI_aql_node_t* node 
          = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));

      (yyval.node) = TRI_CreateNodeAttributeAccessAql(context, node, (yyvsp[0].strval));

      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3099 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1150 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // named variable access w/ bind parameter, continuation from * expansion, e.g. [*].variable.@reference
      TRI_aql_node_t* node 
          = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));

      (yyval.node) = TRI_CreateNodeBoundAttributeAccessAql(context, node, (yyvsp[0].node));

      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3115 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1161 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // indexed variable access, continuation from * expansion, e.g. [*].variable[index]
      TRI_aql_node_t* node 
          = static_cast<TRI_aql_node_t*>(TRI_PopStackParseAql(context));

      (yyval.node) = TRI_CreateNodeIndexedAql(context, node, (yyvsp[-1].node));

      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3131 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1172 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // named variable access, continuation from * expansion, e.g. [*].variable.xx.reference
      (yyval.node) = TRI_CreateNodeAttributeAccessAql(context, (yyvsp[-2].node), (yyvsp[0].strval));

      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3144 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1180 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // named variable access w/ bind parameter, continuation from * expansion, e.g. [*].variable.xx.@reference
      (yyval.node) = TRI_CreateNodeBoundAttributeAccessAql(context, (yyvsp[-2].node), (yyvsp[0].node));

      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3157 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1188 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      // indexed variable access, continuation from * expansion, e.g. [*].variable.xx.[index]
      (yyval.node) = TRI_CreateNodeIndexedAql(context, (yyvsp[-3].node), (yyvsp[-1].node));

      if ((yyval.node) == NULL) {
        ABORT_OOM
      }
    }
#line 3170 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1199 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3178 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1202 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3186 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1208 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3194 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1211 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node;
      double value;

      if ((yyvsp[0].strval) == NULL) {
        ABORT_OOM
      }
      
      value = TRI_DoubleString((yyvsp[0].strval));

      if (TRI_errno() != TRI_ERROR_NO_ERROR) {
        TRI_SetErrorContextAql(__FILE__, __LINE__, context, TRI_ERROR_QUERY_NUMBER_OUT_OF_RANGE, NULL);
        YYABORT;
      }
      
      node = TRI_CreateNodeValueDoubleAql(context, value);

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3222 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1236 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueStringAql(context, (yyvsp[0].strval));

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3236 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1245 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 3244 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1248 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueNullAql(context);

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3258 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1257 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueBoolAql(context, true);

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3272 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1266 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeValueBoolAql(context, false);

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3286 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1278 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node = TRI_CreateNodeParameterAql(context, (yyvsp[0].strval));

      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3300 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1290 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0].strval) == NULL) {
        ABORT_OOM
      }

      (yyval.strval) = (yyvsp[0].strval);
    }
#line 3312 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1297 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0].strval) == NULL) {
        ABORT_OOM
      }

      (yyval.strval) = (yyvsp[0].strval);
    }
#line 3324 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1306 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      (yyval.strval) = (yyvsp[0].strval);
    }
#line 3332 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1312 "arangod/Ahuacatl/ahuacatl-grammar.y" /* yacc.c:1646  */
    {
      TRI_aql_node_t* node;
      int64_t value;

      if ((yyvsp[0].strval) == NULL) {
        ABORT_OOM
      }

      value = TRI_Int64String((yyvsp[0].strval));
      if (TRI_errno() != TRI_ERROR_NO_ERROR) {
        TRI_SetErrorContextAql(__FILE__, __LINE__, context, TRI_ERROR_QUERY_NUMBER_OUT_OF_RANGE, NULL);
        YYABORT;
      }

      node = TRI_CreateNodeValueIntAql(context, value);
      if (node == NULL) {
        ABORT_OOM
      }

      (yyval.node) = node;
    }
#line 3358 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
    break;


#line 3362 "arangod/Ahuacatl/ahuacatl-grammar.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, context);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}