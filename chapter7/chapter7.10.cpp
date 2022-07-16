#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

double add(double x,double y);
double del(double x,double y);
double mul(double x,double y);
double calculate(double x,double y,double (*f)(double x,double y));

int main()
{
    char ch;
    int flag=1;
    while(flag)
    {
        cout<<"Please entern your choice:"<<endl;
        cout<<"a.add b.del c.mul q.quit"<<endl;
        ch=cin.get();
        cin.get();
        
        double x,y;
        switch(ch)
        {
            case 'a':
                cout<<"Enter two double number: ";
                cin>>x>>y;
                cin.get();
                cout<<"result is: "<<calculate(x,y,add)<<endl;
                break;
            case 'b':
                cout<<"Enter two double number: ";
                cin>>x>>y;
                cin.get();
                cout<<"result is: "<<calculate(x,y,del)<<endl;
                break;
            case 'c':
                cout<<"Enter two double number: ";
                cin>>x>>y;
                cin.get();
                cout<<"result is: "<<calculate(x,y,mul)<<endl;
                break;
            case 'q':
                flag=0;
                break;
            default:
                cout<<"Please enter a,b,c,q:"<<endl;
                break;
        }

    }
    cout<<"calculate finish!"<<endl;



    return 0;
}
double add(double x,double y)
{
    return x+y;
}
double del(double x,double y)
{
    return x-y;
}
double mul(double x,double y)
{
    return x*y;
}
double calculate(double x,double y,double (*f)(double x,double y))
{
    return f(x,y);
}