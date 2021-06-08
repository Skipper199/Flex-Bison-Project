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
    FUNCTION = 260,                /* FUNCTION  */
    END_FUNCTION = 261,            /* END_FUNCTION  */
    INT = 262,                     /* INT  */
    ADD = 263,                     /* ADD  */
    SUB = 264,                     /* SUB  */
    MUL = 265,                     /* MUL  */
    DIV = 266,                     /* DIV  */
    COMMA = 267,                   /* COMMA  */
    CHAR = 268,                    /* CHAR  */
    OP = 269,                      /* OP  */
    CP = 270,                      /* CP  */
    OB = 271,                      /* OB  */
    CB = 272,                      /* CB  */
    SC = 273,                      /* SC  */
    SQ = 274,                      /* SQ  */
    DQ = 275,                      /* DQ  */
    ASSIGN = 276,                  /* ASSIGN  */
    VARS = 277,                    /* VARS  */
    RETURN = 278,                  /* RETURN  */
    STARTMAIN = 279,               /* STARTMAIN  */
    ENDMAIN = 280,                 /* ENDMAIN  */
    ID = 281,                      /* ID  */
    INTEGER = 282                  /* INTEGER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PROGRAM 258
#define NEWLINE 259
#define FUNCTION 260
#define END_FUNCTION 261
#define INT 262
#define ADD 263
#define SUB 264
#define MUL 265
#define DIV 266
#define COMMA 267
#define CHAR 268
#define OP 269
#define CP 270
#define OB 271
#define CB 272
#define SC 273
#define SQ 274
#define DQ 275
#define ASSIGN 276
#define VARS 277
#define RETURN 278
#define STARTMAIN 279
#define ENDMAIN 280
#define ID 281
#define INTEGER 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

    char *t_str;
    int t_int;

#line 125 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
