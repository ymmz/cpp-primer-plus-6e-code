#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<fstream>
#include<memory>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;



int main(int argc,char** argv)
{
    if(argc<=1)
    {
        cout<<"please select file!!"<<endl;
        return 0;
    }
    ofstream out(argv[1]);
    char ch;
    while(cin.get(ch))
    {
        out<<ch;
    }


    return 0;
}