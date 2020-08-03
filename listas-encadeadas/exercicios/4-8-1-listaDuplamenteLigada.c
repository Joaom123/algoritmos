#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *proximaCelula;
    struct celula *celulaAnterior;
} celula;