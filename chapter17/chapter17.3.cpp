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



int main(int argc,char **argv)
{
    if(argc<3)
    {
        cout<<"please select out file and in file"<<endl;
        return 0;
    }
    ofstream out(argv[2]);
    if(!out.is_open())
    {
        cout<<"can not open out file: "<<argv[2]<<endl;
        return 0;
    }
    ifstream in(argv[1]);
    if(!in.is_open())
    {
        cout<<"can not open in file: "<<argv[1]<<endl;
        return 0;
    }
    char ch;
    while(in.get(ch))
    {
        out<<ch;
    }



    return 0;
}