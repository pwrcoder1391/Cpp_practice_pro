#include<iostream>
#include<string>

class resturaunt{

public:
    int number;
    std::string name;

     void print_fun()
    {
        std::cout<<"resturaunt number"<<"\t : "<<number<<std::endl;
        std::cout<<"resturaunt name"<<"\t : "<<name<<std::endl;


    }
};

int main()
{
    resturaunt *xyz; = new resturaunt; // this didnt run initially because we did screw up that we just declared the "resturaunt *xyz" , without initializing it 
    xyz->number = 2;
    xyz->name = "Dorsia";
    xyz->print_fun();

    delete xyz;
    return 0 ;
}