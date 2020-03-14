#include <iostream>
#include <string>
#include "Computer.h"
using namespace std;

Computer::Computer()
{}

void Computer::makeDecision()
{
	decided = 1;
}

int Computer::chosed()
{
	return decided;
}

Computer::~Computer()
{}