#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;



int main()
{
    const int LEN=50;
    char first[LEN];
    char last[LEN];
    char name[LEN*2];
    cout<<"Enter your first name: ";
    cin.getline(first,LEN);
    cout<<"Enter your last name: ";
    cin.getline(last,LEN);
    int m=strlen(first);
    int n=strlen(last);
    last[n]=',';
    n++;
    last[n]=' ';
    n++;
    last[n]='\0';
    strncat(last,first,m);
    cout<<"Here's the information in a single string: "<<last<<endl;


    return 0;
}