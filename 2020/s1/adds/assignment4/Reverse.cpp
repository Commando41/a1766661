#include <iostream>
#include <string>
#include "Reverse.h"
using namespace std;


int Reverse::rN = 0;

Reverse::Reverse()
{
	
}

int Reverse::reverseDigit(int value)
{ 
	if(value < 0)
	{
		cout << "ERROR ";
		break;
	}
	if(value > 0)
	{
		r = value % 10;
		rN = rN*10 + r;
		return (*this)(value/10);
	}
	rN = 0;
	return rN;

}

string Reverse::reverseString(string letters)
{
	len = letters.length();
	if(len == 1)
	{
		return letters;
	}
	char tempChar = letters[len-1];
	letters.pop_back();
	return tempChar + (*this)(letters);
}

Reverse::~Reverse()
{
	
}