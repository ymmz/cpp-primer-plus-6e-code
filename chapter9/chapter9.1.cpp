#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "golf.h"

using namespace std;



int main()
{
    golf ann;
    setgolf(ann,"Ann Birdfree",24);
    showgolf(ann);
    golf arr[5];
    int n=5;
    for(int i=0;i<5;i++)
    {
        if(setgolf(arr[i])==0)
        {
            break;
        }
        n=i+1;
    }
    for(int i=0;i<n;i++)
    {
        showgolf(arr[i]);
    }


    return 0;
}