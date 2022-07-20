#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include"Stack.h"
using namespace std;



int main()
{
    Stack s1;
    for(int i=0;i<5;i++)
    {
        s1.push(i);
    }
    cout<<s1;
    Stack s2(100);
    for(int i=0;i<10;i++)
    {
        s2.push(i);
    }
    cout<<s2;
    Stack s3(s2);
    cout<<s3;
    s3=s1;
    cout<<s3;



    return 0;
}