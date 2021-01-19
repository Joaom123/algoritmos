//
// Created by joaomarcus on 18/01/2021.
//
#include <stdio.h>
#include "mergesort.h"

int tamanhoDoVetor = 10;

void imprimeVetor(int vetor[]) {
    for (int i = 0; i < tamanhoDoVetor; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int vetor[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    printf("Vetor não-ordenado: ");
    imprimeVetor(vetor);

    mergesort(vetor, 0, tamanhoDoVetor );

    printf("Vetor ordenado: ");
    imprimeVetor(vetor);

    return 0;
}


