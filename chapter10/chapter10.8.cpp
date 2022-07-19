#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include"List.h"
using namespace std;



int main()
{
    List one;
    while(!one.isFull())
    {
        one.add(10);
    }
    one.show();
    one.visit(del);
    one.show();
    one.visit(mul);
    one.show();



    return 0;
}