#include <iostream>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main(){

        int* setA = readNumbers();

	printNumbers(setA, 10);

	return 0;
}
