#include "Account_Util.h"



void display(std::vector<Account*>&input)
{
    // the if-else made in the respective functions could have been done here as well 
    for(auto acc:input)
    {
        if(acc->display())
        {
            std::cout<<"success";
        }
        else
        {
            std::cout<<"fail";
        }
    }
}
        
void withdraw(std::vector<Account*>&input, double amt)
{
    for(auto acc : input)
    {
        if(acc->withdraw(amt))
        {
            std::cout<<"success";
        }
        else{
            std::cout<<"fail";
        }
    }
}
void deposit(std::vector<Account*>&input , double amt)
{
    
    for(auto acc : input)
    {
        if(acc->deposit(amt))
        {
            std::cout<<"success";
        }
        else{
            std::cout<<"fail";
        }
    }
}
