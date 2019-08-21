#include <iostream>
#include <stdlib.h>

extern void cpyda(double *old_array, double *new_array, int length);

int main(){

double *setA = new double[5] {1.1,2.2,3.3,4.4,5.5};
double *setB = new double[5];

cpyda(setA, setB, 5);

delete[] setA;
delete[] setB;

return 0;
}
