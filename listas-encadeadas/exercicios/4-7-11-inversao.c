#include <stdio.h>
#include <stdlib.h>
#include "../listaEncadeadaComCabeca.h"

void inversao(celula *lista) {
    celula *cabecaDaLista = lista;
    lista = lista->proximaCelula;

    while (lista->proximaCelula != NULL)
    {
        celula *proximaCelula = lista->proximaCelula;
        lista->proximaCelula = cabecaDaLista;
        lista = proximaCelula;
        cabecaDaLista = cabecaDaLista->proximaCelula;
    }

    return;
}

// 0 - 1 - 2 - 3
// 0 - 3 - 2 - 1 
int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());
    
    inversao(cabecaDaLista1);
    imprimeLista(cabecaDaLista1->proximaCelula);
    
    return EXIT_SUCCESS;
}
