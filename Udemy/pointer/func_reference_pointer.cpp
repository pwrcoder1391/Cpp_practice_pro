#include<iostream>

using namespace std;

// writing a function which compares the int numbers and returns the largest number


int *largest_number(int *a , int *b);


int main()
{
    int a{200};
    int b{300};

    int *result{nullptr}; // this will recieve the result from the function call --> will contain the address of the largest number returned 

    result = largest_number(&a,&b); // sending the address of the numbers to be compared to

    cout<<*result<<endl; // will return the dereferenced pointer

    return 0 ;

}

int *largest_number(int *a , int *b)
{
    if(*a>*b)
    {
        return a; // this is not int return , its int * return type , so dont return *a , return a which is address 
    }
    else{
        return b;
    }
}