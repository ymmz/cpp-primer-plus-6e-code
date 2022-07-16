#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

double *fill_array(double arr[],int limit);
void show_array( double *start, double *end);
void revalue(double value, double *start, double *end);
const int LEN=50;
int main()
{
    double arr[LEN];
    double *end=fill_array(arr,LEN);
    //cout<<*arr<<endl;
    show_array(arr,end);
    if(end!=nullptr)
    {
        cout<<"enter revaluation factor: ";
        double fact;
        while(!(cin>>fact))
        {
            cin.clear();
            while(cin.get()!='\n')
            {
                continue;
            }
            cout<<"Bad input,please enter a number: ";
        }
        revalue(fact,arr,end);
        show_array(arr,end);
    }


    return 0;
}
double *fill_array(double arr[],int limit)
{
    
    cout<<"enter the number(q to quit): "<<endl;
    double value;
    int count=0;
    double *end=nullptr;
    while(count<limit&&cin>>value)
    {
        arr[count]=value;
        end=&arr[count];
        count++;
    }
    cout<<"fill array finish!"<<endl;
    cin.clear();
    while(cin.get()!='\n')
    {
        continue;
    }
    return end;
}
void show_array( double *start, double *end)
{
    //cout<<*start<<*end<<endl;
    if(end==nullptr)
    {
        cout<<"arr is empty"<<endl;
        return;
    }
    cout<<"show array is: ";
    for(double *s=start;s!=(end+1);s++)
    {
        cout<<*s<<" ";
    }
    cout<<endl<<"show array finish!"<<endl;
}
void revalue(double value,double *start,double *end)
{
    if(end==nullptr)
    {
        cout<<"array is empty"<<endl;
        return;
    }
    cout<<"revaluation array!"<<endl;
    for(double* s=start;s!=(end+1);s++)
    {
        *s=*s*value;
    }
    cout<<"revaluation finish!"<<endl;
}