#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
#include<cstring>
class Person
{
public:
    Person(std::string l="empty",std::string f="empty");
    virtual ~Person();
    virtual void Show();
private:
    std::string last;
    std::string first;

};
class Gunslinger:virtual public Person
{
public:
    Gunslinger(std::string l="empty",std::string f="empty",double t=10.0,int n=10);
    virtual ~Gunslinger();
    virtual void Show();
    double Draw();

private:
    double time;
    int number;
};

class PokerPlayer:virtual public Person
{
public:
    PokerPlayer(std::string l="empty",std::string f="empty");
    virtual ~PokerPlayer();
    int Draw();
    virtual void Show();
private:
    int card;

};
class BadDube:public Gunslinger,public PokerPlayer
{
public:
    BadDube(std::string l="empty",std::string f="empty",double t=10.0,int n=10);
    virtual ~BadDube();
    double Gdraw();
    int Cdraw();
    virtual void Show();
};



#endif