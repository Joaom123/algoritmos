#include "assert.h"
#include "fila_vetor.h"

void test_cria_fila() {
    cria();
    assert(indexInicio == 0 && indexFim == 0 && "test_cria_fila()");
}

void test_suite() {
    test_cria_fila();
    printf("%d", 1);
}