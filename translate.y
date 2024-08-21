%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "TabelaDeSimbolos.h"

extern void yyerror(const char *);
int yylex(void); 
extern int line_number;
void executeProgram();

FILE *prod;

TabelaDeSimbolos tabelaDeSimbolos;  // Tabela de símbolos global

void addId(char *id, Tipo tipoSimbolo, TipoDeDado tipoDado, int linha);

%}

%code requires {
    #include "TabelaDeSimbolos.h" 
}

%union{
    char* str;
    int iValue;
    double real;
    char caractere;
    Identificador identifier;
    Identificadores identifiers;
    Tipo type;
    RealParameters types;
    Function* funct;
}

%token IF ELSE ELIF FOR RETURN CONTINUE BREAK SWITCH CASE DEFAULT TYPEDEF
%token PRINT PRINTLN WHILE GOTO SCANF INT_MAIN READ_FILE CLOSE_FILE
%token OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COLON
%token FUNCTION_CALL ARQUIVO ENUM STRUCT_KEYWORD SWAP MALLOC FREE DANIBOY LT GT LE GE EQ NE AND OR NEGA
%token SUB MUL DIV MOD INCREMENT DECREMENT ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN XOR LEFT_SHIFT
%token RIGHT_SHIFT QUEST SEMI_COLON BLOCK_CLOSE BLOCK_OPEN DOT ARROW SUSTENIDO
%token ASSIGN ADD MINUS INPUT
%token <str> LITERAL_STRING
%token <str> LITERAL_BOOL
%token <caractere> LITERAL_CHAR
%token <identifier> IDENTIFIER
%token <iValue> DIGITS
%token <real> DECIMAL
%token <funct> FUNCT
%token <str> RELACIONAL_OPERATORS
%token <str> LOGIC_OPERATORS
%token <str> TYPE

%type <type> type
%type <identifier> var
%type <type> expr
%type <type> term
%type <type> call_function
%type <type> literal
%type <type> real_parameters
%type <type> real_parameters2
%type <type> real_parameter
%type <type> condition
%type <type> stmts
%type <type> increment_stmt  /* Adding type declaration for increment_stmt */

%start program

%left COMMA
%right ASSIGN ADD_ASSIGN DIV_ASSIGN MOD_ASSIGN MUL_ASSIGN SUB_ASSIGN
%right QUEST COLON
%left OR
%left XOR
%left AND
%left EQ NE
%left LT LE GE GT
%left LEFT_SHIFT RIGHT_SHIFT
%left ADD SUB
%left MUL DIV MOD
%right INCREMENT DECREMENT 
%left OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKET CLOSE_BRACKET DOT

%%

type: TYPE { $$ = TYPE; }
    ;

program: /* empty */
       | functions main { executeProgram(); imprimeTabelaDeSimbolos(&tabelaDeSimbolos); }
       ;

functions: function functions
         | 
         ;

function: FUNCT IDENTIFIER OPEN_PARENTHESES parameter parameters CLOSE_PARENTHESES BLOCK_OPEN stmts BLOCK_CLOSE
        ;

parameters: COMMA parameter parameters
          | /*empty*/
          ;

parameter: type IDENTIFIER { addId($2.name, variavel, $1, line_number); }
         | /*empty*/
         ;

main: INT_MAIN stmts
    ;

stmts: stmt stmts { $$ = TYPE; }
     | /* empty */ { $$ = NONE; }
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
       | call_function SEMI_COLON
       | BREAK SEMICOLON
       | CONTINUE SEMICOLON
       | declaration
       | input_stmt
       | file_stmt
       ;

file_stmt: file_open
         | file_close
         ;

file_open: type READ_FILE OPEN_PARENTHESES LITERAL_STRING CLOSE_PARENTHESES SEMICOLON
         ;

file_close: CLOSE_FILE OPEN_PARENTHESES IDENTIFIER CLOSE_PARENTHESES SEMICOLON
          ;

call_function: FUNCTION_CALL OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON { $$ = FUNCTION; }
             ;

real_parameters: real_parameter real_parameters2 
               | { $$ = NONE; }
               ;

real_parameters2: COMMA real_parameter real_parameters2 { $$ = $2; }
                | { $$ = NONE; }
                ;

real_parameter: expr 
                ;

return_stmt: RETURN expr SEMICOLON
           | RETURN SEMICOLON
           ;

assign_stmt: var ASSIGN expr SEMICOLON
           ;

declaration: type IDENTIFIER SEMICOLON { addId($2.name, variavel, $1, line_number); }
           ;

code_block: BLOCK_OPEN stmts BLOCK_CLOSE
          ;

if_stmt: IF OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block else_stmt
    ;

else_stmt: ELIF OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block else_stmt
          | ELSE COLON code_block
          | 
          ;

while_stmt: WHILE OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block
          ;

for_stmt: FOR OPEN_PARENTHESES assign_stmt SEMICOLON condition SEMICOLON increment_stmt CLOSE_PARENTHESES COLON code_block
        ;

switch_stmt: SWITCH OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON cases default_case
           ;

cases: CASE expr COLON code_block cases
     | /* empty */
     ;

default_case: DEFAULT COLON code_block
            | /* empty */
            ;

print_stmt: PRINT OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON
          | PRINTLN OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON
          ;

print_texts: print_text
           | print_texts COMMA print_text
           ;

print_text: LITERAL_STRING
          | var
          ;

input_stmt: INPUT OPEN_PARENTHESES input_text CLOSE_PARENTHESES SEMICOLON
          ;

input_text: var
          | input_text COMMA var
          ;
/* 
condition: expr RELACIONAL_OPERATORS expr
         | expr LOGIC_OPERATORS expr
         ;
*/

condition: expr relacionals_op expr
         | expr logical_op expr
         ;

relacionals_op: AND
                |OR
                ;

logical_op: EQ
            |NE
            |GT
            |GE
            |LT
            |LE
            ;

increment_stmt: var ADD ADD { $$ = $1.type; } /* Assigning var's type */
              | var MINUS MINUS { $$ = $1.type; } /* Assigning var's type */
              ;

expr: term { $$ = $1; }
    | call_function { $$ = $1; }
    | OPEN_PARENTHESES expr CLOSE_PARENTHESES { $$ = $2; }
    ;

term: DIGITS { $$ = INT; }
    | var { $$ = $1.type; }
    | literal { $$ = $1; }
    | DECIMAL { $$ = FLOAT; }
    ;

var: IDENTIFIER
   ;

literal: LITERAL_CHAR { $$ = CHAR; }
        | LITERAL_STRING { $$ = STRING; }
        | LITERAL_BOOL { $$ =  BOOLEAN; }
        ;

%%

void addId(char *id, Tipo tipoSimbolo, TipoDeDado tipoDado, int linha) {
    if (buscaSimbolo(&tabelaDeSimbolos, id)) {
        char msg[100];
        sprintf(msg, "Redeclaração do identificador \"%s\" na linha %d", id, linha);
        yyerror(msg);
        exit(1);
    }
    insereSimbolo(&tabelaDeSimbolos, id, tipoDado, 0, linha, tipoSimbolo);
}

int main(){
    inicializaTabelaDeSimbolos(&tabelaDeSimbolos);
    printf("Tabela iniciada");
    yyparse();
    return 0;
}

void executeProgram() {
    printf("Programa sintaticamente correto\n");
}   

void yyerror(const char *s) 
{
    fprintf(stderr, "Error: %s\n", s);
}

int yywrap() 
{
    return 1;
}
