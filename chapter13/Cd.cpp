#include"Cd.h"
#include<cstring>
#include<iostream>
using namespace std;

Cd::Cd(char *s1,char *s2,int n,double x)
{
    strcpy(performers,s1);
    strcpy(label,s2);
    selections=n;
    playtime=x;
    cout<<"Cd::Cd(char *s1,char *s2,int n,double x) init"<<endl;
}
Cd::Cd(const Cd &d)
{
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    cout<<"Cd::Cd(const Cd &d) init"<<endl;
}
Cd::Cd()
{
    strcpy(performers,"empty");
    strcpy(label,"empty");
    selections=0;
    playtime=0;
    cout<<"Cd::Cd empty init"<<endl;
}
Cd::~Cd()
{
    cout<<"Cd::~Cd finish"<<endl;
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
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    cout<<"Cd::operator=(const Cd &d) finish"<<endl;
    return *this;
}