#include <stdio.h>
#include <stdlib.h>
 
typedef struct no {
    int conteudo; 
    struct no *proximoNo;
} no;

int main(int argc, char const *argv[])
{
   printf ("tamanho do no = %ld\n", sizeof(no)); //16
   return EXIT_SUCCESS;
}
