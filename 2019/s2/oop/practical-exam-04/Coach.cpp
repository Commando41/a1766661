#include <iostream>
#include "Person.h"
#include "Coach.h"
#include <string>

using namespace std;

int Coach::nextID = 0;

Coach::Coach()
{
	personID = nextID;
	nextID++;
	occupation = "coach";
}

Coach::Coach(string n, int sl):Person(n,"coach",sl)
{
	//name = n;
	serviceLength = sl;
	occupation = "coach";
	personID = nextID;
	nextID++;
}

int Coach::get_salary()
{
	if(serviceLength < 15)
	{
		return salary;
	}else
	{
		return 3*salary;
	}
}

Coach::~Coach()
{}
