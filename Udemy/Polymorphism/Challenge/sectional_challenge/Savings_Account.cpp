#include "Savings_Account.h"

bool Savings::withdraw(int amt)
{
    if (amt <= 0)
    {
        std::cout<<"broke bitch"<<std::endl;
        return 0;
    }
    else 
    {
        amount-=amt;
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        return 1;
    }
    
} 


bool Savings::deposit(int amt)
{
    if (amt < 0)
    {
        std::cout<<"calc error"<<std::endl;
        return 0;
    }
    else 
    {
        amount+=amt;
        amount = amount+(amount*(int_rate/100));
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        return 1;
    }
}



bool Savings::display()
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


void Savings::print(std::ostream &os)
{
    std::cout<<"current account contains = \t"<<amount<<std::endl;
}