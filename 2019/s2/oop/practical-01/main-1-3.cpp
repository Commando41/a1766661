#include <iostream>
#include <stdlib.h>

extern int count(int array[], int n, int number);

int main(){

int array[5] = {2,3,4,5,6};
int value;

std::cout << "Enter a number " << std::endl;
std::cin >> value;
std::cout << "There are " << count(array, 5, value) << " values matching your number" << std::endl; 

return 0;
}
