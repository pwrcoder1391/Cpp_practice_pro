/*

Will contain the class definition and decleration --> 

class
{
    private:
        static variable 
        int 
        string 
        int 

    public:

        parametrized constructor 

        copy constructor 

        static function 

        general function
}   

The static function must increment when a player is added & it must decrement when a player is deleted/goes out of scope

*/


// Do not run this code just by running "main" , you need to use gcc/g++ command 

//g++ -g -o main .\main.cpp .\stat_func.cpp   --->   .\main.exe


#include<iostream>
#include<string>

using namespace std;

class stat_func // class definition only 
{
    private:

        int xp;
        int rank;
        string name;
        static int player_num;  

    public:
        stat_func(int xp , int rank , string name);
        stat_func(const stat_func &source);
        static int show_player(); //static function to show player number
        ~stat_func();
};

