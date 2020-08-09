#include <iostream>
#include "Inchworm.hpp"
#include <string>
#include "StreetParking.hpp"
#include "ThrowTheBall.hpp"
using namespace std;

int main(){

	ThrowTheBall css;
	int N, M, L;
	cout << "Enter amount of players: ";
	cin >> N;
	cout << "\nEnter the target: ";
	cin >> M;
	cout << "\nEnter the length of pass: ";
	cin >> L;
	cout << "The number of passes is: " << css.timesThrown(N,M,L) << endl;


/*	StreetParking css;
	string street;
	cout << "Enter road: ";
	cin >> street;
	cout << endl;
	cout << "Number of available spots is: " << css.freeParks(street) << endl;  
*/
/*	Inchworm css;
	int branch, rest, leaf;
	cout << "Enter value for branch" << endl;
	cin >> branch;
	cout << "Enter value for rest" << endl;
	cin >> rest;
	cout << "Enter value for leaf" << endl;
	cin >> leaf;
	cout << "Amount of leaves eaten is: " << css.lunchtime(branch, rest, leaf) << endl;*/
    return 0;
}