#include <iostream>
#include <string>
using namespace std;
#include "Human.h"

Human::Human()
{
	
}

void Human::takeLnput(string decision)
{
	Pchoice = decision;
}

string Human::value()
{
	return Pchoice;
}

Human::~Human()
{}