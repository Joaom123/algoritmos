//
// Created by joaomarcus on 12/11/2020.
//

#ifndef ALGORITMOS_6_1_3_PERMUTACOES_H
#define ALGORITMOS_6_1_3_PERMUTACOES_H

#include <string.h>

void imprimePermutacoes();

void executaSequencia(char *sequencia);

void guardaSequenciaDeNumeros(char sequenciaDeNumeros[]);

// 6.1.3 Permutações produzidas pelo desempilhar.
// Suponha que os números inteiros 1, 2, 3, 4 são colocados, nesta ordem, numa pilha inicialmente vazia.
// Depois de cada operação de empilhar, você pode retirar zero ou mais elementos da pilha.
// Cada número retirado da pilha é impresso numa folha de papel.
// Por exemplo, a sequência de operações E, E, D, E, D, D, E, D, onde E significa “empilhar o próximo
// número da sequência” e D significa “desempilhar”, produz a impressão da sequência 2, 3, 1, 4.
// Quais das 24 permutações de 1, 2, 3, 4 podem ser obtidas desta maneira?

char permutacoesObtidas[25][5];
int indexPermutacoesObtidas = 0;

void permutacoes() {
    executaSequencia("EEEEDDDD");
    executaSequencia("EDEDEDED");
    executaSequencia("EEEEDDDD");
    executaSequencia("EEEEDDDD");
    executaSequencia("EEEEDDDD");

    imprimePermutacoes();
}

void executaSequencia(char sequencia[]) {
    int numerosDaSequencia[4] = {1, 2, 3, 4};
    int indexDoNumerosDaSequencia = 0;

    char sequenciaDeNumeros[4];
    int indexDaSequenciaDeNumeros = 0;

    int indexDaSequencia = 0;

    Pilha *pilha = cria_pilha();

    while (sequencia[indexDaSequencia] != '\0') {
        if (sequencia[indexDaSequencia] == 'E') {
            empilha(pilha, numerosDaSequencia[indexDoNumerosDaSequencia++]);
        }

        if (sequencia[indexDaSequencia] == 'D') {
            int numeroDesempilhado = desempilha(pilha);
            sequenciaDeNumeros[indexDaSequenciaDeNumeros++] = numeroDesempilhado + '0'; //guarda char, não inteiro
        }

        indexDaSequencia++;
    }

    guardaSequenciaDeNumeros(sequenciaDeNumeros);
}

void guardaSequenciaDeNumeros(char sequenciaDeNumeros[]) {
    strcpy(permutacoesObtidas[indexPermutacoesObtidas++], sequenciaDeNumeros);
}

void imprimePermutacoes() {
    for (int i = 0; i < indexPermutacoesObtidas; i++){
        printf("%s\n", permutacoesObtidas[i]);
    }
}

#endif //ALGORITMOS_6_1_3_PERMUTACOES_H
