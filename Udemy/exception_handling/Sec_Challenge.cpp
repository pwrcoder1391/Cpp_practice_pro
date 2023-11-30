#include<iostream>
#include<exception> // to use exception class 
#include<memory>

using namespace std;
/*
What to do here - 

    Make a class with a function 
    in that function we need to check for negative value -- in the constructor 

    The exception must be made in a class which is derived from exception class and has a what() function-- describing the error.

*/

class thisisnegative : public exception //if we are declaring the class after the main class , then we are getting some error that the class couldnt be found ..
{
public:
    thisisnegative() noexcept = default; // do not add this in the end {} 
    ~thisisnegative() = default;

    virtual const char* what() const noexcept{
        return "this is negative value";
    }
};


class xyz{
private:
    int x;

public:
    xyz(int input):x{input}{

        if(x<0)
        {
            throw thisisnegative{};
        }
    }
    xyz():x{0}{}
    ~xyz(){}
};




int main()

{

    //1st way to do it 
   try{
    unique_ptr<xyz> p = make_unique<xyz>(-1);

    cout<<"this is right"<<endl;
   }
   catch(const thisisnegative &x)
   {
    cerr<<x.what()<<endl;
   }


    // 2nd way to do it 

    try{
    xyz p{2};

    cout<<"this is right"<<endl;
   }
   catch(const thisisnegative &x)
   {
    cerr<<x.what()<<endl;
   }

   return 0;
   
}