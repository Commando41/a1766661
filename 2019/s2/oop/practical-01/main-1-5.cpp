#include <iostream>
#include <stdlib.h>

extern int count_even(int number);

int main(){

int value;
std::cout << "Please enter a number" << std::endl;
std::cin >> value;
std::cout << "The number of even numbers is " << count_even(value) << std::endl;

return 0;
}
