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
#include"Store.h"
using namespace std;



int main()
{
    vector<string> vostr;
    string temp;
    cout<<"Enter string (empty line to quit):\n";
    while(getline(cin,temp)&&temp[0]!='\0')
    {
        vostr.push_back(temp);
    }
    cout<<"Here is your input\n";
    for_each(vostr.begin(),vostr.end(),ShowStr);
    ofstream fout("string.dat",ios_base::out|ios_base::binary);
    for_each(vostr.begin(),vostr.end(),Store(fout));
    fout.close();
    vector<string> vistr;
    ifstream fin("string.dat",ios_base::in|ios_base::binary);
    if(!fin.is_open())
    {
        cerr<<"could not open file"<<endl;
        exit(EXIT_FAILURE);
    }
    GetStrs(fin,vistr);
    cout<<"\nhere are the strings:\n";
    for_each(vistr.begin(),vistr.end(),ShowStr);


    return 0;
}