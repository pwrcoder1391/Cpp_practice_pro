#include<iostream>
#include<string>

class heros{

private:
    int x; 
    std::string name;
    double y;

public:

    // it has 3 constructors 
    /*
    1 with no arg
    2nd with 2 args 
    3rd with 3 args 

    the delegating constructor will be one with max arg
    */

    heros()
    :heros{2,"alpha",3.0}
    {
        std::cout<<"no arg constructor"<<std::endl;
    }

    heros(int a)
    :heros{a,"alpha",3.0}
    {
        std::cout<<"one arg constructor"<<std::endl;
    }

    heros(int one , std::string nam , double two)
    :x{one},name{nam},y{two}
    {
        std::cout<<"three arg constructor"<<std::endl;
    }
};


int main()

{
    heros one_hero;
    heros two_heros(3);
    heros three_heros(5,"Pronnoy",55.0);

    return 0 ;
}