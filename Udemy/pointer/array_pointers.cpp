
#include<iostream>
using namespace std;
int main()
{

    int a[] = {1,2,3,4};
    int *ptr_a{a}; // initializing the ptr_a with array name , which is pointer to 1st element

    // using subscript notion
    cout<<a[0]<<" = "<<ptr_a[0]<<endl;
    cout<<a[1]<<" = "<<ptr_a[1]<<endl;

    // offset notion

    cout<<*a<<" = "<<*ptr_a<<endl;
    cout<<*(a+1)<<" = "<<*(ptr_a+1)<<endl; // +1 doesnt mean 1+1=2 , but rather increments the address stored in pointer by 4 , which is the size of the integer , hence the pointer moves to the next elemnt 

    return 0 ;
}