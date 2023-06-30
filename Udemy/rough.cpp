#include<iostream>

using namespace std;

int main() 
{

int x = 1234; 
 int y =0;

while(x !=0)
{
    y=x%10;
    cout<<y<<endl;
    x = x/10;
    cout<<x<<endl;
}


}
