#include<iostream>

using namespace std ; 

int main()
{

    // we got 2 options , either to initialize and declare variables at the starting of the program or initialize where it is being used 

    cout<< "enter the length of the room in feet " ;
    int room_length {0};
    cin >> room_length; 

    cout<< "enter the width of the room in feet " ;
    int room_width {0};
    cin >> room_width;

    cout << "area of the room is " << room_length * room_width ;  

    return 0 ;
}
