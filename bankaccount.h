#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
using namespace std;

class BankAccount
{
public:
    BankAccount(string name,double balance);
    void deposit(double amount);    //���
    virtual int withdraw(double amount);   //ȡ��
    string getName();     //��ȡ�û���
    double getBalance();      //��ȡ�������
protected:
    string name;    //�˻�����������
    double balance;    //�˻����

};

#endif // BANKACCOUNT_H
