#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

struct person
{
    string name;
    double val;
};

int main()
{
    int n;
    cout<<"Enter the number of person: ";
    cin>>n;
    person *p=new person[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter name: ";
        cin>>p[i].name;
        cout<<"enter val: ";
        cin>>p[i].val;
    }
    int g=0;
    cout<<"Grand patrons"<<endl;
    for(int i=0;i<n;i++)
    {
        if(p[i].val>10000)
        {
            cout<<p[i].name<<"\t"<<p[i].val<<endl;
            g++;
        }
    }
    if(g==0)
    {
        cout<<"none"<<endl;
    }
    cout<<"Patrons"<<endl;
    for(int i=0;i<n;i++)
    {
        if(p[i].val<=10000)
        {
            cout<<p[i].name<<"\t"<<p[i].val<<endl;
        }
    }
    if(n-g==0)
    {
        cout<<"none"<<endl;
    }


    return 0;
}