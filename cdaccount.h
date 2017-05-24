#ifndef CDACCOUNT_H
#define CDACCOUNT_H


class CDAccount:public BankAccount
{
    double interest_rate;
public:
    CDAccount(string n,double b,double r):BankAccount(n,b)
    {
        interest_rate = r;
     }
    void deposit(double amount);
    virtual int withdraw(double amount);
};


#endif // CDACCOUNT_H
