#include "Golf.h"
#include<iostream>
#include<cstring>

using namespace std;
Golf::Golf()
{
    strcpy(fullname,"empty");
    handicap_=0;
}
Golf::Golf(const char *name,int hc)
{
    strcpy(fullname,name);
    handicap_=hc;
}
void Golf::setgolf()
{
    cout<<"Enter name: ";
    char s[LEN];
    int hc;
    cin.getline(s,LEN);
    cout<<"Enter handicap: ";
    cin>>hc;
    cin.get();
    Golf tmp(s,hc);
    *this=tmp;
}
void Golf::handicap(int hc)
{
    cout<<"reset handicap"<<endl;
    handicap_=hc;
}
void Golf::showgolf() const
{
    cout<<"name: "<<fullname<<" handicap: "<<handicap_<<endl;
}