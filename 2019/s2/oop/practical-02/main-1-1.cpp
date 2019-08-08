#include <iostream>
#include <stdlib.h>

extern int diagonal(int array[4][4]);

int main(){

int setA[4][4] = {{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};

std::cout << "The sum of the elements along the main diagonal is " << diagonal(setA) << std::endl;

return 0;
}
