#include <iostream>
#include "list.h"
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
     List lista;
     Stack pilha;
     Queue fila;

     cout << "Tamanho da lista: " << lista.getSize() << endl;
     lista.insert(15);
     lista.insert(30);
     lista.insert(45);
     cout << "Tamanho da lista: " << lista.getSize() << endl;
     cout << "Primeiro Elemento da lista: " << lista.firstItem() << endl;
     cout << "Ultimo Elemento da lista: " << lista.lastItem() << endl;
     lista.removeLast();
     cout << "Tamanho da lista: " << lista.getSize() << endl;
     cout << "Primeiro Elemento da lista: " << lista.firstItem() << endl;
     cout << "Ultimo Elemento da lista: " << lista.lastItem() << endl;

     cout << "\n"
          << endl;

     cout << "Tamanho da pilha: " << pilha.size() << endl;
     pilha.push(23);
     pilha.push(43);
     pilha.push(63);
     cout << "Tamanho da pilha: " << pilha.size() << endl;
     cout << "Topo da pilha: " << pilha.top() << endl;
     pilha.pop();
     cout << "Tamanho da pilha: " << pilha.size() << endl;
     cout << "Topo da pilha: " << pilha.top() << endl;

     cout << "\n"
          << endl;

     cout << "Tamanho da fila: " << fila.size() << endl;
     fila.enqueue(100);
     fila.enqueue(250);
     fila.enqueue(400);
     cout << "Tamanho da fila: " << fila.size() << endl;
     cout << "Inicio da fila: " << fila.front() << endl;
     cout << "Fim da fila: " << fila.back() << endl;
     fila.dequeue();
     cout << "Tamanho da fila: " << fila.size() << endl;
     cout << "Inicio da fila: " << fila.front() << endl;
     cout << "Fim da fila: " << fila.back() << endl;

     return 0;
}
