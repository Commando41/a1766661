#include <iostream>
#include "Set.h"
#include <vector>
using namespace std;

Set::Set()
{
	//Initialises the length
	SetLength = 0;
}

void Set::addElement(int n)
{
//A boolean is used to check if the value of the input is already in the vector
bool isin = 0;

	//Checks for all elements in the vector
	for(int i = 0; i < SetLength; i++)
	{	
		if(TheSet[i] == n)
		{
			isin = 1;
		}
	}

	//If the input value is not in the vector, then it is added
	if (isin == 0){
		TheSet.push_back(n);
		//Keep track of the length
		SetLength+=1;
	}
}

void Set::removeElement(int n)
{
	//Searches the position of the value
	for(int i = 0; i < SetLength; i++)
	{
		//Once we found the position we remove the value from the vector
		if(TheSet[i] == n)
		{
			TheSet.erase(TheSet.begin()+i);
			//Keep track of the length
			SetLength-=1;
			//Stop this function immedietly once the value is removed
			return;
		}
	}

}

double Set::returnAverage()
{
	//Checks if the set is empty
	if(TheSet.empty() == 0)
	{
		//If not then acquire and return the average
		average = 0;
		for(int i = 0; i < SetLength; i++)
		{
			average += TheSet[i];
		}
		return average/SetLength;
	}else{
		//If so the  return -1
		return -1;
	}		
}

int Set::returnMaximum()
{
	//Checks if the set is empty
	if(TheSet.empty() == 0)
	{
		//If not then acquire the max and return it
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
	//If so the  return -1
	return -1;
	}
}

int Set::returnMinimum()
{
	//Checks if the set is empty
	if(TheSet.empty() == 0)
	{
		//If not then find the minimum
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
		//If so the  return -1
		return -1;
	}
}

Set::~Set()
{
	
}
