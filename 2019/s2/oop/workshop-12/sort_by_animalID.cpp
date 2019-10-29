#include <iostream>
#include "sort_by_animalID.h"
#include "animal.h"
//#include "hunter.h"
//#include "vegie.h"
void sort_by_animalID::sort(animal **animals, int n)
{
	animal *temp;
	bool ascending = false;
	while(ascending = false)
	{
		for(int i = 0; i < n; i++)
		{
			ascending = true;
			if(animals[i]->get_id() > animals[i+1]->get_id())
			{
				temp = animals[i]; 
				animals[i] = animals[i+1];
				animals[i+1] = temp;
				ascending = false;
			}
		}
	}
}