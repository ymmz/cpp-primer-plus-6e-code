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
    double w;
    int num;
};

int main()
{
    CandyBar snack={
        "Mocha Munch",
        2.3,
        350
    };
    cout<<"snack name: "<<snack.name<<", weight: "<<snack.w<<", calorie: "<<snack.num<<endl;
    return 0;
}