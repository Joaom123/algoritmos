#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *proximaCelula;
} celula;

void imprimeCelula(celula *cel) {
    printf("%d\n", cel->conteudo);
}

void imprimeLista(celula *cel) {
    for (cel; cel != NULL; cel = cel->proximaCelula)
        imprimeCelula(cel);
}

celula *criaCelula(int conteudo, celula *proxCel) {
    celula *cel;

    cel = malloc(sizeof(celula));
    cel->conteudo = conteudo;
    cel->proximaCelula = proxCel;

    return cel;
}

celula *criaLista() {
    celula *celula1;
    celula *celula2;

    celula1 = criaCelula(1, celula2);
    celula2 = criaCelula(2, NULL);

    celula1->proximaCelula = celula2;

    return celula1;
}

celula *buscaCelulaPorConteudo(int conteudo, celula *cel) {
    celula *celAux = cel;

    while (celAux != NULL && celAux->conteudo != conteudo)
    {
        celAux = celAux->proximaCelula;
    }

    return celAux;
}

int main(int argc, char const *argv[]) {
    celula *cel = criaLista();
    imprimeLista(cel);
    imprimeLista(cel);
    // imprimeCelula(
    //     buscaCelulaPorConteudo(1, criaLista())
    // );

    return EXIT_SUCCESS;
}
