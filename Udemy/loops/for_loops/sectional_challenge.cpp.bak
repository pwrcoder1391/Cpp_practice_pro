#include<iostream>
#include<vector>

//using namespace std;

int main()

{

    //pronnoy - 1st things 1st , we need a place to store our input 

    std::vector <int> my_input {};

    /*pronnoy - we do not need to declare it again , if anything we need to 
        update the list or 
        add to the list or 
        clear list or 
        do any arthematic operations in it 
    */


   
    char user_request ; 
    std::cout << "Please enter your choices"<<std::endl;
    std::cout << "P - Print Numbers" << std::endl;
    std::cout << "A - Add a Number" << std::endl;
    std::cout << "M - Display the mean of numbers" << std::endl;
    std::cout << "S - Display the smallest of numbers" << std::endl;
    std::cout << "L - Display the largest of numbers" << std::endl;
    std::cout << "Q - Quit" << std::endl;


    std::cin >> user_request;

    //pronnoy - in case the user enters 'q' the system wont go in at all , otherwise the system enters switch-case statement and then work according to the cases present --> if user enters something other than present cases (except q) --> then it goes to default and then breaks and goes into the parent while loop and asksq user to input again --> this will go on until user enters 'q'
    int condition_1 = 1 ;


    // thing to keep in mind - when we are trying to FAIL the loop to get out of the loop use AND rather than OR  , if we use OR here then atleast one of them will be true


    while(user_request!='q'&&user_request!='Q'&& condition_1 == 1)
    {

        
        switch(user_request)
        {
            case 'p':
            case 'P':
                    { // printing of numbers  


                        std::cout << "The numbers are  - " ;
                        std::cout<<"[ ";
                        for(size_t i{} ; i<my_input.size() ; i++)
                        {
                            std::cout << my_input.at(i) << " ";
                        }
                        std::cout<<" ]"<<std::endl;
                        
                    }
                    break ;
            case 'a':
            case 'A':
                    { // adding of numbers

                        int input_number{};
                        std::cout<< "input the number " << std::endl;
                        std::cin>>input_number;
                        my_input.push_back(input_number);
                        
                    }
                    break ;
            case 'm':
            case 'M':
                    { // displaying mean of numbers
                        if(my_input.size()!=0)
                        {
                        int sum = 0;
                        for(size_t i{} ; i<my_input.size() ; i++)
                        {
                            sum +=my_input.at(i);
                        }
                        std::cout<<"the mean is = "<<(sum/my_input.size())<<std::endl;
                        }
                        else{
                            std::cout<<"no mean to calculate" << std::endl ;
                        }
                        
                    }
                    break ;
            case 's':
            case 'S':
                    { // displaying the smallest number

                        int init = 0;
                        for(size_t i{} ; i<my_input.size() ; i++)
                        {
                            init = my_input.at(i);
                            for(size_t j{} ; j<my_input.size() ; j++)
                            {
                                if (init>my_input.at(j))
                                {
                                    init = my_input.at(j); 
                                }
                                else 
                                {
                                    // do nothing
                                }
                            }

                        }

                        std::cout<<"The smallest number is "<< init << std::endl;
                        
                    }
                    break ; 
            case 'l':
            case 'L':
                    { // displaying the largest number

                        int init = 0;
                        for(size_t i{} ; i<my_input.size() ; i++)
                        {
                            init = my_input.at(i);
                            for(size_t j{} ; j<my_input.size() ; j++)
                            {
                                if (init<my_input.at(j))
                                {
                                    init = my_input.at(j); 
                                }
                                else 
                                {
                                    // do nothing
                                }
                            }

                        }
                        std::cout<<"The largest number is "<< init << std::endl;
                    }
                    break ;
            case 'q':
            case 'Q':
                    {
                        std::cout<<"goodbye ! "<<std::endl ; 
                        condition_1 = 0 ;
                    }
                    break;
            default:
                std::cout<<"wrong choice , try again!";
                break;     
        // there is no Q case , since it is taken care by While loop
        }
        
        std::cout << "Please enter your choices"<<std::endl;
        std::cout << "P - Print Numbers" << std::endl;
        std::cout << "A - Add a Number" << std::endl;
        std::cout << "M - Display the mean of numbers" << std::endl;
        std::cout << "S - Display the smallest of numbers" << std::endl;
        std::cout << "L - Display the largest of numbers" << std::endl;
        std::cout << "Q - Quit" << std::endl;

        std::cin >> user_request;
        // pronnoy - enters the loop , will be here untill q/Q is pressed 

    
    // pronnoy - this will again take the user request , but will again check in the while loop for Q/q , if not found will go to switch-case

    }

return 0 ;
}