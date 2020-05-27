#include <iostream>
#include <string>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
using namespace std;
//#include <stdlib.h>
//#include <stdio.h>

Referee::Referee()
{
	
}

void Referee::matchCalc(Human *player, Computer *AI)
{
	for(int i = 0; i < 5; i++)
	{
	Pchoice = player->value();
	Cchoice = AI->chosed();
		if(Pchoice[i] == 'S' && Cchoice == 'R' || Pchoice[i] == 'R' && Cchoice == 'P' || Pchoice[i] == 'P' && Cchoice == 'S')
		{
			matches = matches + "L";
		}else
		{ 
			if (Pchoice[i] == Cchoice)
			{
				matches = matches + "T";
			}else{
				matches = matches + "W";
			}
		}
	}
}

void Referee::matchCalc(Computer *AI1, Computer *AI2)
{
	for(int i = 0; i < 5; i++)
	{
		Pchoice = AI1->chosed();
		Cchoice = AI2->chosed();
		if(Pchoice[i] == 'S' && Cchoice == 'R' || Pchoice[i] == 'R' && Cchoice == 'P' || Pchoice[i] == 'P' && Cchoice == 'S')
		{
			matches = matches + "L";
		}else
		{ 
			if (Pchoice[i] == Cchoice)
			{
				matches = matches + "T";
			}else{
				matches = matches + "W";
			}
		}
	}
}

string Referee::matchResults()
{
	return matches;
}

Referee::~Referee()
{
	
}