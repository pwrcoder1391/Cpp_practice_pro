#include<iostream>
using namespace std;
int main()
{
    const int a {55}; // this is const variable 
    int const *k {&a}; // this is NORMAL pointer pointing to const integer --> pointer can point to other address , but the value stored in "*k" couldnt be changed (i.e. a)
    const int const *j {&a}; // this is a constant pointer (address the pointer is pointing to cant be changed) + the variable *j cant be changed (i.e. a)



    return 0;

}