#include<iostream>
#include<string>

using namespace std;

const int zero = 0;


class CaughtZero
{
// we can add constructor and destructor here
};

class CaughtNegative
{
// we can add constructor and destructor here
};

int miles_to_km(int input)
{

    int return_val = 0 ;
    if(input < zero)
    {
        throw CaughtZero{}; // initialized here only
    }
    else if(input == zero)
    {
        throw CaughtNegative{}; // initialized here only
    }

    return return_val = input*1.6;
    
}

int main()
{
    
    int input = 0;
    int output;

    cout<<"enter the number"<<endl;

    cin>>input;

    try
    {
        output = miles_to_km(input);
        cout<<"miles in km = "<<output<<endl;
    }
    
    catch(const CaughtNegative &ex)
    {
        cerr<<"zero caught \t"<<endl;
    }
    catch(const CaughtZero &err)
    {
        cerr<<"negative number caught \t"<<endl;
    }
    catch(...)
    {
        cerr<<"unknown exception caught \t"<<endl;
    }


    /*cannot put the below lines here since the program will continue till here*/
    //cout<<"miles in km = "<<output<<endl;
    
    return 0;   
}