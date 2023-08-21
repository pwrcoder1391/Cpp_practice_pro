#include<iostream>
#include<vector>

using namespace std;

int func(vector<int> &y)
{
    y.at(1) = 3;
    return 0 ;
}

int main() 
{

vector<int>x = {1,2,3};

func(x);
cout<<x.at(1);

return 0 ;
}
