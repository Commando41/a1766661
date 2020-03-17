#include <iostream>
#include "Set.h"
#include <string>
#include <string.h>
#include <cstring>
#include <sstream>
using namespace std;

int main() {
	std::string input;
	getline(cin, input);
	Set aSet;
	stringstream str_strm;
	str_strm << input;
	string temp_str;
	int temp_int, max = 0;

	while(!str_strm.eof()) 
	{
		str_strm >> temp_str;
		if(stringstream(temp_str) >> temp_int) 
		{
			aSet.addElement(temp_int);
			if(temp_int > max)
			{
				max = temp_int;
			}
		}
	}

	aSet.removeElement(max);
	cout << aSet.returnAverage() << " ";
	cout << aSet.returnMaximum() << " ";
	cout << aSet.returnMinimum() << endl;

return 0;
}
