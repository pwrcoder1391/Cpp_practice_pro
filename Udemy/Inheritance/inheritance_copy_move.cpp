#include<iostream>

using namespace std;

class base 
{
    private:
        int x;

    public:

        base()
        :x{0}
        {
            cout<<"default constructor"<<endl;
        }

        base(int input)
        :x{input}
        {
            cout<<"parametrized constructor"<<endl;  
        }

        ~base()
        {
            cout<<"destructor"<<endl;
        }

        base(const base &source)
        :x{source.x}{
            //x = source.x;
            cout<<"copy constructor"<<endl;
        }

        base(base &&source) // no pointer
        :x{source.x}{
            // x = source.x;
            cout<<"move constructor"<<endl;
        }

        base &operator=(const base &rhs)
        {
            if(this == &rhs)
            {
                return *this;
            }

            x = rhs.x;
            cout<<" = operator overload called"<<endl;
            return *this;
        }

};

class derived : public base
{
    private:
        int y;

    public:
        //base::base;
        derived()
        :base{0},y{0}
        {
            cout<<"derived default constructor"<<endl;
        }

        derived(int input)
        :base{input},y{input}
        {
            cout<<"derived parametrized constructor"<<endl;  
        }

        ~derived()
        {
            cout<<"derived destructor"<<endl;
        }

        derived(const derived &pp)
        :base{pp},y{pp.y}{
            cout<<"derived copy constructor"<<endl;
        }

        derived(derived &&pp) // no pointer
        :base{pp},y{pp.y}{
            // x = source.x;
            cout<<"derived move constructor"<<endl;
        }

        derived &operator=(const derived &rhs)
        {
            if(this == &rhs)
            {
                return *this ;
            }

            base::operator=(rhs); // this is not base::operator = (rhs) , but here we are assigning the rhs value to the operator
            y = rhs.y;
            cout<<" derived = operator overload called"<<endl;
            return *this;
        }
};


int main()
{
    derived x{200}; //  will call the parametrized constructor 
    derived y{x}; // will call the copy constructor
    y = x ; // will call the = operator

    return 0;


}