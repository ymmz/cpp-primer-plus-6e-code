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

template<typename T>
T average_list(initializer_list<T> arr)
{
    T sum=0;
    int n=arr.size();
    if(n==0)
    {
        return 0;
    }
    for(auto c:arr)
    {
        sum+=(T)c;
    }
    return sum/n;
}

int main()
{
    auto q=average_list({15.4,10.7,9.0});
    cout<<q<<endl;
    cout<<average_list({20,30,19,17,45,38})<<endl;
    auto ad=average_list<double>({'A',70,65.33});
    cout<<ad<<endl;


    return 0;
}