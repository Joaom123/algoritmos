#include <stdio.h>

#define N 100

static int fila[N];
static int p, u;

void criafila (void) {
   p = u = 0;
}

void colocanafila (int y) {
   fila[u++] = y;
}

int tiradafila (void) {
   return fila[p++];
} 

int filavazia (void) {
   return p >= u;
}

int filacheia (void) {
   return u > N;
}

int main(int argc, char const *argv[])
{
    criafila();
    colocanafila(64);
    tiradafila();

    printf("%d", fila[0]);
    return 0;
}
