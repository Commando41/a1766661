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
}

Coach::Coach(string n, int sl):Person(n,"Coach", sl)
{
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
