#include "Sale.h"
#include<iostream>
using namespace std;


namespace SALES
{
    Sales::Sales()
    {
        for(int i=0;i<QUARTERS;i++)
        {
            sales[i]=0;
        }
        average=0;
        max=0;
        min=0;
    }
    Sales::Sales(const double ar[],int n)
    {
        cout<<"set sales for provide "<<n<<" info"<<endl;
        for(int i=0;i<QUARTERS;i++)
        {
            sales[i]=0;
        }
        average=0;
        max=0;
        min=0;
        if(n>QUARTERS)
        {
            n=QUARTERS;
        }
        double sum=0;
        if(n>0)
        {
            max=ar[0];
            min=ar[0];
        }
        for(int i=0;i<n;i++)
        {
            sales[i]=ar[i];
            sum+=ar[i];
            if(ar[i]>max)
            {
                max=ar[i];
            }
            if(ar[i]<min)
            {
                min=ar[i];
            }
        }
        if(n>0)
        {
            average=sum/n;
        }
        

    }
    void Sales::setSales()
    {
        cout<<"set sale for input 4 info"<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<"enter sale for "<<i+1<<"th: ";
            cin>>sales[i];
        }
        double sum=0;
        max=sales[0];
        min=sales[0];
        for(int i=0;i<QUARTERS;i++)
        {
            sum+=sales[i];
            if(sales[i]>max)
            {
                max=sales[i];
            }
            if(sales[i]<min)
            {
                min=sales[i];
            }
        }
        average=sum/QUARTERS;


    }
    void Sales::showSales() const
    {
        cout<<"sales: ";
        for(int i=0;i<QUARTERS;i++)
        {
            cout<<sales[i]<<' ';
        }
        cout<<endl;
        cout<<"average: "<<average<<endl
            <<"max: "<<max<<endl
            <<"min: "<<min<<endl;
    }
}