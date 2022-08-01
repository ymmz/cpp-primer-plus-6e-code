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
#include<fstream>
using namespace std;



int main()
{
    ifstream in1("mat.dat"),in2("pat.dat");
    ofstream out("matnpat.dat");
    set<string> s1,s2,s3;
    string s;
    while(getline(in1,s))
    {
        if(s=="q")
        {
            break;
        }
        s1.insert(s);
    }
    while(getline(in2,s))
    {
        if(s=="q")
        {
            break;
        }
        s2.insert(s);
    }
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
    for(auto c:s3)
    {
        out<<c<<endl;
    }


    return 0;
}