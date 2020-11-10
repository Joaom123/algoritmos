#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada_com_cabeca.h"

int main(int argc, char const *argv[]) {
    celula *cabecaDaLista = criaCelula(0, criaLista()); //Cabeça da lista, seu conteúdo não importa
    imprimeLista(cabecaDaLista->proximaCelula);
    imprimeSeparador();

    return EXIT_SUCCESS;
}