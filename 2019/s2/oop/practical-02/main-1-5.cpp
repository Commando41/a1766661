#include <iostream>
#include <stdlib.h>

void print_summed_matrices(int array1[3][3],int array2[3][3]);

int main(){

int setA[3][3] = {{0,1,2} , {3,4,5} , {6,7,8}};
int setB[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

print_summed_matrices(setA, setB);

return 0;
}
