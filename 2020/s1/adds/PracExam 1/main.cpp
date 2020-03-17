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
while(!str_strm.eof()) {
str_strm >> temp_str;
if(stringstream(temp_str) >> temp_int) {
aSet->addElement(temp_int);
}
temp_str = "";
}
cout << aSet->returnAverage() << " " << aSet->returnMaximum() << " " << aSet->returnMinimum() << endl;
return 0;
}
