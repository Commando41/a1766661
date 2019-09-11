#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
public:
	
	Animal(string aSpecies);
	string species, name;
	static int currentID;
	int ID;
	
	void set_name(string aName);
	string get_species();
	string get_name();
	int get_ID();
	//~Animal();
};

#endif
