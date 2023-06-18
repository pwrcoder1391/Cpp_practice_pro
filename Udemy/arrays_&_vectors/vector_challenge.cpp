// declare 2 vector and add those in the 2d vector 

#include<iostream>
#include<vector>

using namespace std ; 

int main()
{

    // declaring 1d arrays

    // declare as it is , no need to initialize with 0 , as it is already initialized 
    vector <int>vector1 ;
    vector <int>vector2 ;


    // pushing dynamically

    vector1.push_back(10);
    vector1.push_back(20);
    
    // displaying the vector

    cout<<vector1.at(0)<<"\t"<<vector1.at(1)<<endl;

    // pushing dynamically
    
    vector2.push_back(100);
    vector2.push_back(200);

     // displaying the vector

    cout<<vector2.at(0)<<"\t"<<vector2.at(1)<<endl;
    

    // 2d arrays

    vector<vector<int>> vector_2d ; 

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"2d vectors \n";

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cout<<vector_2d.at(i).at(j)<<endl;
        }
    }

    // changing the vector1 element 0

    vector1.at(0) = 1000;

    cout<<"vector1 vectors after change \n" ;

    for(int a=0 ; a<2 ; a++)
    {
        cout << vector1.at(a)<<endl;
    }


    // checking the 2d vector for the changes 

    cout<<"2d vectors after change \n" ;

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cout<<vector_2d.at(i).at(j)<<endl;
        }
    }


    // end of program 

    
    return 0;

}

