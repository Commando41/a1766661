#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include <string>
using namespace std;

class hunter : public animal
{
public:
	hunter(string n, int v);
	int get_kills();
	void set_kills(int killsH);
	~hunter();
	string get_name();
	//void set_name(string n);

private:
	int kills;
	static int nextID;
	//string name;
	//int volume;
	//int HunterID;

};

#endif