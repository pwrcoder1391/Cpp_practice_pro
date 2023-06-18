#include<iostream>

using namespace std;

/*
1 dollar = 100 cents
1 quater = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent
*/


int main()
{

    // initializing all the req vals

    int input_val {0} , bal {0};
    int dollar {0} , quater {0} , dime{0} , nickel{0} , pennies{0} ; 


    cout<< "Enter an amount in cents : ";
    cin>>input_val;

    
    dollar =  input_val / 100;
    bal = input_val % 100;
    cout<<bal<<endl;
    quater =  bal / 25;
    bal = bal % 25;
    cout<<bal<<endl;
    dime =  bal / 10;
    bal = bal % 10;
    cout<<bal<<endl;
    nickel =  bal / 5;
    bal = bal % 5;
    cout<<bal<<endl;
    pennies =  bal ;

    cout<<"You can provide change for this change as follows:"<<endl;
    cout<<"dollar   :"<< dollar << "\n"  <<"quater   :"<< quater << "\n"  <<"dime   :"<< dime << "\n"  <<"nickel   :"<< nickel << "\n"  <<"pennies   :"<< pennies << "\n"  <<endl ; 

    
    return 0;
}