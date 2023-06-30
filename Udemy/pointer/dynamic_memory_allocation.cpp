// do not run it - might cause memory leak 


#include<iostream>
using namespace std;
int main()
{
    int x = 0 ; // we declare a random variable 

    int *int_pointer {nullptr}; // we declare a new pointer, assign it null value

    int_pointer = new int ; // we allocate the address of a storage in heap memory , which is of int type 

    cout<< int_pointer <<endl ; // this will print the allocated address in the heap memory
    cout<< *int_pointer <<endl ; // this will print the value in the memory --> which will be garbage since its randomly allocated memory
    
    int_pointer = &x ;  // now the address of the x variable is assigned to int_pointer , so basically if we go to address "int_pointer" it'll point to x 

    cout <<int_pointer << "\t" << *int_pointer <<endl ; // now "*int_pointer" will show value of x

    delete int_pointer; // this will delete the allocated pointer and hence will avoid memory-leak

    return 0 ;
}

