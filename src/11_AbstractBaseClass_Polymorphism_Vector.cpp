//============================================================================
// Name        : 11_AbstractBaseClass_Polymorphism_Vector.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <vector>
#include "Oil.h"
#include "Water.h"

const int HOW_MANY=5;
using namespace std;

//forward declaration
void populate(vector<Liquid*> &myVector);
void identify(vector<Liquid*> &myVector);
void cleanup(vector<Liquid*> &myVector);


int main()
{
	//create the vector of BASE CLASS POINTERS
	vector<Liquid*> myVector;
	populate(myVector);
	identify(myVector);
//	cleanup(myVector);			//comment this out and run Profiling Tools->Profile with Valgrind to see memory leaks
}

//stuff a bunch of oil and water into the vector
//refered to by BASE CLASS pointer only
void populate(vector<Liquid*> &myVector)
{
	for (int i = 0; i < HOW_MANY; i++)
	{
		myVector.push_back(new Oil);
		myVector.push_back(new Water);
	}
}

//ACCESS VIA BASE CLASS POINTER ONLY
//vector full of different stuff
//but everything accessed correctly 
//via the magic of virtual functions 
void identify(vector<Liquid*> &myVector)
{
	for(std::vector<Liquid*>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
		(*it)->whoAmI();
	}
}

//lets get rid of the memory the pointers point to before the vector goes out of scope
void cleanup(vector<Liquid*> &myVector)
{
	for(std::vector<Liquid*>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
		delete (*it);
	}
}
