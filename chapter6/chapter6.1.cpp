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
    char ch;
    while((ch=cin.get())!='@')
    {
        if(isdigit(ch))
        {
            continue;
        }
        else
        {
            if(islower(ch))
            {
                ch=toupper(ch);
            }
            else if(isupper(ch))
            {
                ch=tolower(ch);
            }
            cout<<ch;
        }
        
    }
    cout<<endl;


    return 0;
}