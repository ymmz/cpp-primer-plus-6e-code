#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;



int main()
{
    int count=0;
    ifstream inFile("test.txt");
    while(inFile.get()!=EOF)
    {
        count++;
    }
    cout<<"file test.txt count "<<count<<" chars"<<endl;


    return 0;
}