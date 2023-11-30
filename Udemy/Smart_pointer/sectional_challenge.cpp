#include<iostream>
#include<memory>
#include<vector>

/*
Requirement - 

    Here the requirement is that we need to make , fill  and display - objects of Account to 
    a vector , but the vector operations needs to be done using pointer and the elements of 
    vector would be pointer to Account type ... 
    
     

*/
using namespace std;




class Test{
    private:
        int x;
    public:
        Test():x{0}{} //default constructor 
        Test(int in):x{in}{} // param constructor
        int getData(){cout<<x<<endl;} // function
        ~Test(){} // destructor

};


// function prototype


auto make(); // why auto --> the auto will automatically detect the return type 
auto fill(vector<shared_ptr<Test>>&,int);
auto show(vector<shared_ptr<Test>>&);



auto make() // return type will be --> unique<vector<shared_ptr<Test>>>
{
    return make_unique<vector<shared_ptr<Test>>>(); // this will initialize using default constructor
}

auto fill(vector<shared_ptr<Test>> &vec_in,int a)
{
    // shared_ptr<Test> temp = make_shared<Test>(a); // alternate -- "(a)" could be multiple dependent on the constructor
    vec_in.push_back(make_shared<Test>(a));
    return 0;
    //since the vector is passed as reference we are basically operating in the same vector
}

auto show(vector<shared_ptr<Test>>& vec_in)
{
    for(auto x:vec_in)
        {
            shared_ptr<Test> p;
            p = x;
            p->getData();
        }
}

/* need 3 function to fill , view and make*/

int main()
{
    unique_ptr<vector<shared_ptr<Test>>> p;
    p = make();
    cout<<"enter the value to be inputed :"<<"\t";
    int x;
    cin>>x; // this was supposed to be number of inputs we need to give , but we changed to make it as input


    fill(*p,x); // dereferencing and sending the value --> if we derefernce the pointer then it'll become a --> vector containing shared pointer which points at Test object

    show(*p);

    return 0;
}
