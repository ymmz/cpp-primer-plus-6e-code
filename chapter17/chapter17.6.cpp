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
#include<fstream>
#include"Emp.h"
using namespace std;


const int MAX=100;



int load_data(ifstream &in,abstr_emp *arr[]);
void save_data(ofstream &out,abstr_emp *arr[],int n);
int main()
{
    abstr_emp *arr[MAX];
    int idx=0;
    ifstream in("emp.dat");
    if(!in.is_open())
    {
        cout<<"it's the first time to run!"<<endl;
    }
    else
    {
        idx=load_data(in,arr);
    }
    int flag=1;
    while(flag)
    {
        cout<<"a)employee\tb)manager"<<endl
            <<"c)fink\td)highfink"<<endl
            <<"e)show\tq)quit"<<endl;
        cout<<"please select what to do: ";
        char ch;
        cin.get(ch);
        cin.get();
        if(ch!='q'&&idx>=MAX)
        {
            cout<<"array is full! quit!!"<<endl;
            break;
        }
        switch(ch)
        {
            case 'a':
                arr[idx]=new employee();
                arr[idx]->SetAll();
                idx++;
                break;
            case 'b':
                arr[idx]=new manager();
                arr[idx]->SetAll();
                idx++;
                break;
            case 'c':
                arr[idx]=new fink();
                arr[idx]->SetAll();
                idx++;
                break;
            case 'd':
                arr[idx]=new highfink();
                arr[idx]->SetAll();
                idx++;
                break;
            case 'e':
                for(int i=0;i<idx;i++)
                {
                    cout<<i+1<<":"<<endl;
                    arr[i]->ShowAll();
                }
                break;
            case 'q':
                flag=0;
                break;
            default:
                cout<<"please enter valid char!"<<endl;
                break;
        }
    }
    ofstream out("emp.dat");
    save_data(out,arr,idx);

    return 0;
}
int load_data(ifstream &in,abstr_emp *arr[])
{
    char ch;
    int idx=0;
    while(in.get(ch))
    {
        in.get();
        switch(ch)
        {
            case 'a':
                arr[idx]=new employee();
                arr[idx]->GetAll(in);
                idx++;
                break;
            case 'b':
                arr[idx]=new manager();
                arr[idx]->GetAll(in);
                idx++;
                break;
            case 'c':
                arr[idx]=new fink();
                arr[idx]->GetAll(in);
                idx++;
                break;
            case 'd':
                arr[idx]=new highfink();
                arr[idx]->GetAll(in);
                idx++;
                break;
            default:
                cout<<"data error"<<endl;
                break;
        }
    }
    return idx;
}
void save_data(ofstream &out,abstr_emp *arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]->WriteAll(out);
    }
}