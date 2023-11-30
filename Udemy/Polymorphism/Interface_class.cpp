#include<iostream>

using namespace std;

/*
Main aim is to create a class which contains << operator overloading 


*/

class Account{
/* this is the interface class*/

friend ostream &operator<<(ostream &lhs , Account &rhs);

public:
    virtual void withdraw() = 0;
    ~Account(){}
};

ostream &operator<<(ostream &lhs , Account &rhs)
{
    lhs<<"print this";
    return lhs;
}


/* friend classes are not inherited , member classes are inherited*/

class Savings:public Account
{
friend ostream &operator<<(ostream &lhs , Savings &rhs);

public:
    virtual void withdraw() 
    {
        cout<<"withdraw from Savings \n";
    }
    ~Savings(){}
};

ostream &operator<<(ostream &lhs , Savings &rhs)
{
    lhs<<"from savings account \n";
    return lhs;
}

class Trust:public Account
{
friend ostream &operator<<(ostream &lhs , Trust &rhs);

public:
    virtual void withdraw() 
    {
        cout<<"withdraw from Savings \n";
    }
    ~Trust(){}
};
ostream &operator<<(ostream &lhs , Trust &rhs)
{
    lhs<<"from trust account \n";
    return lhs;
}


int main()
{
    Savings x;
    cout<<x;

    Account *ptr = new Savings();
    cout<<*ptr<<endl; // this wont act on polymorphism - refer interface_class_2.cpp for update

    Trust y;
    cout<<y;

    return 0 ;

}