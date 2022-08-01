#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<memory>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;
long double sum_value()
{
    return 9;
}
template<typename T,typename... Args>
long double sum_value(T value,Args... args)
{
    return ((long double)value)+sum_value(args...);
}



int main()
{
    cout<<sum_value(1.5,2,'A',3)<<endl;

    return 0;
}