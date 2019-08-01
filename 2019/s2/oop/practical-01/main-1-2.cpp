#include <iostream>
#include <stdlib.h>

extern double average(int array[], int n);

int main(){

int setA[5] = {2,3,4,5,7};
std::cout << "The average is: " << average(setA, 5) << std::endl; 

return 0;
}
