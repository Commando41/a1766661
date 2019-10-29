#include <iostream>
#include <string>
#include "animal.h"

int animal::ID = 0;

animal::animal(string n, int v)
{
	name = n;
	volume = v;
	animalID = ID++;
}

int animal::get_id()
{
	return animalID
}

int animal::get_volume()
{
	return volume;
}

void animal::set_volume(int v)
{
	volume = v;
}

void animal::set_name(string n)
{
	name = n;
}

string animal::get_name()
{
	return name;
}

animal::~animal()
{

}