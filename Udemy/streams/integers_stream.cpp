/*

In c++ the integers could be shown using 3 ways 

int 
hex 
octal

*/

/*
TODO - 

we need to create an application where - we are inputing the value and we are converting it into all these variations 
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int x;


    x = 255; // its in decimal 


    /*how do we know which is which unless we ourselves code it - hence "showbase" manipulator*/

    cout<<showbase; // this is show base manipulator 
    cout<<"this is decimal \t"<<x<<endl;
    cout<<"this is hexadecimal \t"<<hex<<x<<endl; // after showbase , hex will have "0x" added to it
    cout<<"this is octal \t"<<oct<<x<<endl; // after showbase octal will have 1 "0" infront of it

    cout<<noshowbase; // will revert the changes done by show base
    cout<<"this is without anything (retains last setting)\t"<<x<<endl; //here the number will be shown in octal ,which is the last "cout<<" which is sent 

    cout<<showbase<<uppercase; // this will showbase and also convert the alphabets to uppercase 
    cout<<hex<<x<<endl; // this will have 0xFF rather than 0xff
 

    cout<<dec;
    int num1{244};
    int num2{-244};

    cout<<num1<<endl; // by default it wont show "+" infront
    cout<<num2<<endl; // by default it'll show "-" infront of it 

    cout<<showpos;

    cout<<num1<<endl; // this will change , it will contain "+" infront of them 
    cout<<num2<<endl;

    cout<<"reverting back"<<endl;

    cout<<noshowpos;
    cout<<num1<<endl; // this will change , it will not contain "+" infront of them 
    cout<<num2<<endl;

    return 0;


}   