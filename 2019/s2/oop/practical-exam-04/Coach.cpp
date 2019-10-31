#include <iostream>
#include "Person.h"
#include "Coach.h"
#include <string>

using namespace std;

int Coach::nextID = 0;

Coach::Coach(string n, int sl):Person(n,sl)
{
	personID = nextID;
	nextID++;
}

int get_salary()
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
