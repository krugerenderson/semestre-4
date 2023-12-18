public class List 
{
    private int size;
    private int[] vector;

    public List() 
    {
        this.size = 0;
        this.vector = new int[0];
    }

    public void insert(int value) 
    {
        int[] newVector = new int[size + 1];
        for (int x = 0; x < size; x++) 
        {
            newVector[x] = vector[x];
        }
        newVector[size] = value;
        vector = newVector;
        size++;
    }

    public void removeFirst() 
    {
        if (size > 0) 
        {
            if (size == 1) 
            {
                vector = new int[0];
            } else {
                int[] newVector = new int[size - 1];
                for (int x = 0; x < size - 1; x++) 
                {
                    newVector[x] = vector[x + 1];
                }
                vector = newVector;
            }
            size--;
        } else 
        {
            System.out.println("Lista Vazia!");
        }
    }
    
    public void removeLast() 
    {
        if (size > 0) 
        {
            if (size == 1) 
            {
                vector = new int[0];
            } else {
                int[] newVector = new int[size - 1];
                for (int x = 0; x < size - 1; x++) 
                {
                    newVector[x] = vector[x];
                }
                vector = newVector;
            }
            size--;
        } else 
        {
            System.out.println("Lista Vazia!");
        }
    }

    public int firstItem() 
    {
        if (size == 0) 
        {
            System.out.println("Lista Vazia!");
            return -1;
        } else 
        {
            return vector[0];
        }
    }

    public int lastItem() 
    {
        if (size == 0) 
        {
            System.out.println("Lista Vazia!");
            return -1;
        } else 
        {
            return vector[size - 1];
        }
    }

    public int getSize() 
    {
        return size;
    }
}
