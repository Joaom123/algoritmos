#include <stdio.h>

#ifndef FILA_VETOR_H
#define FILA_VETOR_H

#define N 100

int fila[N];
int indexInicio, indexFim;

void cria() {
    indexInicio = indexFim = 0;
}

void insere(int valor) {
    fila[indexFim++] = valor;
}

void reseta() {
    indexInicio = 0;
    indexFim = 0;
    for (int i = 0; i < N; ++i) {
        fila[i] = 0;
    }
}

int retira() {
    return fila[indexInicio++];
}

int primeiro_da_fila() {
    return fila[indexInicio];
}

int fila_esta_vazia() {
    return indexInicio >= indexFim;
}

int fila_esta_cheia() {
    return indexFim == N;
}

#endif // FILA_VETOR_H