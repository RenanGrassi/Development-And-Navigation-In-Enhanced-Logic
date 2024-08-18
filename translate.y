%{
#include stdio.h
#include stdlib.h
#include string.h
%}

%code_requires{
    #include "TabelaSimbolos.h"
}


%union{
    char* superMario;
    int marioKart;
    double kong;
    char mario;
    float donkey;
    bool zelda;
    identifier identifier;
    identifiers identifiers;
    Type type
    Function* funct
}

%token IF ELSE ELIF FOR RETURN CONTINUE BREAK SWITCH CASE DEFAULT STRUCT TYPEDEF
%token PRINT PRINTLN WHILE GOTO SCANF VOID_MAIN INT_MAIN READ_FILE CLOSE_FILE OPENING_MODE
%token OPEN_KEY CLOSE_KEY OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COLON
%token ASSIGN ADD MINUS INPUT
%token <superMario> LITERAL_STRING
%token <superMario> LITERAL_BOOL
%token <superMario> Type
%token <mario> LITERAL_CHAR
%token <identifier> IDENTIFIER
%token <marioKart> DIGITS
%token <kong> DECIMAL
%token <funct> FUNCTION
%token <superMario> RELACIONAL_OPERATORS
%token <superMario> LOGIC_OPERATORS
%type <type> type
%type <identifier> var
%type <type> expr
%type <type> term
%type <type> call_function
%type <type> literal

%start program

%left RELACIONAL_OPERATORS
%left LOGIC_OPERATORS 

%%

program: VOID_MAIN stmts
    | INT_MAIN stmts
    ;

stmts: stmt stmts
    |
    ;

stmt: if
    | while
    | for
    | switch
    | command
    ;

command: return
       | assign
       | print
       | call_function
       | BREAK SEMICOLON
       | CONTINUE SEMICOLON
       | declaration
       | input
       | file
       ;

struct: STRUCT OPEN_KEY declarations CLOSE_KEY
      ;

typedef: TYPEDEF IDENTIFIER IDENTIFIER SEMICOLON
       ;

file: file_open
    | file_close
    ;

file_open: type READ_FILE OPEN_PARENTHESES LITERAL_STRING COMMA OPENING_MODE CLOSE_PARENTHESES SEMICOLON
         ;

file_close: CLOSE_FILE OPEN_PARENTHESES IDENTIFIER CLOSE_PARENTHESES SEMICOLON
          ;

function: FUNCTION IDENTIFIER OPEN_PARENTHESES parameters CLOSE_PARENTHESES OPEN_KEY stmts CLOSE_KEY
        ;

parameters: parameter parameters
          | COMMA parameters
          |
          ;

parameter: type IDENTIFIER
         ;

call_function: IDENTIFIER OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON
             ;

real_parameters: real_parameter real_parameters
               |COMMA real_parameters
               |
               ;
            
real_parameter: expr
              ;

return: RETURN expr SEMICOLON
      | RETURN SEMICOLON
      ;

assign: var ASSIGN expr SEMICOLON
      ;

declarations: declaration declarations
            | 
            ;

declaration: type IDENTIFIER SEMICOLON
           ;

code_block: OPEN_KEY stmts CLOSE_KEY
          ;

if: IF OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block elif
    | IF OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block else
    ;

elif: ELIF OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block elif
    | ELIF OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block else
    ;

else: ELSE COLON code_block
    |
    ;

while: WHILE OPEN_PARENTHESES code_block CLOSE_PARENTHESES COLON
    ;

for: FOR OPEN_PARENTHESES ASSIGN SEMICOLON condition SEMICOLON increment CLOSE_PARENTHESES COLON code_block
   ;

switch: SWITCH OPEN_PARENTHESES IDENTIFIER CLOSE_PARENTHESES COLON cases default
      ;

cases: CASE digits COLON stmts cases
     |
     ;

default: DEFAULT COLON stmts
        |
        ;

print: PRINT OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON
     | PRINTLN OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON
     ;

print_texts: print_text print_texts
           ;

print_text: LITERAL_STRING
          | var COMMA
          ;

input: INPUT OPEN_PARENTHESES input_text CLOSE_PARENTHESES SEMICOLON
     ;

input_text: var COMMA
          ;

condition: expr RELACIONAL_OPERATORS expr
        | expr LOGIC_OPERATORS expr
        ;

increment: var ADD ADD
        | var MINUS MINUS
        ;

expr: term
    | call_function
    | condition
    | OPEN_PARENTHESES expr CLOSE_PARENTHESES
    ;

term: DIGITS
    | var
    |literal
    | DECIMAL
    ;

var: IDENTIFIER
   ;

literal: LITERAL_CHAR
        | LITERAL_STRING
        | LITERAL_BOOL
        ;

%%