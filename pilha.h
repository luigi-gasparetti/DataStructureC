typedef char valor;
#define ERRO '\0'

typedef struct {
  valor * v; 
  int topo; 
  int max; 
} pilha; 

void empilha (pilha * p, valor x); 
valor desempilha (pilha * p); 
valor topoPilha (pilha * p); 
int pilhaVazia (pilha * p); 
void resize (pilha * p);
pilha * criaPilha(); 
void destroiPilha(pilha * p); 
