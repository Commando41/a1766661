#ifndef VEGIE_H
#define VEGIE_H
#include "animal.h"
#include <string>

class vegie : public animal
{
public:
	vegie(string n, int v);
	void set_favourite_food(string food);
	string get_favourite_food();
	~vegie();

private:
	string favourite_food;
	string name;
	int volume;
	static int nextID;
	int ID;


};

#endif