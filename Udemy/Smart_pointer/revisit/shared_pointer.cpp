#include<memory>
#include<iostream>
#include<vector>

using namespace std;


int main()
{
    shared_ptr<int> sp = make_shared<int>(5);

    cout<<*sp<<endl;

    shared_ptr<int>sp2{sp};

    cout<<"shared pointer sp2" <<"\t"<<*sp2<<endl;


    /*-------------VECTOR------------*/

    shared_ptr<vector<int>> vec = make_shared<vector<int>>(0);
    // same as unique pointer , make_shared<vector<int>>(<contains number of elements>)

    vec->push_back(5);
    vec->push_back(3);
    vec->push_back(6);

    for(auto x:*vec)
    {
        cout<<"vector"<<endl;
        cout<<x<<endl;
    }

    return 0;
}