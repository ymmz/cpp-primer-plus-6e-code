#ifndef DMA_H
#define DMA_H
#include<iostream>
class Dma
{
public:
    Dma(const char *a="null",int b=0);
    Dma(const Dma &d);
    virtual ~Dma();
    Dma &operator=(const Dma &d);
    virtual void View()=0;
    //friend std::ostream &operator<<(std::ostream &os,const Dma &d);
protected:
    char *label;
    int rating;
};
class baseDma:public Dma
{
public:
    baseDma(const char *a="null",int b=0);
    baseDma(const baseDma &b);
    virtual ~baseDma();
    baseDma &operator=(const baseDma &b);
    virtual void View();
    friend std::ostream &operator<<(std::ostream &os,const baseDma &b);

};
class lacksDma:public Dma
{
public:
    lacksDma(const char *a="black",const char *b="null",int c=0);
    lacksDma(const lacksDma &l);
    virtual ~lacksDma();
    lacksDma &operator=(const lacksDma &l);
    virtual void View();
    friend std::ostream &operator<<(std::ostream &os,const lacksDma &l);
private:
    enum{COL_LEN=40};
    char cole[COL_LEN];
};

class hasDma:public Dma
{
public:
    hasDma(const char *a="none",const char *b="null",int c=0);
    hasDma(const hasDma &h);
    virtual ~hasDma();
    hasDma &operator=(const hasDma &h);
    virtual void View();
    friend std::ostream &operator<<(std::ostream &os,const hasDma &h);
private:
    char *style;
};
#endif