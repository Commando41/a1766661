#include <iostream>
#include <string>
using namespace std;
#include "Fibonacci.h"

Fibonacci::Fibonacci()
{
	
}

int Fibonacci::calculate(int n)
{
	if(n < 0)
	{
		cout << "ERROR ";
		break;
	}
	if(n == 0 || n == 1)
	{
		return n;
	}
	return (*this)(n-1) + (*this)(n-2);
}

Fibonacci::~Fibonacci()
{
	
}