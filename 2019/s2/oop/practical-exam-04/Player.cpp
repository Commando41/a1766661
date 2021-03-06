#include <iostream>
#include "Player.h"
#include "Person.h"

#include <string>

using namespace std;

int Player::nextID = 1000;

Player::Player(){
	personID = nextID;
	nextID++;
}

Player::Player(string n, int sl, int *list, int m):Person::Person(n, "player", sl)
{
	personID = nextID;
	nextID++;
	time_eachg = list;
	num_of_games = m;
	
}

int Player::searchGame(int x)
{
	for(int i = 0; i < num_of_games; i++)
	{
		if(x == time_eachg[i])
		{
			return i;
		}
	}
	return -1;
}

int Player::get_salary()
{
	if(serviceLength < 20)
	{
		return salary;
	}else{
		return salary*3;
	}
}

Player::~Player(){}
