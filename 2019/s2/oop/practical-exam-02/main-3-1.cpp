#include <iostream>
#include <stdlib.h>

extern int *readNumbers(int n);
extern bool equalsArray(int *A, int *B, int length);
extern void printNumbers(int *numbers, int length);

int main(){

	int *setA = readNumbers(4);
	int *setB = readNumbers(4);
	bool equals;
	equals = equalsArray(setA, setB, 4);
	//printNumbers(setA, 4);
	std::cout << equals << std::endl;

delete[] setA;
delete[] setB;
return 0;
}


