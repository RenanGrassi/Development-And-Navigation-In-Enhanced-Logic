#ifndef TABELADESIMBOLOS_H
#define TABELADESIMBOLOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    INT,
    FLOAT,
    CHAR,
    BOOLEAN,
    STRING,
    FUNCTION,
    NONE,
} Type;

typedef struct 
{
    Type* types;
    int size;
} RealParameters;


typedef struct {
    char* name;
    Type type;
} Identificador;

typedef struct {
    Identificador* id_list;
    int count;
} Identificadores;

typedef struct {
    char* name;
    Type returnType;
    Identificadores params;
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
    struct Simbolo *proximo;
    int linha;
    Tipo tipoSimbolo;
} Simbolo;

typedef struct TabelaDeSimbolos {
    Simbolo *primeiro;
    Simbolo *ultimo;
} TabelaDeSimbolos;

void inicializaTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);
void insereSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, TipoDeDado tipoDado, int linha, Tipo tipoSimbolo);
Simbolo *buscaSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);
void removeSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void jaExisteSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, int linha);

#endif // TABELADESIMBOLOS_H