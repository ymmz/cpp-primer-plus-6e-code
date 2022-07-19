#include"Complex0.h"
#include<iostream>
using namespace std;

Complex0::Complex0()
{
    x=0;y=0;
}
Complex0::Complex0(double a)
{
    x=a;
    y=0;
}
Complex0::Complex0(double a,double b)
{
    x=a;
    y=b;
}
Complex0 Complex0::operator+(const Complex0 &r)const
{
    Complex0 tmp;
    tmp.x=x+r.x;
    tmp.y=y+r.y;
    return tmp;
}
Complex0 Complex0::operator-(const Complex0 &r)const
{
    Complex0 tmp;
    tmp.x=x-r.x;
    tmp.y=y-r.y;
    return tmp;
}
Complex0 Complex0::operator*(const Complex0 &r)const
{
    Complex0 tmp;
    tmp.x=x*r.x-y*r.y;
    tmp.y=x*r.y+y*r.x;
    return tmp;
}
Complex0 Complex0::operator*(double a)const
{
    Complex0 tmp;
    tmp.x=x*a;
    tmp.y=y*a;
    return tmp;
}
Complex0 operator~(const Complex0 &r)
{
    Complex0 tmp;
    tmp.x=r.x;
    tmp.y=-r.y;
    return tmp;
}
std::ostream & operator<<(std::ostream & os, const Complex0 & v)
{
    os<<"("<<v.x<<", "<<v.y<<"i)";
    return os;
}
std::istream & operator>>(std::istream & is, Complex0 & v)
{
    cout<<"real: ";
    is>>v.x;
    cout<<"imaginary: ";
    is>>v.y;
    return is;
}