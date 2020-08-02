#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *proximaCelula;
} celula;

void imprimeCelula(celula *cel) {
    if(cel == NULL) {
        printf("Célula vazia");
        return;
    }

    printf("%d\n", cel->conteudo);
    return;
}

void imprimeLista(celula *cel) {
    for (cel; cel != NULL; cel = cel->proximaCelula)
        imprimeCelula(cel);
    return;
}

celula *criaCelula(int conteudo, celula *proxCel) {
    celula *cel;

    cel = malloc(sizeof(celula));
    cel->conteudo = conteudo;
    cel->proximaCelula = proxCel;

    return cel;
}

celula *buscaCelulaPorConteudo(int conteudo, celula *cel) {
    celula *celAux = cel;

    while (celAux != NULL && celAux->conteudo != conteudo)
    {
        celAux = celAux->proximaCelula;
    }

    return celAux;
}

celula *buscaCelulaAnteriorPorConteudo(int conteudo, celula *cel) {
    celula *celAux = cel;

    while (celAux != NULL && celAux->proximaCelula->conteudo != conteudo)
    {
        celAux = celAux->proximaCelula;
    }

    return celAux;
}

void insereCelula(int conteudo, celula *cel) {
    if(cel == NULL)
        return;
    
    celula *novaCel;

    novaCel = malloc(sizeof(celula));
    novaCel->conteudo = conteudo;
    novaCel->proximaCelula = cel->proximaCelula;
    cel->proximaCelula = novaCel;
    return;
}

void removeProximaCelula(celula *cel) {
    celula *celAux = cel->proximaCelula;
    cel->proximaCelula = celAux->proximaCelula;
    free(celAux);
    return;
}

void removeCelulaDaListaPorConteudo(int conteudo, celula *cel) {
    celula *celEncontrada = buscaCelulaPorConteudo(conteudo, cel);

    if (celEncontrada == NULL)
        return;
    

    return;
}

celula *criaLista() {
    celula *celula1;
    celula1 = criaCelula(1, NULL);

    insereCelula(5, celula1);
    insereCelula(4, celula1);
    insereCelula(3, celula1);
    insereCelula(2, celula1);

    return celula1;
}

int main(int argc, char const *argv[]) {
    celula *cabecaDaLista = criaCelula(0, criaLista()); //Cabeça da lista, seu conteúdo não importa
    imprimeLista(cabecaDaLista->proximaCelula);

    return EXIT_SUCCESS;
}
