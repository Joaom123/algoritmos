//
// Created by joaomarcus on 18/01/2021.
//
#include <stdio.h>
#include "mergesort.h"

void imprimeVetor(int *vetor) {
    int i;
    for (i = 0; i < 6; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int vetor[] = {4, 2, 1, 2, 4, 6};

    printf("Vetor não-ordenado: ");
    imprimeVetor(vetor);

    mergesort(vetor, 0, 5);

    printf("Vetor ordenado: ");
    imprimeVetor(vetor);

    return 0;
}


