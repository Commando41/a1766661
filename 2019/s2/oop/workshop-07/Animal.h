#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
public:
	
	string species, name;
	static int currentID;
	int ID;
	Animal(string aSpecies);
	void set_name(string aName);
	string get_species();
	string get_name();
	int get_ID();
};



#endif
