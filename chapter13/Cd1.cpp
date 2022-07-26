#include"Cd1.h"
#include<cstring>
#include<iostream>
using namespace std;

Cd::Cd(char *s1,char *s2,int n,double x)
{
    performers=new char[strlen(s1)+1];
    label=new char[strlen(s2)+1];
    strcpy(performers,s1);
    strcpy(label,s2);
    selections=n;
    playtime=x;
    cout<<"Cd::Cd(char *s1,char *s2,int n,double x) init"<<endl;
}
Cd::Cd(const Cd &d)
{
    performers=new char[strlen(d.performers)+1];
    label=new char[strlen(d.label)+1];
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    cout<<"Cd::Cd(const Cd &d) init"<<endl;
}
Cd::Cd()
{
    performers=new char[10];
    label=new char[10];
    strcpy(performers,"empty");
    strcpy(label,"empty");
    selections=0;
    playtime=0;
    cout<<"Cd::Cd empty init"<<endl;
}
Cd::~Cd()
{
    delete[] performers;
    delete[] label;
    cout<<"release space, Cd::~Cd finish"<<endl;
}
void Cd::Report() const
{
    cout<<"Cd information:"<<endl
        <<"performers:"<<performers<<", label:"<<label<<", selections:"<<selections<<", playtime:"<<playtime<<endl;
}
Cd & Cd::operator=(const Cd &d)
{
    if(this==&d)
    {
        return *this;
    }
    delete[] performers;
    delete[] label;
    performers=new char[strlen(d.performers)+1];
    label=new char[strlen(d.label)+1];
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    cout<<"malloc space, Cd::operator=(const Cd &d) finish"<<endl;
    return *this;
}