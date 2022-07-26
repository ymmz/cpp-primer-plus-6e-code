#include"Port.h"
#include<cstring>
using namespace std;

Port::Port(const char *br,const char *st,int b)
{
    brand=new char[strlen(br)+1];
    strcpy(brand,br);
    strcpy(style,st);
    bottles=b;
}
Port::Port(const Port& p)
{
    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles=p.bottles;
}
Port& Port::operator=(const Port& p)
{
    if(this==&p)
    {
        return *this;
    }
    delete[] brand;
    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles=p.bottles;
    return *this;
}
Port& Port::operator+=(int b)
{
    bottles+=b;
    return *this;
}
Port& Port::operator-=(int b)
{
    bottles-=b;
    return *this;
}
void Port::Show() const
{
    cout<<"Brand: "<<brand<<endl
        <<"Kind: "<<style<<endl
        <<"Bottles: "<<bottles<<endl;
}
std::ostream& operator<<(std::ostream &os,const Port &p)
{
    os<<p.brand<<", "<<p.style<<", "<<p.bottles;
}


VintagePort::VintagePort()
    :Port("none","vintage",0)
{
    nickname=new char[10];
    strcpy(nickname,"none");
    year=0;
}
VintagePort::VintagePort(const char *br,int b,const char *nn,int y)
    :Port(br,"vintage",b)
{
    nickname=new char[strlen(nn)+1];
    strcpy(nickname,nn);
    year=y;
}
VintagePort::VintagePort(const VintagePort &v)
{
    nickname=new char[strlen(v.nickname)+1];
    strcpy(nickname,v.nickname);
    year=v.year;
}
VintagePort& VintagePort::operator=(const VintagePort &v)
{
    if(this==&v)
    {
        return *this;
    }
    Port::operator=(v);
    delete[] nickname;
    nickname=new char[strlen(v.nickname)+1];
    strcpy(nickname,v.nickname);
    year=v.year;
    return *this;
}
void VintagePort::Show() const
{
    Port::Show();
    cout<<"Nickname: "<<nickname<<endl
        <<"Year: "<<year<<endl;

}
std::ostream& operator <<(std::ostream &os,const VintagePort &v)
{
    os<<(const Port)v;
    cout<<", "<<v.nickname<<", "<<v.year;
}