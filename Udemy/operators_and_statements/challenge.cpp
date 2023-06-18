#include <iostream>
using namespace std;

void logical_operators(int age, bool parental_consent, bool ssn, bool accidents) {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    if (((age>=18)||((age>=15&&age<18)&&parental_consent==1))&&(ssn==1)&&(accidents==0))//WRITE ALL YOUR CODE WITHIN THE PARENTHESES
        cout << "Yes, you can work.";
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return;
}