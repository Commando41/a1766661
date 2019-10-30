#include "hunter.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(string n, int v):animal(n,v)
{
	animalID = nextID;
	nextID++;
	kills = 0;
}

void hunter::set_kills(int killsH)
{
	kills += killsH;
}

int hunter::get_kills()
{
	return kills;
}

string hunter::get_name()
{
	return "Hunter: " + name;
}

hunter::~hunter()
{
}