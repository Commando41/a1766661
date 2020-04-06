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
	if (n % 2)
	{
		return (*this)(n/2) + (*this)(n-2) + (*this)(n-3);
	}else{
		return (*this)((n-1)/2) + (*this)(n-4) + (*this)(n-3);
	}
}

int myF::solve_mem(int n)
{
	if(n % 2)
	{
		return solve(n/2) + solve(n-2) + solve(n-3);
	}
	else
	{
		return solve((n-1)/2) + solve(n-4) + solve(n-3);
	}

	if(n % 2)
	{
		return (*this)(n/2) + (*this)(n-2) + (*this)(n-3);
	}
	else
	{
		return (*this)((n-1)/2) + (*this)(n-4) + (*this)(n-3);
	}
}

myF::~myF()
{

}