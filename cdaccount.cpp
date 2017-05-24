
#include <iostream>

#include "cdaccount.h"


double CDAccount::deposit(double amount)
{
    cout<<"请输入定期存款金额:"<<endl;
    cin>>amount;
    if(amount<0)
    {
        cout<<"您输入的定期存款金额错误！"<<endl;
    }
    else
    {
        banlance+=amount;
    }
}
int CDAccount::withdraw(double amount)
{
    cout<<"请输入取款金额:"<<endl;
    cin>>amount;
   if(amount<=banlance)
    {



   else
   {
       cout<<"余额不足，不允许取款!"<<endl;
   }
    }
}
