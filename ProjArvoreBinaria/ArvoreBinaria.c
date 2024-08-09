#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

NO* criaNo(int valor){
    NO* novoNo = malloc(sizeof(NO));
    novoNo->dado = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;

    return novoNo;
}

NO* insere(NO* raiz, int dado){
    if(raiz == NULL) return criaNo(dado);
    if(dado < raiz->dado)
       raiz->esquerda = insere(raiz->esquerda, dado);
    else if(dado > raiz->dado)
        raiz->direita = insere(raiz->direita, dado);
    return raiz;
 }

 void printfArvore(NO* raiz){
      if(raiz != NULL){
        printf("%i", raiz->dado);
        printf("(");
        printfArvore(raiz->esquerda);
        printfArvore(raiz->direita);
        printf(")");
      }
 }

 int checaArvore(NO* raiz, int valor){
    if (raiz == NULL) return 0;
    checaArvore(raiz->esquerda, valor);
    checaArvore(raiz->direita, valor);
    if (raiz->dado == valor){
      printf("Dado %d encontrado!\n", valor);
      return 1;
    }
 }

     void EmOrdem(NO* raiz) {
        if(raiz == NULL) return;
        EmOrdem(raiz->esquerda);
        printf("%d, ", raiz->dado);
        EmOrdem(raiz->direita);
    }

    void PreOrdem(NO* raiz) {
        if(raiz == NULL) return;
        printf("%d, ", raiz->dado);
        PreOrdem(raiz->esquerda);
        PreOrdem(raiz->direita);
    }

      void PosOrdem(NO* raiz) {
        if(raiz == NULL) return;
        PosOrdem(raiz->esquerda);
        PosOrdem(raiz->direita);
        printf("%d, ", raiz->dado);
      }
