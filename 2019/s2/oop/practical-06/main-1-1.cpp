#include <iostream>
#include "meerkat.h"

using namespace std;

int main(){

	meerkat *meerkat1, *meerkat2, *meerkat3, *meerkat4;
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
return 0;
}
