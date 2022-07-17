#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

int times=0;
void show(char *p);
void show(char *p,int flag);

int main()
{
    char *p="this is a test";
    show(p);
    show(p,0);
    show(p,1);
    show(p,2);


    return 0;
}
void show(char *p)
{
    times++;
    cout<<"this is "<<times<<"th times to use this function"<<endl;
    cout<<"string is: "<<endl<<p<<endl;
}
void show(char *p,int flag)
{
    times++;
    if(flag!=0)
    {
        cout<<"this function has been used for "<<times<<" times"<<endl;
        cout<<"string is: "<<endl;
        for(int i=0;i<times;i++)
        {
            cout<<p<<endl;
        }
    }
}