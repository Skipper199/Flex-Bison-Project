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
    STRUCT = 294,                  /* STRUCT  */
    ENDSTRUCT = 295,               /* ENDSTRUCT  */
    TYPEDEF = 296,                 /* TYPEDEF  */
    FUNCTION = 297,                /* FUNCTION  */
    END_FUNCTION = 298,            /* END_FUNCTION  */
    VARS = 299,                    /* VARS  */
    RETURN = 300,                  /* RETURN  */
    PRINT = 301,                   /* PRINT  */
    BREAK = 302,                   /* BREAK  */
    STARTMAIN = 303,               /* STARTMAIN  */
    ENDMAIN = 304,                 /* ENDMAIN  */
    SYMBOL = 305,                  /* SYMBOL  */
    ID = 306,                      /* ID  */
    INTEGER = 307                  /* INTEGER  */
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
#define STRUCT 294
#define ENDSTRUCT 295
#define TYPEDEF 296
#define FUNCTION 297
#define END_FUNCTION 298
#define VARS 299
#define RETURN 300
#define PRINT 301
#define BREAK 302
#define STARTMAIN 303
#define ENDMAIN 304
#define SYMBOL 305
#define ID 306
#define INTEGER 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

    char *t_str;
    int t_int;
    float t_float;

#line 244 "y.tab.c"

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
  YYSYMBOL_STRUCT = 39,                    /* STRUCT  */
  YYSYMBOL_ENDSTRUCT = 40,                 /* ENDSTRUCT  */
  YYSYMBOL_TYPEDEF = 41,                   /* TYPEDEF  */
  YYSYMBOL_FUNCTION = 42,                  /* FUNCTION  */
  YYSYMBOL_END_FUNCTION = 43,              /* END_FUNCTION  */
  YYSYMBOL_VARS = 44,                      /* VARS  */
  YYSYMBOL_RETURN = 45,                    /* RETURN  */
  YYSYMBOL_PRINT = 46,                     /* PRINT  */
  YYSYMBOL_BREAK = 47,                     /* BREAK  */
  YYSYMBOL_STARTMAIN = 48,                 /* STARTMAIN  */
  YYSYMBOL_ENDMAIN = 49,                   /* ENDMAIN  */
  YYSYMBOL_SYMBOL = 50,                    /* SYMBOL  */
  YYSYMBOL_ID = 51,                        /* ID  */
  YYSYMBOL_INTEGER = 52,                   /* INTEGER  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_root = 54,                      /* root  */
  YYSYMBOL_opt_declareFunctions = 55,      /* opt_declareFunctions  */
  YYSYMBOL_declareFunctions = 56,          /* declareFunctions  */
  YYSYMBOL_opt_declareStructs = 57,        /* opt_declareStructs  */
  YYSYMBOL_declareStructs = 58,            /* declareStructs  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_newlines = 60,                  /* newlines  */
  YYSYMBOL_optionalNewLines = 61,          /* optionalNewLines  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_value = 63,                     /* value  */
  YYSYMBOL_sentence = 64,                  /* sentence  */
  YYSYMBOL_opt_sentence = 65,              /* opt_sentence  */
  YYSYMBOL_string = 66,                    /* string  */
  YYSYMBOL_arguments = 67,                 /* arguments  */
  YYSYMBOL_parameters = 68,                /* parameters  */
  YYSYMBOL_opt_programCommands = 69,       /* opt_programCommands  */
  YYSYMBOL_programCommands = 70,           /* programCommands  */
  YYSYMBOL_programCommand = 71,            /* programCommand  */
  YYSYMBOL_logical_operator = 72,          /* logical_operator  */
  YYSYMBOL_logical_expr = 73,              /* logical_expr  */
  YYSYMBOL_struct = 74,                    /* struct  */
  YYSYMBOL_function = 75,                  /* function  */
  YYSYMBOL_main = 76,                      /* main  */
  YYSYMBOL_varDeclaration = 77,            /* varDeclaration  */
  YYSYMBOL_vars = 78,                      /* vars  */
  YYSYMBOL_csv = 79,                       /* csv  */
  YYSYMBOL_mul_varDeclaration = 80,        /* mul_varDeclaration  */
  YYSYMBOL_assign = 81,                    /* assign  */
  YYSYMBOL_numericExpr = 82,               /* numericExpr  */
  YYSYMBOL_while = 83,                     /* while  */
  YYSYMBOL_for = 84,                       /* for  */
  YYSYMBOL_if = 85,                        /* if  */
  YYSYMBOL_opt_else_if = 86,               /* opt_else_if  */
  YYSYMBOL_else_if = 87,                   /* else_if  */
  YYSYMBOL_opt_else = 88,                  /* opt_else  */
  YYSYMBOL_switch = 89,                    /* switch  */
  YYSYMBOL_case = 90,                      /* case  */
  YYSYMBOL_opt_default = 91,               /* opt_default  */
  YYSYMBOL_print = 92,                     /* print  */
  YYSYMBOL_opt_var = 93,                   /* opt_var  */
  YYSYMBOL_break = 94,                     /* break  */
  YYSYMBOL_commentBody = 95,               /* commentBody  */
  YYSYMBOL_commentText = 96,               /* commentText  */
  YYSYMBOL_comment = 97,                   /* comment  */
  YYSYMBOL_return = 98                     /* return  */
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
#define YYLAST   224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   101,   101,   104,   105,   107,   108,   111,   112,   115,
     116,   119,   122,   123,   126,   127,   130,   131,   134,   135,
     136,   139,   140,   143,   144,   147,   148,   151,   152,   153,
     156,   157,   158,   161,   162,   165,   166,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   180,   181,   182,   183,
     186,   193,   194,   201,   208,   215,   218,   221,   222,   223,
     224,   227,   228,   235,   236,   237,   240,   241,   242,   243,
     244,   245,   246,   253,   256,   263,   266,   267,   270,   271,
     274,   275,   282,   285,   286,   289,   290,   297,   300,   301,
     308,   315,   316,   319,   320,   323,   330
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
  "DEFAULT", "INT", "CHAR", "STRUCT", "ENDSTRUCT", "TYPEDEF", "FUNCTION",
  "END_FUNCTION", "VARS", "RETURN", "PRINT", "BREAK", "STARTMAIN",
  "ENDMAIN", "SYMBOL", "ID", "INTEGER", "$accept", "root",
  "opt_declareFunctions", "declareFunctions", "opt_declareStructs",
  "declareStructs", "program", "newlines", "optionalNewLines", "type",
  "value", "sentence", "opt_sentence", "string", "arguments", "parameters",
  "opt_programCommands", "programCommands", "programCommand",
  "logical_operator", "logical_expr", "struct", "function", "main",
  "varDeclaration", "vars", "csv", "mul_varDeclaration", "assign",
  "numericExpr", "while", "for", "if", "opt_else_if", "else_if",
  "opt_else", "switch", "case", "opt_default", "print", "opt_var", "break",
  "commentBody", "commentText", "comment", "return", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
#endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   -38,    19,   -31,    18,   -79,    -7,   -14,    13,   -31,
     -79,   -79,    66,   -79,    18,    37,    40,    52,    13,   -79,
     -79,   -79,    -1,    18,    89,    18,   -79,   -79,     3,   -79,
      -8,    -1,     3,    68,   -79,   -79,    51,    18,   -79,   -28,
      35,    27,    88,    99,    55,   106,   111,   115,   101,   105,
      86,    68,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   129,    46,   -79,   100,   -79,   -79,   -79,
     -79,    18,     3,    17,    35,   131,    35,   124,   138,    18,
      22,    18,   -79,    96,   102,    18,    18,     2,    35,   -79,
     -79,     0,   -79,   108,   144,   135,   148,    35,    35,   149,
     -79,    12,   154,   -79,   150,    67,   -79,   152,   156,   -79,
     -79,   116,   -79,   155,   -79,   -79,   -79,   -79,   -79,    35,
      18,   112,   136,   145,   -79,    35,   159,   161,   164,   -79,
     118,    35,    18,    18,    12,    12,    12,    12,   -79,   121,
     123,   132,    18,   -79,    68,   151,    18,   170,   -79,   -79,
     127,   169,   -79,   -79,    28,   -79,   -79,    82,    82,   -79,
     -79,   174,    18,    18,   -79,   162,   137,    68,    18,   179,
      18,   176,    35,   -79,   -79,   -79,    18,   165,   163,   160,
     -79,   -79,    18,   -79,   -79,   139,   192,   167,   171,   194,
      74,   -79,    18,    35,    18,   168,   197,   183,   199,   195,
     173,    68,   202,    68,    18,    35,    35,   190,    18,    18,
     186,    18,   -79,   -79,   206,   193,    35,    68,   -79,    18,
      68,    18,   207,   196,   -79,   -79,   -79,    68,   205,   210,
     -79,    18,   208,    68,    18,   -79,    68,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     7,    14,     1,     0,     0,     3,     8,
       9,    12,    15,    11,     0,     0,     0,     0,     4,     5,
      10,    13,     0,     0,     0,    14,     2,     6,     0,    61,
       0,     0,    30,    33,    16,    17,     0,    14,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    37,    55,    38,    39,    40,    41,    42,
      43,    44,    45,    57,     0,    51,     0,    20,    18,    19,
      31,     0,     0,     0,     0,     0,     0,     0,    25,    14,
      25,    14,    36,     0,     0,    14,    14,    33,     0,    93,
      94,     0,    91,     0,     0,     0,     0,     0,    23,    88,
      90,     0,    67,    66,     0,     0,    54,     0,    58,    56,
      52,     0,    32,     0,    92,    46,    47,    49,    48,     0,
      14,     0,     0,     0,    21,    24,     0,     0,     0,    67,
       0,    27,    14,    14,     0,     0,     0,     0,    59,     0,
       0,     0,    14,    50,    33,     0,    14,     0,    22,    26,
       0,     0,    72,    28,     0,    63,    65,    68,    69,    70,
      71,     0,    14,    14,    95,     0,     0,    33,    14,     0,
      14,     0,     0,    60,    96,    53,    14,     0,    76,     0,
      89,    87,    14,    29,    73,     0,     0,    80,    77,     0,
      85,    64,    14,     0,    14,     0,     0,     0,     0,     0,
       0,    33,     0,    33,    14,     0,     0,     0,    14,    14,
       0,    14,    81,    75,     0,     0,     0,    33,    82,    14,
      33,    14,     0,     0,    86,    74,    78,    33,     0,     0,
      79,    14,     0,    33,    14,    83,    33,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -12,   -25,   -27,
     -26,   -79,   -79,   140,   -79,   -79,   -78,   -79,   172,   -79,
     -75,   212,   201,   -79,   -79,    -2,   -79,   191,   -79,   -59,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   133,   -79,   -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    17,    18,     8,     9,     3,    12,    13,    36,
      93,   125,   126,    99,   154,    41,    50,    51,    52,   119,
      94,    10,    19,    26,    53,    54,    64,    30,    55,   105,
      56,    57,    58,   187,   188,   195,    59,   190,   200,    60,
     128,    61,    91,    92,    62,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      33,    96,    22,    21,    89,    40,    21,     1,     6,   111,
       7,    31,    65,     4,    70,   113,    28,   101,    42,     5,
      29,    89,    11,    66,    43,    15,    44,   101,    38,    29,
      45,    98,    37,    71,   171,    46,    28,    38,    72,   172,
      34,    35,   130,    28,    14,    88,    28,    90,    47,    48,
      67,    68,    69,    49,   100,    16,   106,    84,    85,    87,
     109,   110,   112,   129,   103,    90,   165,    67,    68,    69,
      21,   123,   124,   102,   103,   157,   158,   159,   160,   133,
     134,   135,   136,   137,    42,    67,    68,    69,    23,   178,
      43,    24,    44,   143,    32,   144,    45,   136,   137,   148,
      25,    46,    63,    73,    74,   153,    75,   155,   156,   198,
     199,    76,    28,    79,    47,    48,    77,   164,   202,    49,
      78,   167,    80,   210,   152,   212,   115,   116,   117,   118,
     214,   134,   135,   136,   137,    81,    83,   174,   175,   224,
      86,    95,   226,   179,    97,   181,   183,    98,   107,   230,
     120,   184,   121,   108,   122,   235,   127,   191,   237,   131,
     138,   140,   132,   139,   145,   146,   147,   201,   149,   203,
     151,   142,   150,   161,   162,   163,   168,   166,   169,   213,
     215,   170,   173,   217,   218,   176,   220,   180,   182,   177,
     223,   192,   185,   186,   225,   189,   227,   193,   194,   197,
     204,   196,   205,   206,   207,   208,   233,   209,   211,   236,
     216,   219,   221,   228,   222,   231,   232,   229,   234,    27,
     104,    20,    39,    82,   114
};

static const yytype_uint8 yycheck[] =
{
      25,    76,    14,     4,     4,    32,     4,     3,    39,    87,
      41,    23,    37,    51,    40,    15,    44,     5,    16,     0,
      22,     4,     4,    51,    22,    39,    24,     5,    30,    31,
      28,     9,    40,     6,     6,    33,    44,    39,    11,    11,
      37,    38,   101,    44,    51,    72,    44,    73,    46,    47,
      50,    51,    52,    51,    79,    42,    81,    11,    12,    71,
      85,    86,    88,    51,    52,    91,   144,    50,    51,    52,
       4,    97,    98,    51,    52,   134,   135,   136,   137,    12,
      13,    14,    15,    16,    16,    50,    51,    52,    51,   167,
      22,    51,    24,   119,     5,   120,    28,    15,    16,   125,
      48,    33,    51,    15,     5,   131,    51,   132,   133,    35,
      36,     5,    44,    12,    46,    47,     5,   142,   193,    51,
       5,   146,    17,   201,     6,   203,    18,    19,    20,    21,
     205,    13,    14,    15,    16,    49,     7,   162,   163,   217,
      40,    10,   220,   168,    20,   170,   172,     9,    52,   227,
       6,   176,    17,    51,     6,   233,     7,   182,   236,     5,
       8,    45,    12,     7,    52,    29,    21,   192,     9,   194,
       6,    16,    11,    52,    51,    43,     6,    26,    51,   204,
     206,    12,     8,   208,   209,    23,   211,     8,    12,    52,
     216,    52,    27,    30,   219,    35,   221,     5,    31,     5,
      32,    30,     5,    20,     5,    10,   231,    34,     6,   234,
      20,    25,     6,     6,    21,    10,     6,    21,    10,    18,
      80,     9,    31,    51,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    54,    59,    51,     0,    39,    41,    57,    58,
      74,     4,    60,    61,    51,    39,    42,    55,    56,    75,
      74,     4,    60,    51,    51,    48,    76,    75,    44,    78,
      80,    60,     5,    61,    37,    38,    62,    40,    78,    80,
      62,    68,    16,    22,    24,    28,    33,    46,    47,    51,
      69,    70,    71,    77,    78,    81,    83,    84,    85,    89,
      92,    94,    97,    51,    79,    61,    51,    50,    51,    52,
      63,     6,    11,    15,     5,    51,     5,     5,     5,    12,
      17,    49,    71,     7,    11,    12,    40,    60,    62,     4,
      63,    95,    96,    63,    73,    10,    73,    20,     9,    66,
      61,     5,    51,    52,    66,    82,    61,    52,    51,    61,
      61,    69,    63,    15,    96,    18,    19,    20,    21,    72,
       6,    17,     6,    63,    63,    64,    65,     7,    93,    51,
      82,     5,    12,    12,    13,    14,    15,    16,     8,     7,
      45,    98,    16,    63,    61,    52,    29,    21,    63,     9,
      11,     6,     6,    63,    67,    61,    61,    82,    82,    82,
      82,    52,    51,    43,    61,    69,    26,    61,     6,    51,
      12,     6,    11,     8,    61,    61,    23,    52,    69,    61,
       8,    61,    12,    63,    61,    27,    30,    86,    87,    35,
      90,    61,    52,     5,    31,    88,    30,     5,    35,    36,
      91,    61,    73,    61,    32,     5,    20,     5,    10,    34,
      69,     6,    69,    61,    73,    63,    20,    61,    61,    25,
      61,     6,    21,    63,    69,    61,    69,    61,     6,    21,
      69,    10,     6,    61,    10,    69,    61,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      73,    74,    74,    75,    76,    77,    78,    79,    79,    79,
      79,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    83,    84,    85,    86,    86,    87,    87,
      88,    88,    89,    90,    90,    91,    91,    92,    93,    93,
      94,    95,    95,    96,    96,    97,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     1,     1,     2,     0,     1,     1,
       2,     3,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     3,     0,     1,     3,
       0,     2,     4,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     6,     8,    10,     5,     1,     5,     1,     3,     4,
       6,     1,     2,     5,     8,     5,     1,     1,     3,     3,
       3,     3,     3,     8,    13,    11,     0,     1,     6,     7,
       0,     3,    11,     9,    10,     0,     4,     7,     0,     4,
       3,     1,     2,     1,     1,     6,     3
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
  case 66: /* numericExpr: INTEGER  */
#line 240 "parser.y"
                     { (yyval.t_int) = (yyvsp[0].t_int); }
#line 1473 "y.tab.c"
    break;

  case 67: /* numericExpr: ID  */
#line 241 "parser.y"
                { (yyval.t_int) = (yyvsp[0].t_float); }
#line 1479 "y.tab.c"
    break;

  case 68: /* numericExpr: numericExpr ADD numericExpr  */
#line 242 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) + (yyvsp[0].t_int); }
#line 1485 "y.tab.c"
    break;

  case 69: /* numericExpr: numericExpr SUB numericExpr  */
#line 243 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) - (yyvsp[0].t_int); }
#line 1491 "y.tab.c"
    break;

  case 70: /* numericExpr: numericExpr MUL numericExpr  */
#line 244 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) * (yyvsp[0].t_int); }
#line 1497 "y.tab.c"
    break;

  case 71: /* numericExpr: numericExpr DIV numericExpr  */
#line 245 "parser.y"
                                         { (yyval.t_int) = (yyvsp[-2].t_int) / (yyvsp[0].t_int); }
#line 1503 "y.tab.c"
    break;

  case 72: /* numericExpr: OP numericExpr CP  */
#line 246 "parser.y"
                               { (yyval.t_int) = (yyvsp[-1].t_int); }
#line 1509 "y.tab.c"
    break;


#line 1513 "y.tab.c"

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

#line 333 "parser.y"


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
