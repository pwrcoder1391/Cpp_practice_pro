#include<iostream>

/*
What we are doing here ?

We are making a class where we have 

Private:- 2 integers --> p & k
Public:- 1 function which is taking these p & k as they are initialized and they are multiplied and returned 

We are using a copy constructor and a paramatrized constructor for these
*/

using namespace std;
class Baka
{
    private:
    int p;
    int k;
    public:
    int multiply() // can't use the class member as argument to pass 
    {
        int return_value;
        return_value  = p*k ; 
        return return_value ;
    }

Baka(int a , int b); //parametrized constructor decleration 
Baka(const Baka& copy);
~Baka()
{
    // destructor
}

};

// copy constructor 

Baka::Baka(const Baka& copy)
{
    p = copy.p;
    k = copy.k;
}

// parametrized constructor definition

// Baka::Baka(int a , int b)
// :  k(a) , p(b)
// {

// }


// ALTERANTIVE - //parametrized constructor 

Baka::Baka(int a , int b)
{
    p = a;
    k = b;
}

int main()

{
    Baka c(5,10); // initializing an object of class Baka with initialization using parametrized constructor

    cout<<"multiplication of 5 and 10 are " << "  c"<<c.multiply()<<endl;

    Baka z(c); // initializing the object "z" with previously initialized object "c" 

    cout<<"again multiplication of 5 and 10 are " << "  z"<<z.multiply()<<endl;


    return 0 ;


}