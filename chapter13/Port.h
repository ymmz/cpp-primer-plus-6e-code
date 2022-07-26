#ifndef PORT_H
#define PORT_H
#include<iostream>
class Port
{
public:
    Port(const char *br="none",const char *st="none",int b=0);
    Port(const Port& p);
    virtual ~Port()
    {
        delete[] brand;
    }
    Port& operator=(const Port& p);
    Port& operator+=(int b);
    Port& operator-=(int b);

    int BottleCount() const
    {
        return bottles;
    }
    virtual void Show() const;
    friend std::ostream& operator<<(std::ostream &os,const Port &p);

private:
    char *brand;
    char style[20];
    int bottles;

};
class VintagePort:public Port
{

public:
    VintagePort();
    VintagePort(const char *br,int b,const char *nn,int y);
    VintagePort(const VintagePort &v);
    ~VintagePort()
    {
        delete[] nickname;
    }
    VintagePort& operator=(const VintagePort &v);
    void Show() const;
    friend std::ostream& operator <<(std::ostream &os,const VintagePort &v);
private:
    char *nickname;
    int year;
};
#endif