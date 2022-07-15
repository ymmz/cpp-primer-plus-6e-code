#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

struct person
{
    string name;
    double val;
};

int main()
{
    int n;
    ifstream infile("test2.txt");
    infile>>n;
    infile.get();
    person *p=new person[n];
    for(int i=0;i<n;i++)
    {
        getline(infile,p[i].name);
        infile>>p[i].val;
        infile.get();
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