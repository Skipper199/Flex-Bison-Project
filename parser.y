%{
    #include <stdio.h>
    #include <math.h>
    #include <limits.h> 
    int yylex();
    void yyerror(char *);
    extern FILE *yyin;
    extern FILE *yyout;
    extern int yylineno;
%}

/* Types */
%union
{
    char *t_str;
    int t_int;
    float t_float;
}


%token PROGRAM
%token NEWLINE
%token FUNCTION
%token END_FUNCTION
%token INT
%token COMMA
%token CHAR
%token OP
%token CP
%token SC
%token VARS


%token<t_str> ID

%%


/************************************************************************************
                                GENERAL STATEMENTS
************************************************************************************/



root: program expressions
    ;

expressions: expression
           | expressions expression
           ;

expression: NEWLINE
          | function
          ;

program: PROGRAM ID
       ;

newlines: NEWLINE
        | newlines NEWLINE
        ;

optionalNewLines: /* empty */
                | newlines
                ;

function: FUNCTION ID OP parameters CP newlines mulVars  END_FUNCTION
        ;

parameters: /* empty */
          | type ID 
          | parameters COMMA type ID
          ;

type: INT 
    | CHAR
    ;

mulVars: vars 
       | mulVars vars 
       ; 

vars: VARS type csv SC optionalNewLines
    ;

csv: ID
   | csv COMMA ID
   ; 

%%

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