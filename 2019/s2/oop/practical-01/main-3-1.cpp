#include <iostream>
#include <stdlib.h>
#include <cmath>

bool fanarray(int array[], int n);

int main(){

int setA[5] = {1,2,3,2,1};

std::cout << "The array is a fan array and a palindrome is " << fanarray(setA, 5) << std::endl;

return 0;
}
