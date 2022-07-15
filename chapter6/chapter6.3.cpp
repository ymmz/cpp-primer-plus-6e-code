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
    cout<<"Please enter one of the followig choices:"<<endl;
    cout<<"c) carnivore\tp) pianist"<<endl;
    cout<<"t) tree\tg) game"<<endl;
    while(true)
    {
        ch=cin.get();
        cin.get();
        switch(ch)
        {
            case 'c':
                cout<<"this is carnicore"<<endl;
                break;
            case 'p':
                cout<<"this is pianist"<<endl;
                break;
            case 't':
                cout<<"this is tree"<<endl;
                break;
            case 'g':
                cout<<"this is game"<<endl;
                break;
            default:
                cout<<"Please enter a c,p,t,g:";

        }
    }


    return 0;
}