#include<iostream>

using namespace std;

class Base 
{
	public:
		
		void show_something() const
		{
			cout<<"hello this is base \n";
		}
};

class Derived: public Base 
{
	public:
		
		void show_something() const
		{
			cout<<"hello this is derived \n";
		}
};


void say_shit(const Base &obj)
{
	obj.show_something();
}

int main()
{
	Derived x;
	x.show_something(); //prints - hello this is Derived
	
	Base y;
	y.show_something(); //prints - hello this is base

	Base*ptr = new Derived();
	ptr->show_something(); //should've printed - hello this is derived , but prints - hello this is base
	
	say_shit(x); // should've printed - hello this is derived , but prints - hello this is base
	say_shit(y); // prints - hello this is base
	
	return 0;
}
