#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;



int main()
{
    int num;
    int sum=0;
    do
    {
        cout<<"Enter the num(end with 0): ";
        cin>>num;
        sum+=num;
        cout<<"now the sum is "<<sum<<endl;
    } while (num!=0);
    


    return 0;
}