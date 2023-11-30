#include<iostream>
#include<string>
#include<fstream> // to read files 


/*

To read file - 
- declare the fstream
- connect it to file 
- Read data from file through stream 
- close the stream


Variations - 
- we can read the files in - binary / text 
- we can read it in - character or string

-- To open a file -- 

std::fstream in_file("../file.txt", std::ios::in);
std::fstream in_file("../file.txt", std::ios::in | std::ios::binary); //using '|' as binary operator , 'std::ios::binary' -- reads the file in binary

--- using ifstream --- 

std::ifstream in_file("../file.txt");
std::ifstream in_file("../file.txt",std::ios::binary);

---- inputing the file name ---- 
std::ifstream in_file;
std::string filename;
cin>>filename;
in_file.open(filename);

--- to check if the file is open successfully ---

if(in_file.is_open())
{
    //read
}
else 
{
    // what ever to do
}

--- another way --- 

int num;
double total;
std::string name;

if(in_file) // just check the object
{
    in_file>>num>>total>>name; // will read and save somewhere
    //read
}
else 
{
    // what ever to do
}

-- closing the file --

in_file.close();


--- using "getline()" --- 

std::string line{}; // initializing 
std::getline(in_line,line); // will read from in_line 


*/

int main()
{
    std::ifstream in_file{"D:\\githib_repos\\Cpp_practice_pro\\Udemy\\streams\\File_Stream\\text.txt"};
    std::string line{};

    if(!in_file)
    {
        std::cerr<<"File not found"<<std::endl;
        return 1;
    }


/*if we are using "while(!in_file.eof())" , then the statement "std::getline(in_file , line)" will be given inside the loop  */


    // we can also use - "while(std::get(in_file,c))" .. where 'c' is of char type

    //while(!in_file.eof())
    while(std::getline(in_file , line)) // we can use both 
    {
        std::cout<<line<<std::endl;
    }

    in_file.close();
}