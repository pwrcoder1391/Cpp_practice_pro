/*
copy constructor is resource intensive 

    when we assign something --> x=30 , x{30} --> these times 30 is 1st stored in a temp variable and then in x

    so when we use copy constructor (eg) --> class class1 = class2 {initializing class1 by class2} 
    class2 is 1st assigned to a temporary memory and then to class1 

    This happens when we use Copy constructor 

When we use Move Constructor --

    We do copy similar to "Member-wise copy" i.e {data = source.data} 
    but after we do "member-wise copy" we assign the pointer/memory to a "nullptr" --> hence freeing/allocating blank memory 



*/


#include<iostream>

#include<vector>

using namespace std;

class move_copy
{

private:

    int*data;

public:

/*here we'll create 

- parametrized constructor 
- copy constructor 
- move constructor 
- destructor 
- function to show the value 

*/

    move_copy(int a) //parametrized constructor
    {
        data = new int;
        *data =  a;
        cout<<"parametrized constructor"<<endl;
    }


    move_copy(const move_copy&source) //copy constructor ** here we can use "const" as well 
    {
        // data = new int; // new memory assigned
        data = source.data; // the contained (where the pointer points) is copied
        cout<<"copy constructor is called"<<endl;
    }

    move_copy(move_copy&& source) // move constructor
    {
        data = source.data;
        source.data = nullptr;
        cout<<"move copy complete"<<endl;
    }

    ~move_copy()
    {
        if(data!=nullptr)
        {
            cout<<"deleting"<<(*data)<<endl;
        }
        else 
        {
            cout<<"deleting nullptr"<<endl;
        }

        delete data;
    }

    void show_move()
    {
        cout<<(*data)<<endl;    
    }


    };


// void call(move_copy x) // here instead of calling the copy pointer the move pointer will be called
// {
//     x.show_move();

// }


int main()
{
    vector<move_copy>vec;

    vec.push_back(move_copy{10}); // pushing back {adding} in a vector which is of type "move_copy" --> adding type "move_copy" by initializing it by parameter 10 as mentioned in parametrized constructor
    
    vec.push_back(move_copy{20});


    return 0 ;
}