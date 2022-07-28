#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include"Person.h"
using namespace std;



int main()
{
    Person *arr[4];
    arr[0]=new Person("test1","test11");
    arr[0]->Show();
    arr[1]=new Gunslinger("test2","test22",100,5);
    arr[1]->Show();
    arr[2]=new PokerPlayer("test3","test33");
    arr[2]->Show();
    arr[3]=new BadDube("test4","test44",12,3);
    arr[3]->Show();


    return 0;
}
