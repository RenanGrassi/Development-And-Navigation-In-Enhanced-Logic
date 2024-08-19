%{
#include stdio.h
#include stdlib.h
#include string.h
#include "tabelaDeSimbolos/TabelaDeSimbolos.h"
%}



%union{
    char* superMario;
    int marioKart;
    double kong;
    char mario;
    float donkey;
    bool zelda;
    identifier identifier;
    identifiers identifiers;
    Type type;
    Function* funct;
}

%token IF ELSE ELIF FOR RETURN CONTINUE BREAK SWITCH CASE DEFAULT STRUCT TYPEDEF
%token PRINT PRINTLN WHILE GOTO SCANF INT_MAIN READ_FILE CLOSE_FILE OPENING_MODE
%token OPEN_KEY CLOSE_KEY OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COLON
%token TIPO CALL ARQUIVO ENUM STRUCT_KEYWORD SWAP MALLOC FREE DANIBOY LT GT LE GE EQ NE AND OR NEGA
%token SUB MUL DIV MOD INCREMENT DECREMENT ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN XOR LEFT_SHIFT
%token RIGHT_SHIFT QUEST SEMI_COLON BLOCK_CLOSE BLOCK_OPEN DOT ARROW SUSTENIDO
%token ASSIGN ADD MINUS INPUT
%token <superMario> LITERAL_STRING
%token <superMario> LITERAL_BOOL
%token <mario> LITERAL_CHAR
%token <identifier> IDENTIFIER
%token <marioKart> DIGITS
%token <kong> DECIMAL
%token <funct> FUNCTION
%token <superMario> RELACIONAL_OPERATORS
%token <superMario> LOGIC_OPERATORS
%token <superMario> TYPE

%type <type> type
%type <identifier> var
%type <type> expr
%type <type> term
%type <type> call_function
%type <superMario> literal
%type <superMario> real_parameters
%type <type> condition
%type <type> increment
%type <type> stmts

%start program

%left INT_MAIN
%right FUNCTION

%%

type: TYPE { $$ = TYPE; }
    ;

program: /* empty */
       | program functions
       | program INT_MAIN stmts
       ;


functions: function
         | functions function
         ;

function: FUNCTION IDENTIFIER OPEN_PARENTHESES parameters CLOSE_PARENTHESES OPEN_KEY stmts CLOSE_KEY
        ;

stmts: stmt stmts { $$ = STMT }
     | /* empty */ { $$ = NONE; }
     ;

stmt: if {addId(fezALista, palavraChave);}
    | while {addId(eAGreve, palavraChave);}
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
       | declarations
       | input
       | file
       ;

file: file_open
    | file_close
    ;

file_open: type READ_FILE OPEN_PARENTHESES LITERAL_STRING COMMA OPENING_MODE CLOSE_PARENTHESES SEMICOLON
         ;

file_close: CLOSE_FILE OPEN_PARENTHESES IDENTIFIER CLOSE_PARENTHESES SEMICOLON
          ;

parameters: parameter
          | parameters COMMA parameter
          ;

parameter: type IDENTIFIER
         ;

call_function: IDENTIFIER OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON { $$ = FUNCTION_CALL; }
             ;

real_parameters: expr { $$ = $1; }
               | real_parameters COMMA expr
               ;

return: RETURN expr SEMICOLON
      | RETURN SEMICOLON
      ;

assign: var ASSIGN expr SEMICOLON
      ;

declarations: declaration
            | declarations declaration
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
    ;

while: WHILE OPEN_PARENTHESES condition CLOSE_PARENTHESES COLON code_block
    ;

for: FOR OPEN_PARENTHESES assign SEMICOLON condition SEMICOLON increment CLOSE_PARENTHESES COLON code_block
   ;

switch: SWITCH OPEN_PARENTHESES IDENTIFIER CLOSE_PARENTHESES COLON cases default
      ;

cases: CASE DIGITS COLON stmts cases
     | /* empty */
     ;

default: DEFAULT COLON stmts
        | /* empty */
        ;

print: PRINT OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON
     | PRINTLN OPEN_PARENTHESES print_texts CLOSE_PARENTHESES SEMICOLON
     ;

print_texts: print_text
           | print_texts COMMA print_text
           ;

print_text: LITERAL_STRING
          | var
          ;

input: INPUT OPEN_PARENTHESES input_text CLOSE_PARENTHESES SEMICOLON
     ;

input_text: var
          | input_text COMMA var
          ;

condition: expr RELACIONAL_OPERATORS expr
         | expr LOGIC_OPERATORS expr
         | /* empty */ { $$ = NONE; }
         ;

increment: var ADD ADD { $$ = INCREMENT; }
         | var MINUS MINUS { $$ = DECREMENT; }
         | /* empty */ { $$ = NO_INCREMENT; }
         ;

expr: term
    | call_function
    | OPEN_PARENTHESES expr CLOSE_PARENTHESES { $$ = $2; }
    ;

term: DIGITS { $$ = INT; }
    | var { $$ = $1.type; }
    | literal { $$ = $1; }
    | DECIMAL { $$ = FLOAT; }
    ;

var: IDENTIFIER
   ;

literal: LITERAL_CHAR { $$ = LITERAL_CHAR; }
        | LITERAL_STRING
        | LITERAL_BOOL
        ;

%%

void addId(char *id, Enumtypes type) {
    if(symbolTableFindInBlock(st, id)) {
        char msg[100];
        sprintf(msg, "Redeclaração do identificador \"%s\"", id);
        yyerror(msg);
        onExit();
        exit(0);
    }
    symbolTableInsert(st, symbolNew(id, type, 1));
    imprimeTabelaDeSimbolos(tabelaDeSimbolos);
}

int main(){
    TabelaDeSimbolos tabelaDeSimbolos;
    return yyparse();
}

void yyerror(const char *s)
{
    fprintf(stderr, "Error: %s\n", s);
}

int yywrap()
{
    return 1;
}