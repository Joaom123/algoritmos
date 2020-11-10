#include <stdio.h>
#include <stdlib.h>
#include "../lista_encadeada_com_cabeca.h"

void contagemEInsercao(int numeroDaCelula, int conteudo, celula *lista1) {
    int numeroDeCelulas = 0;
    
    while (lista1->proximaCelula != NULL)
    {
        numeroDeCelulas += 1;
        lista1 = lista1->proximaCelula;
        
        if (numeroDeCelulas == numeroDaCelula)
        {
            celula *cel = criaCelula(conteudo, lista1->proximaCelula);
            lista1->proximaCelula = cel; 
            return;
        }
        
    }

    return;
}


int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());

    contagemEInsercao(1, 10, cabecaDaLista1);

    imprimeLista(cabecaDaLista1->proximaCelula);

    return EXIT_SUCCESS;
}
