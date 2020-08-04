#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int conteudo;
    struct celula *celulaSeguinte;
    // struct celula *celulaAnterior;
} celula;

celula *criaCelula(int conteudo, celula *celulaSeguinte) {
    celula *novaCel;
    novaCel = malloc(sizeof(celula));
    novaCel->conteudo = conteudo;
    novaCel->celulaSeguinte = celulaSeguinte;

    return novaCel;
}

/* 
    Insire célula após célula de endereço p.
*/
void insereCelula(int conteudo, celula *p) {
    celula *novaCel = criaCelula(conteudo, p->celulaSeguinte);

    p->celulaSeguinte = novaCel;
    
    return;
}

/*
    Cria uma lista ligada circular
*/
celula *criaCirculo(int n) {
    celula *circulo = criaCelula(1, NULL);
    celula *aux = circulo;
    
    for (int i = 1; i < n + 1; i++)
    {
        insereCelula(i, aux);
        aux = aux->celulaSeguinte;
    }

    aux->celulaSeguinte = circulo;
    
    return circulo;
}

void removeCelula() {
    
}

/*
    Imagine n pessoas dispostas em círculo.
    Suponha que as pessoas estão numeradas de 1 a n no sentido horário.
    Começando com a pessoa de número 1, percorra o círculo no sentido horário e
    elimine cada m-ésima pessoa enquanto o círculo tiver duas ou mais pessoas.
    Qual o número do sobrevivente?

    Para n = 5 e m = 2
    1-2-3-4-5 a partir do 1
    1-2-4-5 a partir do 4
    2-4-5
    2-4
    4
*/
int problemaDeJosephus(int m, celula *cabecaDoCirculo) {
    celula *primeiroDoCirculo = cabecaDoCirculo->celulaSeguinte;
    
    return 1;
}

int main(int argc, char const *argv[])
{
    celula *cabecaDoCirculo = criaCelula(-1, criaCirculo(5));

    printf("%d", problemaDeJosephus(2, cabecaDoCirculo));

    return 0;
}