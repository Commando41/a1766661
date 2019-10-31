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
	occupation = "Coach";
}

Coach::Coach(string n, int sl)
{
	name = n;
	serviceLength = sl;
	occupation = "Coach";
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
		return salary*3;
	}
}

Coach::~Coach()
{}
