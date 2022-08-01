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
    char ch;
    char s[100];
    int idx=0;
    while((ch=cin.peek())!='$')
    {
        cin.get(ch);
        s[idx]=ch;
        idx++;
    }
    s[idx]='\0';
    cout<<"s= "<<s<<endl;


    return 0;
}