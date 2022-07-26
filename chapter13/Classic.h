#ifndef CLASSIC_H
#define CLASSIC_H


#include"Cd.h"
class Classic:public Cd
{
public:
    Classic(char *s1,char *s2,char *s3,int n,double x);
    Classic(const Classic &c);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    Classic & operator=(const Classic &c);
private:
    char works[100];
};

#endif