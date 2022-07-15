#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;



int main()
{
    int small,big;
    int sum=0;
    cout<<"Enter first number: ";
    cin>>small;
    cout<<"Enter second number: ";
    cin>>big;
    for(int i=small;i<=big;i++)
    {
        sum+=i;
    }
    cout<<"the sum of number between "<<small<<" and "<<big<<" is "<<sum<<endl;


    return 0;
}