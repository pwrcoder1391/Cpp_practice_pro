#include<iostream>

using namespace std ; 

int main()
{

    int a ;
    double b ;
    cout << "1st number" ;
    cin >> a ;
    cout << "2nd float number" ;
    cin >> b ;

    // if you float as 1st number then it'll take value after points as b , wont even ask for 2nd number

    cout <<"1st number" << a <<"2nd number"<< b  ; 

    return 0 ;
}
