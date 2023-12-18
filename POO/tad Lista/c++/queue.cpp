#include <iostream>
#include "queue.h"

void Queue::enqueue(int value)
{
    list.insert(value); // Inserção no final da lista
}

void Queue::dequeue()
{
    if (list.getSize() > 0)
    {
        list.removeFirst(); // Remoção do início da lista (FIFO)
    }
    else
    {
        std::cout << "Fila Vazia!" << std::endl;
    }
}

int Queue::size()
{
    return list.getSize();
}

int Queue::front()
{
    return list.firstItem(); // Retorna o elemento no início da lista (FIFO)
}

int Queue::back()
{
    return list.lastItem(); // Retorna o elemento no início da lista (FIFO)
}
