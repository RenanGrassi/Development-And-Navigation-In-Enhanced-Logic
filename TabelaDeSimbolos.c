#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TabelaDeSimbolos.h"

void inicializaTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos) {
    tabelaDeSimbolos->primeiro = NULL;
    tabelaDeSimbolos->ultimo = NULL;
}

void jaExisteSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, int linha) {
    Simbolo *simbolo = tabelaDeSimbolos->primeiro;
    while (simbolo != NULL) {
        if (strcmp(simbolo->nome, nome) == 0) {
            printf("Erro linha %d: simbolo %s ja foi declarado\n", linha, nome); //ver se vai precisar de um print aq 
            exit(1);
        }
        simbolo = simbolo->proximo;
    }
}

void insereSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, TipoDeDado tipoDado, int linha, Tipo tipoSimbolo) {
    Simbolo *simbolo = (Simbolo *) malloc(sizeof(Simbolo));
    strcpy(simbolo->nome, nome);
    simbolo->tipoDado = tipoDado;
    simbolo->linha = linha;
    simbolo->tipoSimbolo = tipoSimbolo;
    simbolo->proximo = NULL;

    if (tabelaDeSimbolos->primeiro == NULL) {
        tabelaDeSimbolos->primeiro = simbolo;
        tabelaDeSimbolos->ultimo = simbolo;
    } else {
        tabelaDeSimbolos->ultimo->proximo = simbolo;
        tabelaDeSimbolos->ultimo = simbolo;
    }
}

Simbolo *buscaSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome) {
    Simbolo *simbolo = tabelaDeSimbolos->primeiro;
    while (simbolo != NULL) {
        if (strcmp(simbolo->nome, nome) == 0) {
            return simbolo;
        }
        simbolo = simbolo->proximo;
    }
    return NULL;
}

void removeSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome) {
    Simbolo *simbolo = tabelaDeSimbolos->primeiro;
    Simbolo *anterior = NULL;
    while (simbolo != NULL) {
        if (strcmp(simbolo->nome, nome) == 0) {
            if (anterior == NULL) {
                tabelaDeSimbolos->primeiro = simbolo->proximo;
            } else {
                anterior->proximo = simbolo->proximo;
            }
            free(simbolo);
            return;
        }
        anterior = simbolo;
        simbolo = simbolo->proximo;
    }
}

const char* getTipoDeDadoNome(TipoDeDado tipo) {
    switch (tipo) {
        case marioKart: return "marioKart";
        case zelda: return "zelda";
        case superMario: return "superMario";
        case donkey: return "donkey";
        case kong: return "kong";
        case mario: return "mario";
        default: return "Desconhecido";
    }
}

const char* getTipoNome(TipoDeDado tipo) {
    switch (tipo) {
        case funcao: return "Função";
        case variavel: return "Variável";
        case constante: return "Constante";
        case palavraChave: return "Palavra-chave";
        default: return "Desconhecido";
    }
}

void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos) {
    Simbolo *simbolo = tabelaDeSimbolos->primeiro;
    while (simbolo != NULL) {
        printf("Nome: %s\n", simbolo->nome);
        printf("Tipo de dado: %s\n", getTipoDeDadoNome(simbolo->tipoDado));
        printf("Linha: %d\n", simbolo->linha);
        printf("Tipo de simbolo: %s\n", getTipoNome(simbolo->tipoSimbolo));
        printf("\n");
        simbolo = simbolo->proximo;
    }
}