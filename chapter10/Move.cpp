#include "Move.h"
#include<iostream>
using namespace std;


Move::Move(double a,double b)
{
    x=a;
    y=b;
}
void Move::showMove() const
{
    cout<<"current x="<<x<<", y="<<y<<endl;
}
Move Move::add(const Move &m) const
{
    Move now(x+m.x,y+m.y);
    return now;
}
void Move::reset(double a,double b)
{
    x=a;
    y=b;
}