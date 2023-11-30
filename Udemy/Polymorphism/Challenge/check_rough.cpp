#include<iostream>
#include<vector>
using namespace std;

using namespace std;

void xyz (vector<int*>&input)
{
    for(auto xx : input)
        {
            cout<< xx;
            cout<< *xx;
        }
}

int main()
{
    vector<int>x = {22} ;
    xyz(x);
    



}