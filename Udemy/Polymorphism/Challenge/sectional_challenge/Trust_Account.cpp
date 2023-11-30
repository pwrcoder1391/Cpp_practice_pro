#include "Trust_Account.h"
static double prev_tran = 0;

bool Trust::withdraw(int amt)
{
    if (amt <= 0)
    {
        std::cout<<"broke bitch"<<std::endl;
        return 0;
    }
    else if(prev_tran<=max_withdrawl)
    {
        amount-=amt;
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        prev_tran += prev_tran;
        return 1;
    }
    else if (prev_tran>=threshold)
    {
        std::cout<<"limit reached \t"<<std::endl;
        return 0;
    }
    else
    {
        amount-=amt+(max_withdrawl_per*amt/100); //penalty
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        return 1;
    }
    
} 


bool Trust::deposit(int amt)
{
    if (amt < 0)
    {
        std::cout<<"calc error"<<std::endl;
        return 0;
    }
    else 
    {
        amount+=amt+bonus;
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        return 1;
    }
}

bool Trust::display()
{
    if (amount < 0)
    {
        std::cout<<"invalid acc value"<<std::endl;
        return 0;
    }
    else 
    {
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        return 1;
    }
}


void Trust::print(std::ostream &os)
{
    std::cout<<"current account contains = \t"<<amount<<std::endl;
}