public class main 
{
    public static void main(String[] args) 
    {
        List lista = new List();
        Stack pilha = new Stack();
        Queue fila = new Queue();

        System.out.println("Tamanho da lista: " + lista.getSize());
        lista.insert(10);
        lista.insert(20);
        lista.insert(30);
        System.out.println("Tamanho da lista: " + lista.getSize());
        System.out.println("Primeiro elemento da lista: " + lista.firstItem());
        System.out.println("Ultimo elemento da lista: " + lista.lastItem());
        lista.removeLast();
        System.out.println("Tamanho da lista: " + lista.getSize());
        System.out.println("Primeiro elemento da lista: " + lista.firstItem());
        System.out.println("Ultimo elemento da lista: " + lista.lastItem());

        System.out.println("\n");

        System.out.println("Tamanho da pilha: " + pilha.size());
        pilha.push(45);
        pilha.push(55);
        pilha.push(65);
        System.out.println("Tamanho da pilha: " + pilha.size());
        System.out.println("Topo da pilha: " + pilha.top());
        pilha.pop();
        System.out.println("Tamanho da pilha: " + pilha.size());
        System.out.println("Topo da pilha: " + pilha.top());

        System.out.println("\n");

        System.out.println("Tamanho da fila: " + fila.size());
        fila.enqueue(100);
        fila.enqueue(205);
        fila.enqueue(309);
        System.out.println("Tamanho da fila: " + fila.size());
        System.out.println("Inicio da fila: " + fila.front());
        System.out.println("Fim da fila: " + fila.back());
        fila.dequeue();
        System.out.println("Tamanho da fila: " + fila.size());
        System.out.println("Inicio da fila: " + fila.front());
        System.out.println("Fim da fila: " + fila.back());

    }
}