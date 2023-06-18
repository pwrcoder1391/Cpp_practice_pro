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

    int input_val {0} ;
    int dollar {0} , quater {0} , dime{0} , nickel{0} , pennies{0} ; 


    cout<< "Enter an amount in cents : ";
    cin>>input_val;



    if(input_val != 0)
    {
        cout<<input_val / 100<<endl ; 
        if(input_val / 100 > 0)
        {
            dollar = input_val/100 ;
            input_val = input_val - (dollar*100) ;  
        }

        if(input_val / 25 > 0)
        {
            quater = input_val/25 ;
            input_val = input_val - (quater*25) ;
        } 
        
         if(input_val / 10 > 0)
        {
            dime = input_val/10 ;
            input_val = input_val - (dime*10) ;
        } 
        if(input_val / 5 > 0)
        {
            nickel = input_val/5 ;
            input_val = input_val - (nickel*5) ;
        }
        if(input_val / 1 > 0)
        {

            pennies = input_val ; 
        }
       

        cout<<"You can provide change for this change as follows:"<<endl;
        cout<<"dollar   :"<< dollar << "\n"  <<"quater   :"<< quater << "\n"  <<"dime   :"<< dime << "\n"  <<"nickel   :"<< nickel << "\n"  <<"pennies   :"<< pennies << "\n"  <<endl ; 

    }
    else 
    {
        cout<<"You can provide change for this change as follows:"<<endl;
        cout<<"dollar   :"<< dollar << "\n"  <<"quater   :"<< quater << "\n"  <<"dime   :"<< dime << "\n"  <<"nickel   :"<< nickel << "\n"  <<"pennies   :"<< pennies << "\n"  <<endl ; 
    }


    return 0;
}