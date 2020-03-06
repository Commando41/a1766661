#include <iostream>
using namespace std;
#include <string>
#include "Palindrome.h"
int main()
{
	string input;
	//cin >> input;
	getline(cin,input);
	cout << input << endl;
	Palindrome *word = new Palindrome(input);
	word->change();
	word->remove();
	if(word->IsPalindrome() != 0)
	{
		cout << "It is a Palindrome" << endl;
	}else{
		cout << "It is not a Palindrome" << endl;	
	}	


	return 0;
}
