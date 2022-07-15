#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;



int main()
{
    int n;
    while(true)
    {
        cout<<"Enter your salary: ";
        cin>>n;
        double cost=0;
        if(n>35000)
        {
            cost+=(n-35000)*0.2;
            n=35000;
        }
        if(n>15001)
        {
            cost+=(n-15000)*0.15;
            n=15000;
        }
        if(n>5000)
        {
            cost+=(n-5000)*0.1;
            n=5000;
        }
        if(n<=0)
        {
            break;
        }
        cout<<"all cost is "<<cost<<endl;

    }


    return 0;
}