#ifndef __TRU_ACC__
#define __TRU_ACC__

#include "Savings_Account.h"
#include<iostream>


class Trust:public Savings
{   private:
        /*
        Trust -
            name
            balance 
            bonus amount 
            threshold 
            max withdrawl
            max withdrawl percentage 
        */
       double threshold = 5000;
       double max_withdrawl = 1000;
       double max_withdrawl_per = 0.5;
    protected:
        double bonus;
    int amount;
    public:
        Trust(double amount, std::string name, double int_rate , double bonus_in):Savings(amount , name , int_rate),bonus{bonus_in}
        {

        }
        virtual bool withdraw(int amt) override;
        virtual bool deposit(int amt) override;
        virtual bool display() override;
        virtual void print(std::ostream &os) override;
        ~Trust(){}
};


#endif