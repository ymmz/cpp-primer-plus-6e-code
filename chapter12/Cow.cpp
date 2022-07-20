#include"Cow.h"
#include<iostream>
#include<memory>
#include<cstring>
using namespace std;
Cow::Cow()
{
    strcpy(name,"empty");
    hobby=new char[10];
    strcpy(hobby,"empty");
    weight=0;
}
Cow::Cow(const char *nm,const char *ho,double wt)
{
    strcpy(name,nm);
    hobby=new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight=wt;
}
Cow::Cow(const Cow &c)
{
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
}
Cow::~Cow()
{
    cout<<"release "<<name<<endl;
    delete[] hobby;
}
Cow& Cow::operator=(const Cow &c)
{
    if(this==&c)
    {
        return *this;
    }
    strcpy(name,c.name);
    delete[] hobby;
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
}
void Cow::ShowCow() const
{
    cout<<"Cow name: "<<name<<", hobby: "<<hobby<<", weight: "<<weight<<endl;
}