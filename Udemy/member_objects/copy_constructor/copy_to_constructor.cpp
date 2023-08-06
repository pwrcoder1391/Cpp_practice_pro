#include<iostream>
#include<string>


/*
In here we are not defining a way of copying the objects 

Done in 2 ways 
- pass by value 
- copying 2 same type of objects 

By using copy constructor , we would have a way of doing without making a copy of the object , which uses more memory 


*/


class player{
    private:
        int x;
        int z;
        std::string name;

    public:

        player() //default constructor
        {

        }


        // FYI didnt mentioned here the default parameter constructor

        // this is delegating constructor , we are passing some values which are then delegated to the class objects in private
        player(int a , int b , std::string naam)
        :x{a},z{b},name{naam}
        {

        }

        void return_x()
        {
            std::cout<<x<<std::endl;// will return x 
        }
        
        void return_naam()
        {
            std::cout<<name<<std::endl; // will return name
        }
        
};

player function()
        {
            player new_obj{5,10,"xyz"}; // declaring new object of player class , which has these 3 values 
            return new_obj; // returning the object of the above class
        }



int main()
{
    player n;
    n = function();

    n.return_x(); /* this is basically same as copying of object , 
    but here the function is returning which is copied in the other object */


    // copying of 1 object to other 
    player ronaldo(100,200,"Cristiano");

    player mbappe;
    mbappe = ronaldo; // copy done here

    mbappe.return_naam(); // will be same as object ronaldo

    return 0;

}
