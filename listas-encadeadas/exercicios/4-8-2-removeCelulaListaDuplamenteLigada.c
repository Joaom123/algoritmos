#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *celulaSeguinte;
    struct celula *celulaAnterior;
} celula;

/* 
    Insire célula após célula de endereço p.
*/
void insereCelula(int conteudo, celula *p) {
    celula *novaCel;

    novaCel = malloc(sizeof(celula));
    novaCel->conteudo = conteudo;
    novaCel->celulaSeguinte = p->celulaSeguinte;
    novaCel->celulaAnterior = p;

    //Se inserir no final, não mudar celulaAnterior
    if(p->celulaSeguinte != NULL)
        p->celulaSeguinte->celulaAnterior = novaCel;
    p->celulaSeguinte = novaCel;
    
    return;
}

/*
    Remova de uma lista duplamente encadeada a célula de endereço p.
*/
void removeCelula(celula *p) {
    celula *celulaSeguinte = p->celulaSeguinte;
    celula *celulaAnterior = p->celulaAnterior;

    celulaAnterior->celulaSeguinte = celulaSeguinte;

    //Quando remove do final, não mudar celulaSeguinte
    if(celulaSeguinte != NULL)
        celulaSeguinte->celulaAnterior = celulaAnterior;

    free(p);
}

int main(int argc, char const *argv[])
{
    celula *cabecaLista;

    cabecaLista = malloc(sizeof(celula));
    cabecaLista->conteudo = 0;
    cabecaLista->celulaSeguinte = NULL;
    cabecaLista->celulaAnterior = NULL;

    insereCelula(25, cabecaLista);
    insereCelula(98, cabecaLista);
    insereCelula(5, cabecaLista);

    celula *primeira = cabecaLista->celulaSeguinte;
    removeCelula(primeira);

    return 0;
}

