#include <stdio.h>
#include <stdlib.h>
#include "../lista_encadeada_com_cabeca.h"

void contagemERemocao(int numeroDaCelula, celula *lista1) {
    int numeroDeCelulas = 0;
    
    while (lista1->proximaCelula != NULL)
    {
        numeroDeCelulas += 1;
        
        if (numeroDeCelulas == numeroDaCelula)
        {
            removeProximaCelula(lista1);
            return;
        }
        
        lista1 = lista1->proximaCelula;
    }

    return;
}


int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());

    contagemERemocao(5, cabecaDaLista1);

    imprimeLista(cabecaDaLista1->proximaCelula);

    return EXIT_SUCCESS;
}
