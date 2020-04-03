#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;

class Human
{
	public:
		Human();
		string Pchoice;
		void takeLnput(string decision);
		string value();
		~Human();
};

#endif