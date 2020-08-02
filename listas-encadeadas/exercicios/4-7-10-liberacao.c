#include <stdio.h>
#include <stdlib.h>
#include "../listaEncadeadaComCabeca.h"

void liberacao(celula *lista) {
    while (lista->proximaCelula != NULL)
        removeProximaCelula(lista);

    return;
}


int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());
    
    imprimeLista(cabecaDaLista1->proximaCelula);
    imprimeSeparador();
    liberacao(cabecaDaLista1);
    imprimeLista(cabecaDaLista1->proximaCelula);
    
    return EXIT_SUCCESS;
}
