#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;


int main()
{

    // using strcmp , strlen , strcat , strcpy


    string name_1 = "Pronnoy" ; // using name_1 in the str-functions will give ERROR

    // USE CHAR type

    char name_2[30] = "Pronnoy";


    //strlen
    size_t length_return = strlen("Pronnoy");
    size_t length_return_1 = strlen(name_2);
    cout << length_return <<"\t"<<length_return_1<<endl ; 


    //strcmp

    char name_3[30] = "Chowdhury";
    if(strcmp(name_2 , name_3)!=0)
    {
        cout << "names are different" <<"\t" << strcmp(name_3 ,name_2) <<endl;
    }
    else
    {
        cout << "names are same" <<"\t" << strcmp(name_2 , name_3) <<endl;
    }

    // adding the name using strcat & strcpy


    char full_name[60] {" "};

    // BELOW METHOD IS NOT GOOD --> will throw error
    // full_name = strcat(name_2," ");
    // full_name = strcat(full_name,name_3);

    // use strcpy rather

    strcpy(full_name , name_2) ;
    strcat(full_name , " ") ;
    strcat(full_name , name_3);

    cout << "the full name is" << " " << full_name << endl;


    // changing and iterating through the input 


    for(size_t i{0} ; i<strlen(full_name);i++)
    {
        if(isalpha(full_name[i]))
        {
            full_name[i] = toupper(full_name[i]);
        }
    }

    cout<<full_name<<endl;

return 0 ;

}