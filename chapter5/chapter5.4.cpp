#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;



int main()
{
    double da=100;
    double cl=100;
    int years=0;
    while(cl<=da)
    {
        da+=10;
        cl*=1.05;
        years++;
    }
    cout<<"after "<<years<<" years, now Cleo is "<<cl<<" dollars and Daphne is "<<da<<" dollars"<<endl;


    return 0;
}