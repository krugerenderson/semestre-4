#include <iostream>
#include "list.h"

List::List() : size(0), vector(nullptr) {}

List::~List()
{
    delete[] vector;
}

void List::insert(int value)
{
    size++;
    int *newVector = new int[size];
    for (int x = 0; x < size - 1; x++)
    {
        newVector[x] = vector[x];
    }
    newVector[size - 1] = value;
    delete[] vector;
    vector = newVector;
}

void List::removeLast()
{
    if (size == 0)
    {
        std::cout << "Lista Vazia!" << std::endl;
        return;
    }
    size--;
    int *newVector = new int[size];
    for (int x = 0; x < size; x++)
    {
        newVector[x] = vector[x];
    }
    delete[] vector;
    vector = newVector;
}

int List::firstItem()
{
    if (size == 0)
    {
        std::cout << "Lista Vazia!" << std::endl;
        return -1;
    }
    return vector[0];
}

int List::lastItem()
{
    if (size == 0)
    {
        std::cout << "Lista Vazia!" << std::endl;
        return -1;
    }
    return vector[size - 1];
}

int List::getSize()
{
    return size;
}
