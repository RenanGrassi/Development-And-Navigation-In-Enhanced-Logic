#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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