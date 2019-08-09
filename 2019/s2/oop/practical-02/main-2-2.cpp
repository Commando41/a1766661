#include <iostream>
#include <math.h>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){

int setA[7] = {1,0,0,1,0,0,1};

std::cout << binary_to_number(setA, 7) << std::endl;

return 0;
}
