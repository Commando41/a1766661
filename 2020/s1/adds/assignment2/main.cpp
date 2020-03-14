#include <iostream>
#include <string>
using namespace std;
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
int main()
{
	
	Human *player = new Human();
	Computer *AI = new Computer();
	Referee *ref = new Referee();

	string take;
	getline(cin,take);
	player->takeLnput(take);
	AI->makeDecision();
	ref->matchCalc(player,AI);
	cout << ref->matchResults() << endl;

	delete player;
	delete AI;
	delete ref;

	return 0;
}