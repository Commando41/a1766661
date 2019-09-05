#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>
using namespace std;

class meerkat
{
public:
	int age;
	string name;
	meerkat();
	void setName(string meerName);
	string getName();
	void setAge(int meerAge);
	int getAge();
	~meerkat();
};
#endif
