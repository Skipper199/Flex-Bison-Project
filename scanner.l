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


%%




"PROGRAM"                   {printf("%s\n", yytext); return PROGRAM;}
"\n"                        {return NEWLINE;}

{id}                        {printf("%s\n", yytext); yylval.t_str = strdup(yytext); return ID;}




%%

