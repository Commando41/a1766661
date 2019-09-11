#ifndef HUNTER_H
#define HUNTER_H
#include <string>
using namespace std;
#include "Animal.h"
#include <vector>
class Hunter : public Animal
{
public:


	Hunter(string aSpecies);
	void record_kill(string kill);
	int numberOfKills();
	//string * get_kills();
	vector<string> victims;
	//string * get_kills();
	vector<string> get_kills();
	static int killStreak;
	~Hunter();
};

#endif