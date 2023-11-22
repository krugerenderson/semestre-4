#ifndef LIST_H
#define LIST_H

class List
{
private:
    int size;
    int *vector;

public:
    List();
    ~List();
    void insert(int value);
    void removeLast();
    int firstItem();
    int lastItem();
    int getSize();
};

#endif // LIST_H
