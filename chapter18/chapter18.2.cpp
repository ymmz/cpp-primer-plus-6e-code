#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<memory>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include"Cpmv.h"
using namespace std;



int main()
{
    Cpmv one;
    Cpmv two("abc","def");
    one=two;
    one.Display();
    Cpmv three(two);
    three.Display();
    Cpmv four(move(two));
    four.Display();
    Cpmv five("qwe","opi");
    two=one+five;
    two.Display();


    return 0;
}