//Tarefa 2 Programa��o 2
//Professor: Everton Santos
//Aluna: Beatriz Spricigo Magalh�es

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ArvoreBinaria.h"

//Em Ordem: (E - R - D)
//Pr� Ordem: (R - E - D)
//P�s Ordem: (E - D - R)


int main(){

   NO *raiz = NULL;
   int dado, valor;
   int check;

   raiz = insere(raiz,8);
   raiz = insere(raiz,3);
   raiz = insere(raiz,10);
   raiz = insere(raiz,1);
   raiz = insere(raiz,6);
   raiz = insere(raiz,14);
   raiz = insere(raiz,4);
   raiz = insere(raiz,7);
   raiz = insere(raiz,13);

   do{
      printf("\n\t0 - Sair\n\t1 - Checar valor\n\t2 - Imprimir\n");
      scanf("%d", &dado);

      switch(dado){
      case 1:
         printf("Digite um valor:\n\n");
         scanf("%d", &valor);
         check = checaArvore(raiz, valor);
         break;
      case 2:
        printf("\n Em Ordem:");
        EmOrdem(raiz);
        printf("\n Pre Ordem:");
        PreOrdem(raiz);
        printf("\n Pos Ordem:");
        PosOrdem(raiz);

      }
   }while (dado!= 0);

printfArvore(raiz);
        printf("\n");






    return 0;
}
