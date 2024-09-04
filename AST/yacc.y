%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "AST.h"

ASTNode *root;
int qtd = 0;
extern void yyerror(const char *);
int yylex(void);  
extern int line_number;
void executeProgram();

%}

%code requires {
    #include "AST.h"
}

%union{
    char* str;
    int iValue;
    double real;
    char caractere;
    ASTNode *node;
}

%token IF ELSE ELIF FOR RETURN CONTINUE BREAK SWITCH CASE DEFAULT
%token PRINT PRINTLN WHILE INT_MAIN
%token OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COLON
%token FUNCTION_CALL
%token BLOCK_CLOSE BLOCK_OPEN
%token ASSIGN INPUT
%token <str> LITERAL_STRING
%token <str> LITERAL_BOOL
%token <caractere> LITERAL_CHAR
%token <str> IDENTIFIER
%token <iValue> DIGITS
%token <real> DECIMAL
%token <str> FUNCT
%token <str> RELACIONAL_OPERATORS
%token <str> OPERATION
%token <str> LOGIC_OPERATORS
%token <str> TYPE


%type <node> type
%type <node> var
%type <node> expr
%type <node> term
%type <node> call_function
%type <node> literal
%type <node> real_parameters
%type <node> real_parameters2
%type <node> real_parameter
%type <node> stmts
%type <node> stmt
%type <node> program
%type <node> functions
%type <node> main
%type <node> function
%type <node> if_stmt while_stmt for_stmt switch_stmt command code_block else_stmt
%type <node> return_stmt assign_stmt print_stmt declaration input_stmt cases default_case
%start program


%left OPERATION
%left RELACIONAL_OPERATORS
%left LOGIC_OPERATORS

%%

type: TYPE {}
    ;

program:functions main { 
        root = createASTNode("Program", NULL);
        addChildNode(root, $1);
        addChildNode(root, $2);
        printAST(root,0);
       }
       ;

functions: function functions{
    $$ = createASTNode("Functions", NULL);
    addChildNode($$, $1);
    addChildNode($$, $2);
}
         | { $$ = createASTNode("Functions\n", NULL); }
         ;

function: FUNCT IDENTIFIER OPEN_PARENTHESES parameter parameters CLOSE_PARENTHESES BLOCK_OPEN stmts BLOCK_CLOSE {
    $$ = createASTNode("Function", $2);
    addChildNode($$, $8);
}
        ;

parameters: COMMA parameter parameters
          | /*empty*/
          ;

parameter: type IDENTIFIER
         | /*empty*/
         ;

main: INT_MAIN stmts{
    $$ = createASTNode("Main", "boatarde");
    addChildNode($$, $2);
}
    ;

stmts: stmt stmts {
    $$ = createASTNode("Statements", NULL);
    addChildNode($$, $1);
    addChildNode($$, $2);
}
     | /* empty */ {
        $$ = createASTNode("Statements", NULL);
     }
     ;

stmt: if_stmt /*{addId(fezALista, palavraChave);}*/
    | while_stmt /*{addId(eAGreve, palavraChave);}*/
    | for_stmt
    | switch_stmt
    | command
    ;

command: return_stmt
       | assign_stmt
       | print_stmt
       | call_function SEMICOLON
       | BREAK SEMICOLON {}
       | CONTINUE SEMICOLON {}
       | declaration
       | input_stmt
       ;

call_function: FUNCTION_CALL IDENTIFIER OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON {
    $$ = createASTNode("CHAMADA DE FUNÇÃO", NULL);
}
             ;

real_parameters: real_parameter real_parameters2 
               | {}
               ;

real_parameters2: COMMA real_parameter real_parameters2 {}
                | {}
                ;

real_parameter: expr 
                ;

return_stmt: RETURN expr SEMICOLON {
    $$ = createASTNode("Return", NULL);
    addChildNode($$, $2);
}
           | RETURN SEMICOLON{
            $$ = createASTNode("Return", NULL);
           }
           ;

assign_stmt: var ASSIGN expr SEMICOLON {
    $$ = createASTNode("Assignment", NULL);
    addChildNode($$, $3);
}
           ;

declaration: type IDENTIFIER SEMICOLON {
    $$ = createASTNode("DECLARAÇÃO", NULL);
}
           ;

code_block: BLOCK_OPEN stmts BLOCK_CLOSE {
    $$ = createASTNode("Bloco de código", NULL);
    addChildNode($$, $2);
}
          ;

if_stmt: IF OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block else_stmt {
    $$ = createASTNode("IF", NULL);
    addChildNode($$, $6);
}
    ;

else_stmt: ELIF OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block else_stmt {
    $$ = createASTNode("ELIF",NULL);
    addChildNode($$, $6);
}
          | ELSE COLON code_block{
            $$ = createASTNode("ELSE",NULL);
            addChildNode($$, $3);
          }
          | {}
          ;

while_stmt: WHILE OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block{
    $$ = createASTNode("WHILE", NULL);
    addChildNode($$, $6);
}
          ;
for_stmt: FOR OPEN_PARENTHESES assign_stmt SEMICOLON expr SEMICOLON CLOSE_PARENTHESES COLON code_block{
    $$ = createASTNode("FOR", NULL);
    addChildNode($$, $9);
}
        ;

switch_stmt: SWITCH OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON cases default_case{
    $$ = createASTNode("SWITCH", NULL);
    addChildNode($$, $6);
    addChildNode($$, $7);
}
           ;

cases: CASE expr COLON code_block cases {
    $$ = createASTNode("CASE", NULL);
    addChildNode($$, $4);
}
     | /* empty */ {}
     ;

default_case: DEFAULT COLON code_block {
    $$ = createASTNode("DEFAULT", NULL);
    addChildNode($$, $3);
}
            | /* empty */ {}
            ;

print_stmt: PRINT OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON {
    $$ = createASTNode("PRINT", NULL);
}
          | PRINTLN OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON {
            $$ = createASTNode("PRINT", NULL);
          }
          ;

print_texts: print_text
           | print_texts COMMA print_text
           ;

print_text: LITERAL_STRING
          | var
          ;

input_stmt: INPUT OPEN_PARENTHESES input_text CLOSE_PARENTHESES SEMICOLON {
    $$ = createASTNode("INPUT", NULL);
}
          ;

input_text: var
          | input_text COMMA var
          ;

expr: expr OPERATION expr 
    | expr LOGIC_OPERATORS expr
    | expr RELACIONAL_OPERATORS expr
    | term { $$ = $1; }
    | call_function { $$ = $1; }
    | OPEN_PARENTHESES expr CLOSE_PARENTHESES { $$ = $2; }
    ;

term: DIGITS { 
    $$ = createASTNode("DIGITOS", NULL);
}
    | var { $$ = $1; }
    | literal { $$ = $1; }
    | DECIMAL {
        $$ = createASTNode("DECIMAL", NULL);
    }
    ;

var: IDENTIFIER {
    $$ = createASTNode("IDENTIFICADOR", NULL);
}
;


literal: LITERAL_CHAR { 
    $$ = createASTNode("CHAR", NULL);
}
        | LITERAL_STRING {
            $$ = createASTNode("STRING", NULL);
         }
        | LITERAL_BOOL { 
            $$ = createASTNode("BOOL", NULL);
         }
        ;

%%

int main(){
    yyparse();
    return 0;
}

void executeProgram() {
    printf("\nPrograma sintaticamente correto\n");
}   

void yyerror(const char *s) 
{
    fprintf(stderr, "Erro: %s próximo a linha %d\n", s, line_number+1);
    exit(0);
}

int yywrap() 
{
    return 1;
}
