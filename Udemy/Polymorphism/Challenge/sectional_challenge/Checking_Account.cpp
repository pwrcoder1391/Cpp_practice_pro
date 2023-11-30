#include "Checking_Account.h"

bool Checking::withdraw(int amt)
{
    if (amt <= 0)
    {
        std::cout<<"broke bitch"<<std::endl;
        return 0;
    }
    else 
    {
        amount-=(amt+check_fee);
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        return 1;
    }
    
} 


bool Checking::deposit(int amt)
{
    if (amt < 0)
    {
        std::cout<<"calc error"<<std::endl;
        return 0;
    }
    else 
    {
        amount+=amt;
        std::cout<<"current account contains = \t"<<amount<<std::endl;
        return 1;
    }
}

bool Checking::display()
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


void Checking::print(std::ostream &os)
{
    std::cout<<"current account contains = \t"<<amount<<std::endl;
}