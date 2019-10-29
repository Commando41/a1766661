#include <iostream>
#include "animal.h"
#include "vegie.h"
#include <string>

using namespace std;

int vegie::nextID = 0;

vegie::vegie(string n, int v):animal(n,v)
{
	favourite_food = "grass";
	animalID = nextID;
	nextID++;
	kills=0;
}

void vegie::set_favourite_food(string food)
{
	favourite_food = food;
}

string vegie::get_favourite_food()
{
	return favourite_food;
}

string vegie::get_name()
{
	return "Safe: " + name;
}

vegie::~vegie()
{

}