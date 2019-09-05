#include <iostream>
#include "meerkat.h"
#include "cart.h"

using namespace std;

int main(){

	meerkat *meerkat1, *meerkat2, *meerkat3, *meerkat4, *meerkat5;
	meerkat1 = new meerkat();
	cout << meerkat1->name << " " << meerkat1->age << endl;
	meerkat1 -> setName("Alex");
	meerkat1 -> setAge(6);
	cout << meerkat1->name << " " << meerkat1->age << endl;
	meerkat2 = new meerkat();
	cout << meerkat2->name << " " << meerkat2->age << endl;
	meerkat2 -> setName("Gary");
	meerkat2 -> setAge(7); 
	cout << meerkat2->name << " " << meerkat2->age << endl;
	meerkat3 = new meerkat();
	cout << meerkat3->name << " " << meerkat3->age << endl;
	meerkat3 -> setName("Dani");
	meerkat3 -> setAge(6); 
	cout << meerkat3->name << " " << meerkat3->age << endl;
	meerkat4 = new meerkat();
	cout << meerkat4->name << " " << meerkat4->age << endl;
	meerkat4 -> setName("Lang");
	meerkat4 -> setAge(8); 
	cout << meerkat4->name << " " << meerkat4->age << endl;
	meerkat5 = new meerkat();
	
	cart *cart1;
	cart1 = new cart();
	cart1->addMeerkat(*meerkat1);
	cart1->addMeerkat(*meerkat2);
	cart1->addMeerkat(*meerkat3);
	cart1->addMeerkat(*meerkat4);
	cart1->addMeerkat(*meerkat5);
	cart1->addMeerkat(*meerkat1);
	cart1->emptyCart();
	cart1->printMeerkats();

return 0;
}
