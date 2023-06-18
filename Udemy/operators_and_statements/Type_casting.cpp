// check for edge cases - results with decimals

#include<iostream>

using namespace std ; 

int main()
{
    int total{};
    int num1{} , num2{} , num3{}  ; 
    const int count{3};
    double average{0.0};



    cout <<"enter the numbers " <<endl ; 
    cin >> num1 >> num2 >> num3 ; 

    total = num1+num2+num3 ; 

    average = static_cast<double>(total) / count ; // typecasted 

    cout<< "the average is  " << average ; 

    return 0 ; 
}
