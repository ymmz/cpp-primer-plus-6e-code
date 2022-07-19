#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "stonewt.h"
using namespace std;



int main()
{
    Stonewt arr[6]={Stonewt(9),Stonewt(2,3),Stonewt(200)};
    for(int i=3;i<6;i++)
    {
        double pounds;
        cout<<"Enter pounds: ";
        cin>>pounds;
        arr[i]=Stonewt(pounds);
    }
    Stonewt one(11);
    Stonewt max=arr[0];
    Stonewt min=arr[0];
    int count=0;
    for(int i=0;i<6;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(arr[i]>=one)
        {
            count++;
        }
    }
    cout<<"max item is: "<<endl;
    max.show_stn();
    max.show_lbs();
    cout<<"min item is:"<<endl;
    min.show_stn();
    min.show_lbs();
    cout<<"the count that is not less 11 is "<<count<<endl;


    return 0;
}