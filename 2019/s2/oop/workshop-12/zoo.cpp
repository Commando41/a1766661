#include <iostream>
#include <string>
#include "zoo.h"
#include "animal.h"
#include "vegie.h"
#include "hunter.h"
using namespace std;
zoo::zoo(string n, int cows, int lions)
{
	number_of_animals = cows + lions;
	c = cows;
	h = lions;
	name = n;
	//animal[number_of_animals];
	animals = new animal*[number_of_animals];
	for(int i = 0; i < cows; i++)
	{
		animals[i] = new vegie("Daisy", 100);
	}
	for(int i = cows; i <number_of_animals; i++)
	{
		animals[i] = new hunter("Clarence", 50);
	}
}

int zoo::get_number_of_animals()
{
	return number_of_animals;
}

string zoo::get_name()
{
	return name;
}

animal **zoo::get_animals()
{
	return animals;
}

zoo::~zoo()
{
}