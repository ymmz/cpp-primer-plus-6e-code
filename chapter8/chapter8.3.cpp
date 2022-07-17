#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

void show(string &s)
{
    for(auto c:s)
    {
        if(islower(c))
        {
            c=toupper(c);
        }
        cout<<c;
    }
    cout<<endl;
}

int main()
{
    string s;
    while(true)
    {
        cout<<"Enter string (q to quit): ";
        getline(cin,s);
        if(s=="q")
        {
            break;
        }
        show(s);
    }
    cout<<"Bye!"<<endl;


    return 0;
}