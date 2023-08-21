/*

class will add a value 

function will show that value



#include<iostream>
#include<vector>
#include<string>

using namespace std;

class base{

private:
    int amount;
    string name;

public:
    void open_account(string name,int amount) // dont want to return anything , hence void
    {
        this->name = name;
        this->amount = amount;
    }

    base() //basic constructor
    :name("lnu"),amount(0)
    {

    }

    //we can write a copy constructor which copies the class object and cout-->"account transferred" and delete the previous account (if we are using pointer)

    friend class base_friend ; // no bracket , no reference of base class

};

class base_friend
{

public: // by default the members of function are private 
    void show_account_details(base& copy_obj)
    {
        cout<<"account owner"<<copy_obj.name << endl; // will show name --> private object
        cout<<"account amount"<<copy_obj.amount<<endl; // will show amount --> private object
    }

};


int main()
{
    base*obj_ptr;
    cout<<obj_ptr<<"\t"<<endl;

    // we cannot cout a class datatype --> cause cout is specifically for specific data type

    // to use cout with a class --> we need to operator overload the "<<" operator

    obj_ptr->open_account("Pronnoy",10000000); // yeah boi

    base_friend*show;
    show->show_account_details(*obj_ptr); // this is a good practice --> here we are passing &base kind of  
    return 0;

}

*/


/* Real code start from here */


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

    friend class base_friend ; // no bracket , no reference of base class

};

class base_friend
{

public: // by default the members of function are private 
    void show_account_details(base& copy_obj)
    {
        cout<<"account owner"<< "" <<copy_obj.name << endl; // will show name --> private object
        cout<<"account amount"<<copy_obj.amount<<endl; // will show amount --> private object
    }

};


int main()
{
    base* enter_val= new base("Pronnoy",100000);

    base_friend bf;

    bf.show_account_details(*enter_val); // reference is just an alias which points at same memory location 

    /* By declaring reference to a datatype , we say we can pass an object of same data type AND it'll refer to same memory location and modify same value */

    return 0;

}