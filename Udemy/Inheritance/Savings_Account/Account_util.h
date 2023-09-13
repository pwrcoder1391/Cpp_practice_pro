/*
This is a util file , where the vector thingies of the class created will be there


BELOW FUNCTIONS WILL ----- DO BUNCH OPERATION ----- that is it'll deposit the value in bunch rather than selcted/single acount

That is why vector operations 
*/

#ifndef _ACC_UTIL_H
#define _ACC_UTIL_H

#include<iostream>
#include"Accounts.h"
#include"Savings_Account.h"
#include<vector>

/*so apart from the functions we have wrote in the "Account.h" we have these functions , 
which will be expanded in the Account_util.cpp*/  

void Deposit(vector<Account>&input_Account , double input_value);
void Withdraw(vector<Account>&input_Account , double input_value);
void Display(vector<Account>&input_Account);


// similarly for Savings Account -- we are overloading here

void Deposit(vector<Savings_Account>&input_Account , double input_value);
void Withdraw(vector<Savings_Account>&input_Account , double input_value);
void Display(vector<Savings_Account>&input_Account);

#endif