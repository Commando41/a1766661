#include <iostream>
#include <cmath.h>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){

int setA[12] = {1,1,0,1,0,0,0,1,1,0,0,1};

std::cout << binary_to_number(setA, 12) << std::endl;

return 0;
}
