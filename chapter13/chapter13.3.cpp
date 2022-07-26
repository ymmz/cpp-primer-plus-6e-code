#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include"Dma.h"
using namespace std;



int main()
{
    Dma *p[3];
    p[0]=new baseDma("base",1);
    p[1]=new lacksDma("lacks","Dam",2);
    hasDma h=hasDma("has","Dma",3);
    p[2]=&h;
    p[0]->View();
    p[1]->View();
    p[2]->View();
    hasDma t=hasDma("not has","Dma",4);
    h=t;
    p[2]->View();
    delete p[0];
    delete p[1];
    cout<<h;


    return 0;
}