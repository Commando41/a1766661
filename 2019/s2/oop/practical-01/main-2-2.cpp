#include <iostream>
#include <stdlib.h>

extern int maximum(int array[], int n);

int main(){

int setA[6] = {2,3,4,5,6,7};

std::cout << "The maximum number is " << maximum(setA, 6) << std::endl;

return 0;
} 
