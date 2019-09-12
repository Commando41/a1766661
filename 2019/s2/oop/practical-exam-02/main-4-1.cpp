#include <iostream>
#include <stdlib.h>

extern int *readNumbers(int n);

extern void printNumbers(int *numbers, int length);

extern void printSubArrays(int *numbers, int length);

int main(){

	int *setA = readNumbers(1);
	
	//printNumbers(setA, 4);
	
	printSubArrays(setA, 1);
	
return 0;
}
