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
#include<fstream>
using namespace std;



int main()
{
    ofstream out("test3.txt");
    ifstream in1("test.txt"),in2("test2.txt");
    char s1[100];
    char s2[100];
    int flag=0;
    while(true)
    {
        if(in1.get(s1,100))
        {
            out<<s1;
            flag=1;
        }
        if(in2.get(s2,100))
        {
            out<<" ";
            out<<s2;
            out<<endl;
            flag=1;
        }
        in1.get();
        in2.get();
        if(flag==0)
        {
            break;
        }
        flag=0;
        
        
    }


    return 0;
}