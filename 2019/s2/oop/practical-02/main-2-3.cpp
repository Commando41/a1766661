#include <iostream>
#include <stdlib.h>
#include <math.h>
extern int sum_if_a_palindrome(int integers[], int length);

int main(){

int integers[4] = {1,2,2,1};

std::cout << sum_if_a_palinedrome(integers, 4) << std::endl;

return 0;
}
