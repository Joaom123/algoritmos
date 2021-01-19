//
// Created by joaomarcus on 18/01/2021.
//

#ifndef ALGORITMOS_MERGESORT_H
#define ALGORITMOS_MERGESORT_H
#include <math.h>
#include <stdlib.h>

static void merge(int vetor[], int indexInicio, int indexMeio, int indexFim) {
    int *vetorAuxiliar;
    int tamanhoDoVetor = indexFim - indexInicio;
    vetorAuxiliar = malloc(tamanhoDoVetor*sizeof(int));

    int i = indexInicio;
    int j = indexMeio;
    int k = 0;

    while (i < indexMeio && j < indexFim) {
        if (vetor[i] <= vetor[j])
            vetorAuxiliar[k++] = vetor[i++];
        else
            vetorAuxiliar[k++] = vetor[j++];
    }

    while (i < indexMeio)
        vetorAuxiliar[k++] = vetor[i++];
    while (j < indexFim)
        vetorAuxiliar[k++] = vetor[j++];
    for (i = indexInicio; i < indexFim; ++i)
        vetor[i] = vetorAuxiliar[i-indexInicio];

    free(vetorAuxiliar);
}

void mergesort(int vetor[], int indexInicio, int indexFim) {
    if (indexInicio >= indexFim)
        return;

    int indexMeio;
    indexMeio = (indexInicio + indexFim)/2;
    mergesort(vetor, indexInicio, indexMeio);
    mergesort(vetor, indexMeio + 1, indexFim);
    merge(vetor, indexInicio, indexMeio, indexFim);
}
    
#endif //ALGORITMOS_MERGESORT_H
