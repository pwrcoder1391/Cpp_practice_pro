/*
stl template which we are using will contain , 
    a structure
    a operator overloading
    a constructor having 2 different type of inputs  

*/

#include<iostream>
#include<string>



/*
Basically it doesnt matter what kind of input is given as an argument to "min()" , until both the arguments are of same type 
*/


/*

TODO
Say we have a template which is simple couting the stream 

we a can have that and for structure 
    - we can put operator overloading for << operator 
*/


/*
We can actually do this anywhere , inside struct / class / main()

*/

template <typename T>

T min(T x , T y)
{
    return x<y?x:y; 
}

struct zz{

    int x; 
    std::string y;

    /*operator overloader*/
    bool operator<(const zz&input) // why described under structure only ? cause it will be member of structure (just as class)
    {
        return this->x<input.x;
    }

    /*
    How does this operator overloader work ?

        suppose we have - zz obj1 , zz obj2
        < acts as --> obj1.operator(obj2);

        this pointer pertains to obj1 and then the obj2 is passed as argument 


    Why arent we using friend function ? 
        Cause this is structure , everything is public here

    
    */


   template <typename T>
   T swap(T &a , T &b)
   {
        T temp;
        temp = a;
        a = b ; 
        b = temp;
   }

};

int main()
{
    zz p1{32,"pronnoy"};
    zz p2{43,"srk"};

    zz p3 = min(p1,p2);

    std::cout<<p3.y<<std::endl; // this will store the structure which has lesser age 

    p2.swap(p2,p1); // but the change happens in p2 and p1 

    std::cout<<p2.y<<std::endl;
    // p3.swap(32,"pronnoy"); // illegal

    return 0;

}