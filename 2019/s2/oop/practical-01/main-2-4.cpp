#include <iostream>
#include <stdlib.h>

extern bool ascending(int array[], int n);

int main(){

int setA[5] = {2,3,4,5,1};

std::cout << "The ascending order is " << ascending(setA, 5) << std::endl;

return 0;
}
