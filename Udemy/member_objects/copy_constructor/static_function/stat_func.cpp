/*

here we will include stat_func.h

here we will write a function which will call the show_player_number

create object
show player number

define a scope and create object and then show player number 

create an object using pointer 
delete object and then show player number 


*/

// in this file we are defining the class declared in "stat_func.h"


#include<iostream>
#include "stat_func.h"

int stat_func::player_num{0}; // initializing the static number 

stat_func::stat_func(int xp , int rank , string name) // parametrized + delegating constructor
    :xp(xp),rank(rank),name(name)
    {
    ++player_num; // incrementing static , since it'll be called here only whenever any constructor is called
    // this->xp = xp; 
    // this->rank = rank; 
    // this->name = name;
    }

stat_func::stat_func(const stat_func &source) // copy constructor
    :stat_func(source.xp,source.rank,source.name) //sending to delegating constructor
    {

    }

stat_func::~stat_func()
    {
    --player_num; // decrementing the constructor 
    }

int stat_func::show_player()
    {
        return player_num;
    }