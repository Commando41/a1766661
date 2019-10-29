#include <iostream>
#include <string>
#include "animal.h"

int animal::ID = 0;

Animal::Animal(string n, int v)
{
	name = n;
	volume = v;
	animalID = ID++;
}

int Animal::get_id()
{
	return animalID
}

int Animal::get_volume()
{
	return volume;
}

void Animal::set_volume(int v)
{
	volume = v;
}

void Animal::set_name(string n)
{
	name = n;
}

string Animal::get_name()
{
	return name;
}

Animal::~Animal()
{

}