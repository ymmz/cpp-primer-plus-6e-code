#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "Golf.h"
using namespace std;



int main()
{
    Golf one;
    Golf two("test1",100);
    one.showgolf();
    one.handicap(5);
    one.showgolf();
    one.setgolf();
    one.showgolf();
    cout<<endl;
    two.showgolf();


    return 0;
}