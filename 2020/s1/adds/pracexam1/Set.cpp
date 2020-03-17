#include <iostream>
#include "Set.h"
#include <vector>
using namespace std;

Set::Set()
{
	SetLength = 0;
}

void Set::addElement(int n)
{

bool isin = 0;

	for(int i = 0; i < SetLength; i++)
	{	if(TheSet[i] == n)
		{
			isin = 1;
		}
	}

	if (isin == 0){
		TheSet.push_back(n);
		SetLength+=1;
	}
}

void Set::removeElement(int n)
{
	for(int i = 0; i < SetLength; i++)
	{
		if(TheSet[i] == n)
		{
			TheSet.erase(TheSet.begin()+i);
			SetLength-=1;
			return;
		}
	}

}

double Set::returnAverage()
{
	if(TheSet.empty() == 0)
	{
		average = 0;
		for(int i = 0; i < SetLength; i++)
		{
			average += TheSet[i];
		}
		return average/SetLength;
	}else{
		return -1;
	}		
}

int Set::returnMaximum()
{
	if(TheSet.empty() == 0)
	{
		Max = 0;
		for(int i = 1; i < SetLength; i++)
		{
			if(TheSet[i]>Max)
			{
				Max = TheSet[i];
			}
		}
		return Max;
	}else{
	return -1;
	}
}

int Set::returnMinimum()
{
	if(TheSet.empty() == 0)
	{
		Min = TheSet[0];
		for(int i = 1; i < SetLength; i++)
		{
			if(TheSet[i]<Min)
			{
				Min = TheSet[i];
			}
		}
		return Min;
	}else{
		return -1;
	}
}

Set::~Set()
{
	
}
