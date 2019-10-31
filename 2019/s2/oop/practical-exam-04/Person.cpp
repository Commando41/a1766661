#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(string n, string o, int sl)
{
	name = n;
	occupation = o;
	salary = sl;
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
	salary = sl;
}

string Person::get_name()
{
	return name;
}

string Person::get_occupation()
{
	return occupation;
}

Person::~Person(){}

