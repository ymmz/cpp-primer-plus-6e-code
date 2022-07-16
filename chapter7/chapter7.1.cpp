#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

double cal(double x,double y);

int main()
{
    double x,y;
    while(true)
    {
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
        if(x==0||y==0)
        {
            break;
        }
        cout<<" the harmonic-mean of "<<x<<" and "<<y<<" is "<<cal(x,y)<<endl;

    }


    return 0;
}

double cal(double x,double y)
{
    return 2.0*x*y/(x+y);
}