#include <iostream>
#include "Set.h"
#include <string>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
	
	string inputs;

	cin >> inputs;
	Set *aSet = new Set();
	for(int i = 0; i < inputs.size(); i++)
	{
		if(inputs[i] != 32)
		{
		aSet->addElement(inputs[i]-48);		
		}
	}
	cout << aSet->returnAverage() << " " << aSet->returnMaximum() << " " << aSet->returnMinimum() << endl;
	
	delete aSet;
	return 0;
}
