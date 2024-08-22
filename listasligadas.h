/* Iniciar com celula * p = NULL; */

typedef int chave;

typedef struct celu {
  chave info;
  
  struct celu * prox;
} celula; 


void imprimeLista (celula * inicio);
void imprimeListaIterativo (celula * inicio);
celula * buscaLISTA (celula * inicio, chave x);
celula * buscaIterativaLISTA (celula * inicio, chave x);
celula * insereNoInicioLISTA(celula *inicio, chave x);
celula * insereNoFimLISTA (celula * inicio, chave x);
celula * insereNoFimRecLISTA (celula * inicio, chave x);
celula * removeLISTA (celula * inicio, chave x);
  
  




  



