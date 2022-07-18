#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "sales.h"

using namespace std;



int main()
{
    double arr[6]={1.0,2.3,7.1,9.9,12.4,2.1};
    SALES::Sales s1,s2;
    cout<<"init without interact:"<<endl;
    SALES::setSales(s1,arr,6);
    SALES::showSales(s1);
    cout<<"init with interact:"<<endl;
    SALES::setSales(s2);
    SALES::showSales(s2);


    return 0;
}