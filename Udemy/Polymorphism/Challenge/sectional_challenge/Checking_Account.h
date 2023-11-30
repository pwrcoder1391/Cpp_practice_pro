#ifndef __CHE_ACC__
#define __CHE_ACC__

#include "Savings_Account.h"
#include "Account.h"
#include<iostream>
#include<string>

class Checking:public Account
{
    private:
        double check_fee = 1.5;
    protected:
    public:
        Checking(double amount, std::string name):Account(amount,name){}
        virtual bool withdraw(int amt) override;
        virtual bool deposit(int amt) override;
        virtual bool display() override;
        virtual void print(std::ostream &os) override;
        ~Checking(){}        
};

#endif