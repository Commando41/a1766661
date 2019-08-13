#include <iostream>

int main(){

int a = 5;
int *ptr = &a;

std::cout << *ptr << " " << ptr << std::endl;

return 0;
}
