#include<iostream>

using namespace std;

int main()
{
    // aim --> to showcase the output of the equality operators 


    int x = 1 ;
    int y = 2 ;
    
    // storing the equality operators in a variable 

    bool store ; 
    store = (x == y) ;
    cout << store << endl; 

    cout << boolalpha; // bool alpha is converting the 
    cout << (x == y) << endl ; ;

    cout << (x != y) << endl ; 

    int store_2 ; // this will not show boolalpha effect 
    store_2 = (x != y) ; 
    cout << store_2 << endl ; 
    

    // mixed mode comparision 

    double floatnumber  = 2.2 ; 

    cout << y <<"\t" << floatnumber << "\t" << (y == floatnumber) ; // here the 'y' will be converted to float number and then it will be compared 



    return 0 ; 

    // "boolalpha" can only reflect result if the statement is written after the the "cout<<boolalpha" statement

}