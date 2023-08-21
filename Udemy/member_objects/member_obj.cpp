#include<iostream>

#ifndef __ACCOUNT_H_
#define __ACCOUNT_H_

//account class decleration

// if we include this file in the cpp file then the description is in the h file and the implementation is in the cpp file 
 

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

#endif 