#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person
{
public:
	string name;
	int salary;
	person(string myName, int salary);
	void setName(string myName);
	string getName();
	void setSalary(int mySalary);
	int getSalary();
	~person();
};
#endif
	
