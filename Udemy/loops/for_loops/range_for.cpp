#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
    vector <double> temperatures {22.4 , 33.4 , 55.46} ;
    int array_list[] {2,3,46,55 ,6} ; 
    string name = "Pronnoy";


    // iterating through an array 

    for(auto list : array_list)
    {
        cout << list << "\t";
    }

    cout << endl ; 


    // iterating through a vector

    for(auto temp : temperatures)
    {
       cout << temp << "\t";
    }

    cout << endl ; 

    //iterating through string 

    for(auto charac : name)

    // for (auto charac : "Pronnoy") // --> this could be alternative as well 
    {
       cout << charac << "\t";
    }

    cout << endl ;

    return 0 ; 

}

