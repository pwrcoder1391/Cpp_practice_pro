/**/


#include<iostream>
#include<string>

/* account class will have multiple hierarchy 

account --> savings , trust , current

each class will have 3 functions - 1) withdraw 2)deposit 3) display 

use polymorphism + use interface class to implement - operator overloading 

in the main try to make it in - pointer-vector function

*/


class I_Printable{
    /*Basics of operator overloading 
    the operator acts as a member function of lhs value

    here the lhs value is cout 

    << is a binary operator 
    so we need to have both lhs and rhs value 

    operator type will be lhs , which is cout
    */
    
    friend std::ostream &operator<<(std::ostream &lhs , const I_Printable &rhs);
    
    public:
        // no constructor
        virtual void print(std::ostream &os) const =0;

        /*how to use this 'print' function
        
        we need other classes to be derived of I_printable class 
        then , we'd use polymorphism concept to use -- printable function print() in that derived class 

        we are using the operator overloading to use '<<' operator inside the print() to load the members 
        into the 'os' object of ostream type

        Below is the template for it 
            class Any_Class : public I_printable{
                public:
                    // we need to override the I_printable::print()

                    virtual void print(ostream &os) override
                    {
                        os<<"hello from this class";
                    }

            };
        
        */
        virtual ~I_Printable(){};
        

};

std::ostream &operator<<(std::ostream &lhs , const I_Printable &rhs)
{
    rhs.print(lhs); // this is so that later on in the 
    return lhs; // this is basically os 
}

class Account{ // abstract class 
    protected:
        int amount;
        std::string name;
    public:
        virtual void display() = 0; // it'll link to any account based on the object
        virtual void withdraw(int val) = 0;
        virtual void deposit(int val) = 0;

};

class Savings : public Account // concrete class
{
    public:
        //display
        virtual void display() override
        {
            std::cout<<"Belongs to : \t"<<name<<"\t"<<"has this much balance  : \t"<< amount<<std::endl;
        };
        //withdrawn
        virtual void withdraw(int val) override
        {
            if(amount <= 0)
            {
                std::cout<<"No amount in this savings account \t"<<std::endl;
            }
            else 
            {
                amount-=val;
                std::cout<<"Amount withdrawn in this savings account \t"<< val <<"  Remaining amount \t" << amount <<std::endl;

            }
        }
        // deposit
        virtual void deposit(int val) override
        {
            amount+=val;
            std::cout<<"Amount deposited in this savings account \t"<< val <<"  Remaining amount \t" << amount <<std::endl;
        }


};

class Trust : public Account // concrete class
{
    public:
        //display
        virtual void display() override
        {
            std::cout<<"Belongs to : \t"<<name<<"\t"<<"has this much balance  : \t"<< amount<<std::endl;
        };
        //withdrawn
        virtual void withdraw(int val) override
        {
            if(amount <= 0)
            {
                std::cout<<"No amount in this Trust account \t"<<std::endl;
            }
            else 
            {
                amount-=val;
                std::cout<<"Amount withdrawn in this Trust account \t"<< val <<"  Remaining amount \t" << amount <<std::endl;

            }
        }
        // deposit
        virtual void deposit(int val) override
        {
            amount+=val;
            std::cout<<"Amount deposited in this savings account \t"<< val <<"  Remaining amount \t" << amount <<std::endl;
        }


};

class Current : public Account // concrete class
{
    public:
        //display
        virtual void display() override
        {
            std::cout<<"Belongs to : \t"<<name<<"\t"<<"has this much balance  : \t"<< amount<<std::endl;
        };
        //withdrawn
        virtual void withdraw(int val) override
        {
            if(amount <= 0)
            {
                std::cout<<"No amount in this Current account \t"<<std::endl;
            }
            else 
            {
                amount-=val;
                std::cout<<"Amount withdrawn in this Current account \t"<< val <<"  Remaining amount \t" << amount <<std::endl;

            }
        }
        // deposit
        virtual void deposit(int val) override
        {
            amount+=val;
            std::cout<<"Amount deposited in this Current account \t"<< val <<"  Remaining amount \t" << amount <<std::endl;
        }


};


int main()
{




    return 0;
}