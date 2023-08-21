#include<iostream>

using namespace std;

class show_work
{
    private:

    int *data;

    public:

    /*we'll write a parametrized constructor , a copy constructor and a destructor 
    
    + a function which will show the value pointed by data*/

    show_work(int a)
    {
        *data = a;
        cout<<"parametrized constructor called"<<endl;
    }

    show_work(const show_work&source) // deep copy
    {
        // the difference 

        data = new int;
        *data = *source.data;
        cout<<"copy constructor called"<<endl;
    }

    // destructor 

    ~show_work()
    {
        delete data;
        cout<<"desctructor called"<<endl;
    }

    void show_func()
    {
        cout<<(*data)<<endl;
    }


};


// normal function to take the class object and show its content

void show_object(show_work x)
{
    x.show_func();
}


int main()
{
    show_work z(55); 

    show_object(z);

    return 0;
}

/*
OUTPUT - 
parametrized constructor called
copy constructor called
55
desctructor called
desctructor called


*/