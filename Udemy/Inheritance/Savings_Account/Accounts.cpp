#include<iostream>
#include "Accounts.h"


using namespace std;

ostream &operator<<(ostream &os , Account &rhs)
{
    os<<"Account holders name:" <<  rhs.name << "Account Balance :"<< rhs.balance << endl;
    return os;
}

// Account::Account()
// {
//     name = name_init;
//     balance = balance_init; 
// }

Account::Account(string input_name , double input_balance)
: name{input_name} , balance{input_balance}
{
    // empty
}

bool Account::Deposit(double input_val)
{
    if(input_val < 0)
    {
        return false;
    }
    else 
    {
        balance += input_val;
        return true;
    }
}


bool Account::Withdraw(double input_balance)
{
     if(input_balance < 0)
    {
        return false;
    }
    else 
    {
        balance =- input_balance;
        return true;
    }
}