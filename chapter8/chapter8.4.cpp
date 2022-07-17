#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

struct stringy
{
    char *str;
    int ct;
};
void set(stringy & s,char *p);
void show(const stringy &s);
void show(const stringy &s,int n);
void show(const char *p);
void show(const char *p,int n);



int main()
{
    stringy beany;
    char testing[]="Reality isn't what it used to be.";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show(testing,3);
    show("Done!");



    return 0;
}
void set(stringy & s,char *p)
{
    cout<<"set stringy:"<<endl;
    s.ct=strlen(p);
    s.str=new char[s.ct+1];
    strcpy(s.str,p);
    
    cout<<"set finish!"<<endl;
}
void show(const stringy &s)
{
    cout<<"string is: "<<s.str<<" and len is "<<s.ct<<endl;
}
void show(const stringy &s,int n)
{
    cout<<"string is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s.str<<endl;
    }
    cout<<"len is "<<s.ct<<endl;
}
void show(const char *p)
{
    cout<<"string is: "<<p<<endl;
}
void show(const char *p,int n)
{
    cout<<"string is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p<<endl;
    }
}