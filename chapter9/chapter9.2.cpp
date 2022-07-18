#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;




void strcount(string & s);

int main()
{

    string s;

    cout << "Enter a line:\n";
    while (getline(cin,s)&&s!="")
    {
        strcount(s);
        cout << "Enter next line (empty line to quit):\n";
    }
    cout << "Bye\n";
    return 0;
}

void strcount(string &s)
{
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << s <<"\" contains ";
    count=s.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
