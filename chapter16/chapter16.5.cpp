
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<memory>
#include<queue>
#include<stack>
#include<map>
#include<map>
using namespace std;
template<typename T>
int reduce(T ar[],int n)
{
    sort(ar,ar+n);
    T *end=unique(ar,ar+n);
    return end-ar;
}

int main()
{
    long ar[5]={1,2,3,1,3};
    cout<<"left is "<<reduce(ar,5)<<endl;
    string arr[5]={"test","a","asdf","test","a"};
    cout<<"left is "<<reduce(arr,5)<<endl;

    return 0;
}