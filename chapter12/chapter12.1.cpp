#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include"Cow.h"
using namespace std;



int main()
{
    Cow one;
    one.ShowCow();
    Cow two("name1","hobby1",100);
    two.ShowCow();
    Cow three(two);
    three.ShowCow();
    one=two;
    one.ShowCow();


    return 0;
}