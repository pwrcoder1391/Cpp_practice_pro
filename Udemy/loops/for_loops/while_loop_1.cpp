#include<iostream>

using namespace std;

int main()
{
    int input_number {0} , input_number_1 {0} ;
    const int loop_limit {100} ;

    int x {0};

    cout<< "enter a number less than 100";
    cin >> input_number ;



    while (input_number >= loop_limit) // condition is set such that prompt comes again and again   
    {
        // to set the condition in the while loop , check what is the boundary condition 
        // also check where in the while loop you can change the variable in the condition such that it exits the loop

        cout<< "enter a number less than 100 :";
        cin >> input_number ; 

        // here the prompt will be again and again --> this is where we are manipulating the loop
    }

    cout << input_number << endl ; // this is where the program will come after getting out of the loop 

    while(x <= 10)
    {
        cout << x << endl ;
        ++x ; // 1st increment then assign 
    }

    bool done{0} ; 

    // this is better version of previous implementation

    

    while(!done)
    {
        cout<< "enter a number between 1 and 5 :";
        cin >> input_number_1 ;

        if(input_number_1<=1||input_number_1>=5)
        {
            // do nothing
        }
        else 
        {
            cout << input_number_1 ; 
            done = 1 ;
        }
    }

}