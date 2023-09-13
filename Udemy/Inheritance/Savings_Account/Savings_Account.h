#ifndef _SAV_ACC_H
#define _SAV_ACC_H


#include<iostream>
#include<string>
#include "Accounts.h"
using namespace std ;

class Savings_Account : public Account
{
    friend ostream &operator <<(ostream &os , Savings_Account &rhs) ; 
    /*
    
    Same classes will be here , but extra variable which will have interest in it as well
    
    */
   private:
        static constexpr char* name_init = "NA"; // why are we using the constexpr - cause this will compile the value in the compile time
        static constexpr double balance_init = 0.0;
        static constexpr double interest_init = 0.0;
   protected:
        double interest; // this will have interest , since it'll be in decimal , hence we are using double
   public:
        // Savings_Account(); //default constructor 
        Savings_Account(string input_name = name_init, double input_balance = balance_init, double input_interest = interest_init); // Parametric constructor
        // deposit and withdraw
        bool Deposit(double input_value);    
};  

#endif
