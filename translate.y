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
extern void yyerrorSemantic(const char *s);

int primeiro = 0;

int funcaoOuMain; //0 funcao, 1 main

int qntPassadas;

Function funcaoYacc;
Identificador *primeiroIdentificador;
Identificador *ultimoIdentificador;

ListaIdentificadores listaIdentificadores;


Function *funcaoVazia;
Function funcaoAuxiliar;

Identificador *identificadorAuxiliar;

TabelaDeSimbolos tabelaDeSimbolos;  // Tabela de símbolos global
//void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);

void addId(char *id, Tipo tipoSimbolo, TipoDeDado tipoDado, int linha, Type type, Function funcaoTabela);


%}

%code requires {
    #include "TabelaDeSimbolos.h" 
}

%union{
    char* str;
    int iValue;
    double real;
    char caractere;
    Identifier identifier;
    Type type;
    RealParameters types;
    Function* funct;
}

%token IF ELSE ELIF FOR RETURN CONTINUE BREAK SWITCH CASE DEFAULT
%token PRINT PRINTLN WHILE INT_MAIN READ_FILE CLOSE_FILE
%token OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COLON
%token FUNCTION_CALL
%token BLOCK_CLOSE BLOCK_OPEN
%token ASSIGN INPUT
%token <str> LITERAL_STRING
%token <str> LITERAL_BOOL
%token <caractere> LITERAL_CHAR
%token <identifier> IDENTIFIER
%token <iValue> DIGITS
%token <real> DECIMAL
%token <funct> FUNCT
%token <str> RELACIONAL_OPERATORS
%token <str> OPERATION
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
%type <type> stmts
%start program


%left OPERATION
%left RELACIONAL_OPERATORS
%left LOGIC_OPERATORS

%%

type: TYPE { $$ = get_type($1); }
    ;

program: /* empty */
       {funcaoOuMain = 0;}
       functions main { 
       primeiroIdentificador = (Identificador*) malloc(sizeof(Identificador));
       ultimoIdentificador = (Identificador*) malloc(sizeof(Identificador));
       imprimeTabelaDeSimbolos(&tabelaDeSimbolos, listaIdentificadores   ); 
       executeProgram(); 
}
       ;

functions:function functions
         | 
         ;


function: FUNCT IDENTIFIER OPEN_PARENTHESES parameter{  
                
            primeiroIdentificador = listaIdentificadores.primeiro; 
            ultimoIdentificador = listaIdentificadores.ultimo; 
            identificadorAuxiliar = primeiroIdentificador;

            } parameters {
                inicializaFuncao(&funcaoYacc, $2.nome, primeiroIdentificador, listaIdentificadores.qntParams, ultimoIdentificador, 1);
                funcaoYacc.qntParams = listaIdentificadores.qntParams;
            }
            CLOSE_PARENTHESES BLOCK_OPEN stmts BLOCK_CLOSE {
                addId($2.nome, funcao, nenhum, line_number + 1, FUNCTION, funcaoYacc);
            }
        ;

parameters: COMMA parameter parameters
          | /*empty*/
          ;

parameter: type IDENTIFIER {
                atualizaListaParametros(&listaIdentificadores, $1); 
            }

         | /*empty*/{funcaoOuMain = 0;}
         ;


main: {funcaoOuMain = 0;}INT_MAIN stmts 
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
       | call_function SEMICOLON
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

call_function: FUNCTION_CALL IDENTIFIER {
                if(!(buscaSimbolo(&tabelaDeSimbolos, $2.nome))){
                    imprimeTabelaDeSimbolos(&tabelaDeSimbolos, listaIdentificadores); 
                    char msg[100];
                    sprintf(msg, "Chamada de função não declarada \"%s\" proximo a linha %d", $2.nome, line_number + 1);
                    yyerrorSemantic(msg); 
                }

                } OPEN_PARENTHESES real_parameters CLOSE_PARENTHESES SEMICOLON { 
                $$ = FUNCTION; 
                qntPassadas = 0;
       
                }
             ;

real_parameters: real_parameter real_parameters2 
               | { $$ = NONE; }
               ;

real_parameters2: COMMA real_parameter real_parameters2 { $$ = $2; }
                | { $$ = NONE; }
                ;

real_parameter: expr { 
    if(qntPassadas < funcaoYacc.qntParams){
        if($1 == identificadorAuxiliar->type){
            qntPassadas++;
            if(!(identificadorAuxiliar->proximo)){
                identificadorAuxiliar = identificadorAuxiliar->proximo;

            }

        }else{
            char msg[100];
            sprintf(msg, "Tipo incompativel. Tipo esperado: %s, tipo passado: %s ",
                             getType(identificadorAuxiliar->type),getType($1));
            yyerrorSemantic(msg);

        }
    }else{
        char msg[100];
        sprintf(msg, "Quantidade de parametros maior doque esperado.");
        yyerrorSemantic(msg);
    }

}
                ;

return_stmt: RETURN expr SEMICOLON
           | RETURN SEMICOLON
           ;

assign_stmt: var ASSIGN expr SEMICOLON {
    Simbolo *simboloTeste;
    simboloTeste = buscaSimbolo(&tabelaDeSimbolos, $1.nome);
    if(simboloTeste){
        Type varType = simboloTeste->type;
        Type exprType = $3;
        if (varType != exprType) {
            char msg[100];
            sprintf(msg, "Tipo incompatível na atribuição de %s", $1.nome);
            yyerrorSemantic(msg);
        }
    }
    
}
           ;

declaration: type IDENTIFIER SEMICOLON { 
    funcaoVazia = (Function*) malloc(sizeof(Function));
    funcaoVazia->flag = 0;
    addId($2.nome, variavel, $1, line_number+1, $1, *funcaoVazia); }
           ;

code_block: BLOCK_OPEN stmts BLOCK_CLOSE
          ;

if_stmt: IF OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block else_stmt
    ;

else_stmt: ELIF OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block else_stmt
          | ELSE COLON code_block
          | 
          ;

while_stmt: WHILE OPEN_PARENTHESES expr CLOSE_PARENTHESES COLON code_block
          ;
for_stmt: FOR OPEN_PARENTHESES assign_stmt SEMICOLON expr SEMICOLON CLOSE_PARENTHESES COLON code_block
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

/*condition: expr RELACIONAL_OPERATORS expr { Type type = semantica_relop($1, $3, $2[0]);
                                    if (type == ERRO){
                                        yyerrorSemantic();
                                    }
                                    $$ = type; }
         | expr LOGIC_OPERATORS expr
         ;

/*logical_op: EQ
            |NE
            |GT
            |GE
            |LT
            |LE
            ;*/

expr: expr OPERATION expr {
    $$ = semantica_op($1, $3, $2[0]);
    if ($$ == ERRO) {
        yyerrorSemantic("Operação inválida entre tipos incompatíveis.");
    }
}
    | expr LOGIC_OPERATORS expr {
    $$ = semantica_logic($1, $3);
    if ($$ == ERRO) {
        yyerrorSemantic("Operação lógica inválida entre tipos incompatíveis.");
    }
}
    | expr RELACIONAL_OPERATORS expr {
    $$ = semantica_relop($1, $3, $2[0]);
    if ($$ == ERRO) {
        yyerrorSemantic("Operação relacional inválida entre tipos incompatíveis.");
    }
}
    | term { $$ = $1; }
    | call_function { $$ = $1; }
    | OPEN_PARENTHESES expr CLOSE_PARENTHESES { $$ = $2; }
    ;

term: DIGITS { $$ = INT; }
    | var { $$ = $1.type; }
    | literal { $$ = $1; }
    | DECIMAL { $$ = FLOAT; }
    ;

var: IDENTIFIER {
    if(funcaoOuMain == 1){
        if (!buscaSimbolo(&tabelaDeSimbolos, $1.nome)) {
            char msg[100];
            sprintf(msg, "Variável \"%s\" não declarada", $1.nome);
            yyerrorSemantic(msg);
        }
    }
    $$ = $1;
}
;


literal: LITERAL_CHAR { $$ = CHAR; }
        | LITERAL_STRING { $$ = STRING; }
        | LITERAL_BOOL { $$ =  BOOLEAN; }
        ;

%%

void addId(char *id, Tipo tipoSimbolo, TipoDeDado tipoDado, int linha, Type type, Function funcaoTabela) {
    
    if (buscaSimbolo(&tabelaDeSimbolos, id)) {
       imprimeTabelaDeSimbolos(&tabelaDeSimbolos, listaIdentificadores   ); 
        char msg[100];
        sprintf(msg, "Redeclaração do identificador \"%s\" na linha %d", id, linha);
        yyerrorSemantic(msg);
        exit(1);
    }
    insereSimbolo(&tabelaDeSimbolos, id, tipoDado, linha, tipoSimbolo, type, funcaoTabela);
}


int main(){
    qntPassadas = 0;
    identificadorAuxiliar = (Identificador *) malloc(sizeof(Identificador));
    inicializaTabelaDeSimbolos(&tabelaDeSimbolos);
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

void yyerrorSemantic(const char *s)
{
    fprintf(stderr, "Erro semântico próximo a linha %d: %s\n", line_number+1, s);
    exit(0);
}

int yywrap() 
{
    return 1;
}
