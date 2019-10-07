#include <iostream>
#include "Animal.h"
#include "Vegie.h"
#include <string>
#include "Hunter.h"

using namespace std;

int main(){

	
	Vegie Animal1("Goats");

	Animal1.set_favourite_food("Grass");

	Animal1.set_favourite_food("Hats");

	cout<< "The animal: " << Animal1.get_name() << " favourite food is " << Animal1.getFavouriteFood() << endl;

	return 0;
}