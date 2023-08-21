#include<iostream>
#include<string>

using namespace std;

class Movie
    {

    private:
        string movie_name;
        string movie_rating;
        int movie_count_buffer;
        static int movie_count;
    
    public:

        Movie(string movie_name_in , string movie_rating_in , int movie_count_in)
            :movie_name(movie_name_in),movie_rating(movie_rating_in), movie_count_buffer(movie_count_in)
        {
            for(int i=0;i<movie_count_buffer;i++)
            {
              incrementer_func();
            }
        }

        static void incrementer_func()
        {
            movie_count++;
        }

        

    };