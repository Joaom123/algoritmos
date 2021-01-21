//
// Created by joaomarcus on 19/01/2021.
//

#ifndef ALGORITMOS_HEAPSORT_H
#define ALGORITMOS_HEAPSORT_H

// Rearranja o vetor em um heap (max-heap no caso)
static void heap(int vetor[], int tamanhoDoVetor) {
    for (int i = 0; i < tamanhoDoVetor; i++) {
        int j = i;

        // Quando j for maior que 0 e o valor do pai for menor que o valor do filho,
        // devemos fazer a troca pai <-> filho, em seguida,
        // substituimos o valor de j pelo valor do index do pai
        while (j > 0 && vetor[j/2] < vetor[j]) {
            int aux = vetor[j/2];
            vetor[j/2] = vetor[j];
            vetor[j] = aux;
            j /= 2;
        }
    }
}

//
static void rearranjaHeap(int vetor[], int tamanhoDoVetor) {
    int i = 1;
    while (i < tamanhoDoVetor) {
        if (i < tamanhoDoVetor && vetor[i] < vetor[i + 1]) {
            i++;
        }

        if (vetor[i/2] >= vetor[i]) {
            break;
        }

        int aux = vetor[i/2];
        vetor[i/2] = vetor[i];
        vetor[i] = aux;

        i *= 2;
    }
}

// Implementação do heapsort
// 1 - Construir um heap máximo
// 2 - Diminuir o tamanho do heap em 1
// 3 - Rearranjar o heap máximo, caso necessário
// 4 - Repetir os passos (2) e (3) n-1 vezes.
void heapsort(int vetor[], int tamanhoDoVetor) {
    heap(vetor, tamanhoDoVetor); //1

}

#endif //ALGORITMOS_HEAPSORT_H
