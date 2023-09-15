#include<iostream>
#include<vector>

using namespace std;

class Account
{
    public:
        /*defining the virtual function is necessary - here in the BASE CLASS
        
        */
        virtual void Show_shit(int z) const{ // this is virtual function

            cout<< "in account \n";
        }

        virtual ~Account()
        {
            
            cout<< "destructor in account \n";
        }
};

class Saving : public Account
{
    public:

        /*If the function is not same as the base class -- then this function will become STATICALLY BINDED*/

        virtual void Show_shit(int z) const{ // here we can use "override" specifier --> to check if the Function is similar to virtual function mentioned in the base class

            cout<< "in saving \n";
        }

        virtual ~Saving()
        {
           cout<< "destructor in saving \n"; 
        }
};

class Trust : public Account
{
    public:

        virtual void Show_shit(int z) const{

            cout<< "in Trust \n";
        }


        virtual ~Trust()
        {
            cout<< "destructor in Trust \n";
        }
};


int main()
{

    Account* p1 = new Account();
    Account* p2 = new Saving();
    Account* p3 = new Trust();

    /*3 ways of summoning these pointers*/

    p1->Show_shit(300);
    p2->Show_shit(300);
    p3->Show_shit(300);


    // ARRAY 

    Account* arr_p[] = {p1,p2,p3};

    for(auto i=0 ; i<3;i++ )
    {
        arr_p[i]->Show_shit(300);
    }


    // VECTORS

    vector <Account*> vec_p = {p1,p2,p3};

    for(auto it:vec_p)
        it->Show_shit(300);



    delete p1;
    delete p2;
    delete p3;

    return 0;
}
