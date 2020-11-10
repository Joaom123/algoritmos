#include <stdio.h>
#include <stdlib.h>
#include "../lista_encadeada_com_cabeca.h"

int copiaListaParaArray(celula *lista) {
    int aux [5];
    while (lista != NULL)
    {
        lista = lista->proximaCelula;
    }
}


int main(int argc, char const *argv[])
{
    int inteiros [5];
    celula *cabecaDaLista = criaCelula(0, criaLista());
    //inteiros = copiaListaParaArray(cabecaDaLista);
    return 0;
}
