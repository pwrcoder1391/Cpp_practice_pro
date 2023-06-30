#include<iostream>
#include<string>

using namespace std;

/*
    Enter the message 
    Compare each word using "if" using at --> reference string 
        <update> --> used find() to find the position and used that to search the encoded string rather
    change the message using at() using --> reference string
         <update> --> used pushback method to enter the string rather than "=" assignment operator 
*/


int main()
{
    string message ;

    cout<< "enter the data  :  ";
    getline(cin,message);
    string encoded_message;

    string reference_alpha{"abcdefghijklmnopqrstuvwxyz"};
    string reference_encode{"efghijklmnopqrstuvwxyzabcd"};
    for(size_t i{} ; i<message.size() ; i++)
    {
        size_t alpha_pos = reference_alpha.find(message.at(i));
        //cout<<alpha_pos<<endl;
        if(alpha_pos == string::npos)
        {
            encoded_message.push_back(message.at(i));
        }
        else
        {
            encoded_message.push_back(reference_encode.at(alpha_pos));
        }
    }

    cout<<encoded_message<<endl ; 
    return 0 ;
}

