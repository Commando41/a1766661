#include <iostream>
#include <string>
#include "Hunter.h"
#include "Animal.h"
#include <vector>

int Hunter::killStreak = 0;
Hunter::Hunter(string aSpecies):Animal(aSpecies)
{
	species = aSpecies;
};

void Hunter::record_kill(string kill)
{
	victims.push_back(kill);
	killStreak++;
	
};

vector<string> Hunter::get_kills()
{
	return victims;
};

int Hunter::numberOfKills()
{
	return killStreak;
};

Hunter::~Hunter(){
	
}