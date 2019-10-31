#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(string n, string o, int sl)
{
	name = n;
	occupation = o;
	if(sl < 0)
	{
	salary = sl*-1;
	}else{
	salary = sl;
	}
}

void Person::set_name(string n)
{
	name = n;
}

void Person::set_occupation(string o)
{
	occupation = o;
}

void Person::set_salary(int sl)
{
	
	if(sl < 0)
	{
	salary = 0;
	}else{
	salary = sl;
	}
}

string Person::get_name()
{
	return name;
}

string Person::get_occupation()
{
	return occupation;
}

int Person::get_personID()
{
	return personID;
}
Person::~Person(){}

