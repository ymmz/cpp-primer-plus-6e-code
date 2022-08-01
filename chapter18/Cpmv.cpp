#include"Cpmv.h"
#include<iostream>

using namespace std;

Cpmv::Cpmv()
{
    cout<<"默认构造"<<endl;
    pi=new Info;
    pi->qcode="empty";
    pi->zcode="empty";
}
Cpmv::Cpmv(std::string q,std::string z)
{
    cout<<"参数构造"<<endl;
    pi=new Info;
    pi->qcode=q;
    pi->zcode=z;
}
Cpmv::Cpmv(const Cpmv &cp)
{
    cout<<"拷贝构造"<<endl;
    pi=new Info;
    pi->qcode=cp.pi->qcode;
    pi->zcode=cp.pi->zcode;
}
Cpmv::Cpmv(Cpmv &&mv)
{
    cout<<"移动构造"<<endl;
    pi=mv.pi;
    mv.pi=nullptr;
}
Cpmv::~Cpmv()
{
    cout<<"析构函数"<<endl;
    delete pi;
}
Cpmv& Cpmv::operator=(const Cpmv &cp)
{
    cout<<"拷贝赋值"<<endl;
    if(this==&cp)
    {
        return *this;
    }
    this->pi->qcode=cp.pi->qcode;
    this->pi->zcode=cp.pi->zcode;
}
Cpmv& Cpmv::operator=(Cpmv &&mv)
{
    cout<<"移动赋值"<<endl;
    if(this==&mv)
    {
        return *this;
    }
    this->pi=mv.pi;
    mv.pi=nullptr;
}
Cpmv Cpmv::operator+(const Cpmv &obj) const
{
    Cpmv tmp;
    tmp.pi->qcode=pi->qcode+obj.pi->qcode;
    tmp.pi->zcode=pi->zcode+obj.pi->zcode;
    return tmp;
}
void Cpmv::Display() const
{
    cout<<"qcode: "<<pi->qcode<<endl
        <<"zcode: "<<pi->zcode<<endl;
}