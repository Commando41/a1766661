#include <iostream>
#include <stdlib.h>

extern int maximum_sum(int *nums, int length);

int main(){

int* setA = new int[5] {1,2,3,4,5};
std::cout << maximum_sum(setA, 5) << std::endl;

delete[] setA;

return 0;
}
