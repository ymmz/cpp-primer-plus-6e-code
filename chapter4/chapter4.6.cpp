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
    CandyBar nacks[3]={{"test1",1.1,1},{"test2",2.2,2},{"test3",3.3,3}};
    for(int i=0;i<3;i++)
    {
         cout<<"snack name: "<<nacks[i].name<<", weight: "<<nacks[i].weight<<", calorie: "<<nacks[i].calorie<<endl;
    }

    return 0;
}