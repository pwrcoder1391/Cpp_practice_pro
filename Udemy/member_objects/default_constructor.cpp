#include<iostream>
#include<string>

class heros
{   
    private:
        int power;
        std::string name;
        std::string super_power;


    public:
        void set_power(int pow,std::string n ,std::string sup_pow)
        {
            power=pow;
            name = n;
            sup_pow = super_power;
        } 

        void get_power()
        {
            std::cout<<"The hero : "<< name << std::endl;
            std::cout<<"Has power : "<< power << std::endl;
            std::cout<<"Has super power : "<< super_power << std::endl;

        }

        heros() // default constructor
        {
            name = "Batman";
            power = 2000;
            super_power = "Money";
        }
};

int main()
{
    heros super_1;
    super_1.get_power();

    std::cout<<"Default superhero"<<std::endl;

    return 0;


}