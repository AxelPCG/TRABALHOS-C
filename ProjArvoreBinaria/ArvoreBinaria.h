#ifndef ARVOREBINARIA_H_INCLUDED
#define ARVOREBINARIA_H_INCLUDED

#include <stdbool.h>

typedef struct no {
    int dado;
    struct no* esquerda;
    struct no* direita;
} NO;

NO* criaNo(int valor);

NO* insere(NO* raiz, int dado);

void printfArvore(NO* raiz);

int checaArvore(NO* raiz, int valor);

void EmOrdem(NO* raiz);

void PreOrdem(NO* raiz);

void PosOrdem(NO* raiz);

#endif // ARVOREBINARIA_H_INCLUDED
