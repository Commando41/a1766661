#include <iostream>
#include <sstream>
#include "myF.h"
using namespace std;

int main(int argc, char** args) 
{
	std::string input;
	getline(cin, input);
	stringstream str_strm;
	str_strm << input;
	string temp_str;
	int temp_int;
	myF trying;
	while(!str_strm.eof())
	{
		str_strm >> temp_str;
		if(stringstream(temp_str) >> temp_int)
		{
			if(temp_int < 40)
			{
				cout << trying.solve(temp_int) << " ";
			}
			else
			{
				cout << trying.solve_mem(temp_int) << " ";
			}
		}
	temp_str = "";
	}
	cout << endl;
}