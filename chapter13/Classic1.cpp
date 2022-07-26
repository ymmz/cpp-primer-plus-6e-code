#include"Classic1.h"
#include<iostream>
#include<cstring>
using namespace std;

Classic::Classic(char *s1,char *s2,char *s3,int n,double x)
    :Cd(s2,s3,n,x)
{
    works=new char[strlen(s1)+1];
    strcpy(works,s1);
    cout<<"Classic::Classic(char *s1,char *s2,char *s3,int n,double x) init"<<endl;
}
Classic::Classic(const Classic &c)
    :Cd(c)
{
    works=new char[strlen(c.works)+1];
    strcpy(works,c.works);
    cout<<"Classic::Classic(const Classic &c) init"<<endl;
}
Classic::Classic()
    :Cd()
{
    works=new char[10];
    strcpy(works,"empty");
    cout<<"Classic::Classic() empty init"<<endl;
}
Classic::~Classic()
{
    delete[] works;
    cout<<"release space, Classic::~Classic() finish"<<endl;
}
void Classic::Report() const
{
    Cd::Report();
    cout<<"Classic information:"<<endl
        <<"works:"<<works<<endl;
}
Classic & Classic::operator=(const Classic &c)
{
    if(this==&c)
    {
        return *this;
    }
    Cd::operator=(c);
    delete[] works;
    works=new char[strlen(c.works)+1];
    strcpy(works,c.works);
    cout<<"malloc space, Classic & Classic::operator=(const Classic &c) finish"<<endl;
    return *this;
}