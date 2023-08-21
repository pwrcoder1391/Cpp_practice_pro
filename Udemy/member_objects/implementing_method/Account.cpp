#include<iostream>
#include "account.h"

void account::set_name(std::string n)
{
	name = n;

}


std::string account::get_name()
{
	return name ;
}


bool account::deposit(double amount)
{
	balance += amount;
	return true;
	
}

bool account::withdraw(double amount)
{
	if(balance-amount > 0)
	{ 
		balance -= amount;
		return true;
	}
	else
	{
		return false;
	}

	
}