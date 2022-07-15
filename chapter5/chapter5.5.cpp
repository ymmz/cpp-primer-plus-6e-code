#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;



int main()
{
    string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int books[12];
    int sum=0;
    cout<<"Enter the number of books every month:"<<endl;
    for(int i=0;i<12;i++)
    {
        cout<<months[i]<<":";
        cin>>books[i];
        sum+=books[i];
    }
    cout<<"This years the n umber of selled book is "<<sum<<endl;


    return 0;
}