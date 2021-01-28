//
// Created by joaomarcus on 18/01/2021.
//

#include <stdio.h>
#include "mergesort.h"

void imprimeVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int vetor[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 9, 55, 11, 222, 00, 5644, 96};

    int tamanhoDoVetor = sizeof(vetor) / sizeof(int);
    printf("Tamanho: %d\n", tamanhoDoVetor);

    printf("Vetor não-ordenado: ");
    imprimeVetor(vetor, tamanhoDoVetor);

    mergesort(vetor, 0, tamanhoDoVetor - 1);

    printf("Vetor ordenado: ");
    imprimeVetor(vetor, tamanhoDoVetor);

    return 0;
}


