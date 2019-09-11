#include <iostream>
#include "Animal.h"
#include "Hunter.h"
#include <string>
#include <vector>

using namespace std;

int main(){

	Hunter Hunter("Cheetah");
	Hunter.set_name("Gary");

	Animal Animal1("Mouse");
	Animal Animal2("Gazelle");
	Animal Animal3("Hyena");
	Animal Animal4("Rabbit");

	Hunter.record_kill("Mouse");
	Hunter.record_kill("Gazelle");
	Hunter.record_kill("Hyena");
	Hunter.record_kill("Rabbit");

	cout << "Number of kills: " << Hunter.numberOfKills() << endl;
	for(int i = 0; i < Hunter.numberOfKills(); i++){
		cout << "Victims: " << Hunter.get_kills()[i] << endl;
	}

	return 0;
}