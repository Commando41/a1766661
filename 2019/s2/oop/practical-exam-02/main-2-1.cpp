#include <iostream>
#include <stdlib.h>

extern int *readNumbers(int n);
extern void grades(int *gradepoints, int length);

int main(){

	int *setA = readNumbers(5);
	grades(setA, 5);
	

return 0;
}
