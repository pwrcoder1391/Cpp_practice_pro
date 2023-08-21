#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Movie
    {

    private:
        string movie_name;
        string movie_rating;
        int movie_count;
        static int movie_index;
    
    public:

        Movie(string movie_name_in , string movie_rating_in , int movie_count_in) // every time new object is formed
            :movie_name(movie_name_in),movie_rating(movie_rating_in), movie_count(movie_count_in)
        {
            movie_index++;
        
        }

        void increment_movie_count(string movie_name)
        {
            movie_count++;
        }

        void list()
        {
            for(int j = 0 ; j<=movie_count ; j++)
            {
                if(this->movie_count == j)
                {
                    cout<<"Movie name"<<movie_name<<endl;
                    cout<<"Movie rating"<<movie_rating<<endl;
                    cout<<"Movie count"<<movie_count<<endl;
                }
            }
        }
    
    };




int main()
{
    vector<Movie>Movie_List;
    string movie_name;
    string rating;
    int times_watched;

    while(true)
    {

    int choice;
    cout<<"enter the choice";
    cin>>choice;


        switch (choice)
        {
        case 1:
            
            break;
        
        default:
            break;
        }
    }

}

       
      