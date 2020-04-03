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
	Pchoice = player->value();
	Cchoice = AI->chosed();
	//len = atoi(Pchoice[0]);  //atoi converts the char element in the string to integer
	len = Pchoice[0] - 46;

	for(int i = 2; i < len; i++)
	{
		if(Pchoice[i] == 'S' && Cchoice == 'R' || Pchoice[i] == 'R' && Cchoice == 'P' || Pchoice[i] == 'P' && Cchoice == 'S')
		{
			matches = matches + "L ";
		}else
		{ 
			if (Pchoice[i] == Cchoice)
			{
				matches = matches + "T ";
			}else{
				matches = matches + "W ";
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