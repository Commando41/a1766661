#include <iostream>
#include "myF.h"
using namespace std;

myF::myF()
{

}

int myF::solve(int n)
{
	if(n >= 0 && n <= 10)
	{
		return 1;
	}
	if ((n % 2) == 0)
	{
		return (solve(n/2) + solve(n-2) + solve(n-3));
	}
	else
	{
		return (solve((n-1)/2) + solve(n-4) + solve(n-3));
	}
}

int myF::solve_mem(int n)
{
	if(n >= 0 && n <= 10)
	{
		return 1;
	}
	int record[n+1];


	if ((n % 2) == 0)
	{
		record[n] = (solve_mem(n/2) + solve_mem(n-2) + solve_mem(n-3));
	}
	else
	{
		record[n] = (solve_mem((n-1)/2) + solve_mem(n-4) + solve_mem(n-3));
	}
	return record[n];
}

myF::~myF()
{

}