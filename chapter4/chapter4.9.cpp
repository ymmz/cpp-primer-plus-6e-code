#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;
struct CandyBar
{
    string name;
    double weight;
    int calorie;
};


int main()
{
    CandyBar *cans=new CandyBar[3];
    for(int i=0;i<3;i++)
    {
        cans[i].name="test"+to_string(i);
        cans[i].weight=i+1;
        cans[i].calorie=i+1;
        cout<<"snack name: "<<cans[i].name<<", weight: "<<cans[i].weight<<", calorie: "<<cans[i].calorie<<endl;
    }


    return 0;
}