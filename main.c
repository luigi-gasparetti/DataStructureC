#include <stdio.h>
#include <stdlib.h>
#include "arv.h"
#include "abb.h"
#include "pilha.h"
#include "fila.h"
#include "listasligadas.h"


int main() {
    //abb
    no * r = NULL;

    r = insereABB(r, 10);
    r = insereABB(r, 2);
    r = insereABB(r, 87);
    r = insereABB(r, 5);
    r = insereABB(r, 38);
    r = insereABB(r, 6);
    r = insereABB(r, 17);
    printf("ÁRVORE BINÁRIA DE BUSCA:\n");
    inordem(r);
    printf("\n");

    r = removeABB(r, 87);
    r = removeABB(r, 2);
    printf("ÁRVORE BINÁRIA DE BUSCA:\n");
    inordem(r);
    printf("\n");

    printf("mínimo: %d\n", minimoABB(r)->chave);
    printf("máximo: %d\n", maximoABB(r)->chave);
    printf("\n");

    //pilha 
    pilha * p = criaPilha();

    empilha(p, 'a');
    empilha(p, 'b');
    empilha(p, 'c');

    //lista ligada
    celula * l = NULL;

    l = insereNoInicioLISTA(l , 1);
    l = insereNoFimRecLISTA(l, 3); 
    l = insereNoFimRecLISTA(l, 4); 
    l = insereNoFimRecLISTA(l, 12); 
    l = insereNoFimRecLISTA(l, 8);

    printf("LISTA LIGADA:\n");
    imprimeLista(l);

    l = removeLISTA(l, 3);
    printf("LISTA LIGADA:\n");
    imprimeLista(l);

    return 0;
}
