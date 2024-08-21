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

void insereSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, TipoDeDado tipoDado, int endereco, int linha, Tipo tipoSimbolo) {
    Simbolo *simbolo = (Simbolo *) malloc(sizeof(Simbolo));
    strcpy(simbolo->nome, nome);
    simbolo->tipoDado = tipoDado;
    simbolo->endereco = endereco;
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

void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos) {
    Simbolo *simbolo = tabelaDeSimbolos->primeiro;
    while (simbolo != NULL) {
        printf("Nome: %s\n", simbolo->nome);
        printf("Tipo de dado: %d\n", simbolo->tipoDado);
        printf("Endereco: %d\n", simbolo->endereco);
        printf("Linha: %d\n", simbolo->linha);
        printf("Tipo de simbolo: %d\n", simbolo->tipoSimbolo);
        printf("\n");
        simbolo = simbolo->proximo;
    }
}