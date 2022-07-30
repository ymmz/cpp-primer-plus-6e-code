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


bool check1(string &s);
bool check2(string &s);
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
        if(check1(s))
        {
            cout<<"string should just contain lower char!!"<<endl;
            continue;
        }
        if(check2(s))
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


bool check1(string &s)
{
    for(auto c:s)
    {
        if(!isalpha(c)||!islower(c))
        {
            return true;
        }
    }
    return false;
}
bool check2(string &s)
{
    int n=s.size();
    int l=0;
    int r=n-1;
    while(l<r)
    {
        if(s[l]!=s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}