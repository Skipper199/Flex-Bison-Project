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

%token OP
%token CP
%token OB
%token CB
%token DQ
%token COLON
%token COMMA
%token SC

%token ADD
%token SUB
%token MUL
%token DIV

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
%token THEN
%token ELSEIF
%token ELSE
%token ENDIF

%token SWITCH
%token ENDSWITCH
%token CASE
%token DEFAULT

%token INT
%token CHAR

%token STRUCT
%token ENDSTRUCT
%token TYPEDEF

%token FUNCTION
%token END_FUNCTION

%token VARS

%token RETURN

%token PRINT

%token BREAK

%token STARTMAIN
%token ENDMAIN

%token<t_str> SYMBOL
%token<t_float> ID
%token<t_int> INTEGER

%type<t_int> numericExpr

%left ADD SUB
%left MUL DIV

%%


/************************************************************************************
                                GENERAL STATEMENTS
************************************************************************************/

root: program opt_declareStructs opt_declareFunctions main
    ;

opt_declareFunctions: /* empty */
                    | declareFunctions

declareFunctions: function
                | declareFunctions function
                ;

opt_declareStructs: /* empty */
                  | declareStructs
                  ;

declareStructs: struct
              | declareStructs struct
              ;

program: PROGRAM ID optionalNewLines
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
         | value
         | arguments COMMA value
         ;

parameters: /* empty */
          | type value 
          | parameters COMMA type value
          ;

opt_programCommands: /* empty */
                   | programCommands
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
              | comment
              ;

logical_operator: EQUAL
                | NOT_EQUAL
                | GREATER_THAN
                | LOWER_THAN
                ;

logical_expr: value logical_operator value
            ;

/************************************************************************************
                                STRUCTURE STATEMENT
************************************************************************************/

struct: STRUCT ID newlines mul_varDeclaration ENDSTRUCT optionalNewLines
      | TYPEDEF STRUCT ID newlines mul_varDeclaration ID ENDSTRUCT optionalNewLines
      ;

/************************************************************************************
                                FUNCTION STATEMENT
************************************************************************************/

function: FUNCTION ID OP parameters CP newlines opt_programCommands return END_FUNCTION optionalNewLines
        ;

/************************************************************************************
                                MAIN STATEMENT
************************************************************************************/

main: STARTMAIN optionalNewLines opt_programCommands ENDMAIN optionalNewLines
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

mul_varDeclaration: vars
                  | mul_varDeclaration vars
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

while: WHILE OP logical_expr CP optionalNewLines opt_programCommands ENDWHILE optionalNewLines
     ;

for: FOR ID COLON ASSIGN INTEGER TO INTEGER STEP INTEGER optionalNewLines opt_programCommands ENDFOR optionalNewLines
   ;

/************************************************************************************
                                IF STATEMENT
************************************************************************************/

if: IF OP logical_expr CP THEN optionalNewLines opt_programCommands opt_else_if opt_else ENDIF optionalNewLines
  ;

opt_else_if: /* empty */
           | else_if
           ;

else_if: ELSEIF OP logical_expr CP optionalNewLines opt_programCommands
       | else_if ELSEIF OP logical_expr CP optionalNewLines opt_programCommands
       ;

opt_else: /* empty */
        | ELSE optionalNewLines opt_programCommands   
        ;      

/************************************************************************************
                                SWITCH STATEMENT
************************************************************************************/

switch: SWITCH OP LOWER_THAN value GREATER_THAN CP optionalNewLines case opt_default ENDSWITCH optionalNewLines
      ;

case: CASE OP LOWER_THAN value GREATER_THAN CP COLON optionalNewLines opt_programCommands
    | case CASE OP LOWER_THAN value GREATER_THAN CP COLON optionalNewLines opt_programCommands
    ;

opt_default: /* empty */
           | DEFAULT COLON optionalNewLines opt_programCommands
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
                                COMMENT STATEMENT
************************************************************************************/

commentBody: commentText
           | commentBody commentText
           ;

commentText: NEWLINE
           | value
           ;

comment: DIV MUL commentBody MUL DIV optionalNewLines
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