#include <iostream>
#include <stdlib.h>

extern int *readNumbers(int n);

extern void printNumbers(int *numbers, int length);

int main(){

	int setA = readNumbers(4);

	printNumbers(setA, 4);

return 0;
}
