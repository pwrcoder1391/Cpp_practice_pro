#ifndef _ACC_
#define _ACC_
#include<iostream>
#include<string>

class I_Printable{
    friend std::ostream &operator<<(std::ostream &os , I_Printable& obj);
    private:
        const double init_amount = 0.0;
        const char*init_name = "NaN";    
    protected:
        double amount;
        std::string name;
    public:
        I_Printable(double amount, std::string name):amount{init_amount},name{init_name}{}
        virtual bool withdraw(int amt) = 0 ;
        virtual bool deposit(int amt) = 0 ;
        virtual bool display() =0;
        virtual void print(std::ostream &os) =0;
        ~I_Printable(){}
};



class Account:public I_Printable{

    private:
        const double init_amount = 0.0;
        const char*init_name = "NaN";    
    protected:
        double amount;
        std::string name;
    public:
        Account(double amount, std::string name):I_Printable(amount,name){}
        virtual bool withdraw(int amt) override = 0 ;
        virtual bool deposit(int amt) override = 0 ;
        virtual bool display() override =0;
        virtual void print(std::ostream &os) override;
        ~Account(){}
};

#endif
