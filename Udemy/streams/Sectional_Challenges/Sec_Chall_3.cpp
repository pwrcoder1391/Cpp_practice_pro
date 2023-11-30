#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>


/*
Mentioned in the video to use Modern C++ functions 

-- to read/find words in shakespeare - romeo and juliet --


*/

using namespace std;

int main()
{
    string x; // to enter the word to search
    ifstream read_it; // reads the file 
    read_it.open("D:\\githib_repos\\Cpp_practice_pro\\Udemy\\streams\\Sectional_Challenges\\shakespeare.txt");
    cout<< "enter the word to search"<<endl;
    getline(cin,x);
    int count =0;
    string buff;
    while (!read_it.eof()){
        read_it>>buff; // difference between getline() , get() and >>
        size_t found_ornah = buff.find(x);
        if(found_ornah==string::npos)
        {
            /*
            How does .find() work in string ?
            
            */
        }
        else{
            count++;
        }
        
    }
    cout<<count;
    return 0;

}
