#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

class meerkat
{
public:
	meerkat();
	void setName(string meerName);
	string getName();
	void setAge(int meerAge);
	int getAge();
	~meerkat();
};
#endif
