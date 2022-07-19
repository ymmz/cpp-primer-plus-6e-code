#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "Person.h"
using namespace std;



int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy","Sam");
    one.show();
    one.FormalShow();
    cout<<endl;
    two.show();
    two.FormalShow();
    cout<<endl;
    three.show();
    three.FormalShow();


    return 0;
}