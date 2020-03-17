#include <iostream>
#include "Set.h"
#include <string>
#include <string.h>
#include <cstring>
#include <sstream>
using namespace std;

int main() {

	//Code here is burrowed from the assignment page
	std::string input;
	getline(cin, input);
	Set aSet;
	stringstream str_strm;
	str_strm << input;
	string temp_str;
	//Created another integer variable called max storing the highest value added
	int temp_int, max = 0;

	while(!str_strm.eof()) 
	{
		str_strm >> temp_str;
		if(stringstream(temp_str) >> temp_int) 
		{
			//Adds the value in the element
			aSet.addElement(temp_int);
			//Checks if the added value is greater than the max
			if(temp_int > max)
			{
				max = temp_int;
			}
		}
	}

	//Removes the maximum value in the array.
	aSet.removeElement(max);
	//Displays the average, max and min of the modified array
	//Placed in a new line in the code to avoid seeing a long output code.
	cout << aSet.returnAverage() << " ";
	cout << aSet.returnMaximum() << " ";
	cout << aSet.returnMinimum() << endl;

return 0;
}
