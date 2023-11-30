#include<iostream>
#include<memory>
#include<vector>

class obj{
    private:
        int a;
    public:
        void func()
        {
            a = 20;
            std::cout<<a<<std::endl;
        }

};


int main()
{
    std::vector<std::unique_ptr<obj>> a{55};
    
    }