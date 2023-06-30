#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector <string> exam {"pro" , "nnoy", "chow"};


    for (auto x : exam)
        x = "funny";
    // here the change is being done in a copy of the vector not in the vector exam itself
    for (auto x : exam)
        cout<<x<<endl; // the iterations value wont be changed , it will be --> "pro" , "nnoy" , "chow"

// --------------------------------------------------------

    for (auto &x : exam)
        x = "funny";
        // here we are referencing and going , it is changing in the vector exam itself
    for (auto x : exam)// the iterations value will be changed , it will be --> "funny" , "funny" , "funny"
        cout<<x<<endl;
    // above can be print if we are using &x as well , but the cout needs to be of x only not of &x

return 0;
}