//
// Created by joaomarcus on 14/11/2020.
//

#ifndef ALGORITMOS_APLICACAO_PARENTESES_E_CHAVES_H
#define ALGORITMOS_APLICACAO_PARENTESES_E_CHAVES_H

#include "../pilha_vetor.h"

// Decidir se uma determinada sequência de parênteses e chaves é bem ou mal formada
// ({}) é bem formada
// ()} é mal formada

// retorna 1 caso bem formada
// retorna 0 caso mal formada
int verificaSeSequenciaDeParentesesEChavesEEBemFormada(char sequencia[]) {
    int indexSequencia = 0;
    Pilha *pilha = cria_pilha();

    while (sequencia[indexSequencia] != '\0') {
        char letra = sequencia[indexSequencia];

        if (letra == '(' || letra == '{')
            empilha(pilha, letra - '0');

        if (letra == ')') {
            int letraDesempilhada = desempilha(pilha);
            if (letraDesempilhada + '0' != '(')
                return 0;
        }

        if (letra == '}') {
            int letraDesempilhada = desempilha(pilha);
            if (letraDesempilhada + '0' != '{')
                return 0;
        }

        indexSequencia++;
    }

    if (!vazia(pilha))
        return 0;

    printf("bem formada\n");
    return 1;
}

#endif //ALGORITMOS_APLICACAO_PARENTESES_E_CHAVES_H
