#include<iostream>
#include<memory>


class Account 
{
    private:
        int amount;
    public:
        Account(int amt):amount{amt}
        {
            std::cout<<"constructor is called"<<"Amount ="<<amount<<std::endl;
        }

        ~Account()
        {
            std::cout<<"destructor is called"<<std::endl;
        }
};

int main()
{
    std::unique_ptr<Account>p1{new Account{10000}};
    auto p2 = std::make_unique<Account>(10000); // dont forget "std::"

}