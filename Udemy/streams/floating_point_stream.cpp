#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double x;
    cout<<"enter the number"<<endl;
    cin>>x;

    cout<<"--- the results are as follows ---"<<endl;

    cout<<setprecision(5);
    cout<<fixed; // this will setprecision after decimal 
    cout<<showpoint;


    // by using the "fixed" , we are setting the values AFTER the decimal but the values before the decimal remains as it is 

    cout<<"the number is \t -   "<<x <<endl;

    cout.unsetf(ios::fixed);
    // cout<<resetiosflags(ios::fixed); // we can use this as well

    cout<<"in scientific notation  ";
    cout<<setprecision(4);
    cout<<scientific;
    cout<<showpos;
    cout<<uppercase;
    
    cout<<"the number is \t -   "<<x;

    

    return 0;
}


