#include<iostream>

using namespace std;

int main()
{

    // initializing all the req vals

    int more {11} , less{9} , equal_1{10} , value_1{10}  ;

    cout << "more value than denominator  :"<< more << "\t" <<(more % value_1) << endl ; 
    cout << "less value than denominator  :"<< less << "\t" << (less % value_1) << endl ; 
    cout << "equal value than denominator :"<< equal_1 << "\t"<< (equal_1 % value_1) << endl ; 


    return 0 ;
}