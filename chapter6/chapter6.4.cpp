#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

const int LEN=50;
struct bop
{
    char fullname[LEN];
    char title[LEN];
    char bopname[LEN];
    int preference;
};
int main()
{
    bop mem[5]={{"fullname1","title1","bop1",0},{"fullname2","title2","bop2",1},{"fullname3","title3","bop3",2},{"fullname4","title4","bop4",0},{"fullname5","title5","bop5",1}};
    char ch;
    int flag=1;
    cout<<"Benevolent Order of Programmers Report"<<endl;
    cout<<"a. display by name\tb.display by title"<<endl;
    cout<<"c. display by bopname\td. display by preference"<<endl;
    cout<<"q.quit"<<endl;
    while(flag)
    {
        cout<<"Enter your choice: ";
        ch=cin.get();
        cin.get();
        switch(ch)
        {
            case 'a':
                for(int i=0;i<5;i++)
                {
                    cout<<mem[i].fullname<<endl;
                }
                break;
            case 'b':
                for(int i=0;i<5;i++)
                {
                    cout<<mem[i].title<<endl;
                }
                break;
            case 'c':
                for(int i=0;i<5;i++)
                {
                    cout<<mem[i].bopname<<endl;
                }
                break;
            case 'd':
                for(int i=0;i<5;i++)
                {
                    if(mem[i].preference==0)
                    {
                        cout<<mem[i].fullname;
                    }
                    else if(mem[i].preference==1)
                    {
                        cout<<mem[i].title;
                    }
                    else
                    {
                        cout<<mem[i].bopname;
                    }
                    cout<<endl;
                }
                break;
            case 'q':
                cout<<"Bye!"<<endl;
                flag=0;
                break;
            default:
                cout<<"Please enter a a,b,c,d,q:";

        }
    }


    return 0;
}