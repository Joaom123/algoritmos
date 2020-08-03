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

int main(int argc, char const *argv[])
{
    celula *cabecaLista;

    cabecaLista = malloc(sizeof(celula));
    cabecaLista->conteudo = 0;
    cabecaLista->celulaSeguinte = NULL;
    cabecaLista->celulaAnterior = NULL;

    insereCelula(1, cabecaLista);

    return 0;
}
