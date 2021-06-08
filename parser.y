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
}


%token PROGRAM
%token NEWLINE
%token FUNCTION
%token END_FUNCTION
%token INT

%token ADD
%token SUB
%token MUL
%token DIV

%token COMMA
%token CHAR
%token OP
%token CP
%token OB
%token CB
%token SC
%token SQ
%token DQ
%token ASSIGN
%token VARS
%token RETURN
%token STARTMAIN
%token ENDMAIN

%token<t_str> ID
%token<t_int> INTEGER

%type<t_int> numericExpr

%left ADD SUB
%left MUL DIV

%%


/************************************************************************************
                                GENERAL STATEMENTS
************************************************************************************/



root: program expressions main
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

main: STARTMAIN expressions ENDMAIN optionalNewLines
    ;

function: FUNCTION ID OP parameters CP newlines assign return END_FUNCTION
        ;

parameters: /* empty */
          | type ID 
          | parameters COMMA type ID
          ;


type: INT 
    | CHAR
    ;

assign: ID ASSIGN string SC optionalNewLines
      | ID ASSIGN ID SC optionalNewLines
      | ID ASSIGN ID OP arguments CP SC optionalNewLines
      | ID ASSIGN numericExpr SC optionalNewLines
      ;

numericExpr: INTEGER { $$ = $1; }
           | numericExpr ADD numericExpr { $$ = $1 + $3; }
           | numericExpr SUB numericExpr { $$ = $1 - $3; }
           | numericExpr MUL numericExpr { $$ = $1 * $3; }
           | numericExpr DIV numericExpr { $$ = $1 / $3; }
           | OP numericExpr CP { $$ = $2; }
           ;

string: /* empty */ 
      | SQ ID SQ
      | DQ ID DQ
      ;

arguments: /* empty */
         | ID
         | arguments COMMA ID

return: RETURN ID optionalNewLines
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