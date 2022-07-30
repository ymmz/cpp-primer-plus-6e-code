#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<string>
#include<memory>
#include<cstdlib>
#include<queue>
#include<stack>
#include<map>
#include<map>

using namespace std;


vector<int> Lotto(int m,int n);
int main()
{
    vector<int> winners;
    winners=Lotto(51,6);
    cout<<"win: ";
    for(int i=0;i<winners.size();i++)
    {
        cout<<winners[i]<<' ';
    }
    cout<<endl;


    return 0;
}

vector<int> Lotto(int m,int n)
{
    vector<int> res(n);
    vector<int> data(m);
    for(int i=0;i<m;i++)
    {
        data[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        random_shuffle(data.begin(),data.end());
        res[i]=data[0];
    }
    sort(res.begin(),res.end());
    return res;
}