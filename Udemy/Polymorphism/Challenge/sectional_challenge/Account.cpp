#include "Account.h"


std::ostream &operator<<(std::ostream &os , I_Printable& obj)
{
    obj.print(os);
    return os; // we are returning here for the sake of 'chaining'
}

void Account::print(std::ostream &os)
{
    std::cout<<"this is account";
}