#include <iostream>
#include "Person.h"
#include "Coach.h"
#include <string>

using namespace std;

int Coach::nextID = 0;

Coach::Coach()
{
	salary = 0;
	personID = nextID;
	nextID++;
	serviceLength = 0;
	name = "";
	occupation = "";
}

Coach::Coach(string n, int sl):Person(n,"Coach", sl)
{
	personID = nextID;
	nextID++;
	serviceLength = sl;
	salary = 0;
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
