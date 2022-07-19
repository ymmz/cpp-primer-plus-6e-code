#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "stack.h"
using namespace std;



int main()
{
    Stack s;
    double total=0;
    customer one={"test1",100};
    customer two={"test2",9};
    customer three={"test3",9.1};
    customer po;
    s.push(one);
    s.push(two);
    s.pop(po);
    total+=po.payment;
    cout<<"now total payment is "<<total<<endl;
    s.push(three);
    s.pop(po);
    total+=po.payment;
    cout<<"now total payment is "<<total<<endl;




    return 0;
}