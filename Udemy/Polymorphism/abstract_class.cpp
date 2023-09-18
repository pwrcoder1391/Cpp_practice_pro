/*

Create an abstract class which will - 
    1) have 2 levels of inheritance 
    2) 1st level will also provide somekind of virtual function 
    3) then 2nd level will be the actual concrete class 


    shape --> solid / line 
                |       |
                |      line
                circle/sqaure
*/



#include<iostream>
#include<vector>
using namespace std;
class shape
{

    private:
    // should've been something here , like between me and my ex 
    public:
        /* Pure Virtual Function (PVF) -- whats up with the superiority complex , sounds like goddamn Nazi */
        virtual void create_a_solid() = 0;
        virtual void create_a_line() = 0;

        virtual ~shape(){} // end things , thats what she said

};

class solid:public shape // should be a abstract function 
{
    public:
        // we'll expriment here , lets add another PVF and see if shit works

        virtual void siuuu() = 0 ;
        virtual ~solid(){};
};

class line:public shape // abstract function
{
    public:
    
        virtual ~line(){};
};

/* from here on we'll write concrete classes*/

class Circle:public solid
{
    public:
        virtual void create_a_solid() override
        {
            cout<<"draw  a circle \n";
        }  
        virtual void create_a_line() override
        {
            cout<<"what am i doing here \n";
        }

        virtual void siuuu() override
        {
            cout<< "siuuuuuuuuu \n";
        }
};

class Line_obj:public line
{
    public: 
        virtual void create_a_solid() override
        {
            cout<<"what am i doing here \n";
        }  
        virtual void create_a_line() override
        {
            cout<<"draw  a line \n";
        }

};

void rap_like_em (vector <shape*> zz)
{
    for(auto x:zz)
    {
       x->create_a_line();
       x->create_a_solid();
    }
       
}


int main()
{
    Circle a;

    a.create_a_line();
    a.create_a_solid();
    a.siuuu();


    shape*z;
    Circle b;
    z = &b;
    // here the z cannot access siuu() , since it is added by Solid class
    z->create_a_line();
    z->create_a_solid();


    shape* a1 = new Circle();
    shape *b1 = new Line_obj();


    vector <shape*> p = {a1,b1};

    rap_like_em(p);

    delete a1;
    delete b1;

    return 0;
}