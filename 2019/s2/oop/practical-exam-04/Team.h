#ifndef TEAM_H
#define TEAM_H

#include "Person.h"
#include "Player.h"
#include "Coach.h"

#include <string>

using namespace std;

class Team
{
	public:
	Team();
	Person**get_team();
	~Team();

	private:
	Person **team;

};

#endif


