//
// Created by joaomarcus on 12/11/2020.
//
#include <stdio.h>
#include <z3.h>
#include "../pilha_vetor.h"

#ifndef ALGORITMOS_6_1_2_INVERSAO_DE_PALAVRAS_H
#define ALGORITMOS_6_1_2_INVERSAO_DE_PALAVRAS_H

char pegaLetra(const char *frase, int indexDaFrase);

int letraEUmEspaco(char letra);

bool fimDaFrase(const char *frase, int indexDaFrase);

void desempilhaEImprimePalavra(Pilha *palavra);

//6.1.2 Inversão de palavras.
// Escreva uma função que inverta a ordem das letras de cada palavra de uma sentença,
// preservando a ordem das palavras. Suponha que as palavras da sentença são separadas por espaços.
// A aplicação da operação à sentença
// AMU MEGASNEM ATERCES, por exemplo, deve produzir UMA MENSAGEM SECRETA.

void inversaoDePalavras(char *frase) {
    int indexDaFrase = 0;

    // Uma frase é composta por várias palavras
    Pilha *palavra = cria_pilha();

    while (true) {
        if (fimDaFrase(frase, indexDaFrase)) {
            desempilhaEImprimePalavra(palavra);
            return;
        }

        char letra = pegaLetra(frase, indexDaFrase);
        ++indexDaFrase;

        // caso a letra seja espaço, desempilhar e imprimir
        // do contrário, empilhar
        if (letraEUmEspaco(letra)) {
            desempilhaEImprimePalavra(palavra);
        } else {
            empilha(palavra, letra);
        }
    }

}

//retorna true caso seja fim da frase
bool fimDaFrase(const char *frase, int indexDaFrase) {
    return pegaLetra(frase, indexDaFrase) == '\0';
}

char pegaLetra(const char *frase, int indexDaFrase) {
    return frase[indexDaFrase];
}

// retorna true caso letra seja um espaço
int letraEUmEspaco(char letra) {
    return letra == 32;
}

void desempilhaEImprimePalavra(Pilha *palavra) {
    while (!vazia(palavra)) {
        printf("%c", desempilha(palavra));
    }
    printf("%s", " ");
}

#endif //ALGORITMOS_6_1_2_INVERSAO_DE_PALAVRAS_H
