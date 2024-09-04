#ifndef TABELADESIMBOLOS_H
#define TABELADESIMBOLOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO_SEMANTICO 0
#define SUCESS0 1

typedef enum {
    INT,
    FLOAT,
    CHAR,
    BOOLEAN,
    STRING,
    FUNCTION,
    ERRO,
    NONE,
} Type;

typedef struct 
{
    Type* types;
    int size;
} RealParameters;

typedef struct Identifier{
    char *nome;
    Type type;
}Identifier;



typedef struct Identificador {
    char nome[50];
    Type type;
    struct Identificador* proximo;
} Identificador;

typedef struct {
    Identificador* primeiro; // First element in the list
    Identificador* ultimo;   // Last element in the list
    int qntParams;
} ListaIdentificadores;




typedef struct {
    char name[50];
    Identificador *primeiroIdentificador;
    Identificador *ultimoIdentificador;
    int qntParams;
    int flag;//se 0 n e funcao, se 1 e funcao
} Function;

typedef enum {
    STMT,
} Enumtypes;

typedef enum TipoDeDado{
    marioKart,
    zelda,
    superMario,
    donkey,
    kong,
    mario,
    nenhum,
} TipoDeDado;

typedef enum Tipo {
    funcao,
    variavel,
    constante,
    palavraChave
} Tipo;

typedef struct Simbolo ProxSimbolo;



typedef struct Simbolo {
    char nome[50];
    TipoDeDado tipoDado;
    Type type;
    struct Simbolo *proximo;
    int linha;
    Tipo tipoSimbolo;
    Function funcao;
} Simbolo;

typedef struct TabelaDeSimbolos {
    Simbolo *primeiro;
    Simbolo *ultimo;
    int tamanho;
} TabelaDeSimbolos;

void inicializaTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);
void insereSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, TipoDeDado tipoDado, int linha, Tipo tipoSimbolo, Type type, Function funcao);
Simbolo *buscaSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos, ListaIdentificadores lista);
void removeSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void jaExisteSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, int linha);
int install_ids(TabelaDeSimbolos *tabelaDeSimbolos, Identificador identificador);

char *tipoParaString(Type type);
int install_id(char* name, Type type, Type value_type);

Type semantica_relop(Type type1, Type type2, char op);
Type semantica_op(Type type1, Type type2, char op);
Type semantica_logic(Type type1, Type type2);
Type semantica_ternary(Type type1, Type type2);

Type get_type(const char* str);
const char* getType(Type type);
void printFunction(Function* func, ListaIdentificadores lista);

void inicializaFuncao(Function *Funcao, char *nome, Identificador *primeiroIdentificador,int qntParams, Identificador *ultimoIdentificador, int flag);
void atualizaListaParametros(ListaIdentificadores* lista, Type tipo);
void clearIdentificadorList(Identificador* head);





#endif // TABELADESIMBOLOS_H