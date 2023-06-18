#include<iostream>

using namespace std ; 

int main()
{
    long int x {122'222'2222}; // here as you can see ' can be used to make the numbers more readable , mostly for c++14
    cout << x <<endl ;
    // if we use = for intitialization , we might not get error withc wrong datatype

    // int y {15555555555555555555};
    // cout << y <<endl ;
    int z = 15555555555555555555 ; // same value
    cout << z <<endl ;

    long double large_number {24e43};
    cout << large_number <<endl ;
    
    return 0 ; 
    
}
