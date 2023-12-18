#include <iostream>
#include "stack.h"

void Stack::push(int value)
{
    list.insert(value); // Inserção no início da pilha
}

void Stack::pop()
{
    if (list.getSize() > 0)
    {
        list.removeLast(); // Remoção do início da pilha
    }
    else
    {
        std::cout << "Pilha Vazia!" << std::endl;
    }
}

int Stack::size()
{
    return list.getSize();
}

int Stack::top()
{
    return list.lastItem(); // Retorna o elemento no topo da pilha
}
