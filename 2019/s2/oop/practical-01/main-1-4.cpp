#include <iostream>
#include <stdlib.h>

extern int sumtwo(int array[], int secondaryarray[], int n);

int main(){

int setA[5] = {2,3,4,5,6};
int setB[5] = {1,3,5,7,9};

std::cout << "The total sum is " << sumtwo(setA, setB,5) << std::endl; 

return 0;
}
