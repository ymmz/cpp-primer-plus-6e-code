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

int reduce(long ar[],int n);

int main()
{
    long ar[5]={1,2,3,1,3};
    cout<<"left is "<<reduce(ar,5)<<endl;

    return 0;
}
int reduce(long ar[],int n)
{
    sort(ar,ar+n);
    long *end=unique(ar,ar+n);
    return end-ar;
}