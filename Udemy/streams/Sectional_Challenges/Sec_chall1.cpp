/*

Need to print Country , city , population and amount 

// need to declare them in structure

Structure - 
Tours To South America
    Countries 
        Cities 
            Population 
            Cost (for a city)

*/
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
    
    struct City{
        string Name;  
        double population;
        double cost;
    };
    
    struct Country{
        string Name; // name of country (// is in different structure , hence it can have same "Name")
        vector<City> City_input;
    };

    struct Continent{
        string title;
        vector<Country> input;
    };

    cout<<"1234567890123456789012345678901234567890"<<endl;
    //cout<<"=================== Welcome to South America ===================";

    // vector<Continent> a; 

    // instead of using vectors for the main structure , we are using vectors inside of the main structure

    // New way to input - 

    Continent Tours = { "Welcome to South America" ,{
        { "Brazil" ,{{"Rio de Janeiro",67500000, 55.5} ,{"Rio de Janeiro",67500000, 55.5} ,{"Rio de Janeiro",67500000, 55.5}}},
        { "Argentina" ,{{"Buenos Aires",15624000,52.6}, {"Buenos Aires",15624000,52.6},{"Buenos Aires",15624000,52.6}}},
        {"Colombia" ,{{"Bogota",12772828,54.2} ,{"Bogota",12772828,54.2},{"Bogota",12772828,54.2}}}
        }};


    cout<<setw(38)<<Tours.title;

    cout<<endl;

    for(auto Country:Tours.input)
    {
        cout<<right<<setw(3)<<Country.Name;
        cout<<left<<setw(20)<<Country.City_input[0].Name;
        cout<<right<<setw(3)<<setprecision(20)<<Country.City_input[0].population;
        cout<<right<<setw(3)<<setprecision(5)<<Country.City_input[0].cost<<endl;
        //cout<<((Country.City_input).size());
        for(auto i = 1 ; i<=(((Country.City_input).size()-1));i++)
        {
            cout<<right<<setw(18)<<Country.City_input[i].Name;
            cout<<right<<setw(29)<<setprecision(20)<<Country.City_input[i].population;
            cout<<right<<"\t"<<setprecision(5)<<Country.City_input[i].cost<<endl;
        }
    }


    cout<<endl;
    return 0;

}