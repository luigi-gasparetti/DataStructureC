#include "pilha.h"
#include <stdlib.h> 

/* (*p).topo é o mesmo que p->topo */

pilha * criaPilha(){
  pilha * p = malloc(sizeof (pilha));
  p->max = 1;
  p->topo = 0; 
  p->v = malloc(p->max * sizeof(valor));

  /* se nao conseguiu alocar memoria */
  if (p->v == NULL)
    return NULL;
  return p;
}

int pilhaVazia(pilha * p){
  return (p->topo == 0);
}

valor topoPilha(pilha * p){
  if (!pilhaVazia (p))
    return p->v[p->topo-1];
  return ERRO;
}

valor desempilha(pilha * p){
  valor aux; 
  if (!pilhaVazia(p)){
    p->topo=p->topo - 1; 
    aux = p->v[p->topo];
    p->v[p->topo] = ERRO; 
    return aux;
  }
  return ERRO;
}


void destroiPilha(pilha * p){
  free(p->v);
  free(p);
} 

void empilha (pilha * p, valor x){
  if (p->topo == p->max)
    resize(p);
  p->v[p->topo] = x;
  p->topo++;
}

void resize(pilha * p){
  int i;
  valor * w = malloc(2 * p->max * sizeof(valor));
  /* transfere os dados */
  for (i = 0; i < p->max; i++)
    w[i] = p->v[i];
  p->max = p->max * 2;
  free (p->v); 
  p->v = w;
}

