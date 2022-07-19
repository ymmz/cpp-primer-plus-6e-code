#ifndef PLORG_H
#define PLORG_H


class Plorg
{
public:
    Plorg();
    Plorg(char *n,int c=50);
    void setCI(int c);
    void show() const;
private:
    static const int LEN=20;
    char name[LEN];
    int CI;
};
#endif