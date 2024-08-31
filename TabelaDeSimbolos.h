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


typedef struct {
    char* nome;
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
    Type type;
    struct Simbolo *proximo;
    int linha;
    Tipo tipoSimbolo;
} Simbolo;

typedef struct TabelaDeSimbolos {
    Simbolo *primeiro;
    Simbolo *ultimo;
    int tamanho;
} TabelaDeSimbolos;

void inicializaTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);
void insereSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, TipoDeDado tipoDado, int linha, Tipo tipoSimbolo, Type type);
Simbolo *buscaSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos);
void removeSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome);
void jaExisteSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, int linha);
int install_ids(TabelaDeSimbolos *tabelaDeSimbolos, Identificador identificador);
int install_id(char* name, Type type, Type value_type);

Type semantica_relop(Type type1, Type type2, char op);
Type semantica_op(Type type1, Type type2, char op);
Type semantica_logic(Type type1, Type type2);
Type semantica_ternary(Type type1, Type type2);

Type get_type(const char* str);




#endif // TABELADESIMBOLOS_H