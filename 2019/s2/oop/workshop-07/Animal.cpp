#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

int Animal::currentID = 1;
Animal::Animal(string aSpecies)
{
	species = aSpecies;
	ID = currentID;
	currentID++;
}

void Animal::set_name(string aName)
{
	name = aName;
}

string Animal::get_species()
{
	return species;
}

string Animal::get_name()
{
	return name;
}

int Animal::get_ID()
{
	return ID;
}
