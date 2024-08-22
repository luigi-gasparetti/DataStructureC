# Projeto de Estruturas de Dados em C

Este projeto é uma implementação em C de várias estruturas de dados básicas, incluindo Árvores Binárias de Busca (ABB), Listas Ligadas, Filas e Pilhas, desenvolvido no meu primeiro ano de faculdade. 

## Estruturas de Dados Implementadas

### 1. **Árvore Binária de Busca (ABB)**
A estrutura de dados **Árvore Binária de Busca** é uma árvore binária onde cada nó possui um valor maior que todos os valores na sua subárvore esquerda e menor que todos os valores na sua subárvore direita.

- **Arquivos Relevantes**:
  - `abb.h`: Declarações de funções e definição da estrutura do nó.
  - `abb.c`: Implementação das funções para manipulação da ABB.

### 2. **Lista Ligada**
A **Lista Ligada** é uma estrutura de dados linear onde cada elemento é um nó que contém um valor e um ponteiro para o próximo nó na lista.

- **Arquivos Relevantes**:
  - `listasligadas.h`: Declarações de funções e definição da estrutura do nó.
  - `listasligadas.c`: Implementação das funções para manipulação da lista ligada.

### 3. **Fila**
A **Fila** é uma estrutura de dados do tipo FIFO (First In, First Out), onde o primeiro elemento a entrar é o primeiro a sair.

- **Arquivos Relevantes**:
  - `fila.h`: Declarações de funções e definição da estrutura da fila.
  - `fila.c`: Implementação das funções para manipulação da fila.

### 4. **Pilha**
A **Pilha** é uma estrutura de dados do tipo LIFO (Last In, First Out), onde o último elemento a entrar é o primeiro a sair.

- **Arquivos Relevantes**:
  - `pilha.h`: Declarações de funções e definição da estrutura da pilha.
  - `pilha.c`: Implementação das funções para manipulação da pilha

## Compilação e Execução

Para compilar o projeto, utilize o comando:

```bash
gcc main.c abb.c listasligadas.c fila.c pilha.c -o main
```

Após compilar, execute:

```bash
./main 
```
