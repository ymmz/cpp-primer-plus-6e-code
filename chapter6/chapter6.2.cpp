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
    double num[10];
    int index=0;
    double sum=0;
    while(isdigit(ch=cin.get()))
    {
        if(index>=10)
        {
            break;
        }
        num[index]=(ch-'0');
        sum+=num[index];
        index++;
    }
    int k=0;
    double avg=sum/index;
    for(int i=0;i<index;i++)
    {
        if(num[i]>avg)
        {
            k++;
        }
    }
    cout<<index<<" number's average is "<<avg<<", there are"<<k<<" number are bigger than average"<<endl;;


    return 0;
}