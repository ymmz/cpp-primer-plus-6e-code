#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;



int main()
{
    int a=0,b=0,c=0;
    string s;
    cout<<"Enter words (q to quit):"<<endl;
    while(true)
    {
        cin>>s;
        if(s=="q")
        {
            break;
        }
        if(isalpha(s[0]))
        {
            if(s[0]=='a'||s[0]=='A'||s[0]=='e'||s[0]=='E'||s[0]=='i'||s[0]=='I'||s[0]=='o'||s[0]=='O'||s[0]=='u'||s[0]=='U')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        else
        {
            c++;
        }
    }
    cout<<a<<" words beginning with vowels"<<endl;
    cout<<b<<" words beinning with consnants"<<endl;
    cout<<c<<" others"<<endl;

    return 0;
}