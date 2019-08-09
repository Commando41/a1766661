#include <iostream>
#include <stdlib.h>

extern int sum_min_and_max(int integers[], int length);

int main(){

int integers[5] = {1,2,3,4,5};

std::cout << sum_min_and_max(integers, 5) << std::endl;

return 0;
}
