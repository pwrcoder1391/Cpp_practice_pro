#include<iostream>
#include<string>

class player{
    private:
        int x;
        int z;
        std::string name;

    public:

        player()
        {

        }

        player(int a , int b , std::string naam)
        :x{a},z{b},name{naam}
        {

        }

        void return_x()
        {
            std::cout<<x<<std::endl;
        }
        
};

player function()
        {
            player new_obj{5,10,"xyz"};
            return new_obj;
        }

int main()
{
    player n;
    n = function();

    n.return_x();
    return 0;

}


