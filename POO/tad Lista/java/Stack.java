public class Stack {
    private List list = new List();

    public void push(int value) {
        list.insert(value);
    }

    public void pop() {
        if (list.getSize() > 0) {
            list.removeLast();
        } else {
            System.out.println("Pilha Vazia!");
        }
    }

    public int size() {
        return list.getSize();
    }

    public int top() {
        return list.lastItem();
    }
}
