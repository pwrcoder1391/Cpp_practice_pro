#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<vector>


// there is a better way , here i tried to store the answers and the name---> but better way is to do everything in realtime



/*what to do - 
1. read from a file 
2. the 1st listing tells what is the key 
3. the 2nd one tells the name of the student 
4. the 3rd one tells the answer key , which we need to match with 2.


ABCDE //key
Harish //name 
BBCDE //answer 
*/

using namespace std;

int main()
{
    ifstream open_file;
    open_file.open("D:\\githib_repos\\Cpp_practice_pro\\Udemy\\streams\\Sectional_Challenges\\Test_result.txt");
    char c {};
    string key{};
    string name{};
    string answer{};
    vector<string>result{};


    if(!open_file)
    {
        cout<<"couldnt find the file"<<endl;
        return 1;
    }
    int count = 0 ; // 0 = key , odd = name , even = answer
    while(!open_file.eof())
    {
        open_file.get(c);
        if(count == 0)
        {
            key.push_back(c); 
        }

        if(count!=0)
        {
           if((count%2))
            {
                answer.push_back(c);
            }
            else
            {
                name.push_back(c);
            }
        }

        if(c=='\n')
        {   
            if((count!=0))
            {
                if((count%2))
                {
                    result.push_back(answer); 
                    count++;
                    answer.clear();
                }
                else
                {
                    result.push_back(name);
                    count++;
                    name.clear();
                }
            }
            
            if(count==0)
            {
                count++;
            }    
            //cout<<count;
        }

    }

    // for(auto c:result)
    //     cout<<c;

    for(int i = 0; i<result.size();i++)
    {
        int num_count = 0; //using for result
        if((i%2))
        {
            //cout<<result[i];
            answer = result[i];
            for(int j=0;j<key.size();j++)
            {
                //cout<<key[j];
                if(key[j]==answer[j])
                {
                    num_count++;
                    //cout<<num_count;
                    //cout<<"a";
                }
                else{

                }
                
            }
            result[i]=to_string(num_count);
        }
        //cout<<result[i]<<endl;
    }


    cout<<"name"<<setw(10)<<"score"<<endl;

    int count2 = 0;
    for(auto x:result)
    {
     if(count2%2)
     {
        cout<<setw(10)<<x;
     }  
     else
     {
        cout<<x;
     } 
    }

    return 0;

}