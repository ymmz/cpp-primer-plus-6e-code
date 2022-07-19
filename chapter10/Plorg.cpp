#include "Plorg.h"
#include <iostream>
#include<cstring>
using namespace std;
Plorg::Plorg()
{
    strcpy(name,"Plorga");
    CI=50;
}
Plorg::Plorg(char *n,int c)
{
    strcpy(name,n);
    name[LEN-1]='\0';
    CI=c;
}
void Plorg::setCI(int c)
{
    CI=c;
}
void Plorg::show() const
{
    cout<<"name: "<<name<<endl
        <<"CI: "<<CI<<endl;
}