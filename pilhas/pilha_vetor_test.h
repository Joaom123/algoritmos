//
// Created by joaomarcus on 09/11/2020.
//

#ifndef ALGORITMOS_PILHA_VETOR_TEST_H
#define ALGORITMOS_PILHA_VETOR_TEST_H

#include "pilha_vetor.h"
#include <assert.h>

void cria_pilha_test() {
    Pilha* pilha = cria_pilha();

    assert(pilha->topo == 0);
}

void empilha_vetor() {
    Pilha* pilha = cria_pilha();
    empilha(pilha, 1);
    empilha(pilha, 2);

    assert(pilha->elementos[0] == 1 && pilha->elementos[1] == 2 && pilha->topo == 2);
}

void pilha_vetor_test_suite() {
    cria_pilha_test();
    empilha_vetor();
}

#endif //ALGORITMOS_PILHA_VETOR_TEST_H
