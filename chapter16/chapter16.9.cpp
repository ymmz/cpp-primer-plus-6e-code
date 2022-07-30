#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<memory>
#include<queue>
#include<stack>
#include<cstdlib>
#include<map>
#include<list>
#include<set>
#include<ctime>

using namespace std;

const int MAX=10000000;

int main()
{
    srand(std::time(0)); 
    vector<int> v0,v1;
    list<int> l;
    for(int i=0;i<MAX;i++)
    {
        v0.push_back(rand()%MAX+1);
        v1.push_back(v0[i]);
        l.push_back(v0[i]);
    }
    clock_t start,end;
    start=clock();
    sort(v1.begin(),v1.end());
    end=clock();
    cout<<"sort for vector is : "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
    start=clock();
    l.sort();
    end=clock();
    cout<<"sort for list is : "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
    l=list<int>(v0.begin(),v0.end());
    start=clock();
    v1=vector<int>(l.begin(),l.end());
    sort(v1.begin(),v1.end());
    l=list<int>(v1.begin(),v1.end());
    end=clock();
    cout<<"sort for trans is : "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;



    return 0;
}