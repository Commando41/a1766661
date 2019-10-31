#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
	public:
		Person();
		Person(string n, string o, int sl);
		void set_name(string n);
		void set_occupation(string o);
		void set_salary(int sl);
		string get_name();
		string get_occupation();
		virtual int get_salary() = 0;
		int get_personID();
		virtual ~Person();
		int get_serviceLength();

	protected:
		string name;
		string occupation;
		int salary;
		int serviceLength;
		int personID;
};

#endif
