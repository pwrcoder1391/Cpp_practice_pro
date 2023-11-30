#include<iostream>
#include<iomanip> // imp for manipulator 

using namespace std;

int main()
{

    bool a = (10 == 10);
    bool b = (10 == 20);

    //boolalpha
    cout<<"using boolalpha"<<endl;
    cout<<boolalpha;
    cout<<a<<endl;
    cout<<b<<endl;
    
    cout<<a<<endl;
    cout<<b<<endl;

    //noboolalpha
    cout<<"no bool alpha"<<endl;
    cout<<noboolalpha;
    cout<<a<<endl;
    cout<<b<<endl;
    
    cout<<a<<endl;
    cout<<b<<endl;


    //setf() 
    cout<<"using setf"<<endl;
    cout.setf(ios::boolalpha);
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<a<<endl;
    cout<<b<<endl;


    //resetiosflag
    cout<<"using reset flags"<<endl;
    cout<<resetiosflags(ios::boolalpha);
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<a<<endl;
    cout<<b<<endl;


    return 0;

}