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
Set aSet;
stringstream str_strm;
str_strm << input;
string temp_str;
int temp_int, max, len = 0;
vector<int> record;

while(!str_strm.eof()) {
str_strm >> temp_str;
if(stringstream(temp_str) >> temp_int) {
aSet.addElement(temp_int);
record.push_back(temp_int);
len+=1;
}
}
max = record[0];
for(int i = 1; i < len; i++)
{
	if(record[i] > max)
	{
		max = record[i];
	}
}
aSet.removeElement(max);
cout << aSet.returnAverage() << " ";
cout << aSet.returnMaximum() << " ";
cout << aSet.returnMinimum() << endl;


return 0;
}
