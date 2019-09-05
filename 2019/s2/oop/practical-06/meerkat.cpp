#include <iostream>
#include "meerkat.h"

using namespace std;

meerkat::meerkat()
{
	name = "?";
	age = 1;
}

void meerkat::setName(string meerName);
{
	name = meerName;
}

string meerkat::getName()
{
	cin >> name;
}

void meerkat::setAge(int meerAge)
{
	age = meerAge;
}

int meerkat::getAge();
{
	cin >> age;
}

meerkat::~meerkat()
{
}
