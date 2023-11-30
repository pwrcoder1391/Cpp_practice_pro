#include<iostream>
#include<string>
#include<fstream> // to read files 

// for basics - go through -"Reading_frm_file.cpp"

int main()
{
    std::ifstream in_file{"D:\\githib_repos\\Cpp_practice_pro\\Udemy\\streams\\File_Stream\\text.txt"};
    std::string line{};
    int num;
    double total;

    if(!in_file)
    {
        std::cerr<<"File not found"<<std::endl;
        return 1;
    }

    in_file>>line>>num>>total; // this needs to be in sequence as in the text file .. 
    std::cout<<num<<"\t"<<line<<"\t"<<total<<std::endl;
    in_file.close();
}