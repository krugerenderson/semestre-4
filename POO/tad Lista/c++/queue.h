#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

class Queue
{
private:
    List list;

public:
    void enqueue(int value); // Adiciona um elemento no final da fila
    void dequeue();          // Remove o elemento no início da fila
    int size();              // Retorna o tamanho da fila
    int front();             // Retorna o elemento no início da fila
    int back();              // Retorna o elemento no fim da fila
};

#endif // QUEUE_H
