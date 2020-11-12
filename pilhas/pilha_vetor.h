//
// Created by joaomarcus on 09/11/2020.
//

#ifndef ALGORITMOS_PILHA_VETOR_H
#define ALGORITMOS_PILHA_VETOR_H

#include <stdlib.h>
#include "pilha.h"

#define MAX 50

struct pilha {
    int elementos[MAX];
    int topo;
};

int pilha_lotada (Pilha* pilha) {
    return pilha->topo >= MAX;
}

int vazia(Pilha* pilha) {
    return pilha->topo == 0;
}

Pilha* cria_pilha(void) {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->topo = 0;
    return pilha;
}

void empilha(Pilha* pilha, int valor) {
    if (pilha_lotada(pilha)){
        return;
    }

    int topo_da_pilha = pilha->topo;
    pilha->elementos[topo_da_pilha] = valor;
    pilha->topo++;
}

int desempilha(Pilha* pilha) {
    if (vazia(pilha)){
        return -1;
    }

    int elementoDesempilhado = pilha->elementos[pilha->topo - 1];
    pilha->topo--;
    return elementoDesempilhado;
}

void desempilhaEImprime(Pilha *pilha) {
    while(!vazia(pilha)) {
        int elementoDesempilhado = desempilha(pilha);
        printf("%d", elementoDesempilhado);
    }
}

void libera_pilha(Pilha* pilha) {
    free(pilha);
}

#endif //ALGORITMOS_PILHA_VETOR_H
