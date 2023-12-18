#ifndef STACK_H
#define STACK_H

#include "list.h"

class Stack
{
private:
    List list;

public:
    void push(int value); // Adiciona um elemento no topo da pilha
    void pop();           // Remove o elemento no topo da pilha
    int size();           // Retorna o tamanho da pilha
    int top();            // Retorna o elemento no topo da pilha
};

#endif // STACK_H
