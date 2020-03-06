#include <iostream>
#include "Palindrome.h"
#include <string>
using namespace std;

Palindrome::Palindrome(string Pphrase)
{
	phrase = Pphrase;
	phraseRM = Pphrase;
	length = Pphrase.size();
}

void Palindrome::remove()
{
	index = 0;
	for(int i = 0; i < length; i++)
	{
		if(phrase[i] >96 && phrase[i] < 123)
		{
			phraseRM[index] = phrase[i];
			index++;
		}
	}
	//cout << phraseRM << endl;
}

void Palindrome::change()
{
	for(int i = 0; i < length; i++)
	{
		if(phrase[i] > 64 && phrase[i] < 91)
		{
			phrase[i] += 32;
		}
	}
}

bool Palindrome::IsPalindrome()
{
	for(int i = 0; i < index; i++)
	{
		if(phraseRM[i] != phraseRM[index-1-i])
		{
			return false;
		}
	}
	return true;
}

Palindrome::~Palindrome()
{}