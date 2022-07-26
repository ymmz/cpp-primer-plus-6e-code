#include"Dma.h"
#include<iostream>
#include<cstring>
#include<memory>
using namespace std;

Dma::Dma(const char *a,int b)
{
    label=new char[strlen(a)+1];
    strcpy(label,a);
    rating=b;
    cout<<"Dma::Dma(const char *a=\"null\",int b=0) init"<<endl;
}
Dma::Dma(const Dma &d)
{
    label=new char[strlen(d.label)+1];
    strcpy(label,d.label);
    rating=d.rating;
    cout<<"Dma::Dma(const Dma &d) init"<<endl;
}
Dma::~Dma()
{
    delete[] label;
    cout<<"release space, Dma::~Dma() finish"<<endl;
}
Dma &Dma::operator=(const Dma &d)
{
    if(this==&d)
    {
        return *this;
    }
    delete[] label;
    label=new char[strlen(d.label)+1];
    strcpy(label,d.label);
    rating=d.rating;
    cout<<"Dma &Dma::operator=(const Dma &d) finish"<<endl;
}
void Dma::View()
{
    cout<<"void Dma::View()"<<endl;
    cout<<"label: "<<label<<endl;
    cout<<"rating: "<<rating<<endl;
}


baseDma::baseDma(const char *a,int b)
    :Dma(a,b)
{
    cout<<"baseDma::baseDma(const char *a=\"null\",int b=0) init"<<endl;
}
baseDma::baseDma(const baseDma &b)
    :Dma(b)
{
    cout<<"baseDma::baseDma(const baseDma &b) init"<<endl;
}
baseDma::~baseDma()
{
    cout<<"baseDma::~baseDma() finish"<<endl;
}
baseDma &baseDma::operator=(const baseDma &b)
{
    Dma::operator=(b);
    cout<<"baseDma &baseDma::operator=(const baseDma &b)"<<endl;
}
void baseDma::View()
{
    
    Dma::View();
    cout<<"void baseDma::View()"<<endl;
}
std::ostream &operator<<(std::ostream &os,const baseDma &b)
{
    os<<"baseDma:"<<endl;
    os<<"label:"<<b.label<<endl;
    os<<"rating:"<<b.rating<<endl;
    return os;
}

lacksDma::lacksDma(const char *a,const char *b,int c)
    :Dma(b,c)
{
    strcpy(cole,a);
    cout<<"lacksDma::lacksDma(const char *a=\"black\",const char *b=\"null\",int c=0) init"<<endl;
}
lacksDma::lacksDma(const lacksDma &l)
    :Dma(l)
{
    strcpy(cole,l.cole);
    cout<<"lacksDma::lacksDma(const lacksDma &l) init"<<endl;
}
lacksDma::~lacksDma()
{
    cout<<"lacksDma::~lacksDma() finish"<<endl;
}
lacksDma &lacksDma::operator=(const lacksDma &l)
{
    if(this==&l)
    {
        return *this;
    }
    Dma::operator=(l);
    strcpy(cole,l.cole);
    cout<<"lacksDma &lacksDma::operator=(const lacksDma &l)"<<endl;
}
void lacksDma::View()
{
    cout<<"void lacksDma::View()"<<endl;
    cout<<"label:"<<label<<endl
        <<"rating:"<<rating<<endl
        <<"cole:"<<cole<<endl;
}
std::ostream &operator<<(std::ostream &os,const lacksDma &l)
{
    os<<"lacksDma:"<<endl;
    os<<"label:"<<l.label<<endl;
    os<<"rating:"<<l.rating<<endl;
    os<<"cole:"<<l.cole<<endl;
    return os;
}
hasDma::hasDma(const char *a,const char *b,int c)
    :Dma(b,c)
{
    style=new char[strlen(a)+1];
    strcpy(style,a);
    cout<<"hasDma::hasDma(const char *a=\"none\",const char *b=\"null\",int c=0) init"<<endl;
}
hasDma::hasDma(const hasDma &h)
    :Dma(h)
{
    style=new char[strlen(h.style)+1];
    strcpy(style,h.style);
    cout<<"hasDma::hasDma(const hasDma &h) init"<<endl;
}
hasDma::~hasDma()
{
    delete[] style;
    cout<<"release space, hasDma::~hasDma()"<<endl;
}
hasDma &hasDma::operator=(const hasDma &h)
{
    if(this==&h)
    {
        return *this;
    }
    delete[] style;
    Dma::operator=(h);
    style=new char[strlen(h.style)+1];
    strcpy(style,h.style);
    cout<<"hasDma &hasDma::operator=(const hasDma &h) init"<<endl;
}
void hasDma::View()
{
    cout<<"hasDma:"<<endl;
    cout<<"label:"<<label<<endl;
    cout<<"rating:"<<rating<<endl;
    cout<<"style:"<<style<<endl;
}
std::ostream &operator<<(std::ostream &os,const hasDma &h)
{
    os<<"hasDma:"<<endl;
    os<<"label:"<<h.label<<endl;
    os<<"rating:"<<h.rating<<endl;
    os<<"style:"<<h.style<<endl;
}