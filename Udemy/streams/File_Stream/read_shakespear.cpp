#include<iostream>
#include<string>
#include<fstream>


int main()
{
    std::ifstream reader; // we can name it anything , also "ifstream" is required if we need to read from a file 

    char c{}; // to read character by character 

    reader.open("D:\\githib_repos\\Cpp_practice_pro\\Udemy\\streams\\File_Stream\\Shakespear.txt");
    if(!reader)
    {
        std::cout<<"no files found"<<std::endl;
        return 1;
    }

    while(!reader.eof())
    {
        reader.get(c);
        if (c == '\'') {
            std::cout << "\'"; // Escape the single-quote character
        } else {
            std::cout << c;
        }
    }
    std::cout<<std::endl;

    return 0;
}