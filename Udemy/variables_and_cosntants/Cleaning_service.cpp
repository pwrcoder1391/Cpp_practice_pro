// challenge - section 6 

#include<iostream>

using namespace std ; 

int main()
{

    const int small_room_charge = 25 ;
    const int large_room_charge = 35 ;

    const double tax_rate = 0.06 ;
    const int valid_days = 30 ;

    int large_room {0} ;
    int small_room {0} ;

    cout << "welcome to the Frank's cleaning service" << endl ;

    cout << "how many large room is required ? ";
    cin >> large_room ; 

    cout << "how many small room is required ? ";
    cin >> small_room ; 

    cout << "charge per large room : $" << large_room_charge << endl ; 
    cout << "charge per small room : $" << small_room_charge << endl ; 
    int Cost = ((large_room*large_room_charge) + (small_room*small_room_charge)) ; 
    cout << "Cost : $" << Cost << endl ;
    cout << "Tax : $" << (Cost * tax_rate) << endl ;

    cout << "================================" << endl ;
    cout << "Total Estimate : $" <<(Cost+(Cost * tax_rate)) << endl ;
    cout << "This estimate is valid for " << valid_days <<" days" << endl;


    return 0 ;

}



