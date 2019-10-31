#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "sort_by_animalID.h"
#include "zoo.h"
using namespace std;

int main()
{

	//hunter* hunter1 = new hunter("Larry", 50);

	//hunter1->set_kills(50);

	//cout << "Hunter: " << hunter1->get_animalID() << " " << hunter1->get_name() << " has killed " << hunter1->get_kills() << " other animals." << endl;
	zoo* z = new zoo("adelaide" , 2 , 3);

	animal** a = z -> get_animals();

	int n = z -> get_number_of_animals();

	sort_by_animalID::sort(a , n);

	for (int i = 0 ; i < n ; i++) {

		cout << a[i] -> get_animalID() << endl;

	}

	return 0;
}