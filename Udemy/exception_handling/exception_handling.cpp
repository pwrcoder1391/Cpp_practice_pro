#include<iostream>
#include<string>

using namespace std;

int zero = 0;

/*
Try this without function 
*/

int miles_to_km(int input)
{

    int return_val = 0 ;
    if(input < zero)
    {
        throw string("neg"); // we were missing "string()" --> this would cause the exception to go in "unknown exception" --> caught by - "catch(...)"
    }
    else if(input == zero)
    {
        throw 0;
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
    
    catch(int &x)
    {
        cerr<<"zero caught \t"<<x<<endl;
    }
    catch(string &err)
    {
        cerr<<"negative number caught \t"<<err<<endl;
    }
    catch(...)
    {
        cerr<<"unknown exception caught \t"<<endl;
    }


    /*cannot put the below lines here since the program will continue till here*/
    //cout<<"miles in km = "<<output<<endl;
    
    return 0;   
}