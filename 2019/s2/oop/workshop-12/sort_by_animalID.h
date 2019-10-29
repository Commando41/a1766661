#ifndef SORT_BY_ANIMALID_H
#define SORT_BY_ANIMALID_H

#include <string>
#include "animal.h"

class sort_by_animal_ID : public animal
{
public:
	static void sort(animal **animals, int n);
	int index;
	animal **orderedAnimals;
	int ordered
};

#endif