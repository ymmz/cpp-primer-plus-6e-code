#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;


struct Car
{
    string name;
    int year;
};
int main()
{
    int num;
    cout<<"How many cars do you wish to catalog? ";
    cin>>num;
    Car *cars=new Car[num];
    for(int i=0;i<num;i++)
    {
        cout<<"car #"<<i<<":"<<endl;
        cout<<"Please enter the make: ";
        cin.get();
        getline(cin,cars[i].name);
        cout<<"Please enter the year made: ";
        cin>>cars[i].year;
    }
    cout<<"Here is your collection:"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<cars[i].year<<" "<<cars[i].name<<endl;
    }

    return 0;
}