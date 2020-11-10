#include <stdio.h>
#include <stdlib.h>
#include "../lista_encadeada_com_cabeca.h"

int contagem(celula *lista1) {
    int numeroDeCelulas = 0;
    
    while (lista1->proximaCelula != NULL)
    {
        lista1 = lista1->proximaCelula;
        numeroDeCelulas += 1;
    }
    
    return numeroDeCelulas;
}


int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());

    printf("%d", contagem(cabecaDaLista1));
    
    return EXIT_SUCCESS;
}
