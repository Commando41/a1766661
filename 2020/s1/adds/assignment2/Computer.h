#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
	public:
	Computer();
	void makeDecision();
	char chosed();
	char decided;
	~Computer();	
};
#endif