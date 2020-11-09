#include "assert.h"
#include "fila_vetor.h"

void test_cria_fila() {
    criar();

    assert(indexInicio == 0 && indexFim == 0);
}

void test_insere() {
    inserir(1);
    inserir(2);

    assert(fila[0] == 1);
    assert(fila[1] == 2);
}

void test_remove() {
    int retirado = remover();

    assert(retirado == 1);
    assert(primeiro_da_fila() == 2);
}

void test_reseta() {
    resetar();

    for (int i = 0; i < N; ++i) {
        assert(fila[i] == 0);
    }
    assert(indexInicio == 0);
    assert(indexFim == 0);
}

void test_suite_fila_vetor() {
    test_cria_fila();
    test_insere();
    test_remove();
    test_reseta();
}