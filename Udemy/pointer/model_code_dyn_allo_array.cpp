// here we are dynamically block the memory and then allocate them to an array form

#include<iostream>

using namespace std ; 

int *make_an_array(int size , int init_pos=0);

int main()
{
    int size = 5 ; 
    int *array_is_here;
    array_is_here=make_an_array(size); // only sending the size , since default is already mentioned for next parameter

// here we can do array operations 

    delete [] array_is_here;

    return 0;


}

int *make_an_array(int size , int init_pos)
{

int *pointer_allo = new int[size]; // actually the array has been initialized here only 
{
for (int i{0};i<size;i++)
{
    *(pointer_allo+1)=init_pos; // here the array is just being initialized (all the array elements , through pointer increment)
}

return pointer_allo; //array starting value is returned 
}
