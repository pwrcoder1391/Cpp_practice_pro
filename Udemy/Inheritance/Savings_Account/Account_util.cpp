#include"Account_util.h"
#include<iostream>

using namespace std;

//So here those bunch operations will happen 

void Deposit(vector<Account>&input_Account , double input_value)
{
    for(auto &in_acc:input_Account) // here the vector is used (iterator is in_acc & input_Account is the data type)
    {
        if(in_acc.Deposit(input_value)) // here the class function Deposit(value) is used
        {
            cout<< "value deposited in :" << in_acc << endl; // here the operator<< is used
        }
        else{
            cout<< "cannot deposit the value in :" << in_acc << endl;
        }
    }
}

void Withdraw(vector<Account>&input_Account , double input_value)
{
    for(auto &in_acc:input_Account) // here the vector is used (iterator is in_acc & input_Account is the data type)
    {
        if(in_acc.Withdraw(input_value)) // here the class function Deposit(value) is used
        {
            cout<< "value withdrawn in :" << in_acc << endl; // here the operator<< is used
        }
        else{
            cout<< "cannot withdraw the value in :" << in_acc << endl;
        }
    }
}


void Display(vector<Account>&input_Account)
{
    for(auto &in_acc:input_Account) // here the vector is used (iterator is in_acc & input_Account is the data type)
    {
        cout<< "The account to display is :" << in_acc << endl;
    }
}