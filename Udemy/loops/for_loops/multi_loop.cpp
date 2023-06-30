#include <vector>
#include<iostream>
using namespace std;

int main() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    vector<int> vec {2, 4, 6, 8};
    int result{0};
    int k{0};
    int sum{0};
    int i{0},j{0},vec_size{0};

    vec_size = (vec.size()-1);

    // cout<<(vec.empty()==0)<<endl;
    // cout<<(i < vec.size())<<endl;

    if(vec.empty()==0 && i <= vec_size)
    {
      
    for(i=0 ; i<=vec_size ; i++)
    {
        //for(j=0 ; j<=vec_size ; j++)
        //{
            //(i+1<=vec_size)&&
            for(j=i+1 ; j<=vec_size ; j++)
            if((vec.at(i)!=vec.at(j)))
            {
                cout<<i<<"\t"<<vec.at(i)<<"\t"<<j<<"\t"<<vec.at(j)<<endl;
                k=vec.at(i)*vec.at(j);
                sum+=k;
                
            }
            
        //}
        
        //if((vec.at(i)!=vec.at(i+1))&&(i+1<=vec_size))
        //{
            //k=vec.at(i)*vec.at(i+1);
            // sum+=k;
        // }
    }
    }
    else if(vec.empty()==0)
    {
         sum =0 ;
    }

    
    result = sum ;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << result << endl;
    return 0;
}