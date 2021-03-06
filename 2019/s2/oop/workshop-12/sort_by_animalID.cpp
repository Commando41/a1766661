#include <iostream>
#include "sort_by_animalID.h"
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
void sort_by_animalID::sort(animal **animals, int n)
{
	animal *temp;
	bool ascending = false;
	bool swapped = false;

	while(ascending == false)
	{

		swapped = false;

		for(int i = 0; i < n-1; i++)
		{
			ascending = true;

			if (swapped == false) {
				if(animals[i]->get_animalID() > animals[i+1]->get_animalID())
				{
					temp = animals[i]; 
					animals[i] = animals[i+1];
					animals[i+1] = temp;
					ascending = false;
					swapped = true;
				}
			}
		}	
	}
}