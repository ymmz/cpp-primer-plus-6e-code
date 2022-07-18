#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;


struct chaff
{
    char dross[20];
    int slag;
};

char buf[100];

int main()
{

    chaff *p1=new(buf) chaff[2];
    chaff *p2=new chaff[2];
    strcpy(p1[0].dross,"buff1");
    p1[0].slag=1;
    strcpy(p1[1].dross,"buff2");
    p1[1].slag=2;
    cout<<"buffer init:"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"chaff.dross: "<<p1[i].dross<<endl
            <<"chaff.slag: "<<p1[i].slag<<endl;
    }
    strcpy(p2[0].dross,"new1");
    p2[0].slag=1;
    strcpy(p2[1].dross,"new2");
    p2[1].slag=2;
    cout<<"new init:"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"chaff.dross: "<<p2[i].dross<<endl
            <<"chaff.slag: "<<p2[i].slag<<endl;
    }



    return 0;
}