#ifndef STACK_H
#define STACK_H

#include<iostream>
typedef int Item;
class Stack
{
public:
    Stack(int n=MAX);
    Stack(const Stack &st);
    ~Stack();
    bool isempty() const
    {
        return top==-1;
    }
    bool isfull() const
    {
        return top==(size-1);
    }
    bool push(const Item &item);
    bool pop(Item &item);
    Stack &operator=(const Stack &st);
    friend std::ostream& operator<<(std::ostream& os,const Stack& st);
private:
    enum {MAX=10};
    Item *ptimes;
    int size;
    int top;
};

#endif