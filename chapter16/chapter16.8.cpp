#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<memory>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;



int main()
{

    set<string> s1,s2,s3;
    cout<<"Mat enter name(q to quit): ";
    string s;
    while(cin>>s)
    {
        if(s=="q")
        {
            break;
        }
        s1.insert(s);
    }
    cout<<"Pat enter name(q to quit): ";
    while(cin>>s)
    {
        if(s=="q")
        {
            break;
        }
        s2.insert(s);
    }
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
    cout<<"after union:";
    for(auto c:s3)
    {
        cout<<c<<" ";
    }
    cout<<endl;


    return 0;
}