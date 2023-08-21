#include<iostream>
#include<string>

class xyz{

private:
    int x;
    std::string blah;
    double y;

public:
    xyz(int a = 0 , std::string lah = "None", double b = 0.0 );

};


xyz::xyz(int a, std::string lah, double b )
:x{a},blah{lah},y{b}
{
    std::cout<<"universal constructor"<<std::endl;
}

int main()
{
    xyz heros;
    xyz hero_1(3);
    xyz hero_2(3,"ppp" , 5.5);

    return 0;



}