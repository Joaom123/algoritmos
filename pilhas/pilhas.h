//
// Created by joaomarcus on 09/11/2020.
//

#ifndef ALGORITMOS_PILHAS_H
#define ALGORITMOS_PILHAS_H
#include "pilha_vetor_test.h"
#include "exercicios/6_1_2_inversao_de_palavras.h"
#include "exercicios/6_1_3_permutacoes.h"
#include "exercicios/aplicacao_parenteses_e_chaves.h"

void pilhas() {
    //testes
    pilha_vetor_test_suite();

    //exercícios
//    inversaoDePalavras("AMU MEGASNEM ATERCES");
//    permutacoes();
    verificaSeSequenciaDeParentesesEChavesEEBemFormada("({})");

}

#endif //ALGORITMOS_PILHAS_H
