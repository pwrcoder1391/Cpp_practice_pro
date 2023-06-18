#include<iostream>
#include<vector>

using namespace std ; 

int main()
{
    vector< vector<int> > Mult_vec {0} ;

    Mult_vec = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout<<Mult_vec.size() << endl ; 

    for(int i = 0 ; i<=2 ; i++)
    {
        for(int j = 0 ; j<=3 ; j++)
        {
            cout<<Mult_vec.at(i).at(j);
        }

        cout <<"\n";
    }

    return 0 ;
}

