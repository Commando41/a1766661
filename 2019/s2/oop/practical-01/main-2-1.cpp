#include <iostream>
#include <stdlib.h>

extern int minimum(int array[], int n);

int main(){

int setA[6] = {2,3,4,5,6,7};

std::cout << "The smallest number is " << minimum(setA, 6) << std::endl;

return 0;
}
