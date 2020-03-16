#include <iostream>
#include <string>
#include "Computer.h"
using namespace std;

Computer::Computer()
{}

void Computer::makeDecision()
{
	decided = decided + 'R';
}

char Computer::chosed()
{
	return decided;
}

Computer::~Computer()
{}