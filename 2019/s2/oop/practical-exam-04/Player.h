#ifndef PLAYER_H
#define PLAYER_H

#include "Person.h"

#include <string>

using namespace std;

class Player : Person
{
	public:
		Player(string n, int sl, int *list, int m);
		int searchGame(int x)
		int get_salary();
		~Player();
	private:
		static nextID;
		int num_of_games;
		*time_eachg;
};

#endif
