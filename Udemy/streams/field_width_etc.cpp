#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int x{125255};
    string y{"Hello"};

    cout<<"123456789012345678901234567890"<<endl;
    cout<<setw(6)<<x<<y<<endl; // if you set field width equal to the length of variable , then it'll have no effect 

    cout<<"-------------------------------------"<<endl;

    cout<<"123456789012345678901234567890"<<endl;
    cout<<setw(10)<<x<<y<<endl;

    cout<<"-------------------------------------"<<endl;

    cout<<"123456789012345678901234567890"<<endl;
    cout<<setw(10)<<x<<setw(10)<<y<<setw(10)<<y<<endl;

    cout<<"---------Left Justified----------"<<endl;

    cout<<"123456789012345678901234567890"<<endl; // space is occupied till 0
    cout<<setw(10)<<left<<x<<setw(10)<<y<<endl;

    cout<<"---------Left ----------"<<endl;

    cout<<"123456789012345678901234567890"<<endl; // space is occupied till 0
    cout<<setw(10)<<left<<x<<y<<endl;


    cout<<"---------Formating manipulator ----------"<<endl;

    cout<<"123456789012345678901234567890"<<endl; // space is occupied till 0
    cout<<setfill('*')<<setw(10)<<x<<setfill('-')<<setw(10)<<y<<endl; // will cover only till the setw() is set 


    return 0;

}
