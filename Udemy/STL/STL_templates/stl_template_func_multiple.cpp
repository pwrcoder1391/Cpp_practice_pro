#include<iostream>
#include<string>


// we can do 3 types as well
template <typename A , typename B> // takes of 2 different types and returns as 1 type
A multiply(A a,B b)
{
    return (a*b);
}

/*WE CANNOT DO THIS 


template <typename A , typename B, template C> 
C multiply(A a,B b)
{
    return (a*b);
}
*/

int main()
{
    int a{55};
    double b{22.3};

    double result = multiply(b,a);  // only this will give decimal output
    int result_2 = multiply(b,a);  // result = int
    double result_3 = multiply(a,b); // result = int

    std::cout<<result<<"\t"<<result_2<<"\t"<<result_3<<"\t"<<std::endl;
    std::cout<<multiply<int>(b,a)<<"\t"<<multiply(b,a);
    return 0;
}