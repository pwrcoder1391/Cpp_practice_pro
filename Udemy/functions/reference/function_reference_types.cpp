#include<iostream>
#include<string>
#include<vector>



using namespace std;

/* idea is to create function of all return type and see 
what we can do with them*/

// string 
string &string_function(string &s_ptr)
{
	cout<<"we are in string function"<<" argument given = "<<*s_ptr<<endl;
	
	s_ptr = "update";
	return s_ptr;
}


// array
int &array_function(int&x_arr)
{
	cout<<"we are in array function"<<" argument given = "<<x_arr<<endl;
	x_arr[2]=55;
	return x_arr;
}

char &char_function(char&r_ptr)
{
	cout<<"we are in char function"<<" argument given = "<<r_ptr<<endl;
	*r_ptr[3] = 'p';
	return r_ptr;
}



int main()
{
	
	int x = 100;
	int *x_ptr = &x;
	char r = 'c' ;
	char* r_ptr = "this is char";
	char r_arr[] = "this is array of char"; // done
	char *r_arr_ptr = r_arr;// done
	string s = "this is string";// done
	string *s_ptr = &s; // done
	int x_arr[]={1,2,3,4}; // done
	int*ptr_arr = x_arr; // done
	/*need to add vector*/
	
	
	// string
	cout<<s<<endl;
	cout<<*s_ptr<<endl;
	string_function(s);
	cout<<s<<endl;
	cout<<*s_ptr<<endl;
	
	
	//array
	for(int i=0;i<=(sizeof(x_arr)/sizeof(x_arr[0]));i++)
		cout<<x_arr[i]<<endl;
	
	cout<<"------ update array -------"<<endl;
	array_function(x_arr);
	for(int i=0;i<=(sizeof(x_arr)/sizeof(x_arr[0]));i++)
		cout<<x_arr[i]<<endl;
	

	// char function
	cout<<*r_ptr<<endl;
	char_function(*r_ptr);
	cout<<*r_ptr<<endl;
	
}
	
	
	
	
	
	
	
	
	
	