#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include "Sale.h"

using namespace std;



int main()
{
    double arr[6]={1.0,2.3,7.1,9.9,12.4,2.1};
    cout<<"init without interact:"<<endl;
    SALES::Sales one(arr,6);
    one.showSales();
    cout<<"init with interact:"<<endl;
    SALES::Sales two;
    two.setSales();
    two.showSales();


    return 0;
}