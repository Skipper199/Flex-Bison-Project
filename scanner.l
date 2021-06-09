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
symbol                      [-!$%^&*()_+|~=`{}\[\]:";'<>?,.\/]
integer                     [0-9]+

%%




"PROGRAM"                   {printf("%s\n", yytext); return PROGRAM;}
"\n"                        {return NEWLINE;}
"("                         {printf("%s\n", yytext); return OP;}
")"                         {printf("%s\n", yytext); return CP;}
"["                         {printf("%s\n", yytext); return OB;}
"]"                         {printf("%s\n", yytext); return CB;}
\"                          {printf("%s\n", yytext); return DQ;}
":"                         {printf("%s\n", yytext); return COLON;}

"+"                         {printf("%s\n", yytext); return ADD;}
"-"                         {printf("%s\n", yytext); return SUB;}
"*"                         {printf("%s\n", yytext); return MUL;}
"/"                         {printf("%s\n", yytext); return DIV;}

"="                         {printf("%s\n", yytext); return ASSIGN;}
"=="                        {printf("%s\n", yytext); return EQUAL;}
"!="                        {printf("%s\n", yytext); return NOT_EQUAL;}
"<"                         {printf("%s\n", yytext); return LOWER_THAN;}
">"                         {printf("%s\n", yytext); return GREATER_THAN;}

"WHILE"                     {printf("%s\n", yytext); return WHILE;}
"ENDWHILE"                  {printf("%s\n", yytext); return ENDWHILE;}
"FOR"                       {printf("%s\n", yytext); return FOR;}
"ENDFOR"                    {printf("%s\n", yytext); return ENDFOR;}
"TO"                        {printf("%s\n", yytext); return TO;}
"STEP"                      {printf("%s\n", yytext); return STEP;}

"IF"                        {printf("%s\n", yytext); return IF;}
"THEN"                      {printf("%s\n", yytext); return THEN;}
"ELSEIF"                    {printf("%s\n", yytext); return ELSEIF;}
"ELSE"                      {printf("%s\n", yytext); return ELSE;}
"ENDIF"                     {printf("%s\n", yytext); return ENDIF;}

"SWITCH"                    {printf("%s\n", yytext); return SWITCH;}
"ENDSWITCH"                 {printf("%s\n", yytext); return ENDSWITCH;}
"CASE"                      {printf("%s\n", yytext); return CASE;}
"DEFAULT"                   {printf("%s\n", yytext); return DEFAULT;}

"INT"                       {printf("%s\n", yytext); return INT;}
"CHAR"                      {printf("%s\n", yytext); return CHAR;}
"FUNCTION"                  {printf("%s\n", yytext); return FUNCTION;}
"END_FUNCTION"              {printf("%s\n", yytext); return END_FUNCTION;}
"PRINT"                     {printf("%s\n", yytext); return PRINT;}
"BREAK"                     {printf("%s\n", yytext); return BREAK;}
","                         {printf("%s\n", yytext); return COMMA;}
";"                         {printf("%s\n", yytext); return SC;}
"VARS"                      {printf("%s\n", yytext); return VARS;}
"RETURN"                    {printf("%s\n", yytext); return RETURN;}
"STARTMAIN"                 {printf("%s\n", yytext); return STARTMAIN;}
"ENDMAIN"                   {printf("%s\n", yytext); return ENDMAIN;}


{id}                        {printf("%s\n", yytext); yylval.t_str = strdup(yytext); return ID;}
{symbol}                    {printf("%s\n", yytext); yylval.t_str = strdup(yytext); return SYMBOL;}
{integer}                   {printf("%s\n", yytext); yylval.t_int = atoi(yytext); return INTEGER;}



%%
