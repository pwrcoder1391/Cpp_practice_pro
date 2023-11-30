#ifndef __SAV_ACC__
#define __SAV_ACC__

#include "Account.h"
#include<iostream>


class Savings:public Account
{
    private:
        double def_inter_rate = 0.5;  
    protected:
        double int_rate;

    public:
        Savings(double amount, std::string name, double int_rate):Account(amount,name),int_rate{def_inter_rate}{}
        virtual bool withdraw(int amt) override;
        virtual bool deposit(int amt) override;
        virtual bool display() override;
        virtual void print(std::ostream &os) override;
        ~Savings(){}
};


#endif