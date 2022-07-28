#include"Person.h"
#include<cstdlib>
using namespace std;
Person::Person(std::string l,std::string f)
{
    last=l;
    first=f;
}
Person::~Person(){}
void Person::Show()
{
    cout<<"last name: "<<last<<endl;
    cout<<"first name: "<<first<<endl;
}


Gunslinger::Gunslinger(std::string l,std::string f,double t,int n)
    :Person(l,f)
{
    time=t;
    number=n;
}
Gunslinger::~Gunslinger(){}
void Gunslinger::Show()
{
    Person::Show();
    cout<<"time: "<<time<<endl;
    cout<<"number : "<<number<<endl;
}
double Gunslinger::Draw()
{
    return time;
}

PokerPlayer::PokerPlayer(std::string l,std::string f)
    :Person(l,f)
{
    card=-1;
}
PokerPlayer::~PokerPlayer(){}
int PokerPlayer::Draw()
{
    card=(random()%52)+1;
    return card;
}
void PokerPlayer::Show()
{
    Person::Show();
    cout<<"Card: "<<card<<endl;
}

BadDube::BadDube(std::string l,std::string f,double t,int n)
    :Person(l,f),PokerPlayer(),Gunslinger(l,f,t,n)
{}
BadDube::~BadDube(){}
double BadDube::Gdraw()
{
    return Gunslinger::Draw();
}
int BadDube::Cdraw()
{
    return PokerPlayer::Draw();
}
void BadDube::Show()
{
    Gunslinger::Show();
    PokerPlayer::Show();
}