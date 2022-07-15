#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <array>
using namespace std;


const int LEN=101;
int main()
{
    array<long double,LEN> fact;
    fact[1]=fact[0]=1;
    for(int i=2;i<LEN;i++)
    {
        fact[i]=i*fact[i-1];
    }
    for(int i=0;i<LEN;i++)
    {
        cout<<i<<"!="<<fact[i]<<endl;
    }

    return 0;
}