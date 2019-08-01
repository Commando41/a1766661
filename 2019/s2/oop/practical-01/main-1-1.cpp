#include <iostream>
#include <stdlib.h>

extern int sum_array(int[], int);

int main(){

int setA[5] = {2,3,4,5,6};
std::cout << "The sum is: " << sum_array(setA, 5) << std::endl;

return 0;
}
