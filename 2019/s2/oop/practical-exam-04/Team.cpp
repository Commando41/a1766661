#include <iostream>
#include "Person.h"
#include "Coach.h"
#include "Player.h"
#include "Team.h"
#include <string>

using namespace std;

Team::Team()
{
	team = new Person*[5];
	for(int i = 0; i < 5; i++)
	{
		if(i == 0 || i== 4)
		{
			team[i] = new Coach("Larry","Coach",50);
		}else{
			team[i] = new Player("Harry", "Coach", 20);
		}
	}
}

Person **Team::get_team()
{
	return team;
}

Team::~Team()
{
}
