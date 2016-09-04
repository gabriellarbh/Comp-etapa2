%{
        #include <stdio.h>
        #include <stdlib.h>
        #include "hash.h"       

        int getLineNumber();
        int yyerror();
        int yylex();
%}
%token KW_INT        
%token KW_FLOAT      
%token KW_BOOL       
%token KW_CHAR       
%token KW_IF         
%token KW_THEN       
%token KW_ELSE       
%token KW_FOR     
%token KW_READ       
%token KW_RETURN     
%token KW_PRINT      

%token OPERATOR_LE   
%token OPERATOR_GE   
%token OPERATOR_EQ   
%token OPERATOR_NE   
%token OPERATOR_AND  
%token OPERATOR_OR   





%token<symbol> TK_IDENTIFIER 
%token<symbol> LIT_INTEGER   
%token<symbol> LIT_FALSE     
%token<symbol> LIT_TRUE      
%token<symbol> LIT_CHAR      
%token<symbol> LIT_STRING    

%token TOKEN_ERROR
%%

program 
        : var_dec ';' program
        | function program
        |
        ;
        
var_dec
        : datatype TK_IDENTIFIER ':' literal
        | datatype TK_IDENTIFIER '[' LIT_INTEGER ']' ':' literal_list
        | datatype TK_IDENTIFIER '[' LIT_INTEGER ']'
        ;
        
function
        : datatype TK_IDENTIFIER '(' params ')' block
        ;

params
        : datatype TK_IDENTIFIER ',' params
        | datatype TK_IDENTIFIER
        ;
block
        : '{' commandlist '}'
        ;
        
commandlist
        : command ';' commandlist
        | command ';'
        ;
        
command 
        : KW_PRINT print_param_list
        | KW_READ TK_IDENTIFIER
        | KW_RETURN expr
        | ifelse
        | forloop
        ;
print_param_list
        : expr print_param_list
        | LIT_STRING print_param_list
        | expr
        | LIT_STRING
        ;
expr
        : value
        | value operator value
        ;
value
        : literal
        | TK_IDENTIFIER
        | TK_IDENTIFIER'['value']'
        | TK_IDENTIFIER'(' value_list ')'
        ;
value_list
        : value value_list
        |
        ;
operator
        : OPERATOR_LE   
        | OPERATOR_GE   
        | OPERATOR_EQ   
        | OPERATOR_NE   
        | OPERATOR_AND  
        | OPERATOR_OR   
        | '*'
        | '/'
        | '-'
        | '+'
        | '<'
        | '>'
        ;
ifelse
        : KW_IF '(' expr ')' KW_THEN command
        | KW_IF '(' expr ')' KW_THEN command KW_ELSE command
        ;

forloop
        : KW_FOR '(' expr ')' command
        : KW_FOR '(' TK_IDENTIFIER '=' expr 'TO' expr ')' command
        ;
literal
        : LIT_INTEGER   
        | LIT_FALSE     
        | LIT_TRUE      
        | LIT_CHAR      
        | LIT_STRING 
        ;
        
datatype 
        : KW_INT
        | KW_INT        
        | KW_FLOAT      
        | KW_BOOL       
        | KW_CHAR  
        ;
        
literal_list
        : literal
        | literal literal_list
        ;

