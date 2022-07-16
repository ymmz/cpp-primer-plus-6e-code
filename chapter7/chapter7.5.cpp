#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

long long fac(int n);

int main()
{
    int n;
    cout<<"Enter the number to calculate factorial (n>=0 and q to quit):"<<endl;
    while(cin>>n&&n>=0)
    {
        cout<<n<<"! is "<<fac(n)<<endl;
    }
    cout<<"Bye!"<<endl;

    return 0;
}
long long fac(int n)
{
    if(n==0)
    {
        return 1;
    }
    return fac(n-1)*n;
}