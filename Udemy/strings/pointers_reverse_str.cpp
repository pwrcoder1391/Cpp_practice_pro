#include<iostream>
#include<string>

using namespace std;



int main()
{
    string str = {"Hello World !"};
    
    string reverse("\0",str.size());

    int size  = str.size();
    int k =0 ;
    for(int i{} ; i<str.size();i++)
    {
        if(k>0)
        {
        reverse.at(i)=str.at(k);
        k = size-i-1;
        }
    }

    cout<<reverse<<endl;
    //EMERGENCY ----> //rev_str(str);

    return 0 ;
}



/*
ONLY IN EMERGENCY 

                                                        string rev_str(string &str)
                                                        {
                                                            int los = str.length();
                                                            for(int i{} ; (i<los/2) ; i++)
                                                            {
                                                                swap(str[i],str[los-i-1]);
                                                            }
                                                            cout<<str;
                                                        }

*/