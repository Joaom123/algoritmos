#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeadaComCabeca.h"

int main(int argc, char const *argv[]) {
    celula *cabecaDaLista = criaCelula(0, criaLista()); //Cabeça da lista, seu conteúdo não importa
    imprimeLista(cabecaDaLista->proximaCelula);
    imprimeSeparador();

    return EXIT_SUCCESS;
}
