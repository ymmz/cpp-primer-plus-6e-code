#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<memory>
#include<queue>
#include<stack>
#include<map>
#include<map>

using namespace std;


bool check(string &s);
int main()
{
    string s;
    while(true)
    {
        cout<<"Enter string(q to quit): ";
        getline(cin,s);
        if(s=="q")
        {
            break;
        }
        if(check(s))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }


    return 0;
}


bool check(string &s)
{
    int n=s.size();
    int l=0;
    int r=n-1;
    while(l<r)
    {
        while(l<r&&!isalpha(s[l]))
        {
            l++;
        }
        while(l<r&&!isalpha(s[r]))
        {
            r--;
        }
        char a=s[l];
        if(isupper(a))
        {
            a=tolower(a);
        }
        char b=s[r];
        if(isupper(b))
        {
            b=tolower(b);
        }
        if(a!=b)
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}