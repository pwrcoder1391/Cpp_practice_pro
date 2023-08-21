#include<iostream>
#include<vector>
#include<string>

using namespace std;

class base{

private:
    string name;
    int amount;
    

public:
    void open_account(string name,int amount) // dont want to return anything , hence void
    {
        this->name = name;
        this->amount = amount;
    }

    base(string name_in , int amount_in) //parametric constructor
    :name(name_in),amount(amount_in)
    {
        // we need parametric constructor , cause 
    }

    //we can write a copy constructor which copies the class object and cout-->"account transferred" and delete the previous account (if we are using pointer)

    friend void show_account_details (base& copy_obj) ; // no bracket , no reference of base class (only in argument)

};


void show_account_details(base& copy_obj)
{
    cout<<"account owner"<< "" <<copy_obj.name << endl; // will show name --> private object
    cout<<"account amount"<<copy_obj.amount<<endl; // will show amount --> private object
}

int main()
{
    base* enter_val= new base("Pronnoy",100000);

    show_account_details(*enter_val); // reference is just an alias which points at same memory location 

    /* By declaring reference to a datatype , we say we can pass an object of same data type AND it'll refer to same memory location and modify same value */

    return 0;

}