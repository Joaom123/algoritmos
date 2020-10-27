#include <stdio.h>
#ifndef FILA_VETOR_H
#define FILA_VETOR_H

#define N 100

static int fila[N];
static int indexInicio, indexFim;

void cria (void) {
    indexInicio = indexFim = 0;
}

void insere (int valor) {
   fila[indexFim++] = valor;
}

int removeC (void) {
   return fila[indexInicio++];
}

int filaEstaVazia (void) {
   return indexInicio >= indexFim;
}

int filaEstaCheia (void) {
   return indexFim == N;
}

#endif