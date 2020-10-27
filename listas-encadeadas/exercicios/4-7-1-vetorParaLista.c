#include <stdio.h>
#include <stdlib.h>
#include "../listaEncadeadaComCabeca.h"

//Escreva uma função que copie um vetor para uma lista encadeada.

celula *copiaArrayParaLista(int inteiros[]) {
    celula *celCabeca = criaCelula(0, NULL);
    celula *celAux = celCabeca; //Guarda referência do primeiro valor

    for (int i = 0; i < 5; i++)
    {
        celCabeca->proximaCelula = criaCelula(inteiros[i], NULL);
        celCabeca = celCabeca->proximaCelula;
    }

    return celAux->proximaCelula;
}

int main(int argc, char const *argv[])
{
    int inteiros [5] = {0, 1, 2, 3, 4};
    celula *cabecaDaLista = criaCelula(0, copiaArrayParaLista(inteiros));
    
    imprimeLista(
        cabecaDaLista->proximaCelula
    );

    return 0;
}
