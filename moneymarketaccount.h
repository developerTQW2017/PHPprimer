#ifndef MONEYMARKETACCOUNT_H
#define MONEYMARKETACCOUNT_H

#include <iostream>
using namespace std;

class MoneyMarketAccount:public BankAccount
{
public:
    int time;
    double handcharge;
MoneyMarketAccount(string n,double b):BankAccount(n,b)
{
    double handcharge = h;
    time = 0;
}
virtual int withdraw(double amount);
};





#endif // MONEYMARKETACCOUNT_H
