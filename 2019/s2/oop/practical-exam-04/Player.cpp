#include <iostream>
#include "Player.h"
#include "Person.h"

#include <string>

using namespace std;

int Player::nextID = 0;

Player::Player(string n, int sl, int *list, int m):Person(n, "player", sl)
{
	personID = nextID;
	nextID++;
	serviceLength = sl;
	time_eachg = list;
	num_of_games = m;
	
}

int searchGame(int x)
{
	for(int i = 0; i < num_of_games; i++)
	{
		if(x == list[i])
		{
			return i;
		}
	}
	return -1;
}

int get_salary()
{
	if(serviceLength < 20
	{
		return salary;
	}else{
		return salary*3;
	}
}

Player::~Player(){}
