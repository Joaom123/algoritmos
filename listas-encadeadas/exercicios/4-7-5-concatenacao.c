#include <stdio.h>
#include <stdlib.h>
#include "../listaEncadeadaComCabeca.h"

celula *concatena(celula *lista1, celula *lista2) {
    celula *primeiraCelulaDaLista1 = lista1->proximaCelula;
    celula *primeiraCelulaDaLista2 = lista2->proximaCelula;

    //pega ultima celula da lista1
    while (lista1->proximaCelula != NULL)
        lista1 = lista1->proximaCelula;
    
    lista1->proximaCelula = primeiraCelulaDaLista2;

    return  primeiraCelulaDaLista1;
}


int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());
    celula *cabecaDaLista2 = criaCelula(0, criaLista());

    imprimeLista(
        concatena(cabecaDaLista1, cabecaDaLista2)
    );

    return EXIT_SUCCESS;
}
