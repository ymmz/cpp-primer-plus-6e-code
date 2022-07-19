#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "Move.h"
using namespace std;



int main()
{
    Move one;
    Move two(1,5);
    one .showMove();
    one.reset(4,2);
    Move three=two.add(one);
    three.showMove();




    return 0;
}