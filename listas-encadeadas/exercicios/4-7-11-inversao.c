#include <stdio.h>
#include <stdlib.h>
#include "../lista_encadeada_com_cabeca.h"

void inversao(celula *lista) {
    celula *cabecaDaLista = lista;
    celula *primeiraCelula = cabecaDaLista->proximaCelula;
    
    celula *anteriorCel = primeiraCelula;
    celula *cel = primeiraCelula->proximaCelula;
    celula *proxCel = cel->proximaCelula;

    primeiraCelula->proximaCelula = NULL; //Primeira célula no final

    while (cel != NULL)
    {
        cel->proximaCelula = anteriorCel;
        
        //Sai na última célula
        if (proxCel == NULL)
            break;

        //Troca para próxima iteração
        anteriorCel = cel;
        cel = proxCel;
        proxCel = cel->proximaCelula;
    }

    cabecaDaLista->proximaCelula = cel; //aponta pro nova primeira célula

    return;
}

int main(int argc, char const *argv[])
{
    celula *cabecaDaLista1 = criaCelula(0, criaLista());
    
    imprimeLista(cabecaDaLista1->proximaCelula); //original
    imprimeSeparador();
    inversao(cabecaDaLista1);
    imprimeLista(cabecaDaLista1->proximaCelula); //invertida
    
    return EXIT_SUCCESS;
}
