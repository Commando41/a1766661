#include "hunter.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int Hunter::nextID = 1000;

Hunter::Hunter(string n, int v):animal(n,v)
{
	HunterID = nextID;
	nextID++;
}

void Hunter::set_kills(int killsH)
{
	kills = killsH;
}

int Hunter::get_kills()
{
	return kills;
}

void Hunter::set_name(string n)
{
	name = n;
}

string Hunter::get_name()
{
	return name;
}

Hunter::~Hunter()
{

}