#include<iostream>

/*

Here we will write a code which will have a pointer 

the class object can be sent to a function which will show the value pointer holds 

Inside the class there will be 

*/

using namespace std;

class shallow_copy
{
private:
int*data; // data which is pointer of int type

// we have not initialized the pointer we will do it in some other way
public:

// we are not defining the constructor outside the class scope , for sake of simplicity

shallow_copy(int x) //default constructor --> to initialize the data pointer
{
    data = new int;
    *data = x;
}

shallow_copy(const shallow_copy&copy)  // copy constructor
{
    data = copy.data;
    cout<<"copy constructor called"<<endl;
}

~shallow_copy()// destructor 
{
    delete data;
    cout<<"destructor called"<<endl;
}


void add_value(int x)
{
    *data = x;
}

int show_value()
{
    cout<<(*data)<<endl;
}


};


// now we will write a function which will display the member shallow pointer's value 

/*why we are creating this function --> so that 
1. we can display the class's member without accessing the private member and 
2 .so that once we pass the function the name of the class it just shows it 

*/ 

void show_value_func(shallow_copy& class_name) // here the shallow copy is done --> no address is taken 
{
    class_name.show_value();
}

int main()
{
    shallow_copy cp(50);
    show_value_func(cp);


    cp.add_value(600);
    shallow_copy cp2(cp);
    cp2.show_value();

    return 0 ;
}