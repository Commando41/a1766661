#include <iostream>
#include "person.h"

using namespace std;

person::person(string myName, int mySalary)
{
	name = myName;
	salary = mySalary;
}

void person::setName(string myName)
{
	name = myName;
}

string person::getName()
{
	return name;
}

void person::setSalary(int mySalary)
{
	salary = mySalary;
}

int person::getSalary()
{
	return salary;
}

person::~person()
{
}
