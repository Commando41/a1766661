#include <iostream>
#include "Person.h"
#include "Coach.h"
#include <string>

using namespace std;

int Coach::nextID = 0;

Coach::Coach(string n, int sl):Person(n,"Coach", sl)
{
	personID = nextID;
	nextID++;
	serviceLength = sl;
	if(sl < 0)
	{
		salary = 0;
	}
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
