#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

int Fill_array(double arr[],int n);
void Show_array(double arr[],int n);
void Reverse_array(double arr[],int n);

const int LEN=50;
int main()
{
    double arr[LEN];
    int n;
    cout<<"Enter the length of double array(n<50): ";
    cin>>n;
    int number=Fill_array(arr,n);
    cout<<"The real number of input is "<<number<<endl;
    Show_array(arr,number);
    Reverse_array(arr,number);
    Show_array(arr,number);
    Reverse_array(arr+1,number-2);
    Show_array(arr,number);


    return 0;
}


int Fill_array(double arr[],int n)
{
    cout<<"Enter the double value (count less "<<n<<")(q to quit):"<<endl;
    int count=0;
    double value=0;
    while(count<n&&cin>>value)
    {
        arr[count]=value;
        count++;
    }
    cout<<"input finish!"<<endl;
    return count;
}
void Show_array(double arr[],int n)
{
    cout<<"Show arr: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"show finish!"<<endl;
}
void Reverse_array(double arr[],int n)
{
    cout<<"Reverse arr!"<<endl;
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"Reverse finish!"<<endl;
}
