#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

template<typename T>
T max5(T arr[])
{
    T res=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>res)
        {
            res=arr[i];
        }
    }
    return res;
}

int main()
{
    int arr1[5]={1,5,2,8,4};
    cout<<"max int is "<<max5(arr1)<<endl;
    double arr2[5]={1.0,4.9,2.5,9.1,10.3};
    cout<<"max double is "<<max5(arr2)<<endl;


    return 0;
}