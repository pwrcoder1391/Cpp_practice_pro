#include<iostream>
#include "account_util.h"
#include "Accounts.h" 
#include "Savings_Account.h"
#include<string>


int main()
{
    
    vector<Account> Accounts_vec;
    // Account A1{"Praveen",2000};
    // Account A2{"Kiran"};

    // so we are creating the vector of classes -- here to create an account we have to just mention the class type and then mention the members 

    // no need to give object name 


    Accounts_vec.push_back(Account {"Praveen"});
    Accounts_vec.push_back(Account {"Ankur",500});
    Accounts_vec.push_back(Account {"Ashu" , 6000});
    Accounts_vec.push_back(Account {"Pronnoy" , 2000000});


    Deposit(Accounts_vec, 5);

    Display(Accounts_vec);


    return 0;



}
