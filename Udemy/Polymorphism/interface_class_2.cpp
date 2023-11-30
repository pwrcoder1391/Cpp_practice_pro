#include<iostream>

using namespace std;

/*
Main aim is to create a class which contains << operator overloading 


*/

class I_Account{ 
/* this is the interface class*/

friend ostream &operator<<(ostream &lhs , I_Account &rhs);

public:
    virtual void withdraw() = 0;
    virtual void print(ostream &os) = 0;
    ~I_Account(){}
};

ostream &operator<<(ostream &lhs , I_Account &rhs)
{
    //lhs<<"print this";

    rhs.print(lhs); // passing the ostream --> stream is passed - to this function 
    return lhs;
}


/* friend classes are not inherited , member classes are inherited*/

class Savings:public I_Account
{ // all the friend classes are removed --> cause inheritance is provided
    public:
        virtual void withdraw() 
        {
            cout<<"withdraw from Savings \n";
        }
        virtual void print(ostream &os) override{
            os<<"this is savings \n";
        }
        ~Savings(){}
};

class Trust:public I_Account
{
    public:
        virtual void withdraw() 
        {
            cout<<"withdraw from Savings \n";
        }
        virtual void print(ostream &os) override{
            os<<"this is Trust \n";
        }
        ~Trust(){}
};

// we can also write a function which when passed any class object will print something 

void Print_object(I_Account &obj)
{
    cout<<obj;
}


int main()
{
    Savings x;
    cout<<x;

    I_Account *ptr = new Savings();
    cout<<*ptr<<endl; // this wont act on polymorphism

    Trust y;
    cout<<y;

    Print_object(y); // will print the object it is passed 

    return 0 ;

}