
#include<iostream>

using namespace std ; 

int main()
{
int age {0};
int n {0} ;
cout<< "enter age : ";
cin>>age;
    const int driving_age = 16;
   
    if(age >= driving_age)
    {
        cout << "Yes - you can drive!";
    }
    else
    {
        
        n = driving_age-age;
        cout<<"Sorry,come back in "<< n <<" years";
    }
}