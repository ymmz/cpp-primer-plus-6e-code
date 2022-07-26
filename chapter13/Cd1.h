#ifndef CD_H
#define CD_H


class Cd
{
public:
    Cd(char *s1,char *s2,int n,double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd &d);
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
};

#endif