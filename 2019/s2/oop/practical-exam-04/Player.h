#ifndef PLAYER_H
#define PLAYER_H

#include "Person.h"

#include <string>

using namespace std;

class Player : public Person
{
	public:
		Player();
		Player(string n, int sl, int *list, int m);
		int searchGame(int x);
		int get_salary();
		~Player();
	private:
		static int nextID;
		int num_of_games;
		int *time_eachg;
};

#endif
