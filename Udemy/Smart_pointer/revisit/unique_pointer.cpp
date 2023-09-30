#include<memory>
#include<iostream>
#include<vector>

using namespace std;

/*
Experiments with unique pointer 

- Simple unique pointer
- Unique pointer of object 
- Unique pointer of vector 


*/

/*we can only transfer the ownership of the unique_pointer we cannot copy it*/

class Song
{
    public:
        wstring artist;
        wstring song;

        // construtctor

        Song(wstring in_artist ,wstring in_song):artist{in_artist},song{in_song}
        {
            cout<<"contructor used"<<endl;
        }

        /*void input(wstring in_artist ,wstring in_song)
        {
            artist.assign(in_artist);
            song.assign(in_song);
        }*/

        void Display()
        {
            wcout<<artist<<"\t"<<"-"<<song<<endl; // wcout cause its a wide string or wstring
        }

        ~Song()
        {
            //destructor
        }
};



unique_ptr<Song> output (const wstring& artist , const wstring& song)
{   
    /* This function takes in wstrings and returns unique_ptr , but here it is returing with a make_unique()-->which declares and allocates to the unique pointer*/


    return make_unique<Song>(artist,song); // **uses constructor 
}

int main()
{
    // 2 ways of declaring the pointer  
    unique_ptr<int> x = make_unique<int>(30); // this is preferrable <source - Microsoft>
    unique_ptr<int> y{new int{55}};

    // we need to display the value in the pointer 

    cout<<*x<<endl;

    cout<<*y<<endl;

    // -------------- FUNCTION --------------------
    /*here we'll see how function can make_pointer()*/

    auto Song1 = output(L"Seedhe Maut",L"Khatta Flow"); // 'L' is required for the wide String operation

    // above output is taking in argument and returning it as "make_pointer" 
    // in windows its better to use wide string

    Song1->Display(); // cannot use the "." since its not an object , its an object-pointer





    // ---------------VECTOR-----------------
    /* now lets see what we can do for a pointer of vector type*/

    unique_ptr<vector<int>> vec = make_unique<vector<int>>(0); // see here we got the vector in () rather than {}

    //better to initialize the pointer using make_unique or else , the program crashes 

    // here the make_unique is making the objects mentioned in  "()" -- eg if we mention --make_unique<vector<int>>(2) , 2 objects will be made in the vector with value = 0 

    vec->push_back(move(55));
    vec->push_back(move(85));

    for (auto x:*vec) 
    {
        //cout<<"vector"<<endl;
        cout<<x<<endl;
    }



        
    return 0;
}

