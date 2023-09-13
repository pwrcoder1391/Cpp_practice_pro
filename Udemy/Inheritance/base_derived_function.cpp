#include<iostream>


using namespace std;

class Base
{
    friend ostream &operator<<(ostream &os , Base &rhs); // return type will be ostream (will be returning os)
    protected:
        int Balance;

    public:
        /*
        default 
        parametrized 
        function - 
            deposit
            withdraw
        */

       Base(int input)
        :Balance{input}
       {
         // parametrized
       }
       
       Base()
        :Base{0}
       {
            // default
       }

       void deposit(int value)
       {
        cout<<"enter the balance"<<endl;
        Balance=+value;
       }

       void withdraw(int value)
       {
        Balance =- value ; 
        cout<< "Balance is now :" << "\t " <<Balance<<endl;
       }


};

ostream &operator<<(ostream &os , Base &rhs)
{
    os<<"The balance is "<< "\t" <<rhs.Balance;
    return os;
}


class Derived : public Base
{
    friend ostream &operator<<(ostream &os , Derived &rhs); // return type will be ostream (will be returning os)
    protected:
        int Balance;

    public:
        /*
        default 
        parametrized 
        function - 
            deposit
            withdraw
        */

       Derived(int input)
        :Base{input},Balance{input}
       {
         // parametrized
       }
       
       Derived()
        :Base{},Balance{0}
       {
            // default
       }

       void deposit(int value , float interest)
       {
        cout<<"enter the balance"<<endl;
        interest = value*(interest/100);
        Base::deposit(value);
       }

       void withdraw(int value)
       {
        Balance =- value ; 
        cout<< "Balance is now :" << "\t " <<Balance<<endl;
       }


};

ostream &operator<<(ostream &os , Derived &rhs)
{
    os<<"The balance is "<< "\t" <<rhs.Balance;
    return os;
}