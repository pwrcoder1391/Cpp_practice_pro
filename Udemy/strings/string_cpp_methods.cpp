		#include<iostream>
		#include<string>
		#include<cstring> // c style string
		#include<cctype> // character based functions
		


		using namespace std;
		

		int main()
		{
		    
		    string s1 ;
		    string s2 {"Banana"};
		    string s3 {"Batman"};
		    string s4 {s3};
		    string s5 {s2 , 0 ,4};
		    string s6 (s2 , 5) ;
		

		    cout<<s1<<endl;
		    cout<<s2<<endl;
		    cout<<s3<<endl;
		    cout<<s4<<endl;
		    cout<<s5<<endl;
		    cout<<s6<<endl;
		



		    // comparision 
		

		    cout << "-------------------------------------------------------" << endl ;
		

		    cout << "now we will compare the strings " << endl ;
		    cout << boolalpha ; 
		    cout << s2 << " == " << s3 << " " << (s2 == s3) << endl ; 
		    cout << s2 << " == " << s4 << " " << (s2 == s4) << endl ; 
		    cout << s3 << " < " << s2 << " " << (s2 < s3) << endl ; 
		    cout << s2 << " > " << s3 << " " << (s2 > s3) << endl ; 
		    // cout << s2 << " == " << s3 << " " << (s2 == s3) << endl ; 
		


		    // assignment operator 
		

		    s2 = "apple" ; 
		

		    cout << "changed using assignment operator" << " " << s2 << endl ; 
		

		    s2.at(3) = 'S'; // DO NOT USE "" , use ''
		

		    // next to do --> find , substr , iterate (for and range-for) , concatenate and erase
		


		    // Find -
		    string name_string {"this is my name"} ;
		    string input_string{};
		    cout<<"enter the string to search" <<endl ; 
		    cin>> input_string ; 
		

		    size_t output_find = name_string.find(input_string) ; 
		    if (output_find != string::npos)
		        cout<< input_string<< "found"<<endl ; 
		    else 
		        cout<< input_string<< "not found"<<endl ; 
		

		    
		    //substr 
		

		    string to_check_substring {"This sentence is used to find substring"};
		

		    cout << to_check_substring.substr(0,4) << endl;
		    cout << to_check_substring.substr(5,8) << endl;
		    cout << to_check_substring.substr(30,9) << endl;
		


		    //iteration 
		


		    string string_to_iterate{"This string needs iteration"};
		    for(size_t i{0};i<=string_to_iterate.length();i++)
		    {
		        cout << string_to_iterate[i]<<endl;
		    }
		

		    // using range-for loop 
		    //string c ; 
		

		    for (char c : string_to_iterate)
		        {
		            cout<< c << endl; 
		        }
		

		    //  concate
		


		    return 0 ;
		

		}
