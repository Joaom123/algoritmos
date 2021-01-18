#include "assert.h"
#include "filaVetor.h"

int TEST_CRIA_FILA() {
    criar();
//    assert(indexInicio == 0 && indexFim == 0);

    return 1;
}

int TEST_INSERE() {
    inserir(1);
    inserir(2);

    assert(fila[0] == 2);
    assert(fila[1] == 2);

    return 0;
}

int main(void) {
    TEST_CRIA_FILA();
    TEST_INSERE();
}

void TEST_REMOVE() {
    int retirado = remover();

    assert(retirado == 1);
    assert(primeiro_da_fila() == 2);
}

void TEST_RESETA() {
    resetar();

    for (int i = 0; i < N; ++i) {
        assert(fila[i] == 0);
    }
    assert(indexInicio == 0);
    assert(indexFim == 0);
}
