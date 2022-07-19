#ifndef COMPLEX0_H
#define COMPLEX0_H
#include<iostream>
class Complex0
{
public:
    Complex0();
    Complex0(double a);
    Complex0(double a,double b);
    Complex0 operator+(const Complex0 &r)const;
    Complex0 operator-(const Complex0 &r)const;
    Complex0 operator*(const Complex0 &r)const;
    Complex0 operator*(double a)const;
    friend Complex0 operator~(const Complex0 &r);
    friend Complex0 operator*(double a,const Complex0 &r)
    {
        return r*a;
    }
    friend std::ostream & operator<<(std::ostream & os, const Complex0 & v);
    friend std::istream & operator>>(std::istream & is, Complex0 & v);

private:
    double x,y;
};

#endif