#include"List.h"
#include<iostream>

using namespace std;
List::List(int l)
{
    len=l;
    data=new Item[l];
    num=0;
}
List::~List()
{
    delete[] data;
}
bool List::add(Item x)
{
    if(num>=len)
    {
        return false;
    }
    data[num]=x;
    num++;
    return true;
}
bool List::isEmpty() const
{
    return num==0;
}
bool List::isFull() const
{
    return num==len;
}
void List::visit(void(*pf)(Item&))
{
    for(int i=0;i<num;i++)
    {
        pf(data[i]);
    }
}
void List::show() const
{
    cout<<"noe Item is ";
    for(int i=0;i<num;i++)
    {
        cout<<data[i]<<' ';
    }
    cout<<", num is "<<num<<endl;
}
void del(Item &x)
{
    x--;
}
void mul(Item &x)
{
    x*=2;
}