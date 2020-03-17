#include <iostream>
#include "Set.h"
#include <string>
#include <string.h>
#include <cstring>
#include <sstream>
using namespace std;

int main(int argc, char** args) {
std::string input;
getline(cin, input);
Set *aSet = new Set();
stringstream str_strm;
str_strm << input;
string temp_str;
int temp_int;
vector<int> record;
while(!str_strm.eof()) {
str_strm >> temp_str;
if(stringstream(temp_str) >> temp_int) {
aSet->addElement(temp_int);
record.push_back(temp_str);
for(int m = 0; m < (record.size()-1); m++)
{
	if(record[m] == temp_int)
	{
		aSet->removeElement(temp_int);
		record.pop_back();
	}
}
}
temp_str = "";
}
cout << aSet->returnAverage() << " " << aSet->returnMaximum() << " " << aSet->returnMinimum() << endl;
return 0;
}