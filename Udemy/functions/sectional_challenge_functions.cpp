#include<iostream>
#include<vector>
#include<cctype>

/*
What we need to do - 
1. Print Numbers 
2. Add a number 
3. display mean of the number 
4. display smallest number 
5. display largest number 
6. quit
*/

/*will return by printing the menu and will take in a character*/
void menu_print();

/*here the function will run , where various other functions will be called*/
// void choose_menu(std::vector<int>x , char c);

/*will print the vector of the numbers*/
void print_list(std::vector<int>x);

/*will input the value passed to it --- also shall we input the number in the function or shall we pass to it ??*/
int input_list(std::vector<int>&x);

/*will print the mean of the list */
void mean_list(std::vector<int>x);

/*will print the smallest number in the function*/
void smallest(std::vector<int>x);

/*will return the largest numebr in the function*/
void largest(std::vector<int>x);


int main()
{
    std::vector<int>input_vec{};

    char choice{};

    
    menu_print();
    
    std::cin>>choice;
    
    while(toupper(choice)!='Q')
    {
        switch(toupper(choice))
        {
            case 'P':
                {
                    if(input_vec.size() != 0)
                    {
                        print_list(input_vec);
                    }
                    else
                    {
                        std::cout<<"vector is empty"<<std::endl; 
                    }
                    
                }
                break;
            case 'A':
                {
                    input_list(input_vec);
                }
                break;
            case 'M':
                {
                    if(input_vec.size() != 0)
                    {
                    mean_list(input_vec);
                    }
                    else
                    {
                        std::cout<<"vector is empty"<<std::endl; 
                    }
                }
                break;
            case 'S':
                {   
                    if(input_vec.size() != 0)
                    {
                    smallest(input_vec);
                    }
                    else
                    {
                        std::cout<<"vector is empty"<<std::endl; 
                    }
                }
                break;
            case 'L':
                {
                    if(input_vec.size() != 0)
                    {
                    largest(input_vec);
                    }
                    else
                    {
                        std::cout<<"vector is empty"<<std::endl; 
                    }
                }
                break;
            case 'Q':
                break;
            default:
                std::cout<<"choice not right , choose again " << std::endl;
                break;
        }
        menu_print();
        std::cin>>choice;
    }

    return 0 ;


}

void menu_print()
{
    std::cout<<"enter your choice"<<std::endl;
    std::cout << "Please enter your choices"<<std::endl;
    std::cout << "P - Print Numbers" << std::endl;
    std::cout << "A - Add a Number" << std::endl;
    std::cout << "M - Display the mean of numbers" << std::endl;
    std::cout << "S - Display the smallest of numbers" << std::endl;
    std::cout << "L - Display the largest of numbers" << std::endl;
    std::cout << "Q - Quit" << std::endl;

}

int input_list(std::vector<int>&x)
{
    int input_number{};
    std::cout<<"enter the number" << std::endl ; 
    std::cin>>input_number;
    x.push_back(input_number);
    return 0 ;
}

void print_list(std::vector<int>x)
{
    std::cout<<"[ ";
    for(size_t i{} ; i<x.size();i++)
    {
        std::cout << x.at(i) << "  " ;
    }
    std::cout<<" ]"<<std::endl;

}


void mean_list(std::vector<int>x)
{
    int sum{};
    for(size_t i{} ; i<x.size();i++)
    {
        sum += x.at(i);
    }

    std::cout<<"the mean of the list is - "<<(static_cast<double>(sum)/x.size())<<std::endl ;  
}

void smallest(std::vector<int>x)
{
    int init {} ;
    for(size_t i{} ; i<x.size();i++)
    {
        init = x.at(i);
        for(size_t j{} ; j<x.size();j++)
        {
            if(init > x.at(j))
            {
                init = x.at(j);
            }
            else
            {
                // do nothing
            }

            
        }
    }

    std::cout<<"the smallest number of the list is - "<< init <<std::endl ;

}

void largest(std::vector<int>x)
{
    int init {} ;
    for(size_t i{} ; i<x.size();i++)
    {
        init = x.at(i);
        for(size_t j{} ; j<x.size();j++)
        {
            if(init < x.at(j))
            {
                init = x.at(j);
            }
            else
            {
                // do nothing
            }

            
        }
    }

    std::cout<<"the largest number of the list is - "<< init <<std::endl ;

}