#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "Plorg.h"
using namespace std;



int main()
{
    Plorg one;
    one.show();
    one.setCI(1000);
    one.show();
    Plorg two("test1");
    two.show();
    Plorg three("test2",100);
    three.show();


    return 0;
}