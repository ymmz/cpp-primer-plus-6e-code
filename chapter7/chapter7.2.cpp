#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

void input_score(double score[],int n);
void output_score(double score[],int n);
void cal(double score[],int n);

int main()
{
    int n;
    double score[10];
    cout<<"Enter the number of score(n<=10): ";
    cin>>n;
    input_score(score,n);
    output_score(score,n);
    cal(score,n);


    return 0;
}

void input_score(double score[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"th score: ";
        cin>>score[i];
    }
}
void output_score(double score[],int n)
{
    cout<<"all score is: ";
    for(int i=0;i<n;i++)
    {
        cout<<score[i]<<" ";
    }
    cout<<endl;
}
void cal(double score[],int n)
{
    double res=0;
    for(int i=0;i<n;i++)
    {
        res+=score[i];
    }
    res/=n;
    cout<<"The average score is: "<<res<<endl;
}