#ifndef PALINDROME_H
#define PALINDROME_H
using namespace std;
#include <string>

class Palindrome
{
	public:
	string phrase;
	string phraseRM;
	Palindrome(string Pphrase);
	~Palindrome();
	void remove();
	bool IsPalindrome();
	void change();
	int length;
	int index;
};
#endif