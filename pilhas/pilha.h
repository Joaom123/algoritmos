//
// Created by joaomarcus on 09/11/2020.
//

#ifndef ALGORITMOS_PILHA_H
#define ALGORITMOS_PILHA_H

typedef struct pilha Pilha;
Pilha* cria_pilha (void);
void empilha (Pilha* pilha, int valor);
int desempilha (Pilha* pilha);
int vazia (Pilha* pilha);
void libera_pilha (Pilha* pilha);

#endif //ALGORITMOS_PILHA_H
