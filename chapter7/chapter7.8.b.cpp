#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;


const int Seasons = 4;
const char *Snames[4] ={"Spring", "Summer", "Fall", "Winter"};
struct node
{
    double expense[Seasons];
};

void fill(node *pa);
void show(node da);
int main()
{
    node expenses;
    fill(&expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(node *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->expense[i];
    }
}

void show(node da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da.expense[i]<< '\n';
        total += da.expense[i];
    }
    std::cout << "Total: $" << total << '\n';
}
