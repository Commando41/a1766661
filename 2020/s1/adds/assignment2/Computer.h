#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
	public:
	Computer();
	void makeDecision();
	int chosed();
	int decided;
	~Computer();	
};
#endif