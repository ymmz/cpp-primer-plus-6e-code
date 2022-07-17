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
T maxn(T arr[],int n)
{
    T res=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
        {
            res=arr[i];
        }
    }
    return res;
}
template<> char* maxn(char * arr[],int n)
{
    char *res=arr[0];
    for(int i=0;i<n;i++)
    {
        if(strlen(res)<strlen(arr[i]))
        {
            res=arr[i];
        }
    }
    return res;
}

int main()
{
    int arr1[6]={1,2,3,23,54,1};
    cout<<"max int is: "<<maxn(arr1,6)<<endl;
    double arr2[4]={1.0,3.2,6.1,9.9};
    cout<<"max double is: "<<maxn(arr2,4)<<endl;
    char *arr[5]={"asdkflhsafu","asd","usduajglfjksgh","adsdf","klsayhvlkdjsavnj"};
    cout<<"the address for max len string is: "<<(void*)maxn(arr,5)<<endl;

    return 0;
}