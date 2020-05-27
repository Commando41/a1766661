#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer
{
	public:
		Computer();
		virtual void makeDecision() = 0;
		char chosed();
		~Computer();	
	protected:
		char decided;
};
#endif