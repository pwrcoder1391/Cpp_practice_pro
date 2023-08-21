#include<iostream>
#include<string>

class resturaunt{

public:
    int number;
    std::string name;

    // void input_fun(int number , std::string name)
    // {
    //     std::cout<<"enter the number"<<std::endl;
    //     std::cin>>number;
    //     std::cout<<"enter the name"<<std::endl;
    //     std::cin>>name;

    // }


    void print_fun()
    {
        std::cout<<"resturaunt number"<<"\t : "<<number<<std::endl;
        std::cout<<"resturaunt name"<<"\t : "<<name<<std::endl;


    }
};

int main()
{
    resturaunt xyz;
    xyz.number = 2;
    xyz.name = "Dorsia";
    xyz.print_fun();
    return 0 ;
}