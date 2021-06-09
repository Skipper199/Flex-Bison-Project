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
%token DQ
%token COLON
%token ASSIGN
%token EQUAL
%token NOT_EQUAL
%token LOWER_THAN
%token GREATER_THAN
%token WHILE
%token ENDWHILE
%token FOR
%token ENDFOR
%token TO
%token STEP
%token IF
%token ELSEIF
%token THEN
%token ELSE
%token ENDIF
%token SWITCH
%token ENDSWITCH
%token CASE
%token DEFAULT
%token PRINT
%token BREAK

%token VARS
%token RETURN
%token STARTMAIN
%token ENDMAIN

%token<t_float> ID
%token<t_str> SYMBOL
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

type: INT 
    | CHAR
    ;

value: ID
     | INTEGER
     | SYMBOL
     ;

sentence: value
        | sentence value
        ;

opt_sentence: /* empty */
            | sentence
            ;

string: /* empty */ 
      | DQ opt_sentence DQ
      ;

arguments: /* empty */
         | ID
         | arguments COMMA ID
         ;

parameters: /* empty */
          | type ID 
          | parameters COMMA type ID
          ;

programCommands: programCommand
               | programCommands programCommand
               ;

programCommand: varDeclaration
              | assign
              | while
              | for
              | if
              | switch
              | print
              | break
              ;

logical_operator: EQUAL
                | NOT_EQUAL
                | GREATER_THAN
                | LOWER_THAN
                ;

logical_expr: value logical_operator value
            ;

/************************************************************************************
                                MAIN STATEMENT
************************************************************************************/

main: STARTMAIN expressions ENDMAIN optionalNewLines
    ;

/************************************************************************************
                                FUNCTION STATEMENT
************************************************************************************/

function: FUNCTION ID OP parameters CP newlines programCommands return END_FUNCTION
        ;

/************************************************************************************
                            DECLARE VARIABLE STATEMENT
************************************************************************************/

varDeclaration: vars 
              ; 

vars: VARS type csv SC optionalNewLines
    ;

csv: ID
   | csv COMMA ID
   | ID OB INTEGER CB
   | csv COMMA ID OB INTEGER CB
   ; 

/************************************************************************************
                                ASSIGN STATEMENT
************************************************************************************/

assign: ID ASSIGN string SC optionalNewLines
      | ID ASSIGN ID OP arguments CP SC optionalNewLines
      | ID ASSIGN numericExpr SC optionalNewLines
      ;
      
numericExpr: INTEGER { $$ = $1; }
           | ID { $$ = $1; }
           | numericExpr ADD numericExpr { $$ = $1 + $3; }
           | numericExpr SUB numericExpr { $$ = $1 - $3; }
           | numericExpr MUL numericExpr { $$ = $1 * $3; }
           | numericExpr DIV numericExpr { $$ = $1 / $3; }
           | OP numericExpr CP { $$ = $2; }
           ;

/************************************************************************************
                                LOOP STATEMENTS
************************************************************************************/           

while: WHILE OP logical_expr CP optionalNewLines programCommands ENDWHILE optionalNewLines
     ;

for: FOR ID COLON ASSIGN INTEGER TO INTEGER STEP INTEGER optionalNewLines programCommands ENDFOR optionalNewLines
   ;

/************************************************************************************
                                IF STATEMENT
************************************************************************************/

if: IF OP logical_expr CP THEN optionalNewLines programCommands opt_else_if opt_else ENDIF optionalNewLines
  ;

opt_else_if: /* empty */
           | else_if
           ;

else_if: ELSEIF OP logical_expr CP optionalNewLines programCommands
       | else_if ELSEIF OP logical_expr CP optionalNewLines programCommands
       ;

opt_else: /* empty */
        | ELSE optionalNewLines programCommands   
        ;      

/************************************************************************************
                                SWITCH STATEMENT
************************************************************************************/

switch: SWITCH OP LOWER_THAN value GREATER_THAN CP optionalNewLines case opt_default ENDSWITCH optionalNewLines
      ;

case: CASE OP LOWER_THAN value GREATER_THAN CP COLON optionalNewLines programCommands
    | case CASE OP LOWER_THAN value GREATER_THAN CP COLON optionalNewLines programCommands
    ;

opt_default: /* empty */
           | DEFAULT COLON optionalNewLines programCommands
           ;

/************************************************************************************
                                PRINT STATEMENT
************************************************************************************/

print: PRINT OP string opt_var CP SC optionalNewLines
     ;

opt_var: /* empty */
       |OB COMMA ID CB
       ;

/************************************************************************************
                                BREAK STATEMENT
************************************************************************************/

break: BREAK SC optionalNewLines
     ;

/************************************************************************************
                                RETURN STATEMENT
************************************************************************************/

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