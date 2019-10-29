#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
class animal{
	
public:
	animal(string n, int v);
	int get_id();
	virtual string get_name() = 0;
	void set_name(string n);
	void set_volume(int v);
	int get_volume();
	int get_ID();
	~animal();
//protected:

private:
	
	//static int ID;
	string name;
	int animalID;
	int volume;

};