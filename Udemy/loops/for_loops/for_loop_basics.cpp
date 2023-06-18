

// 1st we are running basic for loop

#include<iostream>
#include<vector>
using namespace std;

int main()
{

    for(int i{0};i<5;i++) // such cases the i++ and ++i both have same meaning 
    {
        cout << "these are the number " << i << endl ;

    }

    for (int a{1},b{5} ; a>=5 ; a++,b++) // here we are running only based on a>=5 but a & b both are initialized + both are incremented as well
    {
        cout<< "these are the numbers " << a << "," << b << endl ; 
    }

    for (int k{0}; k<=20 ; k++)
    {
        cout<<((k%2==0)?"\n":" "); // this is conditional operator used instead of if-else statement (mentioned in the commented sec)
       /*

       // Example of above conditional operator in if-else

       if(k%2==0)
        {
            cout << "\n" ; 
        }
        else 
        {
            cout<<" ";
        }


       */ 
    }


    // example by vector

    vector <int> vec_1 = {100,200,300}; // vector uses CURLY BRACKETS

    for (int u =0 ; u>=vec_1.size() ; u++ )
    {
        cout << vec_1[u];
    }

return 0 ; 
}
