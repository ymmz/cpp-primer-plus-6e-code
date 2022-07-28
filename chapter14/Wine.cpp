#include"Wine.h"
#include<iostream>
using namespace std;

Wine::Wine()
{
    name="empty";
    num=10;
    year=PairArray(ArrayInt(0,num),ArrayInt(0,num));
}
Wine::Wine(const char *l,int y,const int yr[],const int bot[])
{
    name=l;
    num=y;
    year=PairArray(ArrayInt(yr,num),ArrayInt(bot,num));
}
Wine::Wine(const char *l,int y)
{
    name=l;
    num=y;
   year=PairArray(ArrayInt(0,num),ArrayInt(0,num));
}
Wine::~Wine()
{}
void Wine::GetBottles()
{
    cout<<"Wine can store "<<num<<" years(year number):"<<endl;
    ArrayInt &a=year.first();
    ArrayInt& b=year.second();
    for(int i=0;i<num;i++)
    {
        cout<<i+1<<": ";
        cin>>a[i]>>b[i];
    }
    cout<<"enter finish"<<endl;
}
string& Wine::Label()
{
    return name;
}
int Wine::sum()
{
    return year.second().sum();
}
void Wine::Show()
{
    cout<<"label: "<<name<<endl;
    cout<<" there are "<<num<<" :"<<endl;
    ArrayInt a=year.first();
    ArrayInt b=year.second();
    cout<<"\tYear\tBottles\n";
    for(int i=0;i<num;i++)
    {
        cout<<"\t"<<a[i]<<"\t"<<b[i]<<endl;
    }
    cout<<endl;
}