/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 170 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
