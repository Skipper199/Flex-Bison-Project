%{
    #include "y.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <limits.h> 
    
    
%}

%x LINESTART
%s NORMAL

%option noyywrap
%option yylineno

id                          [_a-zA-Z][_a-zA-Z0-9]*
integer                     [0-9]+

%%




"PROGRAM"                   {printf("%s\n", yytext); return PROGRAM;}
"\n"                        {return NEWLINE;}
"("                         {printf("%s\n", yytext); return OP;}
")"                         {printf("%s\n", yytext); return CP;}
"["                         {printf("%s\n", yytext); return OB;}
"]"                         {printf("%s\n", yytext); return CB;}
"INT"                       {printf("%s\n", yytext); return INT;}
"CHAR"                      {printf("%s\n", yytext); return CHAR;}
"FUNCTION"                  {printf("%s\n", yytext); return FUNCTION;}
"END_FUNCTION"              {printf("%s\n", yytext); return END_FUNCTION;}
","                         {printf("%s\n", yytext); return COMMA;}
";"                         {printf("%s\n", yytext); return SC;}
"VARS"                      {printf("%s\n", yytext); return VARS;}
"RETURN"                    {printf("%s\n", yytext); return RETURN;}
"STARTMAIN"                 {printf("%s\n", yytext); return STARTMAIN;}
"ENDMAIN"                   {printf("%s\n", yytext); return ENDMAIN;}



{id}                        {printf("%s\n", yytext); yylval.t_str = strdup(yytext); return ID;}
{integer}                   {printf("%s\n", yytext); return integer;}



%%

