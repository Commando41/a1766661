#include <iostream>
#include <string>
#include "sort_by_animalID.h"
#include "animal.h"

using namespace std;

void sort_by_animalID::sort(animal **animals, int n)
{
	ordered = 0;
	orderedAnimal = new animal*[n];
	while(ordered < n)
	{
	for(int i = 0; i < n; i++)
	{
		if(animal[i].ID == ordered)
		{
			orderedAnimal[ordered] = animal[i];
			ordered++
		}
	}
	}
}