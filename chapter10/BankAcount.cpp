#include "BankAcount.h"
#include <iostream>
#include<cstring>

using namespace std;

BankAcount::BankAcount()
{
    strcpy(name,"empty init");
    strcpy(account,"000000");
    balance=0;
}
BankAcount::BankAcount(const char *client,const char *num,double bal)
{
    strcpy(name,client);
    strcpy(account,num);
    balance=bal;
}
void BankAcount::show() const
{

    cout<<"info:"<<endl
        <<"name: "<<name<<endl
        <<"account: "<<account<<endl
        <<"balance: "<<balance<<endl;
}
void BankAcount::deposit(double cash)
{
    balance+=cash;
    cout<<"store "<<cash
        <<" now is "<<balance<<endl;
}
void BankAcount::withdraw(double cash)
{
    balance-=cash;
    cout<<"get "<<cash
        <<" now is "<<balance<<endl;
}
BankAcount::~BankAcount()
{

}