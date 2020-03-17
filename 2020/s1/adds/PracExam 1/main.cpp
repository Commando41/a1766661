#include <iostream>
#include "Set.h"
#include <string>
using namespace std;

int main()
{
	
	string inputs;

	cin >> inputs;
	Set *aSet = new Set();
	for(int i = 0; i < inputs.length(); i++)
	{
		if(inputs[i] ~= " ")
		{
		aSet->addElement(inputs[i]-48);		
		}
	}
	cout << aSet->returnAverage() << " " << aSet->returnMaximum() << " " << aSet->returnMinimum() << endl;
	
	delete aSet;
	return 0;
}