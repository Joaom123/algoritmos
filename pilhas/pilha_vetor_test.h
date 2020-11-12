//
// Created by joaomarcus on 09/11/2020.
//

#ifndef ALGORITMOS_PILHA_VETOR_TEST_H
#define ALGORITMOS_PILHA_VETOR_TEST_H
#include "pilha_vetor.h"
#include <assert.h>

Pilha *cria_pilha_para_testes();

Pilha *cria_pilha_para_testes() {
    Pilha *pilha = cria_pilha();
    empilha(pilha, 1);
    empilha(pilha, 2);
    empilha(pilha, 3);
    empilha(pilha, 4);
    empilha(pilha, 5);
    return pilha;
}

void cria_pilha_test() {
    Pilha *pilha = cria_pilha();

    assert(pilha->topo == 0);
}

void empilha_vetor() {
    Pilha *pilha = cria_pilha_para_testes();

    assert(pilha->elementos[0] == 1);
    assert(pilha->elementos[1] == 2);
    assert(pilha->topo == 5);
}

void desempilha_vetor() {
    Pilha *pilha = cria_pilha_para_testes();
    desempilha(pilha);

    assert(pilha->topo == 4);
    assert(pilha->elementos[pilha->topo - 1] == 4);
}

void desempilha_de_pilha_vetor_vazia_test() {
    Pilha *pilha = cria_pilha();
    desempilha(pilha);

    assert(pilha->topo == 0);
}

void pilha_vetor_test_suite() {
    cria_pilha_test();
    empilha_vetor();
    desempilha_vetor();
    desempilha_de_pilha_vetor_vazia_test();
}

#endif //ALGORITMOS_PILHA_VETOR_TEST_H
