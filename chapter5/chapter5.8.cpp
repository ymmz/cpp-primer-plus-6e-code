#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;


const int LEN=50;
int main()
{
    char s[LEN];
    int sum=0;
    while(true)
    {
        cin>>s;
        if(strcmp(s,"done")==0)
        {
            break;
        }
        sum++;
    }
    cout<<"the number of word is "<<sum<<endl;
    return 0;
}