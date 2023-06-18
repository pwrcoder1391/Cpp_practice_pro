#include<iostream>
#include<vector>

using namespace std ; 

int main()
{

    vector <int> vec_1 = {1,2,3,4,5};

    // accessing vector 
    cout << "accessing vector" << endl; 
    cout <<"using array syntax " << vec_1[1] << endl;
    cout << "another way" << endl; 
    cout <<"using vector syntax "<< vec_1.at(1) << endl;
   

    cout<<"\n"<<endl;

    // changing the content of the vector using "at"

    cin >> vec_1.at(1) ;
    cout << "changed value " <<vec_1.at(1) << endl;


    cout<<"\n"<<endl;
    //adding vector element at the end of the vector , vector size inc by 1  , vec_1.push_back(<value to be pushed>);
    cout << "checking the size of the vector before change " << vec_1.size() << endl ; 
    cout << "adding vector element at the end of the vector , vector size inc by 1 "; 
    vec_1.push_back(6);

    // checking the size of the method
    cout << "checking the size of the vector after change " << vec_1.size() << endl ; 

    // adding the number to array through user input 

    int number_to_add;

    cout << "add the number here " ;
    cin >> number_to_add ;

    vec_1.push_back(number_to_add);


    cout << "printing all the vector values  " ;
    for(int i =0 ; i<(vec_1.size()) ; i++ )
    {
       cout << vec_1.at(i)<< endl;
    }    
    cout<<"size of the vector is " <<vec_1.size();

    // vector will take care of allocating and deallocating of the memory 

    // ADVANTAGE - of using ".at()" , the at() will throw exception if we are adding a value which is out of bounds 

    // exception handling = stops the program while running , if error comes , shouldnt use in production


 


    return 0 ;
}