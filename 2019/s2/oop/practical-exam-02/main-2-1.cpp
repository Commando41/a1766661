#include <iostream>
#include <stdlib.h>

extern int *readNumbers(int n);
extern void grades(int *gradepoints, int length);

int main(){

	int *setA = readNumbers(4);
	grades(setA, 4);
	

return 0;
}
