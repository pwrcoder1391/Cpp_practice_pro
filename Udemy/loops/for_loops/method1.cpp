// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

class Singleton{
private:

// member variables
string name, loves;		

// initializing instancePtr with an
// instance(outside of this class we
// are initializing instancePtr with
// an object.)
static Singleton *instancePtr;

// Default constructor
Singleton()
{
}

public:

// deleting copy constructor.
Singleton(const Singleton &obj) = delete;
	
// returns instancePtr and instancePtr
// is pointing to an instance of
// Singleton class
static Singleton *getInstance()
{
	return instancePtr;
}

void setValues(string name,
				string loves)
{
	this->name = name;
	this->loves = loves;
}

void print()
{
	cout << name << " Loves " <<
			loves << "." << endl;
}
};


// initializing instancePtr with an instance
Singleton *Singleton ::instancePtr
	= new Singleton();

// Driver code
int main()
{
Singleton *gfg
	= Singleton::getInstance();
gfg->setValues("Learner",
				"GeeksForGeeks");
gfg->print();
cout << "Address of gfg : " <<
		gfg << endl;

// for output indentation
cout << endl;
	
Singleton *geeksForGeeks
	= Singleton::getInstance();
geeksForGeeks->setValues("Everyone",
						"GeeksForGeeks");
geeksForGeeks->print();
cout << "Address of geeksForGeeks : " <<
		geeksForGeeks << endl;

return 0;
}
