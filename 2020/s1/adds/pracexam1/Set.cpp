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
//	for(int i = 0; i < SetLength; i++)
//	{	if(TheSet[i] == n)
//		{
//			return;
//		}
//	}
	TheSet.push_back(n);
	SetLength++;
}

void Set::removeElement(int n)
{
	for(int i = 0; i < SetLength; i++)
	{
		if(TheSet[i] == n)
		{
			TheSet.erase(TheSet.begin()+i);
			SetLength--;
			return;
		}
	}

}

double Set::returnAverage()
{
	FMax = 0;
	SetLength = TheSet.size();
	for(int j = 1; j <= 2; j++)
	{
		for(int i = 0; i < SetLength; i++)
		{
			if(TheSet[i]>FMax && j == 1)
			{
				FMax = TheSet[i];
			}
			if(TheSet[i] != FMax && j == 2)
			{
				ThePropSet.push_back(TheSet[i]);
			}
		}
	}
	if(ThePropSet.empty() == 0)
	{
		average = 0;
		PropSetLength = ThePropSet.size();
		for(int i = 0; i < PropSetLength; i++)
		{
			average += ThePropSet[i];
		}
		return average/PropSetLength;
	}else{
		return -1;
	}		
}

int Set::returnMaximum()
{
	if(ThePropSet.empty() == 0)
	{
		SMax = 0;
		for(int i = 1; i < PropSetLength; i++)
		{
			if(ThePropSet[i]>SMax)
			{
				SMax = ThePropSet[i];
			}
		}
		return SMax;
	}else{
	return -1;
	}
}

int Set::returnMinimum()
{
	if(ThePropSet.empty() == 0)
	{
		Min = ThePropSet[0];
		for(int i = 1; i < PropSetLength; i++)
		{
			if(ThePropSet[i]<Min)
			{
				Min = ThePropSet[i];
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