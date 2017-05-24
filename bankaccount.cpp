#include <string>
#include <iostream>

#include "bankaccount.h"

using namespace std;

BankAccount::BankAccount(string n,double b)
{
    name = n;
    banlance = b;
}

string BankAccount::getname()
{
    return name;
}

double BankAccount::getbanlance()
{
    return banlance;
}

void BankAccount::deposit(double amount)
{
    cout<<"请输入存款金额:"<<endl;
    cin>>amount;
    if(amount<0)
    {
        cout<<"您输入的存款金额错误!"<<endl;
    }
    else
    {
        banlance+=amount; 
    }
}

int BankAccount::withdraw(double amount)
{
    cout<<"请输入取款金额:"<<endl;
    cin>>amount;
    if(amount<=banlance)
    {
        if(amount<0)
        {
            cout<<"您输入的取款金额错误!"<<endl;
            return 0;
        }
        else
        {
            cout<<"允许取款!"<<endl;
            banlance-=amount;
            return 1;
        }
    }
    else
    {
        cout<<"余额不足，不允许取款!"<<endl;
        return 0;
    }


}
