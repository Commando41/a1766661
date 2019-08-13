#include <iostream>

int main(){

int b = 2;
int* ptr = &b;
int* ptr2 = ptr2;

*ptr = *ptr - 2;
std::cout << *ptr << *ptr2 << std::endl;

return 0;
}
