#include<iostream>

using namespace std ; 

int main()
{

    int arr[] = {1,2,3,4,5} ;  // here array will automatically take 5 numbers , even if we left the index blank 

    int arr_1[5] = {1,2,3,4,5}; // here array will have 5 numbers , while declaring the array , we need to have 5 here ,  but when we iterate over it , we do it from 0 --> 4 (n-1)
    cout<<"output of arr will be"<<endl;  

    for(int i = 0 ; i<=4 ; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"output of arr_1 will be , when we run it from 0 to 5"<<endl;  

    for(int j = 0 ; j<=5 ; j++)
    {
        cout<<arr[j]<<endl;
    }


    return 0; 

}
