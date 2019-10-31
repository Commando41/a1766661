#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"

using namespace std;

int main()
{

	hunter* hunter1 = new hunter("Larry", 50);

	hunter1->set_kills(50);

	cout << "Hunter: " << hunter1->get_animalID() << " " << hunter1->get_name() << " has killed " << hunter1->get_kills() << " other animals." << endl;

	return 0;
}