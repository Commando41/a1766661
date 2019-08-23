#include <iostream>
#include <stdlib.h>
#include <cmath>
extern void print_sevens(int *nums, int length);

int main(){

int setB[5] = {7,14,23,42,56};

int *setA = new int[5];

setA = setB;

print_sevens(setA, 5);

return 0;
}
