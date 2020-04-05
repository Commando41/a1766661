#ifndef REVERSE_H
#define REVERSE_H
#include <string>
using namespace std;

class Reverse
{
	public:
		Reverse();
		~Reverse();
		int reverseDigit(int value);
		string reverseString(string letters);
	protected:
		int reversedInt;
		string reversedIntS;
		string reversedS;
		int r;
		int len;
		char tempChar;
		static rN;
};
#endif