//
// Created by joaomarcus on 18/01/2021.
//

#ifndef ALGORITMOS_MERGESORT_H
#define ALGORITMOS_MERGESORT_H
#include <stdlib.h>

//Combina dois vetores ordenados, vetor[indexInicio, ..., indexMeio - 1] e vetor[indexMeio, ..., indexFim - 1]
//em um vetor ordenado, vetor[indexInicio, ..., indexFim - 1]
static void merge(int vetor[], int indexInicio, int indexMeio, int indexFim) {
    int *vetorAuxiliar;
    int tamanhoDoVetor = indexFim - indexInicio;
    vetorAuxiliar = malloc(tamanhoDoVetor * sizeof(int));

    int i = indexInicio;
    int j = indexMeio;
    int k = 0;

    //Preenche o vetor auxiliar comparando os dois vetores, quando um deles for totalmente utiizado
    //a iteração para.
    while (i < indexMeio && j < indexFim) {
        if (vetor[i] <= vetor[j])
            vetorAuxiliar[k++] = vetor[i++];
        else
            vetorAuxiliar[k++] = vetor[j++];
    }

    //Como o resto do vetor que sobrou não foi inserido no vetorAuxiliar, precisamos inserir o que sobrou
    while (i < indexMeio)
        vetorAuxiliar[k++] = vetor[i++];
    while (j < indexFim)
        vetorAuxiliar[k++] = vetor[j++];

    //Copia-se o vetor auxiliar para o vetor original
    for (i = indexInicio; i < indexFim; i++)
        vetor[i] = vetorAuxiliar[i - indexInicio];

    //libera a memória alocada pelo vetorAuxiliar
    free(vetorAuxiliar);
}

void mergesort(int vetor[], int indexInicio, int indexFim) {
    //caso de saida da recorrência,
    //ocorre quando há apenas um elemento no array
    if (indexInicio >= indexFim - 1)
        return;

    int indexMeio;
    indexMeio = (indexInicio + indexFim)/2;

    mergesort(vetor, indexInicio, indexMeio);
    mergesort(vetor, indexMeio, indexFim);
    merge(vetor, indexInicio, indexMeio, indexFim);
}
    
#endif //ALGORITMOS_MERGESORT_H
