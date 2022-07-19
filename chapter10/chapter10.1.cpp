#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "BankAcount.h"
using namespace std;



int main()
{
    BankAcount ac("test1","1001",100);
    ac.show();
    ac.deposit(10);
    ac.withdraw(50);


    return 0;
}