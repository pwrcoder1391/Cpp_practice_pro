#include<iostream>

using namespace std;

class shallow
{
    private:
        int *data; // integer pointer data is created , *data will be a pointer and "data" will be address

    public:
        void set_data(int d)
        {
            *data = d;
        }
        int get_data()
        {
            return *data;
        }

        //constructor 

        shallow(int d)
        {
            data = new int; // a new address is given to integer pointer type "data"
            *data = d; // the address where "data" points to stores a integer named "d" which is passed to shallow()
        }

        //copy constructor 

        shallow(shallow &source) 
        :data(source.data) // according to my assumptions , whenever a object of class "shallow" is passed to any function, it will invoke this
        {
            cout<<"copy constructor invoked"<<endl;
        }

    ~shallow()
    {
        delete data; // the value allocated to the parameter constructor is deleted here 
        cout<<"destructor called"<<endl;

    }
}; // end of class

int main()
{
    shallow obj1{100}; // this will call the default parameter constructor

    int z = obj1.get_data();

    cout<<z<<endl;

    shallow obj2{obj1}; // so only when this happens the copy constructor is called 

    /*
    shallow obj2{22};
    obj2 = obj1 ; 

    here this wont work , to invoke copy constructor , will only work if we initialize with it as shown above 

    */
    
    cout<<obj2.get_data();


    return 0 ;
}