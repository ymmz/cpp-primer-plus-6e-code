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
    int books[3][12];
    int sum[3]={0};
    int all=0;
    for(int k=0;k<3;k++)
    {
        cout<<"Enter the number of books every month for "<<k+1<<"th year:"<<endl;
        for(int i=0;i<12;i++)
        {
            cout<<months[i]<<":";
            cin>>books[k][i];
            sum[k]+=books[k][i];
            all+=books[k][i];
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<"The "<<i+1<<"th year is "<<sum[i]<<" books"<<endl;
    }
    cout<<"The sum of three years is "<<all<<" books"<<endl;


    return 0;
}