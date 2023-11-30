#include<iostream>
#include<string>

template <class T> // alternatively can use -- template <typename T>
T min(T a,T b)
{
    return (a<b)?a:b; // (if a is less than b , if true - a , if false - b)
}


// if we want multiple type input then - 
template <class T,class T1>   
T divide_1(T a,T1 b)
{
    return (a/b); // (if a is less than b , if true - a , if false - b)
}


int main()
{
    std::cout<<"output is "<<min(23,45)<<std::endl;
    // so the type of input we put in min() will determine what it'll return , if we would have put 23.04 and 33.33 then the output would have been double 
    
    // eg - comparing char values 
    std::cout<<"output is "<<min('c','d')<<std::endl;

    return 0;
}


