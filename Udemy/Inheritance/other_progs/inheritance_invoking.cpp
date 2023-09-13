#include<iostream>


class base
{

private:
    int x;
public:
    base()
    :x{0}
    {
        std::cout<<"default constructors of base"<<std::endl;
    }

    base(int input)
    :x{input}
    {
        std::cout<<"paramterized constructors of base"<<std::endl;
    }

    ~base()
    {

    }


};


class derived : public base{

private:
    int y;
public:

    // using base::base;


    derived()
    :base{},y{0}
    {
        std::cout<<"default constructors of derived"<<std::endl;
    }

    /* check here that we have commented the parametrized construtor and since we are using --> using base::base;
    which is redirecting the constructor of base rather than only using default constructor of derived*/

    derived(int input)
    :base{input},y{input}
    {
        std::cout<<"paramterized constructors of derived"<<std::endl;
    }

    ~derived()
    {

    }


};


int main()
{

    base k;
    base j{2};
    derived l;
    derived m{22};

    return 0;

}