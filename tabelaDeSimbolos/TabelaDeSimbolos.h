#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    INT,
    FLOAT,
    CHAR,
    // Add other types as needed
} Type;

typedef struct {
    char* name;
    Type type;
} identifier;

typedef struct {
    identifier* id_list;
    int count;
} identifiers;

typedef struct {
    char* name;
    Type returnType;
    identifiers params;
} Function;

typedef enum {
    STMT,
    NONE,
    FUNCTION_CALL,
    // Add other enums as needed
} Enumtypes;


typedef enum TipoDeDado{
    marioKart,
    zelda,
    superMario,
    donkey,
    kong,
    mario
} TipoDeDado;

typedef enum Tipo {
    funcao,
    variavel,
    constante,
    palavraChave
} Tipo;

typedef struct Simbolo {
    char nome[50];
    TipoDeDado tipoDado;
    int endereco;
    struct Simbolo *proximo;
    int linha;
    Tipo tipoSimbolo;
} Simbolo;

typedef struct TabelaDeSimbolos {
    Simbolo *primeiro;
    Simbolo *ultimo;
} TabelaDeSimbolos;

void inicializaTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);
void insereSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, TipoDeDado tipoDado, int endereco, int linha, Tipo tipoSimbolo);
Simbolo *buscaSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);
void removeSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void jaExisteSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, int linha);