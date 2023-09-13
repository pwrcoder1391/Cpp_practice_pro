#ifndef _ACC_H
#define _ACC_H

#include<iostream>
#include<string>

using namespace std ;

class Account
{
    /*
        We need a function -
         - for os << function (friend function)   // alt - we can also use function to display rather than doing this
        
        - Constructor
        - function to - deposit , withdraw (focus on edge cases)
        - 
    */ 

    friend ostream &operator<<(ostream &os , Account &rhs);
    private:
        static constexpr char* name_init = "NA"; // initializer
        static constexpr double balance_init = 0.0 ; // initializer 

        /*Why are these mentioned here ? - cause the access was needed to only --> 

            this class --> Not the friend class , hence these are mentioned here only 
            but why static ?? not sure
        */

    protected:
        string name; // actual name to be used 
        double balance; // actual balance to be used 

        /*this is added in the protected cause the derived function also needs its access*/

    public:
        //Account();
        Account(string input_name = name_init , double input_balance = balance_init); // constructor --> this will act as opening of an account
        
        bool Deposit (double input_val);
        /*
         we dont need name , cause we are accessing this function using a object , 
         1 object will contain 1 account
        */
        bool Withdraw (double input_balance); // same reason as above

};

#endif
