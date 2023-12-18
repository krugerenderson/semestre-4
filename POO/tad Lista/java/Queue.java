public class Queue {
    private List list = new List();

    public void enqueue(int value) {
        list.insert(value);
    }

    public void dequeue() {
        if (list.getSize() > 0) {
            list.removeFirst();
        } else {
            System.out.println("Fila Vazia!");
        }
    }

    public int size() {
        return list.getSize();
    }

    public int front() {
        return list.firstItem();
    }

    public int back() {
        return list.lastItem();
    }
}
