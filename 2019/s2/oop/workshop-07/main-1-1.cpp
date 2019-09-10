#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

int main(){

	Animal Animal1("Elephant");
 	Animal Animal2("Cheetah");
	
	Animal1.set_name("koleh");
	Animal2.set_name("sendit");

	cout << "Name: " << Animal1.get_name() << " is a animal of species " << Animal1.get_species() << endl;  

	cout << "Name: " << Animal2.get_name() << " is a animal of species " << Animal2.get_species() << endl;  


return 0;
}
