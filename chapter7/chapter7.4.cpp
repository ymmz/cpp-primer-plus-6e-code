#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices, unique;
    cout << "Enter the total number of choices on the game card and "
            "the number of picks allowed for field number and total number of choices for unique number:\n";
    while ((cin >> total >> choices >> unique) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total,choices)*probability(unique,1);     
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}
