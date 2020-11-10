#include <stdio.h>
#include <stdlib.h>
#include "../lista_encadeada_com_cabeca.h"

celula * pontoMedio(celula *lista) {
    celula *cel = lista->proximaCelula;
    celula *celulaPontoMedio = cel;
    int contador = 0;

    while (cel != NULL && cel->proximaCelula != NULL)
    {
        cel = cel->proximaCelula;
        
        if (contador == 0)
        {
            contador += 1;
        }
        else
        {
            celulaPontoMedio = celulaPontoMedio->proximaCelula;
            contador = 0;
        }
    }
    
    return celulaPontoMedio;
}

int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());

    imprimeCelula(pontoMedio(cabecaDaLista1));
    
    return EXIT_SUCCESS;
}
