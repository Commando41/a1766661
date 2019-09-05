#include <iostream>
#include "person.h"

using namespace std;

int main(){

	person *person1, *person2, *person3, *person4;
	person1 = new person("Larry", 20);
	cout << person1->name << " " << person1->salary << endl;
	person1->setName("Hary");
	person1->setSalary(10);
	cout << person1->name << " " << person1->salary << endl;
	person2 = new person("Larry", 20);
	cout << person2->name << " " << person2->salary << endl;
	person2->setName("nary");
	person2->setSalary(40);
	cout << person2->name << " " << person2->salary << endl;
	person3 = new person("Larry", 20);
	cout << person3->name << " " << person3->salary << endl;
	person3->setName("Kary");
	person3->setSalary(45);
	cout << person3->name << " " << person3->salary << endl;
	person4 = new person("Larry", 20);
	cout << person4->name << " " << person4->salary << endl;
	person4->setName("jary");
	person4->setSalary(30);
	cout << person4->name << " " << person4->salary << endl;

return 0;
}
