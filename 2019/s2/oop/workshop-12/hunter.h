#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include <string>
using namespace std;

class Hunter : public animal
{
public:
	Hunter(string n, int v);
	int get_kills();
	void set_kills(int killsH);
	~Hunter();
	string get_name();
	void set_name(string n);

private:
	int kills;
	static int nextID;
	string name;
	int volume;
	int HunterID;

};

#endif