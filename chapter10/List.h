#ifndef LIST_H
#define LIST_H

typedef int Item;
class List
{
public:
    List(int l=30);
    ~List();
    bool add(Item x);
    bool isEmpty() const;
    bool isFull() const;
    void visit(void(*pf)(Item&));
    void show() const;
private:
    Item *data;
    int len;
    int num;
};
void del(Item &x);
void mul(Item &x);
#endif