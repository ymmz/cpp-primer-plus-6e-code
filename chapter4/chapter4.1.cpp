#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include<string>
using namespace std;



int main()
{
    string first,last;
    string grade;
    int age;
    cout<<"What is your first name? ";
    getline(cin,first);
    cout<<"Wjat is your last name? ";
    getline(cin,last);
    cout<<"What letter grade do you deserve? ";
    getline(cin,grade);
    cout<<"What is your age? ";
    cin>>age;
    cout<<"Name: "<<last<<", "<<first<<endl;
    cout<<"Grade: ";
    if(grade[0]=='A')
    {
        cout<<"B";
    }
    else if(grade[0]=='B')
    {
        cout<<"C";
    }
    else
    {
        cout<<"D";
    }
    cout<<endl;
    cout<<"Age: "<<age<<endl;


    return 0;
}