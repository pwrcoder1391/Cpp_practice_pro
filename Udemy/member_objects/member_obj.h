// using pragma 
#include<iostream>
# pragma once 
// pragma has same effect as #ifndefined 
class Account {

public:
    int z ;

    int return_value(int z)
    {

        std::cout<<z<<std::endl;
    }


private:
    int p ; 

};
