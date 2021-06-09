/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <math.h>
    #include <limits.h> 
    int yylex();
    void yyerror(char *);
    extern FILE *yyin;
    extern FILE *yyout;
    extern int yylineno;

#line 82 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    PROGRAM = 258,                 /* PROGRAM  */
    NEWLINE = 259,                 /* NEWLINE  */
    OP = 260,                      /* OP  */
    CP = 261,                      /* CP  */
    OB = 262,                      /* OB  */
    CB = 263,                      /* CB  */
    DQ = 264,                      /* DQ  */
    COLON = 265,                   /* COLON  */
    COMMA = 266,                   /* COMMA  */
    SC = 267,                      /* SC  */
    ADD = 268,                     /* ADD  */
    SUB = 269,                     /* SUB  */
    MUL = 270,                     /* MUL  */
    DIV = 271,                     /* DIV  */
    ASSIGN = 272,                  /* ASSIGN  */
    EQUAL = 273,                   /* EQUAL  */
    NOT_EQUAL = 274,               /* NOT_EQUAL  */
    LOWER_THAN = 275,              /* LOWER_THAN  */
    GREATER_THAN = 276,            /* GREATER_THAN  */
    WHILE = 277,                   /* WHILE  */
    ENDWHILE = 278,                /* ENDWHILE  */
    FOR = 279,                     /* FOR  */
    ENDFOR = 280,                  /* ENDFOR  */
    TO = 281,                      /* TO  */
    STEP = 282,                    /* STEP  */
    IF = 283,                      /* IF  */
    THEN = 284,                    /* THEN  */
    ELSEIF = 285,                  /* ELSEIF  */
    ELSE = 286,                    /* ELSE  */
    ENDIF = 287,                   /* ENDIF  */
    SWITCH = 288,                  /* SWITCH  */
    ENDSWITCH = 289,               /* ENDSWITCH  */
    CASE = 290,                    /* CASE  */
    DEFAULT = 291,                 /* DEFAULT  */
    INT = 292,                     /* INT  */
    CHAR = 293,                    /* CHAR  */
    FUNCTION = 294,                /* FUNCTION  */
    END_FUNCTION = 295,            /* END_FUNCTION  */
    VARS = 296,                    /* VARS  */
    RETURN = 297,                  /* RETURN  */
    PRINT = 298,                   /* PRINT  */
    BREAK = 299,                   /* BREAK  */
    STARTMAIN = 300,               /* STARTMAIN  */
    ENDMAIN = 301,                 /* ENDMAIN  */
    SYMBOL = 302,                  /* SYMBOL  */
    ID = 303,                      /* ID  */
    INTEGER = 304                  /* INTEGER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PROGRAM 258
#define NEWLINE 259
#define OP 260
#define CP 261
#define OB 262
#define CB 263
#define DQ 264
#define COLON 265
#define COMMA 266
#define SC 267
#define ADD 268
#define SUB 269
#define MUL 270
#define DIV 271
#define ASSIGN 272
#define EQUAL 273
#define NOT_EQUAL 274
#define LOWER_THAN 275
#define GREATER_THAN 276
#define WHILE 277
#define ENDWHILE 278
#define FOR 279
#define ENDFOR 280
#define TO 281
#define STEP 282
#define IF 283
#define THEN 284
#define ELSEIF 285
#define ELSE 286
#define ENDIF 287
#define SWITCH 288
#define ENDSWITCH 289
#define CASE 290
#define DEFAULT 291
#define INT 292
#define CHAR 293
#define FUNCTION 294
#define END_FUNCTION 295
#define VARS 296
#define RETURN 297
#define PRINT 298
#define BREAK 299
#define STARTMAIN 300
#define ENDMAIN 301
#define SYMBOL 302
#define ID 303
#define INTEGER 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

    char *t_str;
    int t_int;
    float t_float;

#line 238 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAM = 3,                    /* PROGRAM  */
  YYSYMBOL_NEWLINE = 4,                    /* NEWLINE  */
  YYSYMBOL_OP = 5,                         /* OP  */
  YYSYMBOL_CP = 6,                         /* CP  */
  YYSYMBOL_OB = 7,                         /* OB  */
  YYSYMBOL_CB = 8,                         /* CB  */
  YYSYMBOL_DQ = 9,                         /* DQ  */
  YYSYMBOL_COLON = 10,                     /* COLON  */
  YYSYMBOL_COMMA = 11,                     /* COMMA  */
  YYSYMBOL_SC = 12,                        /* SC  */
  YYSYMBOL_ADD = 13,                       /* ADD  */
  YYSYMBOL_SUB = 14,                       /* SUB  */
  YYSYMBOL_MUL = 15,                       /* MUL  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_ASSIGN = 17,                    /* ASSIGN  */
  YYSYMBOL_EQUAL = 18,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 19,                 /* NOT_EQUAL  */
  YYSYMBOL_LOWER_THAN = 20,                /* LOWER_THAN  */
  YYSYMBOL_GREATER_THAN = 21,              /* GREATER_THAN  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_ENDWHILE = 23,                  /* ENDWHILE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_ENDFOR = 25,                    /* ENDFOR  */
  YYSYMBOL_TO = 26,                        /* TO  */
  YYSYMBOL_STEP = 27,                      /* STEP  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_THEN = 29,                      /* THEN  */
  YYSYMBOL_ELSEIF = 30,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_ENDIF = 32,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_ENDSWITCH = 34,                 /* ENDSWITCH  */
  YYSYMBOL_CASE = 35,                      /* CASE  */
  YYSYMBOL_DEFAULT = 36,                   /* DEFAULT  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_CHAR = 38,                      /* CHAR  */
  YYSYMBOL_FUNCTION = 39,                  /* FUNCTION  */
  YYSYMBOL_END_FUNCTION = 40,              /* END_FUNCTION  */
  YYSYMBOL_VARS = 41,                      /* VARS  */
  YYSYMBOL_RETURN = 42,                    /* RETURN  */
  YYSYMBOL_PRINT = 43,                     /* PRINT  */
  YYSYMBOL_BREAK = 44,                     /* BREAK  */
  YYSYMBOL_STARTMAIN = 45,                 /* STARTMAIN  */
  YYSYMBOL_ENDMAIN = 46,                   /* ENDMAIN  */
  YYSYMBOL_SYMBOL = 47,                    /* SYMBOL  */
  YYSYMBOL_ID = 48,                        /* ID  */
  YYSYMBOL_INTEGER = 49,                   /* INTEGER  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_root = 51,                      /* root  */
  YYSYMBOL_opt_declareFunctions = 52,      /* opt_declareFunctions  */
  YYSYMBOL_declareFunctions = 53,          /* declareFunctions  */
  YYSYMBOL_program = 54,                   /* program  */
  YYSYMBOL_newlines = 55,                  /* newlines  */
  YYSYMBOL_optionalNewLines = 56,          /* optionalNewLines  */
  YYSYMBOL_type = 57,                      /* type  */
  YYSYMBOL_value = 58,                     /* value  */
  YYSYMBOL_sentence = 59,                  /* sentence  */
  YYSYMBOL_opt_sentence = 60,              /* opt_sentence  */
  YYSYMBOL_string = 61,                    /* string  */
  YYSYMBOL_arguments = 62,                 /* arguments  */
  YYSYMBOL_parameters = 63,                /* parameters  */
  YYSYMBOL_opt_programCommands = 64,       /* opt_programCommands  */
  YYSYMBOL_programCommands = 65,           /* programCommands  */
  YYSYMBOL_programCommand = 66,            /* programCommand  */
  YYSYMBOL_logical_operator = 67,          /* logical_operator  */
  YYSYMBOL_logical_expr = 68,              /* logical_expr  */
  YYSYMBOL_main = 69,                      /* main  */
  YYSYMBOL_function = 70,                  /* function  */
  YYSYMBOL_varDeclaration = 71,            /* varDeclaration  */
  YYSYMBOL_vars = 72,                      /* vars  */
  YYSYMBOL_csv = 73,                       /* csv  */
  YYSYMBOL_assign = 74,                    /* assign  */
  YYSYMBOL_numericExpr = 75,               /* numericExpr  */
  YYSYMBOL_while = 76,                     /* while  */
  YYSYMBOL_for = 77,                       /* for  */
  YYSYMBOL_if = 78,                        /* if  */
  YYSYMBOL_opt_else_if = 79,               /* opt_else_if  */
  YYSYMBOL_else_if = 80,                   /* else_if  */
  YYSYMBOL_opt_else = 81,                  /* opt_else  */
  YYSYMBOL_switch = 82,                    /* switch  */
  YYSYMBOL_case = 83,                      /* case  */
  YYSYMBOL_opt_default = 84,               /* opt_default  */
  YYSYMBOL_print = 85,                     /* print  */
  YYSYMBOL_opt_var = 86,                   /* opt_var  */
  YYSYMBOL_break = 87,                     /* break  */
  YYSYMBOL_return = 88                     /* return  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    97,    97,   100,   101,   103,   104,   107,   110,   111,
     114,   115,   118,   119,   122,   123,   124,   127,   128,   131,
     132,   135,   136,   139,   140,   141,   144,   145,   146,   149,
     150,   153,   154,   157,   158,   159,   160,   161,   162,   163,
     164,   167,   168,   169,   170,   173,   180,   187,   194,   197,
     200,   201,   202,   203,   210,   211,   212,   215,   216,   217,
     218,   219,   220,   221,   228,   231,   238,   241,   242,   245,
     246,   249,   250,   257,   260,   261,   264,   265,   272,   275,
     276,   283,   291
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
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAM", "NEWLINE",
  "OP", "CP", "OB", "CB", "DQ", "COLON", "COMMA", "SC", "ADD", "SUB",
  "MUL", "DIV", "ASSIGN", "EQUAL", "NOT_EQUAL", "LOWER_THAN",
  "GREATER_THAN", "WHILE", "ENDWHILE", "FOR", "ENDFOR", "TO", "STEP", "IF",
  "THEN", "ELSEIF", "ELSE", "ENDIF", "SWITCH", "ENDSWITCH", "CASE",
  "DEFAULT", "INT", "CHAR", "FUNCTION", "END_FUNCTION", "VARS", "RETURN",
  "PRINT", "BREAK", "STARTMAIN", "ENDMAIN", "SYMBOL", "ID", "INTEGER",
  "$accept", "root", "opt_declareFunctions", "declareFunctions", "program",
  "newlines", "optionalNewLines", "type", "value", "sentence",
  "opt_sentence", "string", "arguments", "parameters",
  "opt_programCommands", "programCommands", "programCommand",
  "logical_operator", "logical_expr", "main", "function", "varDeclaration",
  "vars", "csv", "assign", "numericExpr", "while", "for", "if",
  "opt_else_if", "else_if", "opt_else", "switch", "case", "opt_default",
  "print", "opt_var", "break", "return", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
#endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -33,    22,   -13,    26,   -60,   -15,    -4,   -13,   -60,
     -60,    31,   -60,    44,    26,   -60,   -60,   -60,    35,   -16,
     -60,   -60,   -10,    -1,    47,     6,    54,    60,    35,    71,
      70,    63,    39,   -16,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,    26,    35,
     -10,    85,   -10,    78,    48,    90,    26,    -2,    26,   -60,
      12,   -10,    49,    94,    84,    96,   -10,    97,    67,   -10,
      98,   -60,     9,   101,   -60,    91,    76,   -60,    65,   -60,
     -60,   -60,   -60,   -60,   -10,    26,    59,    80,    89,    69,
      64,    26,   -60,   -10,   105,   106,   115,   -60,     5,   -10,
      26,    26,     9,     9,     9,     9,    75,    86,   -60,   -16,
      99,    26,   122,   124,   126,   -60,   -60,   -60,    87,   127,
     -60,   -60,    18,   -60,   -60,    68,    68,   -60,   -60,    26,
      26,   111,    92,   -16,    26,   -60,    93,   130,    26,   128,
     -10,   -60,   -60,    26,   117,   118,   110,   142,   -60,   -60,
      26,   -60,   -60,   102,   147,   123,   125,   148,    58,   -60,
     -60,    26,   -10,    26,   129,   151,   138,   155,   152,   131,
     -16,   162,   -16,    26,   -10,   -10,   149,    26,    26,   145,
      26,   -60,   -60,   165,   154,   -10,   -16,   -60,    26,   -16,
      26,   166,   156,   -60,   -60,   -60,   -16,   163,   172,   -60,
      26,   169,   -16,    26,   -60,   -16,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,    10,     1,     0,     0,     4,     5,
       8,    11,     7,     0,    10,     2,     6,     9,    26,    29,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    33,    48,    34,    35,    36,
      37,    38,    39,    40,    16,    14,    15,    27,     0,     0,
       0,     0,     0,     0,     0,    21,    10,    21,    10,    32,
      29,     0,     0,     0,     0,     0,     0,    50,     0,    19,
      79,    81,     0,    58,    57,     0,     0,    46,     0,    28,
      41,    42,    44,    43,     0,    10,     0,     0,     0,     0,
       0,    10,    17,    20,     0,     0,     0,    58,     0,    23,
      10,    10,     0,     0,     0,     0,     0,     0,    45,    29,
       0,    10,     0,     0,    51,    49,    18,    22,     0,     0,
      63,    24,     0,    54,    56,    59,    60,    61,    62,    10,
      10,     0,     0,    29,    10,    52,     0,     0,    10,     0,
       0,    82,    47,    10,     0,    67,     0,     0,    80,    78,
      10,    25,    64,     0,     0,    71,    68,     0,    76,    53,
      55,    10,     0,    10,     0,     0,     0,     0,     0,     0,
      29,     0,    29,    10,     0,     0,     0,    10,    10,     0,
      10,    72,    66,     0,     0,     0,    29,    73,    10,    29,
      10,     0,     0,    77,    65,    69,    29,     0,     0,    70,
      10,     0,    29,    10,    74,    29,    75
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -60,   -60,   -60,   132,   -14,   -26,   -18,   -60,
     -60,   133,   -60,   -60,   -59,   -60,   150,   -60,   -43,   -60,
     173,   -60,   -60,   -60,   -60,   -41,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,     3,    11,    12,    22,    62,    93,
      94,    70,   122,    23,    32,    33,    34,    84,    63,    15,
       9,    35,    36,    68,    37,    76,    38,    39,    40,   155,
     156,   164,    41,   158,   169,    42,    96,    43,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,    78,    54,    72,    47,    48,    24,    69,    25,    65,
      49,   120,    26,     1,    72,     4,    17,    27,   102,   103,
     104,   105,     5,    61,   139,    28,     6,    29,    30,   140,
      10,    98,    31,    13,    24,    17,    25,    44,    45,    46,
      26,    14,    71,    79,    77,    27,    73,    74,    88,    18,
     131,    92,    50,    28,    51,    29,    30,    97,    74,    52,
      31,   125,   126,   127,   128,    53,   108,    80,    81,    82,
      83,   109,    20,    21,   145,   116,    55,   115,    90,    91,
      57,   121,    56,   104,   105,    58,   123,   124,   101,   102,
     103,   104,   105,   167,   168,    64,    67,   133,    66,    69,
      85,    86,    87,   100,    89,    95,    99,   106,   110,   111,
     112,   179,   114,   181,   117,   141,   142,   118,   113,   171,
     146,   119,   151,   129,   149,   132,   130,   193,   134,   152,
     195,   183,   135,   136,   143,   137,   160,   199,   148,   138,
     150,   144,   147,   204,   153,   157,   206,   170,   154,   172,
     159,   161,   162,   166,   163,   165,   174,   184,   175,   182,
     176,   173,   177,   186,   187,   178,   189,   192,   180,   185,
     188,   190,   197,   200,   194,   191,   196,   198,   201,   203,
      60,    16,     0,    59,     0,     0,   202,     0,     0,   205,
      75
};

static const yytype_int16 yycheck[] =
{
      14,    60,    28,     5,    22,     6,    22,     9,    24,    52,
      11,     6,    28,     3,     5,    48,     4,    33,    13,    14,
      15,    16,     0,    49,     6,    41,    39,    43,    44,    11,
       4,    72,    48,    48,    22,     4,    24,    47,    48,    49,
      28,    45,    56,    61,    58,    33,    48,    49,    66,     5,
     109,    69,     5,    41,    48,    43,    44,    48,    49,     5,
      48,   102,   103,   104,   105,     5,    84,    18,    19,    20,
      21,    85,    37,    38,   133,    93,     5,    91,    11,    12,
      17,    99,    12,    15,    16,    46,   100,   101,    12,    13,
      14,    15,    16,    35,    36,    10,    48,   111,    20,     9,
       6,    17,     6,    12,     7,     7,     5,    42,    49,    29,
      21,   170,    48,   172,     9,   129,   130,    11,    49,   162,
     134,     6,   140,    48,   138,    26,    40,   186,     6,   143,
     189,   174,     8,     7,    23,    48,   150,   196,     8,    12,
      12,    49,    49,   202,    27,    35,   205,   161,    30,   163,
       8,    49,     5,     5,    31,    30,     5,   175,    20,   173,
       5,    32,    10,   177,   178,    34,   180,   185,     6,    20,
      25,     6,     6,    10,   188,    21,   190,    21,     6,    10,
      48,     8,    -1,    33,    -1,    -1,   200,    -1,    -1,   203,
      57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    51,    54,    48,     0,    39,    52,    53,    70,
       4,    55,    56,    48,    45,    69,    70,     4,     5,    56,
      37,    38,    57,    63,    22,    24,    28,    33,    41,    43,
      44,    48,    64,    65,    66,    71,    72,    74,    76,    77,
      78,    82,    85,    87,    47,    48,    49,    58,     6,    11,
       5,    48,     5,     5,    57,     5,    12,    17,    46,    66,
      55,    57,    58,    68,    10,    68,    20,    48,    73,     9,
      61,    56,     5,    48,    49,    61,    75,    56,    64,    58,
      18,    19,    20,    21,    67,     6,    17,     6,    58,     7,
      11,    12,    58,    59,    60,     7,    86,    48,    75,     5,
      12,    12,    13,    14,    15,    16,    42,    88,    58,    56,
      49,    29,    21,    49,    48,    56,    58,     9,    11,     6,
       6,    58,    62,    56,    56,    75,    75,    75,    75,    48,
      40,    64,    26,    56,     6,     8,     7,    48,    12,     6,
      11,    56,    56,    23,    49,    64,    56,    49,     8,    56,
      12,    58,    56,    27,    30,    79,    80,    35,    83,     8,
      56,    49,     5,    31,    81,    30,     5,    35,    36,    84,
      56,    68,    56,    32,     5,    20,     5,    10,    34,    64,
       6,    64,    56,    68,    58,    20,    56,    56,    25,    56,
       6,    21,    58,    64,    56,    64,    56,     6,    21,    64,
      10,     6,    56,    10,    64,    56,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    68,    69,    70,    71,    72,
      73,    73,    73,    73,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    76,    77,    78,    79,    79,    80,
      80,    81,    81,    82,    83,    83,    84,    84,    85,    86,
      86,    87,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     2,     3,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     0,     3,     0,     1,     3,     0,     2,     4,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     5,    10,     1,     5,
       1,     3,     4,     6,     5,     8,     5,     1,     1,     3,
       3,     3,     3,     3,     8,    13,    11,     0,     1,     6,
       7,     0,     3,    11,     9,    10,     0,     4,     7,     0,
       4,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 57: /* numericExpr: INTEGER  */
#line 215 "parser.y"
                     { (yyval.t_int) = (yyvsp[0].t_int); }
#line 1434 "y.tab.c"
    break;

  case 58: /* numericExpr: ID  */
#line 216 "parser.y"
                { (yyval.t_int) = (yyvsp[0].t_float); }
#line 1440 "y.tab.c"
    break;

  case 59: /* numericExpr: numericExpr ADD numericExpr  */
#line 217 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) + (yyvsp[0].t_int); }
#line 1446 "y.tab.c"
    break;

  case 60: /* numericExpr: numericExpr SUB numericExpr  */
#line 218 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) - (yyvsp[0].t_int); }
#line 1452 "y.tab.c"
    break;

  case 61: /* numericExpr: numericExpr MUL numericExpr  */
#line 219 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) * (yyvsp[0].t_int); }
#line 1458 "y.tab.c"
    break;

  case 62: /* numericExpr: numericExpr DIV numericExpr  */
#line 220 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) / (yyvsp[0].t_int); }
#line 1464 "y.tab.c"
    break;

  case 63: /* numericExpr: OP numericExpr CP  */
#line 221 "parser.y"
                               { (yyval.t_int) = (yyvsp[-1].t_int); }
#line 1470 "y.tab.c"
    break;


#line 1474 "y.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 294 "parser.y"


void yyerror(char *s) {
    printf("Error at line %d, %s\n", yylineno, s);
}


int main ( int argc, char **argv  ) 
{
    ++argv; --argc;
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyout = fopen ( "output", "w" );
    int success = yyparse();
    if (success == 0)
    {
        printf("Compiled Successfully!\n");
    }   
    return 0;
}
