#include <iostream>
#include <string>
#include "sort_by_animalID.h"
#include "animal.h"

using namespace std;

void sort_by_animalID::sort(animal **animals, int n)
{
	animal *temp;
	for(int i = 0; i < n; i++)
	{
		if(animals[i]->get_id() > animals[i+1]->get_id())
		{
			temp = animals[i]; 
			animals[i] = animals[i+1];
			animals[i+1] = temp;
		}
	}
}