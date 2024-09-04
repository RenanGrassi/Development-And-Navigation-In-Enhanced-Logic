#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TabelaDeSimbolos.h"

void inicializaTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos) {
    tabelaDeSimbolos->primeiro = NULL;
    tabelaDeSimbolos->ultimo = NULL;
    tabelaDeSimbolos->tamanho = 0;
}

void inicializaFuncao(Function *funcao, char *nome, Identificador *primeiroIdentificador, int qntParams, Identificador *ultimoIdentificador,int flag){
    
    funcao = (Function*) malloc(sizeof(Function));
    strcpy(funcao->name, nome);
    funcao->primeiroIdentificador = primeiroIdentificador;
    funcao->ultimoIdentificador = ultimoIdentificador;
    funcao->flag = flag;
    funcao->qntParams = qntParams;

}

void atualizaListaParametros(ListaIdentificadores* lista, Type tipo) {
    // Allocate memory for a new Identificador
    
    Identificador* identificador = (Identificador*) malloc(sizeof(Identificador));
    if (identificador == NULL) {
        // Handle memory allocation failure
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    
    // Initialize the new Identificador
    identificador->proximo = NULL;
    identificador->type = tipo;
    // If the list is empty, initialize it with the new Identificador
    if(!lista){
        lista = (ListaIdentificadores*) malloc(sizeof(ListaIdentificadores));
        lista->primeiro = NULL;
        lista->ultimo = NULL;
        lista->qntParams = 0;
    }

    if (lista->primeiro == NULL) {
        lista->primeiro = identificador;
        lista->ultimo = identificador;
        lista->qntParams++;
    } else {
        lista->ultimo->proximo = identificador;
        lista->ultimo = identificador;
        lista->qntParams++;
    }

}


void clearIdentificadorList(Identificador* head) {
    Identificador* current = head;
    Identificador* next;

    while (current != NULL) {
        next = current->proximo;  
        if (current->nome != NULL) {
            free(current->nome);
        }

        free(current);
        
        current = next;
    }

    head = NULL;  
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

void insereSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome, TipoDeDado tipoDado, int linha, Tipo tipoSimbolo, Type type, Function funcao) {
    Simbolo *simbolo = (Simbolo *) malloc(sizeof(Simbolo));
    strcpy(simbolo->nome, nome);
    simbolo->type = type;
    simbolo->tipoDado = tipoDado;
    simbolo->linha = linha;
    simbolo->tipoSimbolo = tipoSimbolo;

    if(strcmp(getType(simbolo->tipoSimbolo),"função")){
        strcpy(funcao.name, nome);
        simbolo->funcao = funcao;

    }

    simbolo->proximo = NULL;

    if (tabelaDeSimbolos->primeiro == NULL) {
        tabelaDeSimbolos->primeiro = simbolo;
        tabelaDeSimbolos->ultimo = simbolo;
    } else {
        tabelaDeSimbolos->ultimo->proximo = simbolo;
        tabelaDeSimbolos->ultimo = simbolo;
    }
    tabelaDeSimbolos->tamanho ++;
}

Simbolo *buscaSimbolo(TabelaDeSimbolos *tabelaDeSimbolos, char *nome) {
    Simbolo *simbolo = tabelaDeSimbolos->primeiro;
    while (simbolo != NULL) {
        if(strcmp(simbolo->nome, nome) == 0) {
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

const char* getType(Type type) {
    switch (type) {
        case INT: return "int";
        case STRING: return "string";
        case FLOAT: return "float";
        case CHAR: return "char";
        case FUNCTION: return "função";
        case ERRO: return "erro";
        case BOOLEAN: return "boolean";
        default: return "Desconhecido";
    }
}

void imprimeTabelaDeSimbolos(TabelaDeSimbolos *tabelaDeSimbolos, ListaIdentificadores lista) {
    Simbolo *simbolo = tabelaDeSimbolos->primeiro;

    // Print the table header

    // Iterate through the symbol list and print each entry
    while (simbolo != NULL) {
        printf("---------------------------------------------------------------------------------------\n");
        printf("| %-20s | %-20s | %-6s | %-20s | %-20s \n", 
            "Nome", "Tipo de dado", "Linha", "Tipo de simbolo", "Type do simbolo");
        printf("---------------------------------------------------------------------------------------\n");
        printf("| %-20s | %-20s | %-6d | %-20s | %-20s \n", 
               simbolo->nome, 
               getTipoDeDadoNome(simbolo->tipoDado), 
               simbolo->linha, 
               getTipoNome(simbolo->tipoSimbolo), 
               getType(simbolo->type));

        // Print the function if it exists
        if (&simbolo->funcao != NULL) {
            printFunction(&simbolo->funcao, lista);  // Assuming this prints details of the function
        }

        simbolo = simbolo->proximo;
    }

    // Print table footer
    printf("---------------------------------------------------------------------------------------\n");
}


void printFunction(Function* func, ListaIdentificadores lista) {
    if (func == NULL) {
        printf("| %-20s | %-20s |\n", "Function", "NULL");
        return;
    }

    // Print function details as part of the table
    printf("| %-20s | %-20d |\n", "Function Name", func->qntParams);
    
    Identificador* current = func->primeiroIdentificador;

    // Header for the function's identifiers
    printf("---------------------------------------------------------------------------------------\n");
    printf("| %-20s | %-20s | %-10s \n", "Identificador Name", "Identificador Type", "qntParams");
    printf("---------------------------------------------------------------------------------------\n");

    // Iterate through the function's identifiers and print them
    while (current != NULL) {
        printf("| %-20s | %-20d |\n", 
               current->nome, 
               current->type  );// Adjust if necessary for proper type printing
        current = current->proximo;
    }

    // Print quantity of parameters from the list
    //printf("---------------------------------------------------------------------------------------\n");
    printf("%-20s | %-20d \n", "Lista Total Params", lista.qntParams);
    printf("\n\n");
    //printf("---------------------------------------------------------------------------------------\n");
}


Type semantica_relop(Type type1, Type type2, char op){
    Type resultado = ERRO;
    if (type1 == INT && type2 == INT){
        resultado = BOOLEAN;
    }
    else if (type1 == FLOAT && type2 == FLOAT){
        resultado = BOOLEAN;
    }
    else if (type1 == type2 && op == '='){
        resultado = BOOLEAN;
    }


    return resultado;
}

Type semantica_op(Type type1, Type type2, char op){
    char *vetor1 = tipoParaString(type1);  // Use char * to store the returned string.
    char *vetor2 = tipoParaString(type2);  // Use char * to store the returned string.

    printf("Tipo 1 %s, tipo2 %s\n", vetor1, vetor2);  // Now the types match %s.


    Type resultado = ERRO;
    if (type1 == INT && type2 == INT){
        printf("int\n");
        resultado = INT;
    }
    if (type1 == FLOAT && type2 == FLOAT){
        printf("float\n");
        resultado = FLOAT;
    }
    if (type1 == STRING && type2 == STRING && op == '+'){
        printf("string\n");
        resultado = STRING;
    }

    return resultado;
}

Type semantica_logic(Type type1, Type type2){
    Type resultado = ERRO;
    if (type1 == BOOLEAN && type2 == BOOLEAN){
        resultado = BOOLEAN;
    }
    return resultado;
}

Type semantica_ternary(Type type1, Type type2){
    Type resultado = ERRO;
    if (type1 == type2){
        resultado = type1;
    }
    return resultado;
}



int install_ids(TabelaDeSimbolos *tabelaDeSimbolos, Identificador identificador){
    Simbolo *simbolo = (Simbolo *) malloc(sizeof(Simbolo));
    simbolo = buscaSimbolo(tabelaDeSimbolos,identificador.nome);
    //aqui vai ter que testar as outras 3 possibilidades tb:
    //int status = install_id(simbolo->nome, identificador.type, simbolo->tipoSimbolo);
    //int status = install_id(simbolo->nome, simbolo->tipoSimbolo, identificador.type);
    //int status = install_id(simbolo->nome, simbolo->tipoDado, identificador.type);
    int status = install_id(simbolo->nome, identificador.type, simbolo->tipoDado);
    if (status != SUCESS0){
        return status;
    }


    return 0;
}


int install_id(char *name, Type type, Type value_type){
    if (type != value_type && type != FUNCTION){
        return ERRO_SEMANTICO;
    }

    return SUCESS0;
}


char *tipoParaString(Type type){
    if (type == INT)
    {
        return "int";
    }
    else if (type == FLOAT)
    {
        return "float";
    }
    else if (type == CHAR)
    {
        return "char";
    }
    else if (type == BOOLEAN)
    {
        return "boonear";
    }
    else if (type == STRING)
    {
        return "string";
    }
}
Type get_type(const char *str)
{
    if (strcmp(str, "marioKart") == 0)
    {
        return INT;
    }
    else if (strcmp(str, "donkey") == 0)
    {
        return FLOAT;
    }
    else if (strcmp(str, "mario") == 0)
    {
        return CHAR;
    }
    else if (strcmp(str, "zelda") == 0)
    {
        return BOOLEAN;
    }
    else if (strcmp(str, "superMario") == 0)
    {
        return STRING;
    }
}