#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <array>
using namespace std;



int main()
{
    array<double,3> grade;
    double sum=0;
    cout<<"Enter three times grades:"<<endl;
    cout<<"First: ";
    cin>>grade[0];
    sum+=grade[0];
    cout<<"Second: ";
    cin>>grade[1];
    sum+=grade[1];
    cout<<"Third: ";
    cin>>grade[2];
    sum+=grade[2];
    cout<<"acerage grade of three is "<<sum/3<<endl;


    return 0;
}