#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;
class animal{
	
public:
	animal(string n, int v);
//	int get_id();
	virtual string get_name() = 0;
	void set_name(string n);
	void set_volume(int v);
	int get_volume();
	int get_animalID();
	virtual ~animal();

protected:
	string name;
	int animalID;
	int volume;
};

#endif