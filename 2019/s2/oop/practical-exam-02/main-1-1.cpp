#include <iostream>
#include <stdlib.h>

extern int *readNumbers(int n);

extern void printNumbers(int *numbers, int length);

int main(){

	int *setA = readNumbers();

	printNumbers(setA, 10);

return 0;
}
