#include<string>

#pragma once 

// we can use #ifndef here as well 

/*
	

*/



/*

set balance --> put the input value in balance 

get balance --> return the balance 

deposit --> add to the balance 

withdraw --> substract from the balance 


*/

class account {

private:
	std::string name;
	double balance; 
public:
	void set_balance(double bal)
	{
		balance = bal;
	}

	double get_balance()
	{
		return balance;
	}

	// below functions , the description will be mentioned later

	void set_name(std::string n);
	std::string get_name();

	bool deposit(double amount);

	bool withdraw(double amount);


};
