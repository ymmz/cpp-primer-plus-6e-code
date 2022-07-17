#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

struct CandyBar
{
    char *name;
    double weight;
    int heat;
};
void set(CandyBar &candy,char *p="Millennium Munch",double w=2.85,int h=350);
void show(const CandyBar &candy);

int main()
{
    CandyBar candy;
    set(candy);
    show(candy);


    return 0;
}
void set(CandyBar &candy,char *p,double w,int h)
{
    candy.name=p;
    candy.weight=w;
    candy.heat=h;
}
void show(const CandyBar &candy)
{
    cout<<"CandyBar.name is: "<<candy.name<<endl
        <<"CandyBar.weight is : "<<candy.heat<<endl
        <<"CandyBar.geat is: "<<candy.heat<<endl;
}