#include<iostream>
#include "Savings_Account.h"
#include "Accounts.h"


using namespace std;
// Savings_Account::Savings_Account() //default constructor 
//     :Account() , interest{interest_init} // here 1st the account default constructor are 'invoked' and then the interest is brought in
//     {
//     }

Savings_Account::Savings_Account(string input_name , double input_balance , double input_interest)
    :Account(input_name , input_balance), interest{input_interest} // here 1st default constructor is invoked and then the interest variable which is brought in this class
    {
    }
 
bool Savings_Account::Deposit(double input_value)
    {
        if(input_value<0)
        {
            return false;
        }
        else 
        {
            input_value = input_value*(interest/100); // here the interest is added in the input value/input amount
            Account::Deposit(input_value);

            return true;
        }
    }

ostream &operator <<(ostream &os , Savings_Account &rhs)
{
    os<<"Account holders name:" <<  rhs.name << "Account Balance :"<< rhs.balance << "Savings account" << rhs.interest<<endl;
}
