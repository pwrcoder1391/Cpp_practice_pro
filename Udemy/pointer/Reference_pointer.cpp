#include<iostream>

using namespace std;

int main()
{

    int y = 7;
    int &x = y ; // we cannot assign this as 0 , we have to take that in variable and then assign 

    // if we assign the 0 to y , then it'll throw an error that "assign an l-value " --> means assign a variable

    x = 8 ;
    // x will be value of y ; &x is separate address  ; y is already assigned to 0 
    cout << x << "\t" << &x << "\t" << y ;


    // x is now basically attached to y , if we change y --> x changes , & if we change x --> y changes 
    // x <---> y relation established

    return 0;
}