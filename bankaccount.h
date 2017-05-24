#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<string>
using namespace std;
class BankAccount
{
protected:
    string name;
    double banlance;
public:
    BankAccount(string n="",double b=0.0);
    void deposit(double amount);
    virtual int withdraw(double amount);
    string getname();
    double getbanlance();
};



#endif // BANKACCOUNT_H
