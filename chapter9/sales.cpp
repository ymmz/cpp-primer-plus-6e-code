#include "sales.h"
using namespace std;

namespace SALES
{
    void setSales(Sales &s,const double ar[],int n)
    {
        cout<<"set sales for provide "<<n<<" info"<<endl;
        for(int i=0;i<QUARTERS;i++)
        {
            s.sales[i]=0;
        }
        s.average=0;
        s.max=0;
        s.min=0;
        if(n>QUARTERS)
        {
            n=QUARTERS;
        }
        double sum=0;
        if(n>0)
        {
            s.max=ar[0];
            s.min=ar[0];
        }
        for(int i=0;i<n;i++)
        {
            s.sales[i]=ar[i];
            sum+=ar[i];
            if(ar[i]>s.max)
            {
                s.max=ar[i];
            }
            if(ar[i]<s.min)
            {
                s.min=ar[i];
            }
        }
        if(n>0)
        {
            s.average=sum/n;
        }
        

    }
    void setSales(Sales &s)
    {
        cout<<"set sale for input 4 info"<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<"enter sale for "<<i+1<<"th: ";
            cin>>s.sales[i];
        }
        double sum=0;
        s.max=s.sales[0];
        s.min=s.sales[0];
        for(int i=0;i<QUARTERS;i++)
        {
            sum+=s.sales[i];
            if(s.sales[i]>s.max)
            {
                s.max=s.sales[i];
            }
            if(s.sales[i]<s.min)
            {
                s.min=s.sales[i];
            }
        }
        s.average=sum/QUARTERS;


    }
    void showSales(const Sales &s)
    {
        cout<<"s.sales: ";
        for(int i=0;i<QUARTERS;i++)
        {
            cout<<s.sales[i]<<' ';
        }
        cout<<endl;
        cout<<"s.average: "<<s.average<<endl
            <<"s.max: "<<s.max<<endl
            <<"s.min: "<<s.min<<endl;
    }
}