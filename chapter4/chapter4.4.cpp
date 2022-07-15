#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;



int main()
{
    string first,last;
    cout<<"Enter your first name: ";
    getline(cin,first);
    cout<<"Enter your last name: ";
    getline(cin,last);
    cout<<"Here's the information in a single string: "<<last+", "+first<<endl;



    return 0;
}