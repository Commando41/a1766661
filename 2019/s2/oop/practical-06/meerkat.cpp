#include <iostream>
#include "meerkat.h"

using namespace std;

meerkat::meerkat()
{
	name = "?";
	age = 1;
}

void meerkat::setName(string meerName)
{
	name = meerName;
}

string meerkat::getName()
{
	return name;
}

void meerkat::setAge(int meerAge)
{
	age = meerAge;
}

int meerkat::getAge()
{
	return age;
}

meerkat::~meerkat()
{
}
