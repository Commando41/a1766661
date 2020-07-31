#include <iostream>
#include "Inchworm.hpp"
using namespace std;

int main(){

	Inchworm css;
	int branch, rest, leaf;
	cout << "Enter value for branch" << endl;
	cin >> branch;
	cout << "Enter value for rest" << endl;
	cin >> rest;
	cout << "Enter value for leaf" << endl;
	cin >> leaf;
	cout << "Amount of leaves eaten is: " << css.lunchtime(branch, rest, leaf) << endl;
    return 0;
}