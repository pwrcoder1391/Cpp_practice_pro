#include<iostream>
#include<string>

using namespace std;
int main()
{
	string x{"I am a DC fan"};
	string y{"DC"};
	size_t size_1 = x.find(y);
	if(!(size_1==string::npos))
	{
		cout<<size_1<<endl;
		cout<<"01234567890"<<endl; // reference
		cout<<x<<endl; // string 
	}
	else
	{
	}
	
	return 0;
}

	