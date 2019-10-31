#ifndef COACH_H
#define COACH_H

#include "Person.h"
#include <string>

using namespace std;

class Coach : public Person
{
	public:
		Coach(string , int sl);
		int get_salary();
		~Coach();

	private:
		static int nextID;
		//int serviceLength;
		//int salary;
};

#endif
