#include<iostream>
#include "stat_func.h"

void show_players()
{
    cout<<"number of players"<<stat_func::show_player()<<endl; // just calling the show_player function 
}

int main()
{
    stat_func x(55,20,"hero");

    show_players();

    {
        stat_func x(105,210,"hero");

        show_players(); 
    }  // once the scope is over the destructor is called 


    stat_func *ptr_func = new stat_func(100,520,"hero"); // creates a pointer of stat_func class + see how pointer is initialized "stat_func(100,520,"hero")"
    show_players();

    delete ptr_func; // deletes the pointer created
    show_players();


    return 0;

}