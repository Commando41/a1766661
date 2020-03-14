#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include "Human.h"
#include "Computer.h"
using namespace std;

class Referee
{
	public:
		Referee();
		void matchCalc(Human *player, Computer *AI);
		string matchResults();
		string matches;
		string Pchoice;
		int Cchoice;
		int len;
		~Referee();
};
#endif