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


// this function takes in the value of object and displays it 
        void display_1(shallow &source)
        {
            int* x = source.data;
            cout<<*x<<endl;
            
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

    //shallow obj2{obj1}; // so only when this happens the copy constructor is called 

    /*
    shallow obj2{22};
    obj2 = obj1 ; 

    here this wont work , to invoke copy constructor , will only work if we initialize with it as shown above 

    */
    
    cout<<obj1.get_data();

    shallow obj2{5};
    obj2.display_1(obj1);

    return 0 ;
}