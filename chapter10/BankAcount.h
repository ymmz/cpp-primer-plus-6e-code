#ifndef BANKACOUNT_H
#define BANKACOUNT_H

class BankAcount
{
public:
    BankAcount();
    BankAcount(const char *client,const char *num,double bal=0.0);
    ~BankAcount();
    void show() const;
    void deposit(double cash);
    void withdraw(double cash);
    
private:
    char name[40];
    char account[25];
    double balance;
};

#endif