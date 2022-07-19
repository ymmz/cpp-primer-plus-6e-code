#include "Person.h"
#include<iostream>
#include<cstring>
using namespace std;
Person::Person(const std::string &ln,const char* fn)
{
    lname=ln;
    strcpy(fname,fn);
}
void Person::show() const
{
    cout<<fname<<" "<<lname<<endl;
}
void Person::FormalShow() const
{
    cout<<lname<<' '<<fname<<endl;
}