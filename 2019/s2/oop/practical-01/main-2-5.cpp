#include <iostream>
#include <stdlib.h>

extern bool descending(int array[], int n);

int main(){

int setA[5] = {6,5,4,3,2};

std::cout << "The descending order is " << descending(setA, 5) << std::endl;

return 0;
}
