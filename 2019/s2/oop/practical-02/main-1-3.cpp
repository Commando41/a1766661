#include <iostream>
#include <stdlib.h>

void count_numbers(int array[4][4]);

int main(){

int setA[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,0,1,2}, {3,4,5,6}};

count_numbers(setA);

return 0;
}
