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
T sumArray(T arr[],int n);

template<typename T>
T sumArray(T *arr[],int n);


struct debts
{
    char name[50];
    double amount;
};
int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3]; 
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout<<"the sum of thing is "<<sumArray(things,6)<<endl;
    cout<<"the sum of debts is "<<sumArray(pd,3)<<endl;



    return 0;
}

template<typename T>
T sumArray(T arr[],int n)
{
    T sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

template<typename T>
T sumArray(T *arr[],int n)
{
    T sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=*arr[i];
    }
    return sum;
}