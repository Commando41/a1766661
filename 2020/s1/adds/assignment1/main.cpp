#include <iostream>
using namespace std;
#include <string>
#include "Palindrome.h"
int main()
{
	cout << "Please enter a word" << endl;
	string input;
	//cin >> input;
	getline(cin,input);
	cout << input << endl;
	Palindrome *word = new Palindrome(input);
	word->change();
	word->remove();
	if(word->IsPalindrome() != 0)
	{
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;	
	}	
	delete word;

	return 0;
}
