/* Árvores de Busca Binária */
#include <stdio.h>
#include <stdlib.h>
#include "arv.h"

/* Busca um elemento na árvore de busca binária

no * busca (no * raiz, int x); 

*/

no * buscaABB (no * raiz, int x){
  if (raiz == NULL || raiz->chave == x)
    return raiz;
  if (x < raiz->chave)
    return buscaABB (raiz->esq, x);
  return buscaABB (raiz->dir, x);
}

      

no * maximoABB (no * raiz){
  if (raiz == NULL || raiz->dir == NULL)
    return raiz;
  return maximoABB(raiz->dir);
} 

no * minimoABB (no * raiz){
  if (raiz == NULL || raiz->esq == NULL)
    return raiz;
  return minimoABB(raiz->esq);
} 

/* Insere um elemento em uma ABB, devolve a raiz da árvore 
   com o elemento inserido

no * insere (no * raiz, int x); 

*/ 

no * insereABB (no * raiz, int x){
  if (raiz == NULL){
    raiz = malloc (sizeof(no));
    raiz->chave = x;
    raiz->dir = raiz->esq = NULL;
    return raiz;
  }
  if (x < raiz->chave)
    raiz->esq = insereABB (raiz->esq, x);
  else if (x > raiz->chave)
    raiz->dir = insereABB (raiz->dir, x);
  return raiz;
}



no * removeABB (no * raiz, int x){
  no * y; 
  if (raiz == NULL)
    return NULL;
  if (x < raiz->chave)
    raiz->esq = removeABB(raiz->esq, x);
  else if (x > raiz->chave)
    raiz->dir = removeABB(raiz->dir, x);
  else{
    if (raiz->esq == NULL){
      y = raiz->dir;
      free(raiz);
      raiz = y;     
    }
    else if (raiz->dir == NULL){
      y = raiz->esq;
      free(raiz);
      raiz = y;
    }
    else{
      y = minimoABB(raiz->dir);
      raiz->chave = y->chave;
      raiz->dir = removeABB(raiz->dir, y->chave);
      /* nao precisa de free, a recursao cuida */
    }
  }
  return raiz;
}

