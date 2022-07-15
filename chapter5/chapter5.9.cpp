#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;



int main()
{
    string s;
    int sum=0;
    while(true)
    {
        cin>>s;
        if(s=="done")
        {
            break;
        }
        sum++;
    }
    cout<<"the number of word is "<<sum<<endl;

    return 0;
}