#include"Stack.h"
Stack::Stack(int n)
{
    size=n;
    top=-1;
    ptimes=new Item[size];
}
Stack::Stack(const Stack &st)
{
    size=st.size;
    top=st.top;
    ptimes=new Item[size];
    for(int i=0;i<=top;i++)
    {
        ptimes[i]=st.ptimes[i];
    }
}
Stack::~Stack()
{
    delete[] ptimes;
}

bool Stack::push(const Item &item)
{
    if(isfull())
    {
        return false;
    }
    top++;
    ptimes[top]=item;
    return true;
}
bool Stack::pop(Item &item)
{
    if(isempty())
    {
        return false;
    }
    item=ptimes[top];
    top--;
    return true;
}
Stack& Stack::operator=(const Stack &st)
{
    if(this==&st)
    {
        return *this;
    }
    delete[] ptimes;
    size=st.size;
    top=st.top;
    ptimes=new Item[size];
    for(int i=0;i<=top;i++)
    {
        ptimes[i]=st.ptimes[i];
    }
    return *this;

}
std::ostream& operator<<(std::ostream& os,const Stack& st)
{
    os<<"Stack size= "<<st.size<<", now the num of element is "<<st.top+1<<":"<<std::endl;
    for(int i=0;i<=st.top;i++)
    {
        os<<st.ptimes[i]<<' ';
    }
    os<<std::endl;

}