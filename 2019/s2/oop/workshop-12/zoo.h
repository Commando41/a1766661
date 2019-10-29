#ifndef ZOO_H
#define ZOO_H
#include <string>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
using namespace std;

class zoo{
public:
	zoo(string n, int cows, int lions);
	//string get_name();
	int get_number_of_animals();
	animal **get_animals();
	string get_name();
	~zoo();


private:
	string name;
	int number_of_animals;
	animal **animals;
	int c;
	int h;
};

#endif