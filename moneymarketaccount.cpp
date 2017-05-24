
#include <iostream>

#include "moneymarketaccount.h"



int MoneyMarketAccount::withdraw(double amount)
{
    cout<<"请输入取款金额:"<<endl;
    cin>>amount;
    if(amount<=banlance)
    {
        if(t<=2)
        {   
        banlance-=amount;
        t++;
        }
        else
        {
          handcharge=amount*1.5;
          banlance-=(amount+h);
          cout<<handcharge<<"手续费合计为:"<<endl;
        }
        cout<<"允许取款!"<<end;
        return 1;
    }
    else
    {
       cout<<"余额不足，不允许取款!"<<endl;
       return 0;
    }
}
